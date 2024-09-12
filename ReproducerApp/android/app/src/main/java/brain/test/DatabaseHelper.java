package brain.test;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

public class DatabaseHelper extends SQLiteOpenHelper {

    private static final String DATABASE_NAME = "/data/data/brain.test/files/SQLite/CortexLocalDB";
    private static final String GENERAL_SCANNING_DATA_TABLE = "general_scanning_data";
    private static final String PATIENT_SCANNING_DATA_TABLE = "patient_scanning_data";
    private static final String FREQUENCY_SPECTRUM_DATA_TABLE = "frequency_spectrum_data";
    private static final String COHERENCE_DATA_TABLE = "coherence_data";
    private static final String BRAIN_DATA_TABLE = "brain_data";
    private static final String RAW_DATA_TABLE = "raw_data";

    private static final int DATABASE_VERSION = 1;
    public SQLiteDatabase db;

    public DatabaseHelper(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {}

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {}

    public void Open() {
        db = this.getWritableDatabase();
        if(!db.isWriteAheadLoggingEnabled()) {
            db.enableWriteAheadLogging();
        }
    }

    public void insertBrainData(
        int scanningId,
        double[] values
    ) {
        saveDataToTable(scanningId, values, BRAIN_DATA_TABLE, brainDataColumns);
    }

    public void insertFrequencySpectrumData(
        int scanningId,
        double[] values
    ) {
        saveDataToTable(scanningId, values, FREQUENCY_SPECTRUM_DATA_TABLE, frequencySpectrumColumns);
    }

    public void insertCoherenceData(
        int scanningId,
        double[] values
    ) {
        saveDataToTable(scanningId, values, COHERENCE_DATA_TABLE, coherenceDataColumns);
    }

    public void insertGeneralScanningData(
        int scanningId,
        double[] values
    ) {
        saveDataToTable(scanningId, values, GENERAL_SCANNING_DATA_TABLE, generalScanningDataColumns);
    }

    public void insertRawData(
        int scanningId,
        double[] values,
        Long machineTime
    ) {
        ContentValues contentValue = new ContentValues();
        contentValue.put("measurement_id", scanningId);
        for (int i = 0; i < rawDataColumns.length; i++) {
            contentValue.put(rawDataColumns[i], values[i]);
        }
        contentValue.put("machine_time", machineTime);
        contentValue.put("measurement_id", scanningId);
        db.insert(RAW_DATA_TABLE, null, contentValue);
    }

    private void saveDataToTable(
        int scanningId,
        double[] values,
        String tableName,
        String[] columnNames
    ) {
        ContentValues contentValue = new ContentValues();
        contentValue.put("measurement_id", scanningId);
        for (int i = 0; i < columnNames.length; i++) {
            contentValue.put(columnNames[i], values[i]);
        }
        db.insert(tableName, null, contentValue);
    }

    private void log(String message) {
        Log.d("CppNativeModule", "\uD83D\uDCAC " + message);
    }

    String[] generalScanningDataColumns = {
        "heart_rate",
        "spo2",
        "sympathetic_stress",
        "parasympathetic_stress",
        "heart_circuit",
        "machine_time"
    };

    String[] brainDataColumns = {
        "t3_t4_max_power",
        "t3_t4_max_index",
        "f7_f8_max_power",
        "f7_f8_max_index",
        "t5_t6_max_power",
        "t5_t6_max_index",
        "o1_o2_max_power",
        "o1_o2_max_index",
//        "f3_f4_max_power",
//        "f3_f4_max_index",
//        "c3_c4_max_power",
//        "c3_c4_max_index",
//        "p3_p4_max_power",
//        "p3_p4_max_index",
    };

    String[] coherenceDataColumns = {
        "brain_2_5_Hz",
        "brain_3_5_Hz",
        "brain_4_Hz",
        "brain_4_5_Hz",
        "brain_5_5_Hz",
        "brain_6_5_Hz",
        "brain_7_Hz",
        "brain_7_5_Hz",
        "brain_8_5_Hz",
        "brain_9_5_Hz",
    };


    String[] rawDataColumns = {
        "PPS_L_R",
        "eeg_O1",
        "eeg_T5",
        "eeg_T3",
        "eeg_F7",
        "eeg_T6",
        "eeg_T4",
        "eeg_F8",
        "eeg_O2",
        "PPS_R_R",
        "eeg_F3",
        "eeg_F4",
        "eeg_C3",
        "eeg_C4",
        "eeg_P3",
        "eeg_P4",
        "eeg_CB2",
        "eeg_CB1",
    };

    String[] frequencySpectrumColumns = {
       "t3_0_Hz",
       "t3_1_Hz",
       "t3_2_Hz",
       "t3_3_Hz",
       "t3_4_Hz",
       "t3_5_Hz",
       "t3_6_Hz",
       "t3_7_Hz",
       "t3_8_Hz",
       "t3_9_Hz",
       "t3_10_Hz",
       "t3_11_Hz",
       "t3_12_Hz",
       "t3_13_Hz",
       "t3_14_Hz",
       "t3_15_Hz",
       "t3_16_Hz",
       "t3_17_Hz",
       "t3_18_Hz",
       "t3_19_Hz",
       "t3_20_Hz",
       "t3_21_Hz",
       "t3_22_Hz",
       "t3_23_Hz",
       "t3_24_Hz",
       "t3_25_Hz",
       "t3_26_Hz",
       "t3_27_Hz",
       "t3_28_Hz",
       "t3_29_Hz",
       "t3_30_Hz",
       "t3_31_Hz",
       "t3_32_Hz",
       "t3_33_Hz",
       "t3_34_Hz",
       "t3_35_Hz",
       "t3_36_Hz",
       "t3_37_Hz",
       "t3_38_Hz",
       "t3_39_Hz",
       "t3_40_Hz",
       "t3_41_Hz",
       "t3_42_Hz",
       "t3_43_Hz",
       "t3_44_Hz",
       "t3_45_Hz",
       "t3_46_Hz",
       "t3_47_Hz",
       "t3_48_Hz",
       "t3_49_Hz",
       "t3_50_Hz",
       "t3_51_Hz",
       "t3_52_Hz",
       "t3_53_Hz",
       "t3_54_Hz",
       "t3_55_Hz",
       "t3_56_Hz",
       "t3_57_Hz",
       "t3_58_Hz",
       "t3_59_Hz",
       "t3_60_Hz",
       "t3_61_Hz",
       "t3_62_Hz",
       "t3_63_Hz",
       "t3_64_Hz",
       "t3_65_Hz",
       "t3_66_Hz",
       "t3_67_Hz",
       "t3_68_Hz",
       "t3_69_Hz",
       "t3_70_Hz",
       "t3_71_Hz",
       "t3_72_Hz",
       "t3_73_Hz",
       "t3_74_Hz",
       "t3_75_Hz",
       "t3_76_Hz",
       "t3_77_Hz",
       "t3_78_Hz",
       "t3_79_Hz",
       "t3_80_Hz",
       "t3_81_Hz",
       "t3_82_Hz",
       "t3_83_Hz",
       "t3_84_Hz",
       "t3_85_Hz",
       "t3_86_Hz",
       "t3_87_Hz",
       "t3_88_Hz",
       "t3_89_Hz",
       "t3_90_Hz",
       "t3_91_Hz",
       "t3_92_Hz",
       "t3_93_Hz",
       "t3_94_Hz",
       "t3_95_Hz",
       "t3_96_Hz",
       "t3_97_Hz",
       "t3_98_Hz",
       "t3_99_Hz",
       "t3_100_Hz",
       "t3_101_Hz",
       "t3_102_Hz",
       "t3_103_Hz",
       "t3_104_Hz",
       "t3_105_Hz",
       "t3_106_Hz",
       "t3_107_Hz",
       "t3_108_Hz",
       "t3_109_Hz",
       "t3_110_Hz",
       "t3_111_Hz",
       "t3_112_Hz",
       "t3_113_Hz",
       "t3_114_Hz",
       "t3_115_Hz",
       "t3_116_Hz",
       "t3_117_Hz",
       "t3_118_Hz",
       "t3_119_Hz",
       "t3_120_Hz",
       "t3_121_Hz",
       "t3_122_Hz",
       "t3_123_Hz",
       "t3_124_Hz",
       "t3_125_Hz",
       "t3_126_Hz",
       "t3_127_Hz",
       "t4_0_Hz",
       "t4_1_Hz",
       "t4_2_Hz",
       "t4_3_Hz",
       "t4_4_Hz",
       "t4_5_Hz",
       "t4_6_Hz",
       "t4_7_Hz",
       "t4_8_Hz",
       "t4_9_Hz",
       "t4_10_Hz",
       "t4_11_Hz",
       "t4_12_Hz",
       "t4_13_Hz",
       "t4_14_Hz",
       "t4_15_Hz",
       "t4_16_Hz",
       "t4_17_Hz",
       "t4_18_Hz",
       "t4_19_Hz",
       "t4_20_Hz",
       "t4_21_Hz",
       "t4_22_Hz",
       "t4_23_Hz",
       "t4_24_Hz",
       "t4_25_Hz",
       "t4_26_Hz",
       "t4_27_Hz",
       "t4_28_Hz",
       "t4_29_Hz",
       "t4_30_Hz",
       "t4_31_Hz",
       "t4_32_Hz",
       "t4_33_Hz",
       "t4_34_Hz",
       "t4_35_Hz",
       "t4_36_Hz",
       "t4_37_Hz",
       "t4_38_Hz",
       "t4_39_Hz",
       "t4_40_Hz",
       "t4_41_Hz",
       "t4_42_Hz",
       "t4_43_Hz",
       "t4_44_Hz",
       "t4_45_Hz",
       "t4_46_Hz",
       "t4_47_Hz",
       "t4_48_Hz",
       "t4_49_Hz",
       "t4_50_Hz",
       "t4_51_Hz",
       "t4_52_Hz",
       "t4_53_Hz",
       "t4_54_Hz",
       "t4_55_Hz",
       "t4_56_Hz",
       "t4_57_Hz",
       "t4_58_Hz",
       "t4_59_Hz",
       "t4_60_Hz",
       "t4_61_Hz",
       "t4_62_Hz",
       "t4_63_Hz",
       "t4_64_Hz",
       "t4_65_Hz",
       "t4_66_Hz",
       "t4_67_Hz",
       "t4_68_Hz",
       "t4_69_Hz",
       "t4_70_Hz",
       "t4_71_Hz",
       "t4_72_Hz",
       "t4_73_Hz",
       "t4_74_Hz",
       "t4_75_Hz",
       "t4_76_Hz",
       "t4_77_Hz",
       "t4_78_Hz",
       "t4_79_Hz",
       "t4_80_Hz",
       "t4_81_Hz",
       "t4_82_Hz",
       "t4_83_Hz",
       "t4_84_Hz",
       "t4_85_Hz",
       "t4_86_Hz",
       "t4_87_Hz",
       "t4_88_Hz",
       "t4_89_Hz",
       "t4_90_Hz",
       "t4_91_Hz",
       "t4_92_Hz",
       "t4_93_Hz",
       "t4_94_Hz",
       "t4_95_Hz",
       "t4_96_Hz",
       "t4_97_Hz",
       "t4_98_Hz",
       "t4_99_Hz",
       "t4_100_Hz",
       "t4_101_Hz",
       "t4_102_Hz",
       "t4_103_Hz",
       "t4_104_Hz",
       "t4_105_Hz",
       "t4_106_Hz",
       "t4_107_Hz",
       "t4_108_Hz",
       "t4_109_Hz",
       "t4_110_Hz",
       "t4_111_Hz",
       "t4_112_Hz",
       "t4_113_Hz",
       "t4_114_Hz",
       "t4_115_Hz",
       "t4_116_Hz",
       "t4_117_Hz",
       "t4_118_Hz",
       "t4_119_Hz",
       "t4_120_Hz",
       "t4_121_Hz",
       "t4_122_Hz",
       "t4_123_Hz",
       "t4_124_Hz",
       "t4_125_Hz",
       "t4_126_Hz",
       "t4_127_Hz",
    };


}