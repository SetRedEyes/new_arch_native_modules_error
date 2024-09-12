/*
 * File: Cortex_PPG_EEG_private.h
 *
 * Code generated for Simulink model 'Cortex_PPG_EEG'.
 *
 * Model version                  : 1.390
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Sat Jan 27 23:02:53 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->MSP430
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Cortex_PPG_EEG_private_h_
#define RTW_HEADER_Cortex_PPG_EEG_private_h_
#include "rtwtypes.h"
#include "Cortex_PPG_EEG.h"

extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern void Cortex_PPG_EEG_MovingRMS3_Init(DW_MovingRMS3_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS3_Start(DW_MovingRMS3_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS3(real_T rtu_0,
  B_MovingRMS3_Cortex_PPG_EEG_T *localB, DW_MovingRMS3_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_EEG_MovingRMS_Init(DW_MovingRMS_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_EEG_MovingRMS_Start(DW_MovingRMS_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS(real_T rtu_0, B_MovingRMS_Cortex_PPG_EEG_T *
  localB, DW_MovingRMS_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_EEG_MovingRMS2_Init(DW_MovingRMS2_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS2_Start(DW_MovingRMS2_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS2(real_T rtu_0,
  B_MovingRMS2_Cortex_PPG_EEG_T *localB, DW_MovingRMS2_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_EEG_MovingRMS1_Init(DW_MovingRMS1_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS1_Start(DW_MovingRMS1_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS1(real_T rtu_0,
  B_MovingRMS1_Cortex_PPG_EEG_T *localB, DW_MovingRMS1_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_E_MovingAverage_Init(DW_MovingAverage_Cortex_PPG_E_T
  *localDW);
extern void Cortex_PPG__MovingAverage_Start(DW_MovingAverage_Cortex_PPG_E_T
  *localDW);
extern void Cortex_PPG_EEG_MovingAverage(const real_T rtu_0[128],
  B_MovingAverage_Cortex_PPG_EE_T *localB, DW_MovingAverage_Cortex_PPG_E_T
  *localDW);
extern void Cortex_PPG_EEG_MATLABFunction(const real_T rtu_u[256], real_T rty_y
  [128]);
extern void Cortex_PPG_EEG_MovingRMS3_Term(DW_MovingRMS3_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS_Term(DW_MovingRMS_Cortex_PPG_EEG_T *localDW);
extern void Cortex_PPG_EEG_MovingRMS2_Term(DW_MovingRMS2_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_EEG_MovingRMS1_Term(DW_MovingRMS1_Cortex_PPG_EEG_T
  *localDW);
extern void Cortex_PPG_E_MovingAverage_Term(DW_MovingAverage_Cortex_PPG_E_T
  *localDW);

#endif                                /* RTW_HEADER_Cortex_PPG_EEG_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
