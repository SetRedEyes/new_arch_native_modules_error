package brain.test;

import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.google.gson.Gson;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.modules.core.DeviceEventManagerModule;

import java.io.ByteArrayInputStream;
import java.io.ObjectInputStream;
import java.util.Arrays;


class CachedPacket {
    public Long machineTime;
    public ReadableArray rowsArrays;

    public CachedPacket(Long machineTime, ReadableArray rowsArrays) {
        this.machineTime = machineTime;
        this.rowsArrays = rowsArrays;
    }
}

public class
CppNativeModule extends ReactContextBaseJavaModule {
    private ReactApplicationContext appContext;

    private Handler handler = new Handler(Looper.getMainLooper());

    private DatabaseHelper dbHelper;

    private static final int COHERENCE_FROM = 296;
    private static final int COHERENCE_TO = 307;

    private static final int FREQUENCY_SPECTRUM_FROM = 40;
    private static final int FREQUENCY_SPECTRUM_TO = 296;

    // src\shared\constants\database\brain-data-column.constant.ts
    private static final int BRAIN_FROM = 28;
    private static final int BRAIN_TO = 36;

    private static final Gson gson = new Gson();


    CppNativeModule(ReactApplicationContext context) {
        super(context);
        appContext = context;
        dbHelper = new DatabaseHelper(context);
    }

    @ReactMethod
    public void emitEvent(String eventName, String eventData) {
        getReactApplicationContext()
                .getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)
                .emit(eventName, eventData);
    }

    @Override
    public String getName() {
        return "CppNativeModule";
    }

    @ReactMethod
    public void processRawData(
        int scanningId,
        ReadableArray inputRawArray1,
        ReadableArray inputRawArray2,
        ReadableArray inputRawArray3,
        ReadableArray inputRawArray4,
        String machineTimeStr
    ) {
        dbHelper.db.beginTransaction();
        long machineTime = Long.parseLong(machineTimeStr);

        try {
            processRow(scanningId, inputRawArray1, machineTime * 10 - 3);
            processRow(scanningId, inputRawArray2, machineTime * 10 - 2);
            processRow(scanningId, inputRawArray3, machineTime * 10 - 1);
            processRow(scanningId, inputRawArray4, machineTime * 10);

            // dbHelper.insertGeneralScanningData(scanningId, generalScanningData);
            // dbHelper.insertGeneralScanningData(scanningId, generalScanningData);
            // dbHelper.insertGeneralScanningData(scanningId, generalScanningData);
            // dbHelper.insertGeneralScanningData(scanningId, generalScanningData);

            dbHelper.db.setTransactionSuccessful();
        } finally {
            dbHelper.db.endTransaction();
        }
    }

    @ReactMethod
    public void processRawDataBatch(
        int scanningId,
        ReadableArray readablePackets
    ) {
        int length = readablePackets.size();
        CachedPacket[] packets = new CachedPacket[length];

        for (int i = 0; i <= length - 1; i++) {
            ReadableMap packet = readablePackets.getMap(i);
            packets[i] = new CachedPacket((long)packet.getDouble("machineTime"), packet.getArray("rowsArrays"));
        }

        dbHelper.db.beginTransaction();
        try {
            for (CachedPacket packet : packets) {
                Long machineTime = packet.machineTime;
                processRow(scanningId, packet.rowsArrays.getArray(0), machineTime * 10 - 3);
                processRow(scanningId, packet.rowsArrays.getArray(1), machineTime * 10 - 2);
                processRow(scanningId, packet.rowsArrays.getArray(2), machineTime * 10 - 1);
                processRow(scanningId, packet.rowsArrays.getArray(3), machineTime * 10);

            }
            dbHelper.db.setTransactionSuccessful();
        } finally {
            dbHelper.db.endTransaction();
        }
    }

    private void processRow(int scanningId, ReadableArray inputRawArray, Long machineTime) {
        int length = inputRawArray.size();
        double[] inputArray = new double[length];
        for (int i = 0; i <= length - 1; i++) {
            inputArray[i] = inputRawArray.getDouble(i);
        }
//        logArray(inputArray);

        try {
            double[] result = processDataFromJNI(inputArray);
            double[] generalScanningData = new double[]{
                    result[0],
                    result[38],
                    result[3],
                    result[4],
                    result[5],
                    machineTime,
            };
            double[] brainData = Arrays.copyOfRange(result, BRAIN_FROM, BRAIN_TO);
            double[] frequencySpectrumData = Arrays.copyOfRange(result, FREQUENCY_SPECTRUM_FROM, FREQUENCY_SPECTRUM_TO);
            double[] coherenceData = Arrays.copyOfRange(result, COHERENCE_FROM, COHERENCE_TO);

            dbHelper.insertGeneralScanningData(scanningId, generalScanningData);
            dbHelper.insertCoherenceData(scanningId, coherenceData);
            dbHelper.insertBrainData(scanningId, brainData);
            dbHelper.insertFrequencySpectrumData(scanningId, frequencySpectrumData);

            // logArray(generalScanningData);
            // logArray(brainData);
            // logArray(frequencySpectrumData);
            // logArray(coherenceData);
        } catch (Exception err) {
            log("ERROR!!!" + err.getMessage());
        }
    }

    @ReactMethod
    public void initAlg() {
        try {
            initAlgorithm();
            dbHelper.Open();
        } catch (Exception err) {
            log("ERROR!!!" + err.getMessage());
        }
    }

    @ReactMethod
    public void terminateAlg() {
        try {
            terminateAlgorithm();
            dbHelper.close();
        } catch (Exception err) {
            log("ERROR!!!" + err.getMessage());
        }
    }

    private void log(String message) {
        Log.d("CppNativeModule", "\uD83D\uDCAC " + message);
    }

    private void logArray(double[] array) {
        String json = gson.toJson(array);
        log(json);
    }

    private native double[] processDataFromJNI(double[] input);
    private native void initAlgorithm();
    private native void terminateAlgorithm();
}
