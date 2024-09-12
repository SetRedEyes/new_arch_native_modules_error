/*
 * File: Cortex_PPG_EEG_types.h
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

#ifndef RTW_HEADER_Cortex_PPG_EEG_types_h_
#define RTW_HEADER_Cortex_PPG_EEG_types_h_
#include "rtwtypes.h"
#ifndef typedef_e_dsp_private_SlidingWindowAv_T
#define typedef_e_dsp_private_SlidingWindowAv_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[2499];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWindowAv_T;

#endif                               /*typedef_e_dsp_private_SlidingWindowAv_T*/

#ifndef typedef_dsp_MovingAverage_Cortex_PPG__T
#define typedef_dsp_MovingAverage_Cortex_PPG__T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
} dsp_MovingAverage_Cortex_PPG__T;

#endif                               /*typedef_dsp_MovingAverage_Cortex_PPG__T*/

#ifndef typedef_c_cell_wrap_Cortex_PPG_EEG_T
#define typedef_c_cell_wrap_Cortex_PPG_EEG_T

typedef struct {
  uint32_T f1[8];
} c_cell_wrap_Cortex_PPG_EEG_T;

#endif                                 /*typedef_c_cell_wrap_Cortex_PPG_EEG_T*/

#ifndef typedef_dsp_simulink_MovingRMS_Cortex_T
#define typedef_dsp_simulink_MovingRMS_Cortex_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_Cortex_PPG_EEG_T inputVarSize;
  e_dsp_private_SlidingWindowAv_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingRMS_Cortex_T;

#endif                               /*typedef_dsp_simulink_MovingRMS_Cortex_T*/

#ifndef typedef_e_dsp_private_SlidingWindow_j_T
#define typedef_e_dsp_private_SlidingWindow_j_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[49];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWindow_j_T;

#endif                               /*typedef_e_dsp_private_SlidingWindow_j_T*/

#ifndef typedef_dsp_simulink_MovingRMS_Cort_h_T
#define typedef_dsp_simulink_MovingRMS_Cort_h_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_Cortex_PPG_EEG_T inputVarSize;
  e_dsp_private_SlidingWindow_j_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingRMS_Cort_h_T;

#endif                               /*typedef_dsp_simulink_MovingRMS_Cort_h_T*/

#ifndef typedef_e_dsp_private_SlidingWindo_j0_T
#define typedef_e_dsp_private_SlidingWindo_j0_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[1999];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWindo_j0_T;

#endif                               /*typedef_e_dsp_private_SlidingWindo_j0_T*/

#ifndef typedef_dsp_simulink_MovingRMS_Cor_hv_T
#define typedef_dsp_simulink_MovingRMS_Cor_hv_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_Cortex_PPG_EEG_T inputVarSize;
  e_dsp_private_SlidingWindo_j0_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingRMS_Cor_hv_T;

#endif                               /*typedef_dsp_simulink_MovingRMS_Cor_hv_T*/

#ifndef typedef_e_dsp_private_SlidingWind_j0g_T
#define typedef_e_dsp_private_SlidingWind_j0g_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[2999];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWind_j0g_T;

#endif                               /*typedef_e_dsp_private_SlidingWind_j0g_T*/

#ifndef typedef_dsp_simulink_MovingRMS_Co_hvs_T
#define typedef_dsp_simulink_MovingRMS_Co_hvs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_Cortex_PPG_EEG_T inputVarSize;
  e_dsp_private_SlidingWind_j0g_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingRMS_Co_hvs_T;

#endif                               /*typedef_dsp_simulink_MovingRMS_Co_hvs_T*/

#ifndef typedef_e_dsp_private_SlidingWin_j0gy_T
#define typedef_e_dsp_private_SlidingWin_j0gy_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum[128];
  real_T pCumSumRev[2432];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWin_j0gy_T;

#endif                               /*typedef_e_dsp_private_SlidingWin_j0gy_T*/

#ifndef typedef_dsp_simulink_MovingAverage_Co_T
#define typedef_dsp_simulink_MovingAverage_Co_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_Cortex_PPG_EEG_T inputVarSize;
  e_dsp_private_SlidingWin_j0gy_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_Co_T;

