// Cortex_C_Code_V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "Cortex_PPG_EEG.h"            /* Model's header file */
#include "rtwtypes.h"

#include <sstream>
#include <string>
#include <jni.h>
#include <string>
#include <android/log.h>


void logInfo(const char* message) {
    __android_log_print(ANDROID_LOG_INFO, "C++ CODE INSIDE", "%s", message);
}

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(void);
void rt_OneStep(void)
{
    static boolean_T OverrunFlag = false;

    /* Disable interrupts here */

    /* Check for overrun */
    if (OverrunFlag) {
        rtmSetErrorStatus(Cortex_PPG_EEG_M, "Overrun");
        return;
    }

    OverrunFlag = true;

    /* Save FPU context here (if necessary) */
    /* Re-enable timer or interrupt here */
    /* Set model inputs here */

    /* Step the model */
    Cortex_PPG_EEG_step();

    /* Get model outputs here */

    /* Indicate task complete */
    OverrunFlag = false;

    /* Disable interrupts here */
    /* Restore FPU context here (if necessary) */
    /* Enable interrupts here */
}

#define INPUT_SIZE 18   // Size of the input variables (PPG+EEG channels)
#define OUTPUT_SIZE 324 // Size of the output variables (output of the signal processing function). This value
// was updated after adding the coherence function

// This is the wrapper function. We pass the input array to this function through in_ptr . This function internally
// calls the top level processing function and put the output data in out_ptr
// void Wrapper_Function(double in_Array[INPUT_SIZE], double  out_Array[OUTPUT_SIZE]);   // function prototype


//int_T main(int_T argc, const char *argv[])
//int main(void)
//{
//    /* Unused arguments */
//    //(void)(argc);
//    //(void)(argv);
//
//    /* Initialize model */
//    Cortex_PPG_EEG_initialize();
//
//    /* Attach rt_OneStep to a timer or interrupt service routine with
//     * period 0.004 seconds (the model's base sample time) here.  The
//     * call syntax for rt_OneStep is
//     *
//     *  rt_OneStep();
//     */
//
//
//// Call Wrapper_function (STARTS HERE)
//// =================================================
//
//    double InputArray[INPUT_SIZE]   = { 0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
//    double OutputArray[OUTPUT_SIZE] = { 0 };
//
//    // Below we call the processing function 1500 times which corresponds
//    // to 1500 * (1/250) = 6 seconds of data (250 Hz sampling frequency).
////    for (int i = 0; i < 1500; i++)
////    {
////        Wrapper_Function(InputArray, OutputArray);
////    }
//
//    OutputArray[0] = OutputArray[0];  // You may check the output results at this line
//
//// // =================================================
//// // Call Wrapper_function (ENDS HERE)
//
//
//
//    /* Terminate model */
//    Cortex_PPG_EEG_terminate();
//    while (1)
//    {
//    }
//    return 0;
//}

// ===============================================================================
// ===============================================================================

// Here is the actual Wrapper function
void Wrapper_Function(double in_Array[INPUT_SIZE], double  out_Array[OUTPUT_SIZE])
{
	// populate the input data to be used by the top processing function
	for (int k1 = 0; k1 < INPUT_SIZE; k1++)
	{
		Cortex_PPG_EEG_U.In[k1] = in_Array[k1];
	}

	Cortex_PPG_EEG_step();   // Call the top processing function

	// populate the output data
	for (int k1 = 0; k1 < OUTPUT_SIZE; k1++)
	{
		out_Array[k1] = Cortex_PPG_EEG_Y.Out[k1];
	}

}

extern "C" JNIEXPORT void JNICALL
Java_brain_test_CppNativeModule_initAlgorithm(
        JNIEnv* env,
        jobject
) {
    Cortex_PPG_EEG_initialize();
}

extern "C" JNIEXPORT void JNICALL
Java_brain_test_CppNativeModule_terminateAlgorithm(
        JNIEnv* env,
        jobject
) {
    Cortex_PPG_EEG_terminate();
}

extern "C" JNIEXPORT jdoubleArray JNICALL
Java_brain_test_CppNativeModule_processDataFromJNI(
        JNIEnv* env,
        jobject,
        jdoubleArray input
) {
    double in_Array[INPUT_SIZE];

//    logInfo("start !!!=========");
    jdoubleArray result = env->NewDoubleArray(OUTPUT_SIZE);
    jsize length = env->GetArrayLength(input);
    jdouble *data = env->GetDoubleArrayElements(input, 0);

    for (jsize i = 0; i < length; i++) {
        in_Array[static_cast<int>(i)] = data[i];
//        logInfo(std::to_string(in_Array[i]));
    }

//    logInfo("end C++ !!!!!!!!!!!!!!!");
    double out_Array[OUTPUT_SIZE] = { 0 };
    Wrapper_Function(in_Array, out_Array);
    env->SetDoubleArrayRegion(result, 0, OUTPUT_SIZE, out_Array);

    return result;
}