#endif                               /*typedef_dsp_simulink_MovingAverage_Co_T*/

/* Custom Type definition for MATLAB Function: '<S7>/MATLAB Function' */
#ifndef struct_tag_sJqDcV2nVaIogBMXukQnsAC
#define struct_tag_sJqDcV2nVaIogBMXukQnsAC

struct tag_sJqDcV2nVaIogBMXukQnsAC
{
  uint32_T npts;
  uint32_T Fs;
  uint32_T Range;
  uint32_T CenterDC;
};

#endif                                 /*struct_tag_sJqDcV2nVaIogBMXukQnsAC*/

#ifndef typedef_sJqDcV2nVaIogBMXukQnsAC_Corte_T
#define typedef_sJqDcV2nVaIogBMXukQnsAC_Corte_T

typedef struct tag_sJqDcV2nVaIogBMXukQnsAC sJqDcV2nVaIogBMXukQnsAC_Corte_T;

#endif                               /*typedef_sJqDcV2nVaIogBMXukQnsAC_Corte_T*/

#ifndef typedef_cell_wrap_6_Cortex_PPG_EEG_T
#define typedef_cell_wrap_6_Cortex_PPG_EEG_T

typedef struct {
  real_T f1[240];
} cell_wrap_6_Cortex_PPG_EEG_T;

#endif                                 /*typedef_cell_wrap_6_Cortex_PPG_EEG_T*/

#ifndef struct_tag_skmiWvEOpZdNetwOYghtMI
#define struct_tag_skmiWvEOpZdNetwOYghtMI

struct tag_skmiWvEOpZdNetwOYghtMI
{
  real_T nfft;
  real_T Fs;
  real_T conflevel;
  boolean_T average;
  boolean_T maxhold;
  boolean_T minhold;
  boolean_T MIMO;
  boolean_T centerdc;
  char_T range[8];
};

#endif                                 /*struct_tag_skmiWvEOpZdNetwOYghtMI*/

#ifndef typedef_skmiWvEOpZdNetwOYghtMI_Cortex_T
#define typedef_skmiWvEOpZdNetwOYghtMI_Cortex_T

typedef struct tag_skmiWvEOpZdNetwOYghtMI skmiWvEOpZdNetwOYghtMI_Cortex_T;

#endif                               /*typedef_skmiWvEOpZdNetwOYghtMI_Cortex_T*/

#ifndef struct_emxArray_real_T_192
#define struct_emxArray_real_T_192

struct emxArray_real_T_192
{
  real_T data[192];
  int16_T size;
};

#endif                                 /*struct_emxArray_real_T_192*/

#ifndef typedef_emxArray_real_T_192_Cortex_PP_T
#define typedef_emxArray_real_T_192_Cortex_PP_T

typedef struct emxArray_real_T_192 emxArray_real_T_192_Cortex_PP_T;

#endif                               /*typedef_emxArray_real_T_192_Cortex_PP_T*/

/* Custom Type definition for MATLAB Function: '<S7>/MATLAB Function' */
#ifndef struct_sVE4AqT0MTXApPo76pPHNMG_tag
#define struct_sVE4AqT0MTXApPo76pPHNMG_tag

struct sVE4AqT0MTXApPo76pPHNMG_tag
{
  emxArray_real_T_192_Cortex_PP_T f1;
};

#endif                                 /*struct_sVE4AqT0MTXApPo76pPHNMG_tag*/

#ifndef typedef_b_cell_wrap_14_Cortex_PPG_EEG_T
#define typedef_b_cell_wrap_14_Cortex_PPG_EEG_T

typedef struct sVE4AqT0MTXApPo76pPHNMG_tag b_cell_wrap_14_Cortex_PPG_EEG_T;

#endif                               /*typedef_b_cell_wrap_14_Cortex_PPG_EEG_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_Cortex_PPG_EEG_T RT_MODEL_Cortex_PPG_EEG_T;

#endif                                 /* RTW_HEADER_Cortex_PPG_EEG_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
