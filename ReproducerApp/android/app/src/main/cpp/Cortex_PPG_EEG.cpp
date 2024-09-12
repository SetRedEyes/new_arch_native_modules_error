/*
 * File: Cortex_PPG_EEG.c
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


#include "pch.h"
#include <iostream>

#include "Cortex_PPG_EEG.h"
#include "Cortex_PPG_EEG_private.h"

 /* Block signals (default storage) */
B_Cortex_PPG_EEG_T Cortex_PPG_EEG_B;

/* Block states (default storage) */
DW_Cortex_PPG_EEG_T Cortex_PPG_EEG_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Cortex_PPG_EEG_T Cortex_PPG_EEG_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Cortex_PPG_EEG_T Cortex_PPG_EEG_Y;

/* Real-time model */
RT_MODEL_Cortex_PPG_EEG_T Cortex_PPG_EEG_M_;
RT_MODEL_Cortex_PPG_EEG_T *const Cortex_PPG_EEG_M = &Cortex_PPG_EEG_M_;

/* Forward declaration for local functions */
static void Cortex_PPG_EEG_SystemCore_setup(dsp_simulink_MovingRMS_Cortex_T *obj,
	e_dsp_private_SlidingWindowAv_T *iobj_0);
static real_T SlidingWindowAverageCG_stepImpl(e_dsp_private_SlidingWindowAv_T
	*obj, real_T u, B_MovingRMS3_Cortex_PPG_EEG_T *localB);
static void Cortex_PPG_E_SystemCore_release(dsp_simulink_MovingRMS_Cortex_T *obj);
static void Cortex_PPG_EE_SystemCore_delete(dsp_simulink_MovingRMS_Cortex_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingRMS_Cortex_T *obj);

/* Forward declaration for local functions */
static void Cortex_PPG_E_SystemCore_setup_n(dsp_simulink_MovingRMS_Cort_h_T *obj,
	e_dsp_private_SlidingWindow_j_T *iobj_0);
static void Cortex_PPG_SystemCore_release_m(dsp_simulink_MovingRMS_Cort_h_T *obj);
static void Cortex_PPG__SystemCore_delete_a(dsp_simulink_MovingRMS_Cort_h_T *obj);
static void matlabCodegenHandle_matlabCod_g(dsp_simulink_MovingRMS_Cort_h_T *obj);

/* Forward declaration for local functions */
static void Cortex_PPG__SystemCore_setup_n2(dsp_simulink_MovingRMS_Cor_hv_T *obj,
	e_dsp_private_SlidingWindo_j0_T *iobj_0);
static real_T SlidingWindowAverageCG_stepIm_h(e_dsp_private_SlidingWindo_j0_T
	*obj, real_T u, B_MovingRMS2_Cortex_PPG_EEG_T *localB);
static void Cortex_PP_SystemCore_release_mt(dsp_simulink_MovingRMS_Cor_hv_T *obj);
static void Cortex_PPG_SystemCore_delete_as(dsp_simulink_MovingRMS_Cor_hv_T *obj);
static void matlabCodegenHandle_matlabCo_go(dsp_simulink_MovingRMS_Cor_hv_T *obj);

/* Forward declaration for local functions */
static void Cortex_PPG_SystemCore_setup_n2i(dsp_simulink_MovingRMS_Co_hvs_T *obj,
	e_dsp_private_SlidingWind_j0g_T *iobj_0);
static real_T SlidingWindowAverageCG_stepI_h4(e_dsp_private_SlidingWind_j0g_T
	*obj, real_T u, B_MovingRMS1_Cortex_PPG_EEG_T *localB);
static void Cortex_P_SystemCore_release_mt2(dsp_simulink_MovingRMS_Co_hvs_T *obj);
static void Cortex_PP_SystemCore_delete_asm(dsp_simulink_MovingRMS_Co_hvs_T *obj);
static void matlabCodegenHandle_matlabC_goq(dsp_simulink_MovingRMS_Co_hvs_T *obj);

/* Forward declaration for local functions */
static void SlidingWindowAverageCG_step_h4p(e_dsp_private_SlidingWin_j0gy_T *obj,
	const real_T u[128], real_T y[128], B_MovingAverage_Cortex_PPG_EE_T *localB);
static void Cortex__SystemCore_release_mt2c(dsp_simulink_MovingAverage_Co_T *obj);
static void Cortex_P_SystemCore_delete_asmv(dsp_simulink_MovingAverage_Co_T *obj);
static void matlabCodegenHandle_matlab_goqu(dsp_simulink_MovingAverage_Co_T *obj);

/* Forward declaration for local functions */
static void Cortex_PPG_EEG_diff(const real_T x_data[], const int16_T x_size[2],
	real_T y_data[], int16_T y_size[2]);
static real_T Cortex_PPG_EEG_mean_h(const real_T x_data[], const int16_T x_size
	[2]);
static real_T Cortex_PPG_EEG_sum(const real_T x[10]);
static real_T Cortex_PPG_EEG_mean(const real_T x[240]);
static real_T Cortex_PPG_EEG_sum_b(const real_T x[240]);
static void Cortex_PPG_EEG_parse_inputs(const cell_wrap_6_Cortex_PPG_EEG_T x1[2],
	real_T x[240], boolean_T *isreal_x, real_T y[240]);
static void Cortex_PPG_EEG_welch_options(real_T *options1_nfft, real_T
	*options1_Fs, real_T *options1_conflevel, boolean_T *options1_average,
	boolean_T *options1_maxhold, boolean_T *options1_minhold, boolean_T
	*options1_MIMO, boolean_T *options1_centerdc, char_T options1_range[8]);
static void Cortex_PPG_EEG_welchparse(const cell_wrap_6_Cortex_PPG_EEG_T x1[2],
	real_T x[240], boolean_T *isreal_x, real_T y[240], real_T *options_nfft,
	real_T *options_Fs, char_T options_range[8]);
static void Cortex_PPG_EEG_bsxfun(const real_T a_data[], const real_T b[128],
	real_T c[128]);
static void Cortex__generate_twiddle_tables(real_T costab_data[], int16_T
	costab_size[2], real_T sintab_data[], int16_T sintab_size[2], int16_T
	sintabinv_size[2]);
static void Cortex_PPG_EEG_psdfreqvec(real_T varargin_4, real_T w_data[],
	int16_T *w_size);
static void Cortex_PPG_EEG_computeDFT(const real_T xin[128], real_T varargin_1,
	creal_T Xx_data[], int16_T *Xx_size, real_T f_data[], int16_T *f_size);
static void Cortex_PPG_computeperiodogram_e(const real_T x_data[], real_T Fs,
	creal_T Pxx_data[], int16_T *Pxx_size, real_T F_data[], int16_T *F_size);
static boolean_T Cortex_PPG_EEG_strcmp(const char_T a[8]);
static void Cortex_PPG_EEG_computepsd(const creal_T Sxx1_data[], const int16_T
	Sxx1_size[2], const real_T w2_data[], const int16_T w2_size[2], const char_T
	range[8], creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size, char_T varargout_3_data[],
	int16_T varargout_3_size[2]);
static void Cortex_PP_localComputeSpectra_f(const real_T Sxx_data[], const
	real_T x[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T options, creal_T
	Pxx_data[], int16_T Pxx_size[2], real_T w_data[], int16_T *w_size, char_T
	units_data[], int16_T units_size[2]);
static void Cortex_PPG__localComputeSpectra(const real_T Sxx_data[], const
	real_T x[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T options, creal_T
	Pxx_data[], int16_T Pxx_size[2]);
static void Cortex_PPG_EEG_validateinputs(const b_cell_wrap_14_Cortex_PPG_EEG_T
	x[2], real_T x1_data[], int16_T *x1_size, real_T *Lx, real_T y_data[], int16_T
	*y_size, boolean_T *is2sig);
static void Cortex_PPG_EEG_computeDFT_o(const real_T xin_data[], real_T
	varargin_1, creal_T Xx_data[], int16_T Xx_size[2], real_T f_data[], int16_T
	*f_size);
static void Cortex_PPG_EEG_bsxfun_b(const creal_T a_data[], const creal_T
	b_data[], creal_T c_data[], int16_T c_size[2]);
static void Cortex_PPG_E_computeperiodogram(const
	b_cell_wrap_14_Cortex_PPG_EEG_T x[2], real_T Fs, creal_T Pxx_data[], int16_T
	Pxx_size[2], real_T F_data[], int16_T *F_size);
static void Cortex_P_localComputeSpectra_fy(const real_T Sxx_data[], const
	real_T x[240], const real_T y[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T
	options, creal_T Pxx_data[], int16_T Pxx_size[2]);
static void Cortex_PPG_EEG_abs(const creal_T x_data[], const int16_T x_size[2],
	real_T y_data[], int16_T y_size[2]);
static void Cortex_PPG_EEG_power(const real_T a_data[], const int16_T a_size[2],
	real_T y_data[], int16_T y_size[2]);
static void Cortex_PPG_EEG_bsxfun_bf(const creal_T a_data[], const int16_T
	a_size[2], const creal_T b_data[], const int16_T b_size[2], creal_T c_data[],
	int16_T c_size[2]);
static void Cortex_PPG_EEG_welch(const cell_wrap_6_Cortex_PPG_EEG_T x[2],
	creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size);
static void Cortex_PPG_EEG_mscohere(const real_T x[240], const real_T y[240],
	creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size);
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
	/* Compute which subrates run during the next base time step.  Subrates
	 * are an integer multiple of the base rate counter.  Therefore, the subtask
	 * counter is reset when it reaches its limit (zero means run).
	 */
	(Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1])++;
	if ((Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.04s, 0.0s] */
		Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1] = 0;
	}

	(Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2])++;
	if ((Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2]) > 16) {/* Sample time: [0.068s, 0.0s] */
		Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] = 0;
	}
}

static void Cortex_PPG_EEG_SystemCore_setup(dsp_simulink_MovingRMS_Cortex_T *obj,
	e_dsp_private_SlidingWindowAv_T *iobj_0)
{
	dsp_simulink_MovingRMS_Cortex_T *obj_0;
	e_dsp_private_SlidingWindowAv_T *iobj_0_0;
	dsp_MovingAverage_Cortex_PPG__T avrgObj;
	dsp_MovingAverage_Cortex_PPG__T *b_obj;
	obj->isSetupComplete = false;
	obj->isInitialized = 1L;
	obj_0 = obj;
	iobj_0_0 = iobj_0;
	obj_0->NumChannels = 1L;
	avrgObj.matlabCodegenIsDeleted = true;
	b_obj = &avrgObj;
	b_obj->matlabCodegenIsDeleted = false;
	iobj_0_0->isInitialized = 0L;
	b_obj = &avrgObj;
	if (!b_obj->matlabCodegenIsDeleted) {
		b_obj->matlabCodegenIsDeleted = true;
		if (b_obj->isInitialized == 1L) {
			b_obj->isInitialized = 2L;
		}
	}

	obj_0->pStatistic = iobj_0_0;
	obj->isSetupComplete = true;
	obj->TunablePropsChanged = false;
}

static real_T SlidingWindowAverageCG_stepImpl(e_dsp_private_SlidingWindowAv_T
	*obj, real_T u, B_MovingRMS3_Cortex_PPG_EEG_T *localB)
{
	real_T y;
	real_T cumRevIndex;
	real_T csum;
	real_T z;
	int16_T i;
	cumRevIndex = obj->pCumRevIndex;
	csum = obj->pCumSum;
	for (i = 0; i < 2499; i++) {
		localB->csumrev[i] = obj->pCumSumRev[i];
	}

	csum += u;
	z = localB->csumrev[(int16_T)cumRevIndex - 1] + csum;
	localB->csumrev[(int16_T)cumRevIndex - 1] = u;
	if (cumRevIndex != 2499.0) {
		cumRevIndex++;
	}
	else {
		cumRevIndex = 1.0;
		csum = 0.0;
		for (i = 2497; i >= 0; i--) {
			localB->csumrev[i] += localB->csumrev[i + 1];
		}
	}

	y = z / 2500.0;
	obj->pCumSum = csum;
	for (i = 0; i < 2499; i++) {
		obj->pCumSumRev[i] = localB->csumrev[i];
	}

	obj->pCumRevIndex = cumRevIndex;
	return y;
}

static void Cortex_PPG_E_SystemCore_release(dsp_simulink_MovingRMS_Cortex_T *obj)
{
	dsp_simulink_MovingRMS_Cortex_T *obj_0;
	e_dsp_private_SlidingWindowAv_T *obj_1;
	if (obj->isInitialized == 1L) {
		obj_0 = obj;
		if (obj_0->isSetupComplete) {
			obj_1 = obj_0->pStatistic;
			if (obj_1->isInitialized == 1L) {
				obj_1->isInitialized = 2L;
			}

			obj_0->NumChannels = -1L;
		}
	}
}

static void Cortex_PPG_EE_SystemCore_delete(dsp_simulink_MovingRMS_Cortex_T *obj)
{
	Cortex_PPG_E_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingRMS_Cortex_T *obj)
{
	if (!obj->matlabCodegenIsDeleted) {
		obj->matlabCodegenIsDeleted = true;
		Cortex_PPG_EE_SystemCore_delete(obj);
	}
}

/*
 * System initialize for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS3_Init(DW_MovingRMS3_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cortex_T *obj;
	e_dsp_private_SlidingWindowAv_T *obj_0;
	int16_T i;

	/* InitializeConditions for MATLABSystem: '<S32>/Moving RMS3' */
	obj = &localDW->obj;
	obj_0 = obj->pStatistic;
	if (obj_0->isInitialized == 1L) {
		obj_0->pCumSum = 0.0;
		for (i = 0; i < 2499; i++) {
			obj_0->pCumSumRev[i] = 0.0;
		}

		obj_0->pCumRevIndex = 1.0;
	}

	/* End of InitializeConditions for MATLABSystem: '<S32>/Moving RMS3' */
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS3_Start(DW_MovingRMS3_Cortex_PPG_EEG_T *localDW)
{
	e_dsp_private_SlidingWindowAv_T *iobj_0;
	dsp_simulink_MovingRMS_Cortex_T *b_obj;

	/* Start for MATLABSystem: '<S32>/Moving RMS3' */
	localDW->obj.matlabCodegenIsDeleted = true;
	iobj_0 = &localDW->gobj_0;
	b_obj = &localDW->obj;
	b_obj->isInitialized = 0L;
	b_obj->NumChannels = -1L;
	b_obj->matlabCodegenIsDeleted = false;
	localDW->objisempty = true;
	Cortex_PPG_EEG_SystemCore_setup(&localDW->obj, iobj_0);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS3(real_T rtu_0, B_MovingRMS3_Cortex_PPG_EEG_T
	*localB, DW_MovingRMS3_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cortex_T *obj;
	dsp_simulink_MovingRMS_Cortex_T *obj_0;
	real_T y;
	e_dsp_private_SlidingWindowAv_T *obj_1;
	e_dsp_private_SlidingWindowAv_T *obj_2;
	e_dsp_private_SlidingWindowAv_T *obj_3;
	e_dsp_private_SlidingWindowAv_T *obj_4;
	int16_T i;

	/* MATLABSystem: '<S32>/Moving RMS3' */
	obj = &localDW->obj;
	obj_0 = obj;
	if (obj_0->TunablePropsChanged) {
		obj_0->TunablePropsChanged = false;
	}

	y = fabs(rtu_0);
	y *= y;
	obj_1 = obj->pStatistic;
	if (obj_1->isInitialized != 1L) {
		obj_2 = obj_1;
		obj_3 = obj_2;
		obj_3->isSetupComplete = false;
		obj_3->isInitialized = 1L;
		obj_4 = obj_3;
		obj_4->pCumSum = 0.0;
		for (i = 0; i < 2499; i++) {
			obj_4->pCumSumRev[i] = 0.0;
		}

		obj_4->pCumRevIndex = 1.0;
		obj_3->isSetupComplete = true;
		obj_2->pCumSum = 0.0;
		for (i = 0; i < 2499; i++) {
			obj_2->pCumSumRev[i] = 0.0;
		}

		obj_2->pCumRevIndex = 1.0;
	}

	y = SlidingWindowAverageCG_stepImpl(obj_1, y, localB);
	y = sqrt(y);
	localB->MovingRMS3 = y;

	/* End of MATLABSystem: '<S32>/Moving RMS3' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS3_Term(DW_MovingRMS3_Cortex_PPG_EEG_T *localDW)
{
	/* Terminate for MATLABSystem: '<S32>/Moving RMS3' */
	matlabCodegenHandle_matlabCodeg(&localDW->obj);
}

static void Cortex_PPG_E_SystemCore_setup_n(dsp_simulink_MovingRMS_Cort_h_T *obj,
	e_dsp_private_SlidingWindow_j_T *iobj_0)
{
	dsp_simulink_MovingRMS_Cort_h_T *obj_0;
	e_dsp_private_SlidingWindow_j_T *iobj_0_0;
	dsp_MovingAverage_Cortex_PPG__T avrgObj;
	dsp_MovingAverage_Cortex_PPG__T *b_obj;
	obj->isSetupComplete = false;
	obj->isInitialized = 1L;
	obj_0 = obj;
	iobj_0_0 = iobj_0;
	obj_0->NumChannels = 1L;
	avrgObj.matlabCodegenIsDeleted = true;
	b_obj = &avrgObj;
	b_obj->matlabCodegenIsDeleted = false;
	iobj_0_0->isInitialized = 0L;
	b_obj = &avrgObj;
	if (!b_obj->matlabCodegenIsDeleted) {
		b_obj->matlabCodegenIsDeleted = true;
		if (b_obj->isInitialized == 1L) {
			b_obj->isInitialized = 2L;
		}
	}

	obj_0->pStatistic = iobj_0_0;
	obj->isSetupComplete = true;
	obj->TunablePropsChanged = false;
}

static void Cortex_PPG_SystemCore_release_m(dsp_simulink_MovingRMS_Cort_h_T *obj)
{
	dsp_simulink_MovingRMS_Cort_h_T *obj_0;
	e_dsp_private_SlidingWindow_j_T *obj_1;
	if (obj->isInitialized == 1L) {
		obj_0 = obj;
		if (obj_0->isSetupComplete) {
			obj_1 = obj_0->pStatistic;
			if (obj_1->isInitialized == 1L) {
				obj_1->isInitialized = 2L;
			}

			obj_0->NumChannels = -1L;
		}
	}
}

static void Cortex_PPG__SystemCore_delete_a(dsp_simulink_MovingRMS_Cort_h_T *obj)
{
	Cortex_PPG_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_g(dsp_simulink_MovingRMS_Cort_h_T *obj)
{
	if (!obj->matlabCodegenIsDeleted) {
		obj->matlabCodegenIsDeleted = true;
		Cortex_PPG__SystemCore_delete_a(obj);
	}
}

/*
 * System initialize for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    ...
 */
void Cortex_PPG_EEG_MovingRMS_Init(DW_MovingRMS_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cort_h_T *obj;
	e_dsp_private_SlidingWindow_j_T *obj_0;
	int16_T i;

	/* InitializeConditions for MATLABSystem: '<S33>/Moving RMS' */
	obj = &localDW->obj;
	obj_0 = obj->pStatistic;
	if (obj_0->isInitialized == 1L) {
		obj_0->pCumSum = 0.0;
		for (i = 0; i < 49; i++) {
			obj_0->pCumSumRev[i] = 0.0;
		}

		obj_0->pCumRevIndex = 1.0;
	}

	/* End of InitializeConditions for MATLABSystem: '<S33>/Moving RMS' */
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    ...
 */
void Cortex_PPG_EEG_MovingRMS_Start(DW_MovingRMS_Cortex_PPG_EEG_T *localDW)
{
	e_dsp_private_SlidingWindow_j_T *iobj_0;
	dsp_simulink_MovingRMS_Cort_h_T *b_obj;

	/* Start for MATLABSystem: '<S33>/Moving RMS' */
	localDW->obj.matlabCodegenIsDeleted = true;
	iobj_0 = &localDW->gobj_0;
	b_obj = &localDW->obj;
	b_obj->isInitialized = 0L;
	b_obj->NumChannels = -1L;
	b_obj->matlabCodegenIsDeleted = false;
	localDW->objisempty = true;
	Cortex_PPG_E_SystemCore_setup_n(&localDW->obj, iobj_0);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    ...
 */
void Cortex_PPG_EEG_MovingRMS(real_T rtu_0, B_MovingRMS_Cortex_PPG_EEG_T *localB,
	DW_MovingRMS_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cort_h_T *obj;
	dsp_simulink_MovingRMS_Cort_h_T *obj_0;
	real_T y;
	e_dsp_private_SlidingWindow_j_T *obj_1;
	e_dsp_private_SlidingWindow_j_T *obj_2;
	real_T cumRevIndex;
	real_T csum;
	real_T csumrev[49];
	real_T z;
	e_dsp_private_SlidingWindow_j_T *obj_3;
	e_dsp_private_SlidingWindow_j_T *obj_4;
	int16_T i;

	/* MATLABSystem: '<S33>/Moving RMS' */
	obj = &localDW->obj;
	obj_0 = obj;
	if (obj_0->TunablePropsChanged) {
		obj_0->TunablePropsChanged = false;
	}

	y = fabs(rtu_0);
	y *= y;
	obj_1 = obj->pStatistic;
	if (obj_1->isInitialized != 1L) {
		obj_2 = obj_1;
		obj_3 = obj_2;
		obj_3->isSetupComplete = false;
		obj_3->isInitialized = 1L;
		obj_4 = obj_3;
		obj_4->pCumSum = 0.0;
		for (i = 0; i < 49; i++) {
			obj_4->pCumSumRev[i] = 0.0;
		}

		obj_4->pCumRevIndex = 1.0;
		obj_3->isSetupComplete = true;
		obj_2->pCumSum = 0.0;
		for (i = 0; i < 49; i++) {
			obj_2->pCumSumRev[i] = 0.0;
		}

		obj_2->pCumRevIndex = 1.0;
	}

	cumRevIndex = obj_1->pCumRevIndex;
	csum = obj_1->pCumSum;
	for (i = 0; i < 49; i++) {
		csumrev[i] = obj_1->pCumSumRev[i];
	}

	csum += y;
	z = csumrev[(int16_T)cumRevIndex - 1] + csum;
	csumrev[(int16_T)cumRevIndex - 1] = y;
	if (cumRevIndex != 49.0) {
		cumRevIndex++;
	}
	else {
		cumRevIndex = 1.0;
		csum = 0.0;
		for (i = 47; i >= 0; i--) {
			csumrev[i] += csumrev[i + 1];
		}
	}

	y = z / 50.0;
	obj_1->pCumSum = csum;
	for (i = 0; i < 49; i++) {
		obj_1->pCumSumRev[i] = csumrev[i];
	}

	obj_1->pCumRevIndex = cumRevIndex;
	y = sqrt(y);
	localB->MovingRMS = y;

	/* End of MATLABSystem: '<S33>/Moving RMS' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    ...
 */
void Cortex_PPG_EEG_MovingRMS_Term(DW_MovingRMS_Cortex_PPG_EEG_T *localDW)
{
	/* Terminate for MATLABSystem: '<S33>/Moving RMS' */
	matlabCodegenHandle_matlabCod_g(&localDW->obj);
}

static void Cortex_PPG__SystemCore_setup_n2(dsp_simulink_MovingRMS_Cor_hv_T *obj,
	e_dsp_private_SlidingWindo_j0_T *iobj_0)
{
	dsp_simulink_MovingRMS_Cor_hv_T *obj_0;
	e_dsp_private_SlidingWindo_j0_T *iobj_0_0;
	dsp_MovingAverage_Cortex_PPG__T avrgObj;
	dsp_MovingAverage_Cortex_PPG__T *b_obj;
	obj->isSetupComplete = false;
	obj->isInitialized = 1L;
	obj_0 = obj;
	iobj_0_0 = iobj_0;
	obj_0->NumChannels = 1L;
	avrgObj.matlabCodegenIsDeleted = true;
	b_obj = &avrgObj;
	b_obj->matlabCodegenIsDeleted = false;
	iobj_0_0->isInitialized = 0L;
	b_obj = &avrgObj;
	if (!b_obj->matlabCodegenIsDeleted) {
		b_obj->matlabCodegenIsDeleted = true;
		if (b_obj->isInitialized == 1L) {
			b_obj->isInitialized = 2L;
		}
	}

	obj_0->pStatistic = iobj_0_0;
	obj->isSetupComplete = true;
	obj->TunablePropsChanged = false;
}

static real_T SlidingWindowAverageCG_stepIm_h(e_dsp_private_SlidingWindo_j0_T
	*obj, real_T u, B_MovingRMS2_Cortex_PPG_EEG_T *localB)
{
	real_T y;
	real_T cumRevIndex;
	real_T csum;
	real_T z;
	int16_T i;
	cumRevIndex = obj->pCumRevIndex;
	csum = obj->pCumSum;
	for (i = 0; i < 1999; i++) {
		localB->csumrev[i] = obj->pCumSumRev[i];
	}

	csum += u;
	z = localB->csumrev[(int16_T)cumRevIndex - 1] + csum;
	localB->csumrev[(int16_T)cumRevIndex - 1] = u;
	if (cumRevIndex != 1999.0) {
		cumRevIndex++;
	}
	else {
		cumRevIndex = 1.0;
		csum = 0.0;
		for (i = 1997; i >= 0; i--) {
			localB->csumrev[i] += localB->csumrev[i + 1];
		}
	}

	y = z / 2000.0;
	obj->pCumSum = csum;
	for (i = 0; i < 1999; i++) {
		obj->pCumSumRev[i] = localB->csumrev[i];
	}

	obj->pCumRevIndex = cumRevIndex;
	return y;
}

static void Cortex_PP_SystemCore_release_mt(dsp_simulink_MovingRMS_Cor_hv_T *obj)
{
	dsp_simulink_MovingRMS_Cor_hv_T *obj_0;
	e_dsp_private_SlidingWindo_j0_T *obj_1;
	if (obj->isInitialized == 1L) {
		obj_0 = obj;
		if (obj_0->isSetupComplete) {
			obj_1 = obj_0->pStatistic;
			if (obj_1->isInitialized == 1L) {
				obj_1->isInitialized = 2L;
			}

			obj_0->NumChannels = -1L;
		}
	}
}

static void Cortex_PPG_SystemCore_delete_as(dsp_simulink_MovingRMS_Cor_hv_T *obj)
{
	Cortex_PP_SystemCore_release_mt(obj);
}

static void matlabCodegenHandle_matlabCo_go(dsp_simulink_MovingRMS_Cor_hv_T *obj)
{
	if (!obj->matlabCodegenIsDeleted) {
		obj->matlabCodegenIsDeleted = true;
		Cortex_PPG_SystemCore_delete_as(obj);
	}
}

/*
 * System initialize for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS2_Init(DW_MovingRMS2_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cor_hv_T *obj;
	e_dsp_private_SlidingWindo_j0_T *obj_0;
	int16_T i;

	/* InitializeConditions for MATLABSystem: '<S68>/Moving RMS2' */
	obj = &localDW->obj;
	obj_0 = obj->pStatistic;
	if (obj_0->isInitialized == 1L) {
		obj_0->pCumSum = 0.0;
		for (i = 0; i < 1999; i++) {
			obj_0->pCumSumRev[i] = 0.0;
		}

		obj_0->pCumRevIndex = 1.0;
	}

	/* End of InitializeConditions for MATLABSystem: '<S68>/Moving RMS2' */
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS2_Start(DW_MovingRMS2_Cortex_PPG_EEG_T *localDW)
{
	e_dsp_private_SlidingWindo_j0_T *iobj_0;
	dsp_simulink_MovingRMS_Cor_hv_T *b_obj;

	/* Start for MATLABSystem: '<S68>/Moving RMS2' */
	localDW->obj.matlabCodegenIsDeleted = true;
	iobj_0 = &localDW->gobj_0;
	b_obj = &localDW->obj;
	b_obj->isInitialized = 0L;
	b_obj->NumChannels = -1L;
	b_obj->matlabCodegenIsDeleted = false;
	localDW->objisempty = true;
	Cortex_PPG__SystemCore_setup_n2(&localDW->obj, iobj_0);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS2(real_T rtu_0, B_MovingRMS2_Cortex_PPG_EEG_T
	*localB, DW_MovingRMS2_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Cor_hv_T *obj;
	dsp_simulink_MovingRMS_Cor_hv_T *obj_0;
	real_T y;
	e_dsp_private_SlidingWindo_j0_T *obj_1;
	e_dsp_private_SlidingWindo_j0_T *obj_2;
	e_dsp_private_SlidingWindo_j0_T *obj_3;
	e_dsp_private_SlidingWindo_j0_T *obj_4;
	int16_T i;

	/* MATLABSystem: '<S68>/Moving RMS2' */
	obj = &localDW->obj;
	obj_0 = obj;
	if (obj_0->TunablePropsChanged) {
		obj_0->TunablePropsChanged = false;
	}

	y = fabs(rtu_0);
	y *= y;
	obj_1 = obj->pStatistic;
	if (obj_1->isInitialized != 1L) {
		obj_2 = obj_1;
		obj_3 = obj_2;
		obj_3->isSetupComplete = false;
		obj_3->isInitialized = 1L;
		obj_4 = obj_3;
		obj_4->pCumSum = 0.0;
		for (i = 0; i < 1999; i++) {
			obj_4->pCumSumRev[i] = 0.0;
		}

		obj_4->pCumRevIndex = 1.0;
		obj_3->isSetupComplete = true;
		obj_2->pCumSum = 0.0;
		for (i = 0; i < 1999; i++) {
			obj_2->pCumSumRev[i] = 0.0;
		}

		obj_2->pCumRevIndex = 1.0;
	}

	y = SlidingWindowAverageCG_stepIm_h(obj_1, y, localB);
	y = sqrt(y);
	localB->MovingRMS2 = y;

	/* End of MATLABSystem: '<S68>/Moving RMS2' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS2_Term(DW_MovingRMS2_Cortex_PPG_EEG_T *localDW)
{
	/* Terminate for MATLABSystem: '<S68>/Moving RMS2' */
	matlabCodegenHandle_matlabCo_go(&localDW->obj);
}

static void Cortex_PPG_SystemCore_setup_n2i(dsp_simulink_MovingRMS_Co_hvs_T *obj,
	e_dsp_private_SlidingWind_j0g_T *iobj_0)
{
	dsp_simulink_MovingRMS_Co_hvs_T *obj_0;
	e_dsp_private_SlidingWind_j0g_T *iobj_0_0;
	dsp_MovingAverage_Cortex_PPG__T avrgObj;
	dsp_MovingAverage_Cortex_PPG__T *b_obj;
	obj->isSetupComplete = false;
	obj->isInitialized = 1L;
	obj_0 = obj;
	iobj_0_0 = iobj_0;
	obj_0->NumChannels = 1L;
	avrgObj.matlabCodegenIsDeleted = true;
	b_obj = &avrgObj;
	b_obj->matlabCodegenIsDeleted = false;
	iobj_0_0->isInitialized = 0L;
	b_obj = &avrgObj;
	if (!b_obj->matlabCodegenIsDeleted) {
		b_obj->matlabCodegenIsDeleted = true;
		if (b_obj->isInitialized == 1L) {
			b_obj->isInitialized = 2L;
		}
	}

	obj_0->pStatistic = iobj_0_0;
	obj->isSetupComplete = true;
	obj->TunablePropsChanged = false;
}

static real_T SlidingWindowAverageCG_stepI_h4(e_dsp_private_SlidingWind_j0g_T
	*obj, real_T u, B_MovingRMS1_Cortex_PPG_EEG_T *localB)
{
	real_T y;
	real_T cumRevIndex;
	real_T csum;
	real_T z;
	int16_T i;
	cumRevIndex = obj->pCumRevIndex;
	csum = obj->pCumSum;
	for (i = 0; i < 2999; i++) {
		localB->csumrev[i] = obj->pCumSumRev[i];
	}

	csum += u;
	z = localB->csumrev[(int16_T)cumRevIndex - 1] + csum;
	localB->csumrev[(int16_T)cumRevIndex - 1] = u;
	if (cumRevIndex != 2999.0) {
		cumRevIndex++;
	}
	else {
		cumRevIndex = 1.0;
		csum = 0.0;
		for (i = 2997; i >= 0; i--) {
			localB->csumrev[i] += localB->csumrev[i + 1];
		}
	}

	y = z / 3000.0;
	obj->pCumSum = csum;
	for (i = 0; i < 2999; i++) {
		obj->pCumSumRev[i] = localB->csumrev[i];
	}

	obj->pCumRevIndex = cumRevIndex;
	return y;
}

static void Cortex_P_SystemCore_release_mt2(dsp_simulink_MovingRMS_Co_hvs_T *obj)
{
	dsp_simulink_MovingRMS_Co_hvs_T *obj_0;
	e_dsp_private_SlidingWind_j0g_T *obj_1;
	if (obj->isInitialized == 1L) {
		obj_0 = obj;
		if (obj_0->isSetupComplete) {
			obj_1 = obj_0->pStatistic;
			if (obj_1->isInitialized == 1L) {
				obj_1->isInitialized = 2L;
			}

			obj_0->NumChannels = -1L;
		}
	}
}

static void Cortex_PP_SystemCore_delete_asm(dsp_simulink_MovingRMS_Co_hvs_T *obj)
{
	Cortex_P_SystemCore_release_mt2(obj);
}

static void matlabCodegenHandle_matlabC_goq(dsp_simulink_MovingRMS_Co_hvs_T *obj)
{
	if (!obj->matlabCodegenIsDeleted) {
		obj->matlabCodegenIsDeleted = true;
		Cortex_PP_SystemCore_delete_asm(obj);
	}
}

/*
 * System initialize for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS1_Init(DW_MovingRMS1_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Co_hvs_T *obj;
	e_dsp_private_SlidingWind_j0g_T *obj_0;
	int16_T i;

	/* InitializeConditions for MATLABSystem: '<S28>/Moving RMS1' */
	obj = &localDW->obj;
	obj_0 = obj->pStatistic;
	if (obj_0->isInitialized == 1L) {
		obj_0->pCumSum = 0.0;
		for (i = 0; i < 2999; i++) {
			obj_0->pCumSumRev[i] = 0.0;
		}

		obj_0->pCumRevIndex = 1.0;
	}

	/* End of InitializeConditions for MATLABSystem: '<S28>/Moving RMS1' */
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS1_Start(DW_MovingRMS1_Cortex_PPG_EEG_T *localDW)
{
	e_dsp_private_SlidingWind_j0g_T *iobj_0;
	dsp_simulink_MovingRMS_Co_hvs_T *b_obj;

	/* Start for MATLABSystem: '<S28>/Moving RMS1' */
	localDW->obj.matlabCodegenIsDeleted = true;
	iobj_0 = &localDW->gobj_0;
	b_obj = &localDW->obj;
	b_obj->isInitialized = 0L;
	b_obj->NumChannels = -1L;
	b_obj->matlabCodegenIsDeleted = false;
	localDW->objisempty = true;
	Cortex_PPG_SystemCore_setup_n2i(&localDW->obj, iobj_0);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS1(real_T rtu_0, B_MovingRMS1_Cortex_PPG_EEG_T
	*localB, DW_MovingRMS1_Cortex_PPG_EEG_T *localDW)
{
	dsp_simulink_MovingRMS_Co_hvs_T *obj;
	dsp_simulink_MovingRMS_Co_hvs_T *obj_0;
	real_T y;
	e_dsp_private_SlidingWind_j0g_T *obj_1;
	e_dsp_private_SlidingWind_j0g_T *obj_2;
	e_dsp_private_SlidingWind_j0g_T *obj_3;
	e_dsp_private_SlidingWind_j0g_T *obj_4;
	int16_T i;

	/* MATLABSystem: '<S28>/Moving RMS1' */
	obj = &localDW->obj;
	obj_0 = obj;
	if (obj_0->TunablePropsChanged) {
		obj_0->TunablePropsChanged = false;
	}

	y = fabs(rtu_0);
	y *= y;
	obj_1 = obj->pStatistic;
	if (obj_1->isInitialized != 1L) {
		obj_2 = obj_1;
		obj_3 = obj_2;
		obj_3->isSetupComplete = false;
		obj_3->isInitialized = 1L;
		obj_4 = obj_3;
		obj_4->pCumSum = 0.0;
		for (i = 0; i < 2999; i++) {
			obj_4->pCumSumRev[i] = 0.0;
		}

		obj_4->pCumRevIndex = 1.0;
		obj_3->isSetupComplete = true;
		obj_2->pCumSum = 0.0;
		for (i = 0; i < 2999; i++) {
			obj_2->pCumSumRev[i] = 0.0;
		}

		obj_2->pCumRevIndex = 1.0;
	}

	y = SlidingWindowAverageCG_stepI_h4(obj_1, y, localB);
	y = sqrt(y);
	localB->MovingRMS1 = y;

	/* End of MATLABSystem: '<S28>/Moving RMS1' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingRMS1_Term(DW_MovingRMS1_Cortex_PPG_EEG_T *localDW)
{
	/* Terminate for MATLABSystem: '<S28>/Moving RMS1' */
	matlabCodegenHandle_matlabC_goq(&localDW->obj);
}

static void SlidingWindowAverageCG_step_h4p(e_dsp_private_SlidingWin_j0gy_T *obj,
	const real_T u[128], real_T y[128], B_MovingAverage_Cortex_PPG_EE_T *localB)
{
	real_T cumRevIndex;
	real_T csum[128];
	int16_T cumRevIndex_0;
	int16_T b_k;
	real_T u_0;
	int16_T subsb_idx_0;
	int16_T subsb_idx_1;
	real_T csum_0;
	cumRevIndex = obj->pCumRevIndex;
	for (b_k = 0; b_k < 128; b_k++) {
		csum[b_k] = obj->pCumSum[b_k];
	}

	for (b_k = 0; b_k < 2432; b_k++) {
		localB->csumrev[b_k] = obj->pCumSumRev[b_k];
	}

	subsb_idx_1 = (int16_T)cumRevIndex;
	cumRevIndex_0 = (int16_T)cumRevIndex;
	for (b_k = 0; b_k < 128; b_k++) {
		csum_0 = csum[b_k];
		u_0 = u[b_k];
		csum_0 += u_0;
		y[b_k] = localB->csumrev[(19 * b_k + subsb_idx_1) - 1] + csum_0;
		localB->csumrev[(cumRevIndex_0 + 19 * b_k) - 1] = u_0;
		csum[b_k] = csum_0;
	}

	if (cumRevIndex != 19.0) {
		cumRevIndex++;
	}
	else {
		cumRevIndex = 1.0;
		for (b_k = 0; b_k < 128; b_k++) {
			csum[b_k] = 0.0;
			subsb_idx_1 = b_k + 1;
			for (cumRevIndex_0 = 17; cumRevIndex_0 >= 0; cumRevIndex_0--) {
				subsb_idx_0 = cumRevIndex_0 + 1;
				subsb_idx_0++;
				localB->csumrev[cumRevIndex_0 + 19 * b_k] += localB->csumrev
					[((subsb_idx_1 - 1) * 19 + subsb_idx_0) - 1];
			}
		}
	}

	for (b_k = 0; b_k < 128; b_k++) {
		csum_0 = y[b_k];
		csum_0 /= 20.0;
		y[b_k] = csum_0;
	}

	for (b_k = 0; b_k < 128; b_k++) {
		obj->pCumSum[b_k] = csum[b_k];
	}

	for (b_k = 0; b_k < 2432; b_k++) {
		obj->pCumSumRev[b_k] = localB->csumrev[b_k];
	}

	obj->pCumRevIndex = cumRevIndex;
}

static void Cortex__SystemCore_release_mt2c(dsp_simulink_MovingAverage_Co_T *obj)
{
	dsp_simulink_MovingAverage_Co_T *obj_0;
	e_dsp_private_SlidingWin_j0gy_T *obj_1;
	if (obj->isInitialized == 1L) {
		obj_0 = obj;
		if (obj_0->isSetupComplete) {
			obj_1 = obj_0->pStatistic;
			if (obj_1->isInitialized == 1L) {
				obj_1->isInitialized = 2L;
			}

			obj_0->NumChannels = -1L;
		}
	}
}

static void Cortex_P_SystemCore_delete_asmv(dsp_simulink_MovingAverage_Co_T *obj)
{
	Cortex__SystemCore_release_mt2c(obj);
}

static void matlabCodegenHandle_matlab_goqu(dsp_simulink_MovingAverage_Co_T *obj)
{
	if (!obj->matlabCodegenIsDeleted) {
		obj->matlabCodegenIsDeleted = true;
		Cortex_P_SystemCore_delete_asmv(obj);
	}
}

/*
 * System initialize for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_E_MovingAverage_Init(DW_MovingAverage_Cortex_PPG_E_T *localDW)
{
	dsp_simulink_MovingAverage_Co_T *obj;
	e_dsp_private_SlidingWin_j0gy_T *obj_0;
	int16_T i;

	/* InitializeConditions for MATLABSystem: '<S29>/Moving Average' */
	obj = &localDW->obj;
	obj_0 = obj->pStatistic;
	if (obj_0->isInitialized == 1L) {
		for (i = 0; i < 128; i++) {
			obj_0->pCumSum[i] = 0.0;
		}

		for (i = 0; i < 2432; i++) {
			obj_0->pCumSumRev[i] = 0.0;
		}

		obj_0->pCumRevIndex = 1.0;
	}

	/* End of InitializeConditions for MATLABSystem: '<S29>/Moving Average' */
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG__MovingAverage_Start(DW_MovingAverage_Cortex_PPG_E_T *localDW)
{
	e_dsp_private_SlidingWin_j0gy_T *iobj_0;
	dsp_simulink_MovingAverage_Co_T *b_obj;
	dsp_simulink_MovingAverage_Co_T *obj;

	/* Start for MATLABSystem: '<S29>/Moving Average' */
	localDW->obj.matlabCodegenIsDeleted = true;
	iobj_0 = &localDW->gobj_0;
	b_obj = &localDW->obj;
	b_obj->isInitialized = 0L;
	b_obj->NumChannels = -1L;
	b_obj->matlabCodegenIsDeleted = false;
	localDW->objisempty = true;
	b_obj = &localDW->obj;
	b_obj->isSetupComplete = false;
	b_obj->isInitialized = 1L;
	obj = b_obj;
	obj->NumChannels = 128L;
	iobj_0->isInitialized = 0L;
	obj->pStatistic = iobj_0;
	b_obj->isSetupComplete = true;
	b_obj->TunablePropsChanged = false;
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_EEG_MovingAverage(const real_T rtu_0[128],
	B_MovingAverage_Cortex_PPG_EE_T *localB, DW_MovingAverage_Cortex_PPG_E_T
	*localDW)
{
	real_T tmp[128];
	real_T u0[128];
	dsp_simulink_MovingAverage_Co_T *obj;
	dsp_simulink_MovingAverage_Co_T *obj_0;
	e_dsp_private_SlidingWin_j0gy_T *obj_1;
	e_dsp_private_SlidingWin_j0gy_T *obj_2;
	e_dsp_private_SlidingWin_j0gy_T *obj_3;
	e_dsp_private_SlidingWin_j0gy_T *obj_4;
	int16_T i;

	/* MATLABSystem: '<S29>/Moving Average' */
	for (i = 0; i < 128; i++) {
		u0[i] = rtu_0[i];
	}

	obj = &localDW->obj;
	obj_0 = obj;
	if (obj_0->TunablePropsChanged) {
		obj_0->TunablePropsChanged = false;
	}

	obj_1 = obj->pStatistic;
	if (obj_1->isInitialized != 1L) {
		obj_2 = obj_1;
		obj_3 = obj_2;
		obj_3->isSetupComplete = false;
		obj_3->isInitialized = 1L;
		obj_4 = obj_3;
		for (i = 0; i < 128; i++) {
			obj_4->pCumSum[i] = 0.0;
		}

		for (i = 0; i < 2432; i++) {
			obj_4->pCumSumRev[i] = 0.0;
		}

		obj_4->pCumRevIndex = 1.0;
		obj_3->isSetupComplete = true;
		for (i = 0; i < 128; i++) {
			obj_2->pCumSum[i] = 0.0;
		}

		for (i = 0; i < 2432; i++) {
			obj_2->pCumSumRev[i] = 0.0;
		}

		obj_2->pCumRevIndex = 1.0;
	}

	SlidingWindowAverageCG_step_h4p(obj_1, u0, tmp, localB);
	for (i = 0; i < 128; i++) {
		localB->MovingAverage[i] = tmp[i];
	}

	/* End of MATLABSystem: '<S29>/Moving Average' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Cortex_PPG_E_MovingAverage_Term(DW_MovingAverage_Cortex_PPG_E_T *localDW)
{
	/* Terminate for MATLABSystem: '<S29>/Moving Average' */
	matlabCodegenHandle_matlab_goqu(&localDW->obj);
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
	real_T y;
	real_T a;
	a = fabs(u0);
	y = fabs(u1);
	if (a < y) {
		a /= y;
		y *= sqrt(a * a + 1.0);
	}
	else if (a > y) {
		y /= a;
		y = sqrt(y * y + 1.0) * a;
	}
	else {
		if (!rtIsNaN(y)) {
			y = a * 1.4142135623730951;
		}
	}

	return y;
}

/*
 * Output and update for atomic system:
 *    '<S29>/MATLAB Function'
 *    '<S31>/MATLAB Function'
 */
void Cortex_PPG_EEG_MATLABFunction(const real_T rtu_u[256], real_T rty_y[128])
{
	real_T Input_fft[256];
	creal_T y[256];
	int16_T ix;
	int16_T ju;
	int16_T iy;
	int16_T b_k;
	int16_T istart;
	int16_T j;
	int16_T ihi;
	boolean_T tst;
	int16_T i;
	real_T temp_re;
	real_T temp_im;
	real_T twid_re;
	real_T twid_im;
	static const real_T b[129] = { 1.0, 0.99969881869620425, 0.99879545620517241,
	  0.99729045667869021, 0.99518472667219693, 0.99247953459871,
	  0.989176509964781, 0.98527764238894122, 0.98078528040323043,
	  0.97570213003852857, 0.970031253194544, 0.96377606579543984,
	  0.95694033573220882, 0.94952818059303667, 0.94154406518302081,
	  0.932992798834739, 0.92387953251128674, 0.91420975570353069,
	  0.90398929312344334, 0.89322430119551532, 0.881921264348355,
	  0.87008699110871146, 0.85772861000027212, 0.84485356524970712,
	  0.83146961230254524, 0.81758481315158371, 0.80320753148064494,
	  0.78834642762660634, 0.773010453362737, 0.75720884650648457,
	  0.74095112535495922, 0.724247082951467, 0.70710678118654757,
	  0.68954054473706683, 0.67155895484701833, 0.65317284295377676,
	  0.63439328416364549, 0.61523159058062682, 0.59569930449243336,
	  0.57580819141784534, 0.55557023301960218, 0.53499761988709715,
	  0.51410274419322166, 0.49289819222978404, 0.47139673682599764,
	  0.44961132965460654, 0.42755509343028208, 0.40524131400498986,
	  0.38268343236508978, 0.35989503653498811, 0.33688985339222005,
	  0.31368174039889152, 0.29028467725446233, 0.26671275747489837,
	  0.24298017990326387, 0.2191012401568698, 0.19509032201612825,
	  0.17096188876030122, 0.14673047445536175, 0.1224106751992162,
	  0.0980171403295606, 0.073564563599667426, 0.049067674327418015,
	  0.024541228522912288, 0.0, -0.024541228522912288, -0.049067674327418015,
	  -0.073564563599667426, -0.0980171403295606, -0.1224106751992162,
	  -0.14673047445536175, -0.17096188876030122, -0.19509032201612825,
	  -0.2191012401568698, -0.24298017990326387, -0.26671275747489837,
	  -0.29028467725446233, -0.31368174039889152, -0.33688985339222005,
	  -0.35989503653498811, -0.38268343236508978, -0.40524131400498986,
	  -0.42755509343028208, -0.44961132965460654, -0.47139673682599764,
	  -0.49289819222978404, -0.51410274419322166, -0.53499761988709715,
	  -0.55557023301960218, -0.57580819141784534, -0.59569930449243336,
	  -0.61523159058062682, -0.63439328416364549, -0.65317284295377676,
	  -0.67155895484701833, -0.68954054473706683, -0.70710678118654757,
	  -0.724247082951467, -0.74095112535495922, -0.75720884650648457,
	  -0.773010453362737, -0.78834642762660634, -0.80320753148064494,
	  -0.81758481315158371, -0.83146961230254524, -0.84485356524970712,
	  -0.85772861000027212, -0.87008699110871146, -0.881921264348355,
	  -0.89322430119551532, -0.90398929312344334, -0.91420975570353069,
	  -0.92387953251128674, -0.932992798834739, -0.94154406518302081,
	  -0.94952818059303667, -0.95694033573220882, -0.96377606579543984,
	  -0.970031253194544, -0.97570213003852857, -0.98078528040323043,
	  -0.98527764238894122, -0.989176509964781, -0.99247953459871,
	  -0.99518472667219693, -0.99729045667869021, -0.99879545620517241,
	  -0.99969881869620425, -1.0 };

	static const real_T c[129] = { 0.0, -0.024541228522912288,
	  -0.049067674327418015, -0.073564563599667426, -0.0980171403295606,
	  -0.1224106751992162, -0.14673047445536175, -0.17096188876030122,
	  -0.19509032201612825, -0.2191012401568698, -0.24298017990326387,
	  -0.26671275747489837, -0.29028467725446233, -0.31368174039889152,
	  -0.33688985339222005, -0.35989503653498811, -0.38268343236508978,
	  -0.40524131400498986, -0.42755509343028208, -0.44961132965460654,
	  -0.47139673682599764, -0.49289819222978404, -0.51410274419322166,
	  -0.53499761988709715, -0.55557023301960218, -0.57580819141784534,
	  -0.59569930449243336, -0.61523159058062682, -0.63439328416364549,
	  -0.65317284295377676, -0.67155895484701833, -0.68954054473706683,
	  -0.70710678118654757, -0.724247082951467, -0.74095112535495922,
	  -0.75720884650648457, -0.773010453362737, -0.78834642762660634,
	  -0.80320753148064494, -0.81758481315158371, -0.83146961230254524,
	  -0.84485356524970712, -0.85772861000027212, -0.87008699110871146,
	  -0.881921264348355, -0.89322430119551532, -0.90398929312344334,
	  -0.91420975570353069, -0.92387953251128674, -0.932992798834739,
	  -0.94154406518302081, -0.94952818059303667, -0.95694033573220882,
	  -0.96377606579543984, -0.970031253194544, -0.97570213003852857,
	  -0.98078528040323043, -0.98527764238894122, -0.989176509964781,
	  -0.99247953459871, -0.99518472667219693, -0.99729045667869021,
	  -0.99879545620517241, -0.99969881869620425, -1.0, -0.99969881869620425,
	  -0.99879545620517241, -0.99729045667869021, -0.99518472667219693,
	  -0.99247953459871, -0.989176509964781, -0.98527764238894122,
	  -0.98078528040323043, -0.97570213003852857, -0.970031253194544,
	  -0.96377606579543984, -0.95694033573220882, -0.94952818059303667,
	  -0.94154406518302081, -0.932992798834739, -0.92387953251128674,
	  -0.91420975570353069, -0.90398929312344334, -0.89322430119551532,
	  -0.881921264348355, -0.87008699110871146, -0.85772861000027212,
	  -0.84485356524970712, -0.83146961230254524, -0.81758481315158371,
	  -0.80320753148064494, -0.78834642762660634, -0.773010453362737,
	  -0.75720884650648457, -0.74095112535495922, -0.724247082951467,
	  -0.70710678118654757, -0.68954054473706683, -0.67155895484701833,
	  -0.65317284295377676, -0.63439328416364549, -0.61523159058062682,
	  -0.59569930449243336, -0.57580819141784534, -0.55557023301960218,
	  -0.53499761988709715, -0.51410274419322166, -0.49289819222978404,
	  -0.47139673682599764, -0.44961132965460654, -0.42755509343028208,
	  -0.40524131400498986, -0.38268343236508978, -0.35989503653498811,
	  -0.33688985339222005, -0.31368174039889152, -0.29028467725446233,
	  -0.26671275747489837, -0.24298017990326387, -0.2191012401568698,
	  -0.19509032201612825, -0.17096188876030122, -0.14673047445536175,
	  -0.1224106751992162, -0.0980171403295606, -0.073564563599667426,
	  -0.049067674327418015, -0.024541228522912288, -0.0 };

	creal_T *y_0;
	ix = 0;
	ju = 0;
	iy = 0;
	for (b_k = 0; b_k < 255; b_k++) {
		y[iy].re = rtu_u[ix];
		y[iy].im = 0.0;
		iy = 256;
		tst = true;
		while (tst) {
			iy >>= 1;
			ju ^= iy;
			tst = ((ju & iy) == 0);
		}

		iy = ju;
		ix++;
	}

	y[iy].re = rtu_u[ix];
	y[iy].im = 0.0;
	for (ix = 0; ix <= 255; ix += 2) {
		temp_re = y[ix + 1].re;
		temp_im = y[ix + 1].im;
		y[ix + 1].re = y[ix].re - y[ix + 1].re;
		y[ix + 1].im = y[ix].im - y[ix + 1].im;
		y[ix].re += temp_re;
		y[ix].im += temp_im;
	}

	ix = 2;
	ju = 4;
	b_k = 64;
	iy = 253;
	while (b_k > 0) {
		for (i = 0; i < iy; i += ju) {
			temp_re = y[i + ix].re;
			temp_im = y[i + ix].im;
			y[i + ix].re = y[i].re - temp_re;
			y[i + ix].im = y[i].im - temp_im;
			y[i].re += temp_re;
			y[i].im += temp_im;
		}

		istart = 1;
		for (j = b_k; j < 128; j += b_k) {
			twid_re = b[j];
			twid_im = c[j];
			i = istart;
			ihi = istart + iy;
			while (i < ihi) {
				temp_re = y[i + ix].re * twid_re - y[i + ix].im * twid_im;
				temp_im = y[i + ix].im * twid_re + y[i + ix].re * twid_im;
				y[i + ix].re = y[i].re - temp_re;
				y[i + ix].im = y[i].im - temp_im;
				y[i].re += temp_re;
				y[i].im += temp_im;
				i += ju;
			}

			istart++;
		}

		b_k /= 2;
		ix = ju;
		ju += ju;
		iy -= ix;
	}

	for (ix = 0; ix < 256; ix++) {
		y_0 = &y[ix];
		temp_re = y_0->re;
		temp_im = y_0->im;
		Input_fft[ix] = rt_hypotd_snf(temp_re, temp_im);
	}

	for (i = 0; i < 128; i++) {
		rty_y[i] = Input_fft[i] / 256.0;
	}
}

/* Function for MATLAB Function: '<S10>/HRVMetrics' */
static void Cortex_PPG_EEG_diff(const real_T x_data[], const int16_T x_size[2],
	real_T y_data[], int16_T y_size[2])
{
	real_T tmp1;
	int16_T ixLead;
	int16_T iyLead;
	int16_T m;
	real_T work_data_idx_0;
	int8_T ySize_idx_1;
	if (x_size[1] == 0) {
		y_size[0] = 1;
		y_size[1] = 0;
	}
	else {
		ixLead = x_size[1] - 1;
		if (ixLead >= 1) {
			ixLead = 1;
		}

		if (ixLead < 1) {
			y_size[0] = 1;
			y_size[1] = 0;
		}
		else {
			ySize_idx_1 = (int8_T)(x_size[1] - 1);
			y_size[0] = 1;
			y_size[1] = ySize_idx_1;
			if (y_size[1] != 0) {
				ixLead = 1;
				iyLead = 0;
				work_data_idx_0 = x_data[0];
				for (m = 2; m <= x_size[1]; m++) {
					tmp1 = work_data_idx_0;
					work_data_idx_0 = x_data[ixLead];
					tmp1 = x_data[ixLead] - tmp1;
					ixLead++;
					y_data[iyLead] = tmp1;
					iyLead++;
				}
			}
		}
	}
}

/* Function for MATLAB Function: '<S10>/HRVMetrics' */
static real_T Cortex_PPG_EEG_mean_h(const real_T x_data[], const int16_T x_size
	[2])
{
	real_T b_y;
	int16_T k;
	if (x_size[1] == 0) {
		b_y = 0.0;
	}
	else {
		b_y = x_data[0];
		for (k = 2; k <= x_size[1]; k++) {
			b_y += x_data[k - 1];
		}
	}

	return b_y / (real_T)x_size[1];
}

/* Function for MATLAB Function: '<S1>/Display Brain Map' */
static real_T Cortex_PPG_EEG_sum(const real_T x[10])
{
	real_T y;
	int16_T k;
	y = x[0];
	for (k = 0; k < 9; k++) {
		y += x[k + 1];
	}

	return y;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static real_T Cortex_PPG_EEG_mean(const real_T x[240])
{
	real_T b_y;
	int16_T k;
	b_y = x[0];
	for (k = 0; k < 239; k++) {
		b_y += x[k + 1];
	}

	return b_y / 240.0;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static real_T Cortex_PPG_EEG_sum_b(const real_T x[240])
{
	real_T y;
	int16_T k;
	y = x[0];
	for (k = 0; k < 239; k++) {
		y += x[k + 1];
	}

	return y;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_parse_inputs(const cell_wrap_6_Cortex_PPG_EEG_T x1[2],
	real_T x[240], boolean_T *isreal_x, real_T y[240])
{
	int16_T i;
	for (i = 0; i < 240; i++) {
		x[i] = x1[0].f1[i];
		y[i] = x1[1].f1[i];
	}

	*isreal_x = true;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_welch_options(real_T *options1_nfft, real_T
	*options1_Fs, real_T *options1_conflevel, boolean_T *options1_average,
	boolean_T *options1_maxhold, boolean_T *options1_minhold, boolean_T
	*options1_MIMO, boolean_T *options1_centerdc, char_T options1_range[8])
{
	int16_T i;
	static const char_T b[8] = { 'o', 'n', 'e', 's', 'i', 'd', 'e', 'd' };

	*options1_average = true;
	*options1_maxhold = false;
	*options1_minhold = false;
	*options1_MIMO = false;
	*options1_conflevel = (rtNaN);
	for (i = 0; i < 8; i++) {
		options1_range[i] = b[i];
	}

	*options1_centerdc = false;
	*options1_nfft = 128.0;
	*options1_Fs = 5.0;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_welchparse(const cell_wrap_6_Cortex_PPG_EEG_T x1[2],
	real_T x[240], boolean_T *isreal_x, real_T y[240], real_T *options_nfft,
	real_T *options_Fs, char_T options_range[8])
{
	boolean_T b_isreal_x;
	real_T expl_temp;
	boolean_T expl_temp_0;
	boolean_T expl_temp_1;
	boolean_T expl_temp_2;
	boolean_T expl_temp_3;
	Cortex_PPG_EEG_parse_inputs(x1, x, &b_isreal_x, y);
	*isreal_x = true;
	Cortex_PPG_EEG_welch_options(options_nfft, options_Fs, &expl_temp, &b_isreal_x,
		&expl_temp_0, &expl_temp_1, &expl_temp_2, &expl_temp_3, options_range);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_bsxfun(const real_T a_data[], const real_T b[128],
	real_T c[128])
{
	int16_T k;
	for (k = 0; k < 128; k++) {
		c[k] = a_data[k] * b[k];
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex__generate_twiddle_tables(real_T costab_data[], int16_T
	costab_size[2], real_T sintab_data[], int16_T sintab_size[2], int16_T
	sintabinv_size[2])
{
	real_T costab1q_data[33];
	int16_T k;
	costab1q_data[0] = 1.0;
	for (k = 0; k < 16; k++) {
		costab1q_data[k + 1] = cos(((real_T)k + 1.0) * 0.049087385212340517);
	}

	for (k = 0; k < 15; k++) {
		costab1q_data[k + 17] = sin((32.0 - ((real_T)k + 17.0)) *
			0.049087385212340517);
	}

	costab1q_data[32] = 0.0;
	costab_size[0] = 1;
	costab_size[1] = 65;
	sintab_size[0] = 1;
	sintab_size[1] = 65;
	costab_data[0] = 1.0;
	sintab_data[0] = 0.0;
	for (k = 0; k < 32; k++) {
		costab_data[k + 1] = costab1q_data[k + 1];
		sintab_data[k + 1] = -costab1q_data[31 - k];
		costab_data[k + 33] = -costab1q_data[31 - k];
		sintab_data[k + 33] = -costab1q_data[k + 1];
	}

	sintabinv_size[0] = 1;
	sintabinv_size[1] = 0;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_psdfreqvec(real_T varargin_4, real_T w_data[],
	int16_T *w_size)
{
	real_T Fs1;
	real_T freq_res;
	real_T w1_data[128];
	int16_T i;
	if (rtIsNaN(varargin_4)) {
		Fs1 = 6.2831853071795862;
	}
	else {
		Fs1 = varargin_4;
	}

	freq_res = Fs1 / 128.0;
	for (i = 0; i < 128; i++) {
		w1_data[i] = freq_res * (real_T)i;
	}

	w1_data[64] = Fs1 / 2.0;
	w1_data[127] = Fs1 - freq_res;
	*w_size = 128;
	for (i = 0; i < 128; i++) {
		w_data[i] = w1_data[i];
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_computeDFT(const real_T xin[128], real_T varargin_1,
	creal_T Xx_data[], int16_T *Xx_size, real_T f_data[], int16_T *f_size)
{
	real_T costab_data[65];
	real_T sintab_data[65];
	int16_T ix;
	int16_T ju;
	int16_T iy;
	int16_T i;
	int16_T k;
	int16_T istart;
	int16_T j;
	int16_T ihi;
	boolean_T tst;
	int16_T costab_size[2];
	int16_T sintab_size[2];
	int16_T sintabinv_size[2];
	real_T temp_re;
	real_T temp_im;
	real_T twid_re;
	real_T twid_im;
	Cortex__generate_twiddle_tables(costab_data, costab_size, sintab_data,
		sintab_size, sintabinv_size);
	*Xx_size = 128;
	ix = 0;
	ju = 0;
	iy = 0;
	for (k = 0; k < 127; k++) {
		Xx_data[iy].re = xin[ix];
		Xx_data[iy].im = 0.0;
		iy = 128;
		tst = true;
		while (tst) {
			iy >>= 1;
			ju ^= iy;
			tst = ((ju & iy) == 0);
		}

		iy = ju;
		ix++;
	}

	Xx_data[iy].re = xin[ix];
	Xx_data[iy].im = 0.0;
	for (ix = 0; ix <= 127; ix += 2) {
		temp_re = Xx_data[ix + 1].re;
		temp_im = Xx_data[ix + 1].im;
		Xx_data[ix + 1].re = Xx_data[ix].re - Xx_data[ix + 1].re;
		Xx_data[ix + 1].im = Xx_data[ix].im - Xx_data[ix + 1].im;
		Xx_data[ix].re += temp_re;
		Xx_data[ix].im += temp_im;
	}

	ix = 2;
	ju = 4;
	k = 32;
	iy = 125;
	while (k > 0) {
		for (i = 0; i < iy; i += ju) {
			temp_re = Xx_data[i + ix].re;
			temp_im = Xx_data[i + ix].im;
			Xx_data[i + ix].re = Xx_data[i].re - temp_re;
			Xx_data[i + ix].im = Xx_data[i].im - temp_im;
			Xx_data[i].re += temp_re;
			Xx_data[i].im += temp_im;
		}

		istart = 1;
		for (j = k; j < 64; j += k) {
			twid_re = costab_data[j];
			twid_im = sintab_data[j];
			i = istart;
			ihi = istart + iy;
			while (i < ihi) {
				temp_re = Xx_data[i + ix].re * twid_re - Xx_data[i + ix].im * twid_im;
				temp_im = Xx_data[i + ix].im * twid_re + Xx_data[i + ix].re * twid_im;
				Xx_data[i + ix].re = Xx_data[i].re - temp_re;
				Xx_data[i + ix].im = Xx_data[i].im - temp_im;
				Xx_data[i].re += temp_re;
				Xx_data[i].im += temp_im;
				i += ju;
			}

			istart++;
		}

		k /= 2;
		ix = ju;
		ju += ju;
		iy -= ix;
	}

	Cortex_PPG_EEG_psdfreqvec(varargin_1, f_data, f_size);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_computeperiodogram_e(const real_T x_data[], real_T Fs,
	creal_T Pxx_data[], int16_T *Pxx_size, real_T F_data[], int16_T *F_size)
{
	real_T U;
	real_T c[128];
	int16_T i;
	real_T Pxx_data_re;
	real_T Pxx_data_im;
	real_T Pxx_data_re_0;
	real_T Pxx_data_im_0;
	creal_T Pxx_data_0;
	static const real_T b[128] = { 0.080000000000000016, 0.0805628485414398,
	  0.082250016781060975, 0.085057375935459867, 0.088978055926352384,
	  0.094002462192806557, 0.10011829917074133, 0.10731060038223184,
	  0.11556176506098892, 0.12485160122438393, 0.13515737508661335,
	  0.14645386669208266, 0.15871343163286344, 0.17190606869919217,
	  0.18599949329745791, 0.20095921645601261, 0.21674862922546451,
	  0.23332909226691151, 0.25066003040887846, 0.26869903194156103,
	  0.28740195240538668, 0.30672302261990442, 0.32661496068863893,
	  0.3470290877058147, 0.36791544688179512, 0.38922292579571871,
	  0.41089938147615723, 0.432891768003705, 0.4551462663232323,
	  0.47760841594813225, 0.500223248234257, 0.52293542089740164,
	  0.54568935344514691, 0.56842936319163861, 0.59109980152245012,
	  0.61364519007606688, 0.63601035650873416, 0.65814056951042721,
	  0.67998167274153865, 0.70148021736251565, 0.722583592832128,
	  0.74324015565427792, 0.76339935575828854, 0.78301186020339864,
	  0.80202967390473434, 0.82040625708532566, 0.83809663916673849,
	  0.855057528819616, 0.87124741990481613, 0.88662669304588992,
	  0.9011577125843333, 0.9148049186803513, 0.92753491433374446,
	  0.93931654711196488, 0.95012098538533851, 0.95992178888289459,
	  0.96869497339613986, 0.97641906947243462, 0.98307517495434227,
	  0.98864700123637483, 0.99312091312594108, 0.99648596221094743,
	  0.9987339136523965, 0.99985926633641831, 0.99985926633641831,
	  0.9987339136523965, 0.99648596221094743, 0.99312091312594108,
	  0.98864700123637483, 0.98307517495434227, 0.97641906947243462,
	  0.96869497339613986, 0.95992178888289459, 0.95012098538533851,
	  0.93931654711196488, 0.92753491433374446, 0.9148049186803513,
	  0.9011577125843333, 0.88662669304588992, 0.87124741990481613,
	  0.855057528819616, 0.83809663916673849, 0.82040625708532566,
	  0.80202967390473434, 0.78301186020339864, 0.76339935575828854,
	  0.74324015565427792, 0.722583592832128, 0.70148021736251565,
	  0.67998167274153865, 0.65814056951042721, 0.63601035650873416,
	  0.61364519007606688, 0.59109980152245012, 0.56842936319163861,
	  0.54568935344514691, 0.52293542089740164, 0.500223248234257,
	  0.47760841594813225, 0.4551462663232323, 0.432891768003705,
	  0.41089938147615723, 0.38922292579571871, 0.36791544688179512,
	  0.3470290877058147, 0.32661496068863893, 0.30672302261990442,
	  0.28740195240538668, 0.26869903194156103, 0.25066003040887846,
	  0.23332909226691151, 0.21674862922546451, 0.20095921645601261,
	  0.18599949329745791, 0.17190606869919217, 0.15871343163286344,
	  0.14645386669208266, 0.13515737508661335, 0.12485160122438393,
	  0.11556176506098892, 0.10731060038223184, 0.10011829917074133,
	  0.094002462192806557, 0.088978055926352384, 0.085057375935459867,
	  0.082250016781060975, 0.0805628485414398, 0.080000000000000016 };

	Cortex_PPG_EEG_bsxfun(x_data, b, c);
	Cortex_PPG_EEG_computeDFT(c, Fs, Pxx_data, Pxx_size, F_data, F_size);
	U = 0.0;
	for (i = 0; i < 128; i++) {
		U += b[i] * b[i];
	}

	*Pxx_size = 128;
	for (i = 0; i < 128; i++) {
		Pxx_data_0 = Pxx_data[i];
		Pxx_data_re = Pxx_data_0.re;
		Pxx_data_im = Pxx_data_0.im;
		Pxx_data_im_0 = -Pxx_data_im;
		Pxx_data_re_0 = Pxx_data_re * Pxx_data_re - Pxx_data_im * Pxx_data_im_0;
		Pxx_data_im = Pxx_data_re * Pxx_data_im_0 + Pxx_data_im * Pxx_data_re;
		if (Pxx_data_im == 0.0) {
			Pxx_data_re = Pxx_data_re_0 / U;
			Pxx_data_im = 0.0;
		}
		else if (Pxx_data_re_0 == 0.0) {
			Pxx_data_re = 0.0;
			Pxx_data_im /= U;
		}
		else {
			Pxx_data_re = Pxx_data_re_0 / U;
			Pxx_data_im /= U;
		}

		Pxx_data_0.re = Pxx_data_re;
		Pxx_data_0.im = Pxx_data_im;
		Pxx_data[i] = Pxx_data_0;
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static boolean_T Cortex_PPG_EEG_strcmp(const char_T a[8])
{
	int16_T ret;
	static const char_T b[8] = { 'o', 'n', 'e', 's', 'i', 'd', 'e', 'd' };

	ret = memcmp(&a[0], &b[0], 8);
	return ret == 0;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_computepsd(const creal_T Sxx1_data[], const int16_T
	Sxx1_size[2], const real_T w2_data[], const int16_T w2_size[2], const char_T
	range[8], creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size, char_T varargout_3_data[],
	int16_T varargout_3_size[2])
{
	creal_T Sxx_unscaled_data[65];
	creal_T Sxx_data[128];
	creal_T varargout_f1_data[128];
	creal_T y_data[64];
	boolean_T empty_non_axis_sizes;
	int16_T result;
	int16_T b_result;
	int16_T c_result;
	int16_T d_result;
	creal_T Sxx_unscaled_data_0;
	creal_T Sxx_unscaled_data_1;
	int16_T i;
	int16_T i_0;
	int16_T loop_ub;
	int16_T Sxx_size_idx_0;
	real_T ar;
	real_T ai;
	creal_T *Sxx_data_0;
	if (Cortex_PPG_EEG_strcmp(range)) {
		loop_ub = Sxx1_size[1];
		for (i_0 = 0; i_0 < loop_ub; i_0++) {
			for (i = 0; i < 65; i++) {
				Sxx_unscaled_data[i + 65 * i_0] = Sxx1_data[Sxx1_size[0] * i_0 + i];
			}
		}

		Sxx_size_idx_0 = Sxx1_size[1];
		for (i_0 = 0; i_0 < Sxx_size_idx_0; i_0++) {
			for (i = 0; i < 63; i++) {
				y_data[i + 63 * i_0].re = Sxx_unscaled_data[(65 * i_0 + i) + 1].re * 2.0;
				y_data[i + 63 * i_0].im = Sxx_unscaled_data[(65 * i_0 + i) + 1].im * 2.0;
			}
		}

		if (Sxx1_size[1] != 0) {
			result = Sxx1_size[1];
		}
		else if (Sxx_size_idx_0 != 0) {
			result = 1;
		}
		else {
			result = 0;
		}

		empty_non_axis_sizes = (result == 0);
		if (empty_non_axis_sizes) {
			b_result = 1;
			c_result = 63;
			d_result = 1;
		}
		else {
			b_result = (Sxx1_size[1] != 0);
			if (Sxx_size_idx_0 != 0) {
				c_result = 63;
			}
			else {
				c_result = 0;
			}

			d_result = (Sxx1_size[1] != 0);
		}

		loop_ub = Sxx1_size[1];
		for (i_0 = 0; i_0 < loop_ub; i_0++) {
			Sxx_unscaled_data_0 = Sxx_unscaled_data[65 * i_0];
		}

		loop_ub = Sxx1_size[1];
		for (i_0 = 0; i_0 < loop_ub; i_0++) {
			Sxx_unscaled_data_1 = Sxx_unscaled_data[65 * i_0 + 64];
		}

		Sxx_size_idx_0 = (b_result + c_result) + d_result;
		for (i_0 = 0; i_0 < result; i_0++) {
			if (0 <= b_result - 1) {
				Sxx_data[Sxx_size_idx_0 * i_0] = Sxx_unscaled_data_0;
			}
		}

		for (i_0 = 0; i_0 < result; i_0++) {
			for (i = 0; i < c_result; i++) {
				Sxx_data[(i + b_result) + Sxx_size_idx_0 * i_0] = y_data[63 * i_0 + i];
			}
		}

		for (i_0 = 0; i_0 < result; i_0++) {
			if (0 <= d_result - 1) {
				Sxx_data[(b_result + c_result) + Sxx_size_idx_0 * i_0] =
					Sxx_unscaled_data_1;
			}
		}

		*varargout_2_size = 65;
		for (i_0 = 0; i_0 < 65; i_0++) {
			varargout_2_data[i_0] = w2_data[i_0];
		}
	}
	else {
		Sxx_size_idx_0 = Sxx1_size[0];
		result = Sxx1_size[1];
		loop_ub = Sxx1_size[0] * Sxx1_size[1] - 1;
		for (i_0 = 0; i_0 <= loop_ub; i_0++) {
			Sxx_data[i_0] = Sxx1_data[i_0];
		}

		*varargout_2_size = w2_size[0];
		loop_ub = w2_size[0];
		for (i_0 = 0; i_0 < loop_ub; i_0++) {
			varargout_2_data[i_0] = w2_data[i_0];
		}
	}

	loop_ub = Sxx_size_idx_0 * result - 1;
	for (i_0 = 0; i_0 <= loop_ub; i_0++) {
		Sxx_data_0 = &Sxx_data[i_0];
		ar = Sxx_data_0->re;
		ai = Sxx_data_0->im;
		if (ai == 0.0) {
			varargout_f1_data[i_0].re = ar / 5.0;
			varargout_f1_data[i_0].im = 0.0;
		}
		else if (ar == 0.0) {
			varargout_f1_data[i_0].re = 0.0;
			varargout_f1_data[i_0].im = ai / 5.0;
		}
		else {
			varargout_f1_data[i_0].re = ar / 5.0;
			varargout_f1_data[i_0].im = ai / 5.0;
		}
	}

	varargout_1_size[0] = Sxx_size_idx_0;
	varargout_1_size[1] = result;
	loop_ub = Sxx_size_idx_0 * result - 1;
	for (i_0 = 0; i_0 <= loop_ub; i_0++) {
		varargout_1_data[i_0] = varargout_f1_data[i_0];
	}

	varargout_3_size[0] = 1;
	varargout_3_size[1] = 2;
	varargout_3_data[0] = 'H';
	varargout_3_data[1] = 'z';
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PP_localComputeSpectra_f(const real_T Sxx_data[], const
	real_T x[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T options, creal_T
	Pxx_data[], int16_T Pxx_size[2], real_T w_data[], int16_T *w_size, char_T
	units_data[], int16_T units_size[2])
{
	creal_T Sxx1_data[128];
	creal_T Sxxk_data[128];
	real_T b_w_data[128];
	int16_T ii;
	real_T x_data[192];
	creal_T Sxx1_data_0[128];
	int16_T b_w[2];
	int16_T loop_ub;
	int16_T Sxx1_size[2];
	int16_T Sxxk_size;
	int16_T i;
	real_T re;
	real_T im;
	creal_T Sxx1_data_1;
	creal_T *Sxxk_data_0;
	Sxx1_size[0] = 0;
	Sxx1_size[1] = 0;
	for (ii = 0; ii < 2; ii++) {
		Sxxk_size = ii << 6;
		i = ii << 6;
		loop_ub = i - Sxxk_size;
		for (i = 0; i <= loop_ub + 127; i++) {
			x_data[i] = x[Sxxk_size + i];
		}

		Cortex_PPG_computeperiodogram_e(x_data, 5.0, Sxxk_data, &Sxxk_size, b_w_data,
			&i);
		if (ii + 1 == 1) {
			Sxx1_size[0] = 128;
			Sxx1_size[1] = 1;
			for (Sxxk_size = 0; Sxxk_size < 128; Sxxk_size++) {
				Sxxk_data_0 = &Sxxk_data[Sxxk_size];
				Sxx1_data[Sxxk_size].re = Sxx_data[Sxxk_size] + Sxxk_data_0->re;
				Sxx1_data[Sxxk_size].im = Sxxk_data_0->im;
			}
		}
		else {
			loop_ub = Sxx1_size[0];
			i = Sxx1_size[0];
			for (Sxxk_size = 0; Sxxk_size < loop_ub; Sxxk_size++) {
				Sxxk_data_0 = &Sxxk_data[Sxxk_size];
				Sxx1_data_1 = Sxx1_data[Sxxk_size];
				Sxx1_data_0[Sxxk_size].re = Sxx1_data_1.re + Sxxk_data_0->re;
				Sxx1_data_0[Sxxk_size].im = Sxx1_data_1.im + Sxxk_data_0->im;
			}

			Sxx1_size[0] = i;
			Sxx1_size[1] = 1;
			for (Sxxk_size = 0; Sxxk_size < i; Sxxk_size++) {
				Sxx1_data[Sxxk_size] = Sxx1_data_0[Sxxk_size];
			}
		}
	}

	ii = Sxx1_size[0] * Sxx1_size[1];
	loop_ub = ii - 1;
	for (Sxxk_size = 0; Sxxk_size <= loop_ub; Sxxk_size++) {
		Sxx1_data_1 = Sxx1_data[Sxxk_size];
		re = Sxx1_data_1.re;
		im = Sxx1_data_1.im;
		if (im == 0.0) {
			re /= 2.0;
			im = 0.0;
		}
		else if (re == 0.0) {
			re = 0.0;
			im /= 2.0;
		}
		else {
			re /= 2.0;
			im /= 2.0;
		}

		Sxx1_data_1.re = re;
		Sxx1_data_1.im = im;
		Sxx1_data[Sxxk_size] = Sxx1_data_1;
	}

	Cortex_PPG_EEG_psdfreqvec(5.0, b_w_data, &i);
	b_w[0] = i;
	b_w[1] = 1;
	Cortex_PPG_EEG_computepsd(Sxx1_data, Sxx1_size, b_w_data, b_w, options.range,
		Pxx_data, Pxx_size, w_data, w_size, units_data, units_size);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG__localComputeSpectra(const real_T Sxx_data[], const
	real_T x[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T options, creal_T
	Pxx_data[], int16_T Pxx_size[2])
{
	creal_T Sxx1_data[128];
	creal_T Sxxk_data[128];
	real_T w_data[128];
	real_T b_w_data[128];
	char_T units_data[10];
	int16_T ii;
	real_T x_data[192];
	creal_T Sxx1_data_0[128];
	int16_T w[2];
	int16_T loop_ub;
	int16_T Sxx1_size[2];
	int16_T Sxxk_size;
	int16_T units_size[2];
	int16_T i;
	real_T re;
	real_T im;
	creal_T Sxx1_data_1;
	creal_T *Sxxk_data_0;
	Sxx1_size[0] = 0;
	Sxx1_size[1] = 0;
	for (ii = 0; ii < 2; ii++) {
		Sxxk_size = ii << 6;
		i = ii << 6;
		loop_ub = i - Sxxk_size;
		for (i = 0; i <= loop_ub + 127; i++) {
			x_data[i] = x[Sxxk_size + i];
		}

		Cortex_PPG_computeperiodogram_e(x_data, 5.0, Sxxk_data, &Sxxk_size, w_data,
			&i);
		if (ii + 1 == 1) {
			Sxx1_size[0] = 128;
			Sxx1_size[1] = 1;
			for (Sxxk_size = 0; Sxxk_size < 128; Sxxk_size++) {
				Sxxk_data_0 = &Sxxk_data[Sxxk_size];
				Sxx1_data[Sxxk_size].re = Sxx_data[Sxxk_size] + Sxxk_data_0->re;
				Sxx1_data[Sxxk_size].im = Sxxk_data_0->im;
			}
		}
		else {
			loop_ub = Sxx1_size[0];
			i = Sxx1_size[0];
			for (Sxxk_size = 0; Sxxk_size < loop_ub; Sxxk_size++) {
				Sxxk_data_0 = &Sxxk_data[Sxxk_size];
				Sxx1_data_1 = Sxx1_data[Sxxk_size];
				Sxx1_data_0[Sxxk_size].re = Sxx1_data_1.re + Sxxk_data_0->re;
				Sxx1_data_0[Sxxk_size].im = Sxx1_data_1.im + Sxxk_data_0->im;
			}

			Sxx1_size[0] = i;
			Sxx1_size[1] = 1;
			for (Sxxk_size = 0; Sxxk_size < i; Sxxk_size++) {
				Sxx1_data[Sxxk_size] = Sxx1_data_0[Sxxk_size];
			}
		}
	}

	ii = Sxx1_size[0] * Sxx1_size[1];
	loop_ub = ii - 1;
	for (Sxxk_size = 0; Sxxk_size <= loop_ub; Sxxk_size++) {
		Sxx1_data_1 = Sxx1_data[Sxxk_size];
		re = Sxx1_data_1.re;
		im = Sxx1_data_1.im;
		if (im == 0.0) {
			re /= 2.0;
			im = 0.0;
		}
		else if (re == 0.0) {
			re = 0.0;
			im /= 2.0;
		}
		else {
			re /= 2.0;
			im /= 2.0;
		}

		Sxx1_data_1.re = re;
		Sxx1_data_1.im = im;
		Sxx1_data[Sxxk_size] = Sxx1_data_1;
	}

	Cortex_PPG_EEG_psdfreqvec(5.0, w_data, &i);
	w[0] = i;
	w[1] = 1;
	Cortex_PPG_EEG_computepsd(Sxx1_data, Sxx1_size, w_data, w, options.range,
		Pxx_data, Pxx_size, b_w_data, &Sxxk_size, units_data, units_size);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_validateinputs(const b_cell_wrap_14_Cortex_PPG_EEG_T
	x[2], real_T x1_data[], int16_T *x1_size, real_T *Lx, real_T y_data[], int16_T
	*y_size, boolean_T *is2sig)
{
	int16_T i;
	int16_T loop_ub;
	*y_size = x[1].f1.size;
	loop_ub = x[1].f1.size;
	for (i = 0; i < loop_ub; i++) {
		y_data[i] = x[1].f1.data[i];
	}

	*is2sig = true;
	*x1_size = x[0].f1.size;
	loop_ub = x[0].f1.size;
	for (i = 0; i < loop_ub; i++) {
		x1_data[i] = x[0].f1.data[i];
	}

	*Lx = x[0].f1.size;
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_computeDFT_o(const real_T xin_data[], real_T
	varargin_1, creal_T Xx_data[], int16_T Xx_size[2], real_T f_data[], int16_T
	*f_size)
{
	real_T costab_data[65];
	real_T sintab_data[65];
	int16_T ix;
	int16_T ju;
	int16_T iy;
	int16_T i;
	int16_T k;
	int16_T istart;
	int16_T j;
	int16_T ihi;
	boolean_T tst;
	int16_T costab_size[2];
	int16_T sintab_size[2];
	int16_T sintabinv_size[2];
	real_T temp_re;
	real_T temp_im;
	real_T twid_re;
	real_T twid_im;
	Cortex__generate_twiddle_tables(costab_data, costab_size, sintab_data,
		sintab_size, sintabinv_size);
	Xx_size[0] = 128;
	Xx_size[1] = 1;
	ix = 0;
	ju = 0;
	iy = 0;
	for (k = 0; k < 127; k++) {
		Xx_data[iy].re = xin_data[ix];
		Xx_data[iy].im = 0.0;
		iy = 128;
		tst = true;
		while (tst) {
			iy >>= 1;
			ju ^= iy;
			tst = ((ju & iy) == 0);
		}

		iy = ju;
		ix++;
	}

	Xx_data[iy].re = xin_data[ix];
	Xx_data[iy].im = 0.0;
	for (ix = 0; ix <= 127; ix += 2) {
		temp_re = Xx_data[ix + 1].re;
		temp_im = Xx_data[ix + 1].im;
		Xx_data[ix + 1].re = Xx_data[ix].re - Xx_data[ix + 1].re;
		Xx_data[ix + 1].im = Xx_data[ix].im - Xx_data[ix + 1].im;
		Xx_data[ix].re += temp_re;
		Xx_data[ix].im += temp_im;
	}

	ix = 2;
	ju = 4;
	k = 32;
	iy = 125;
	while (k > 0) {
		for (i = 0; i < iy; i += ju) {
			temp_re = Xx_data[i + ix].re;
			temp_im = Xx_data[i + ix].im;
			Xx_data[i + ix].re = Xx_data[i].re - temp_re;
			Xx_data[i + ix].im = Xx_data[i].im - temp_im;
			Xx_data[i].re += temp_re;
			Xx_data[i].im += temp_im;
		}

		istart = 1;
		for (j = k; j < 64; j += k) {
			twid_re = costab_data[j];
			twid_im = sintab_data[j];
			i = istart;
			ihi = istart + iy;
			while (i < ihi) {
				temp_re = Xx_data[i + ix].re * twid_re - Xx_data[i + ix].im * twid_im;
				temp_im = Xx_data[i + ix].im * twid_re + Xx_data[i + ix].re * twid_im;
				Xx_data[i + ix].re = Xx_data[i].re - temp_re;
				Xx_data[i + ix].im = Xx_data[i].im - temp_im;
				Xx_data[i].re += temp_re;
				Xx_data[i].im += temp_im;
				i += ju;
			}

			istart++;
		}

		k /= 2;
		ix = ju;
		ju += ju;
		iy -= ix;
	}

	Cortex_PPG_EEG_psdfreqvec(varargin_1, f_data, f_size);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_bsxfun_b(const creal_T a_data[], const creal_T
	b_data[], creal_T c_data[], int16_T c_size[2])
{
	int16_T k;
	creal_T a_data_0;
	creal_T b_data_0;
	c_size[0] = 128;
	c_size[1] = 1;
	for (k = 0; k < 128; k++) {
		b_data_0 = b_data[k];
		a_data_0 = a_data[k];
		c_data[k].re = a_data_0.re * b_data_0.re - a_data_0.im * b_data_0.im;
		c_data[k].im = a_data_0.re * b_data_0.im + a_data_0.im * b_data_0.re;
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_E_computeperiodogram(const
	b_cell_wrap_14_Cortex_PPG_EEG_T x[2], real_T Fs, creal_T Pxx_data[], int16_T
	Pxx_size[2], real_T F_data[], int16_T *F_size)
{
	real_T U;
	real_T x1_data[192];
	real_T y_data[192];
	boolean_T is2sig;
	creal_T Xx_data[128];
	creal_T Yy_data[128];
	real_T c[128];
	creal_T Yy_data_0[128];
	int16_T x1_size;
	int16_T y_size;
	int16_T Yy_size[2];
	real_T ar;
	real_T ai;
	static const real_T b[128] = { 0.080000000000000016, 0.0805628485414398,
	  0.082250016781060975, 0.085057375935459867, 0.088978055926352384,
	  0.094002462192806557, 0.10011829917074133, 0.10731060038223184,
	  0.11556176506098892, 0.12485160122438393, 0.13515737508661335,
	  0.14645386669208266, 0.15871343163286344, 0.17190606869919217,
	  0.18599949329745791, 0.20095921645601261, 0.21674862922546451,
	  0.23332909226691151, 0.25066003040887846, 0.26869903194156103,
	  0.28740195240538668, 0.30672302261990442, 0.32661496068863893,
	  0.3470290877058147, 0.36791544688179512, 0.38922292579571871,
	  0.41089938147615723, 0.432891768003705, 0.4551462663232323,
	  0.47760841594813225, 0.500223248234257, 0.52293542089740164,
	  0.54568935344514691, 0.56842936319163861, 0.59109980152245012,
	  0.61364519007606688, 0.63601035650873416, 0.65814056951042721,
	  0.67998167274153865, 0.70148021736251565, 0.722583592832128,
	  0.74324015565427792, 0.76339935575828854, 0.78301186020339864,
	  0.80202967390473434, 0.82040625708532566, 0.83809663916673849,
	  0.855057528819616, 0.87124741990481613, 0.88662669304588992,
	  0.9011577125843333, 0.9148049186803513, 0.92753491433374446,
	  0.93931654711196488, 0.95012098538533851, 0.95992178888289459,
	  0.96869497339613986, 0.97641906947243462, 0.98307517495434227,
	  0.98864700123637483, 0.99312091312594108, 0.99648596221094743,
	  0.9987339136523965, 0.99985926633641831, 0.99985926633641831,
	  0.9987339136523965, 0.99648596221094743, 0.99312091312594108,
	  0.98864700123637483, 0.98307517495434227, 0.97641906947243462,
	  0.96869497339613986, 0.95992178888289459, 0.95012098538533851,
	  0.93931654711196488, 0.92753491433374446, 0.9148049186803513,
	  0.9011577125843333, 0.88662669304588992, 0.87124741990481613,
	  0.855057528819616, 0.83809663916673849, 0.82040625708532566,
	  0.80202967390473434, 0.78301186020339864, 0.76339935575828854,
	  0.74324015565427792, 0.722583592832128, 0.70148021736251565,
	  0.67998167274153865, 0.65814056951042721, 0.63601035650873416,
	  0.61364519007606688, 0.59109980152245012, 0.56842936319163861,
	  0.54568935344514691, 0.52293542089740164, 0.500223248234257,
	  0.47760841594813225, 0.4551462663232323, 0.432891768003705,
	  0.41089938147615723, 0.38922292579571871, 0.36791544688179512,
	  0.3470290877058147, 0.32661496068863893, 0.30672302261990442,
	  0.28740195240538668, 0.26869903194156103, 0.25066003040887846,
	  0.23332909226691151, 0.21674862922546451, 0.20095921645601261,
	  0.18599949329745791, 0.17190606869919217, 0.15871343163286344,
	  0.14645386669208266, 0.13515737508661335, 0.12485160122438393,
	  0.11556176506098892, 0.10731060038223184, 0.10011829917074133,
	  0.094002462192806557, 0.088978055926352384, 0.085057375935459867,
	  0.082250016781060975, 0.0805628485414398, 0.080000000000000016 };

	creal_T *Yy_data_1;
	Cortex_PPG_EEG_validateinputs(x, x1_data, &x1_size, &U, y_data, &y_size,
		&is2sig);
	Cortex_PPG_EEG_bsxfun(x1_data, b, c);
	Cortex_PPG_EEG_computeDFT(c, Fs, Xx_data, &x1_size, F_data, F_size);
	U = 0.0;
	for (x1_size = 0; x1_size < 128; x1_size++) {
		U += b[x1_size] * b[x1_size];
	}

	Cortex_PPG_EEG_bsxfun(y_data, b, c);
	Cortex_PPG_EEG_computeDFT_o(c, Fs, Yy_data, Yy_size, F_data, F_size);
	for (x1_size = 0; x1_size < 128; x1_size++) {
		Yy_data_1 = &Yy_data[x1_size];
		Yy_data_0[x1_size].re = Yy_data_1->re;
		Yy_data_0[x1_size].im = -Yy_data_1->im;
	}

	Cortex_PPG_EEG_bsxfun_b(Xx_data, Yy_data_0, Yy_data, Yy_size);
	Pxx_size[0] = 128;
	Pxx_size[1] = 1;
	for (x1_size = 0; x1_size < 128; x1_size++) {
		Yy_data_1 = &Yy_data[x1_size];
		ar = Yy_data_1->re;
		ai = Yy_data_1->im;
		if (ai == 0.0) {
			Pxx_data[x1_size].re = ar / U;
			Pxx_data[x1_size].im = 0.0;
		}
		else if (ar == 0.0) {
			Pxx_data[x1_size].re = 0.0;
			Pxx_data[x1_size].im = ai / U;
		}
		else {
			Pxx_data[x1_size].re = ar / U;
			Pxx_data[x1_size].im = ai / U;
		}
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_P_localComputeSpectra_fy(const real_T Sxx_data[], const
	real_T x[240], const real_T y[240], const skmiWvEOpZdNetwOYghtMI_Cortex_T
	options, creal_T Pxx_data[], int16_T Pxx_size[2])
{
	creal_T Sxx1_data[128];
	creal_T Sxxk_data[128];
	real_T w_data[128];
	real_T b_w_data[128];
	char_T units_data[10];
	int16_T i;
	b_cell_wrap_14_Cortex_PPG_EEG_T b;
	b_cell_wrap_14_Cortex_PPG_EEG_T c;
	b_cell_wrap_14_Cortex_PPG_EEG_T b_0[2];
	int16_T tmp;
	int16_T loop_ub;
	int16_T i_0;
	int16_T Sxx1_size[2];
	int16_T Sxxk_size[2];
	int16_T w_size;
	int16_T units_size[2];
	real_T Sxx1_data_re;
	real_T Sxx1_data_im;
	creal_T Sxx1_data_0;
	creal_T *Sxxk_data_0;
	Sxx1_size[0] = 0;
	Sxx1_size[1] = 0;
	for (i = 0; i < 2; i++) {
		w_size = i << 6;
		tmp = i << 6;
		b.f1.size = (tmp - w_size) + 128;
		loop_ub = tmp - w_size;
		tmp = i << 6;
		i_0 = i << 6;
		c.f1.size = (i_0 - tmp) + 128;
		for (i_0 = 0; i_0 <= loop_ub + 127; i_0++) {
			b.f1.data[i_0] = x[w_size + i_0];
			c.f1.data[i_0] = y[tmp + i_0];
		}

		b_0[0] = b;
		b_0[1] = c;
		Cortex_PPG_E_computeperiodogram(b_0, 5.0, Sxxk_data, Sxxk_size, w_data,
			&w_size);
		if (i + 1 == 1) {
			Sxx1_size[0] = 128;
			Sxx1_size[1] = 1;
			for (w_size = 0; w_size < 128; w_size++) {
				Sxxk_data_0 = &Sxxk_data[w_size];
				Sxx1_data[w_size].re = Sxx_data[w_size] + Sxxk_data_0->re;
				Sxx1_data[w_size].im = Sxxk_data_0->im;
			}
		}
		else {
			w_size = Sxx1_size[0] * Sxx1_size[1];
			loop_ub = w_size - 1;
			for (w_size = 0; w_size <= loop_ub; w_size++) {
				Sxxk_data_0 = &Sxxk_data[w_size];
				Sxx1_data_0 = Sxx1_data[w_size];
				Sxx1_data_re = Sxx1_data_0.re;
				Sxx1_data_im = Sxx1_data_0.im;
				Sxx1_data_re += Sxxk_data_0->re;
				Sxx1_data_im += Sxxk_data_0->im;
				Sxx1_data_0.re = Sxx1_data_re;
				Sxx1_data_0.im = Sxx1_data_im;
				Sxx1_data[w_size] = Sxx1_data_0;
			}
		}
	}

	w_size = Sxx1_size[0] * Sxx1_size[1];
	loop_ub = w_size - 1;
	for (w_size = 0; w_size <= loop_ub; w_size++) {
		Sxx1_data_0 = Sxx1_data[w_size];
		Sxx1_data_re = Sxx1_data_0.re;
		Sxx1_data_im = Sxx1_data_0.im;
		if (Sxx1_data_im == 0.0) {
			Sxx1_data_re /= 2.0;
			Sxx1_data_im = 0.0;
		}
		else if (Sxx1_data_re == 0.0) {
			Sxx1_data_re = 0.0;
			Sxx1_data_im /= 2.0;
		}
		else {
			Sxx1_data_re /= 2.0;
			Sxx1_data_im /= 2.0;
		}

		Sxx1_data_0.re = Sxx1_data_re;
		Sxx1_data_0.im = Sxx1_data_im;
		Sxx1_data[w_size] = Sxx1_data_0;
	}

	Cortex_PPG_EEG_psdfreqvec(5.0, w_data, &w_size);
	Sxxk_size[0] = w_size;
	Sxxk_size[1] = 1;
	Cortex_PPG_EEG_computepsd(Sxx1_data, Sxx1_size, w_data, Sxxk_size,
		options.range, Pxx_data, Pxx_size, b_w_data, &w_size, units_data, units_size);
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_abs(const creal_T x_data[], const int16_T x_size[2],
	real_T y_data[], int16_T y_size[2])
{
	int16_T nx;
	int16_T k;
	uint8_T b_idx_0;
	uint8_T b_idx_1;
	nx = x_size[0] * x_size[1];
	b_idx_0 = (uint8_T)x_size[0];
	b_idx_1 = (uint8_T)x_size[1];
	y_size[0] = b_idx_0;
	y_size[1] = b_idx_1;
	for (k = 0; k < nx; k++) {
		y_data[k] = rt_hypotd_snf(x_data[k].re, x_data[k].im);
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_power(const real_T a_data[], const int16_T a_size[2],
	real_T y_data[], int16_T y_size[2])
{
	int16_T nx;
	int16_T ztemp_size_idx_1;
	uint8_T b_idx_0;
	uint8_T b_idx_1;
	b_idx_0 = (uint8_T)a_size[0];
	b_idx_1 = (uint8_T)a_size[1];
	nx = b_idx_0;
	ztemp_size_idx_1 = b_idx_1;
	y_size[0] = b_idx_0;
	y_size[1] = b_idx_1;
	nx *= ztemp_size_idx_1;
	for (ztemp_size_idx_1 = 0; ztemp_size_idx_1 < nx; ztemp_size_idx_1++) {
		y_data[ztemp_size_idx_1] = a_data[ztemp_size_idx_1] *
			a_data[ztemp_size_idx_1];
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_bsxfun_bf(const creal_T a_data[], const int16_T
	a_size[2], const creal_T b_data[], const int16_T b_size[2], creal_T c_data[],
	int16_T c_size[2])
{
	int16_T sck;
	int16_T acoef;
	int16_T bcoef;
	int16_T b_k;
	uint8_T csz_idx_0;
	uint8_T csz_idx_1;
	if (b_size[0] == 1) {
		sck = a_size[0];
	}
	else if (a_size[0] == 1) {
		sck = b_size[0];
	}
	else if (a_size[0] == b_size[0]) {
		sck = a_size[0];
	}
	else {
		acoef = b_size[0];
		sck = a_size[0];
		if (acoef < sck) {
			sck = acoef;
		}
	}

	csz_idx_0 = (uint8_T)sck;
	if (b_size[1] == 1) {
		sck = a_size[1];
	}
	else {
		sck = 0;
	}

	csz_idx_1 = (uint8_T)sck;
	c_size[0] = csz_idx_0;
	c_size[1] = csz_idx_1;
	if ((c_size[0] != 0) && (c_size[1] != 0)) {
		sck = c_size[0];
		acoef = (a_size[0] != 1);
		bcoef = (b_size[0] != 1);
		for (b_k = 0; b_k < sck; b_k++) {
			c_data[b_k].re = a_data[acoef * b_k].re * b_data[bcoef * b_k].re -
				a_data[acoef * b_k].im * b_data[bcoef * b_k].im;
			c_data[b_k].im = a_data[acoef * b_k].re * b_data[bcoef * b_k].im +
				a_data[acoef * b_k].im * b_data[bcoef * b_k].re;
		}
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_welch(const cell_wrap_6_Cortex_PPG_EEG_T x[2],
	creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size)
{
	skmiWvEOpZdNetwOYghtMI_Cortex_T options;
	real_T x1[240];
	boolean_T unusedU1;
	real_T b_y1[240];
	creal_T Pxx_data[128];
	char_T units_data[10];
	creal_T Pyy_data[128];
	creal_T Pxy_data[128];
	real_T b_data[128];
	creal_T tmp_data[128];
	real_T tmp_data_0[128];
	int16_T i;
	int16_T loop_ub;
	int16_T Pxx_size[2];
	int16_T units_size[2];
	int16_T Pxy_size[2];
	int16_T b_size[2];
	int16_T tmp_size[2];
	real_T ar;
	real_T br;
	real_T bi;
	real_T brm;
	real_T bim;
	creal_T *tmp_data_1;
	Cortex_PPG_EEG_welchparse(x, x1, &unusedU1, b_y1, &options.nfft, &options.Fs,
		options.range);
	options.nfft = 128.0;
	options.Fs = 5.0;
	memset(&tmp_data_0[0], 0, sizeof(real_T) << 7U);
	Cortex_PP_localComputeSpectra_f(tmp_data_0, x1, options, Pxx_data, Pxx_size,
		varargout_2_data, varargout_2_size, units_data, units_size);
	memset(&tmp_data_0[0], 0, sizeof(real_T) << 7U);
	Cortex_PPG__localComputeSpectra(tmp_data_0, b_y1, options, Pyy_data,
		units_size);
	memset(&tmp_data_0[0], 0, sizeof(real_T) << 7U);
	Cortex_P_localComputeSpectra_fy(tmp_data_0, x1, b_y1, options, Pxy_data,
		Pxy_size);
	Cortex_PPG_EEG_abs(Pxy_data, Pxy_size, b_data, b_size);
	Cortex_PPG_EEG_power(b_data, b_size, tmp_data_0, tmp_size);
	Cortex_PPG_EEG_bsxfun_bf(Pxx_data, Pxx_size, Pyy_data, units_size, tmp_data,
		b_size);
	Pxy_size[0] = tmp_size[0];
	Pxy_size[1] = tmp_size[1];
	loop_ub = tmp_size[0] * tmp_size[1];
	for (i = 0; i < loop_ub; i++) {
		tmp_data_1 = &tmp_data[i];
		ar = tmp_data_0[i];
		br = tmp_data_1->re;
		bi = tmp_data_1->im;
		if (bi == 0.0) {
			Pxy_data[i].re = ar / br;
			Pxy_data[i].im = 0.0;
		}
		else if (br == 0.0) {
			if (ar == 0.0) {
				Pxy_data[i].re = 0.0 / bi;
				Pxy_data[i].im = 0.0;
			}
			else {
				Pxy_data[i].re = 0.0;
				Pxy_data[i].im = -(ar / bi);
			}
		}
		else {
			brm = fabs(br);
			bim = fabs(bi);
			if (brm > bim) {
				brm = bi / br;
				br += brm * bi;
				bi = brm * 0.0 + ar;
				ar = 0.0 - brm * ar;
				Pxy_data[i].re = bi / br;
				Pxy_data[i].im = ar / br;
			}
			else if (bim == brm) {
				br = br > 0.0 ? 0.5 : -0.5;
				bim = bi > 0.0 ? 0.5 : -0.5;
				bi = ar * br + 0.0 * bim;
				ar = 0.0 * br - ar * bim;
				Pxy_data[i].re = bi / brm;
				Pxy_data[i].im = ar / brm;
			}
			else {
				brm = br / bi;
				br = brm * br + bi;
				bi = brm * ar;
				ar = brm * 0.0 - ar;
				Pxy_data[i].re = bi / br;
				Pxy_data[i].im = ar / br;
			}
		}
	}

	varargout_1_size[0] = Pxy_size[0];
	varargout_1_size[1] = Pxy_size[1];
	loop_ub = Pxy_size[0] * Pxy_size[1] - 1;
	for (i = 0; i <= loop_ub; i++) {
		varargout_1_data[i] = Pxy_data[i];
	}
}

/* Function for MATLAB Function: '<S7>/MATLAB Function' */
static void Cortex_PPG_EEG_mscohere(const real_T x[240], const real_T y[240],
	creal_T varargout_1_data[], int16_T varargout_1_size[2], real_T
	varargout_2_data[], int16_T *varargout_2_size)
{
	cell_wrap_6_Cortex_PPG_EEG_T b;
	cell_wrap_6_Cortex_PPG_EEG_T c;
	int16_T i;
	cell_wrap_6_Cortex_PPG_EEG_T b_0[2];
	for (i = 0; i < 240; i++) {
		b.f1[i] = x[i];
		c.f1[i] = y[i];
	}

	b_0[0] = b;
	b_0[1] = c;
	Cortex_PPG_EEG_welch(b_0, varargout_1_data, varargout_1_size, varargout_2_data,
		varargout_2_size);
}

/* Model step function */
void Cortex_PPG_EEG_step(void)
{
	int32_T k;
	int32_T uyIdx;
	int32_T currentOffset;
	int32_T inputIdx;
	int32_T inputSegment;
	int32_T currentOffset_0;
	int32_T jIdx;
	int16_T RwaveIndices[30];
	real_T RR_Interval_data[28];
	real_T b_rMSSD_data[27];
	int16_T m1;
	real_T absdiff_data[28];
	real_T xbar;
	real_T z1_data[27];
	int16_T c_k;
	real_T scale;
	real_T t;
	real_T One_y_Indices_data[300];
	int16_T ii_data[300];
	real_T TotalPower_F7_F8;
	real_T TotalPower_T5_T6;
	real_T TotalPower_O1_O2;
	real_T TotalPower_F3_F4;
	real_T TotalPower_C3_C4;
	real_T varargin_1[10];
	int16_T k_k;
	int16_T m_k;
	int16_T o_k;
	real_T HRV[240];
	real_T EEG[240];
	creal_T cxy_data[128];
	real_T fc_data[128];
	int16_T i;
	real_T RwaveIndices_data[29];
	real_T tmp;
	real_T tmp_0[301];
	real_T tmp_1;
	real_T tmp_2;
	real_T tmp_3;
	real_T tmp_4;
	real_T tmp_5;
	real_T tmp_6;
	real_T tmp_7;
	real_T tmp_8;
	real_T tmp_9;
	int16_T loop_ub;
	int16_T RR_Interval_size[2];
	int16_T z1_size[2];
	int16_T RwaveIndices_size[2];
	int16_T tmp_size[2];
	int16_T ZeroCross_Index_idx_1;
	int16_T One_y_Indices_size_idx_1;
	static const int16_T d[300] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
	  14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
	  33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
	  52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
	  71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
	  90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
	  107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
	  122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
	  137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
	  152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166,
	  167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181,
	  182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
	  197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
	  212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226,
	  227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
	  242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
	  257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271,
	  272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286,
	  287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299 };

	boolean_T guard1 = false;
	boolean_T exitg1;

	/* S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
	for (i = 0; i < 2500; i++) {
		Cortex_PPG_EEG_B.TappedDelay1[i] = Cortex_PPG_EEG_DW.TappedDelay1_X[i];
	}

	/* End of S-Function (sfix_udelay): '<S10>/Tapped Delay1' */

	/* MATLAB Function: '<S10>/HRVMetrics' */
	for (c_k = 0; c_k < 30; c_k++) {
		RwaveIndices[c_k] = 0;
	}

	i = 1;
	for (m1 = 0; m1 < 2500; m1++) {
		if (Cortex_PPG_EEG_B.TappedDelay1[2499 - m1] > 0.5) {
			RwaveIndices[i - 1] = 2500 - m1;
			i++;
		}

		if (i > 30) {
			i = 1;
		}
	}

	if (i <= 4) {
		t = 0.0;
		xbar = 0.0;
		scale = 0.0;
	}
	else {
		loop_ub = i - 1;
		RwaveIndices_size[0L] = 1;
		RwaveIndices_size[1L] = loop_ub;
		for (c_k = 0; c_k < loop_ub; c_k++) {
			RwaveIndices_data[c_k] = RwaveIndices[c_k];
		}

		Cortex_PPG_EEG_diff(RwaveIndices_data, RwaveIndices_size, absdiff_data,
			tmp_size);
		RR_Interval_size[0] = 1;
		RR_Interval_size[1] = tmp_size[1];
		loop_ub = tmp_size[0] * tmp_size[1];
		for (c_k = 0; c_k < loop_ub; c_k++) {
			RR_Interval_data[c_k] = -1000.0 * absdiff_data[c_k] / 250.0;
		}

		m1 = RR_Interval_size[1];
		switch (RR_Interval_size[1]) {
		case 0:
			xbar = (rtNaN);
			break;

		case 1:
			if (!rtIsInf(RR_Interval_data[0])) {
				xbar = 0.0;
			}
			else {
				xbar = (rtNaN);
			}
			break;

		default:
			xbar = RR_Interval_data[0];
			for (c_k = 2; c_k <= m1; c_k++) {
				xbar += RR_Interval_data[c_k - 1];
			}

			xbar /= (real_T)RR_Interval_size[1];
			for (c_k = 0; c_k < m1; c_k++) {
				absdiff_data[c_k] = fabs(RR_Interval_data[c_k] - xbar);
			}

			xbar = 0.0;
			scale = 3.3121686421112381E-170;
			for (c_k = 0; c_k < RR_Interval_size[1]; c_k++) {
				if (absdiff_data[c_k] > scale) {
					t = scale / absdiff_data[c_k];
					xbar = xbar * t * t + 1.0;
					scale = absdiff_data[c_k];
				}
				else {
					t = absdiff_data[c_k] / scale;
					xbar += t * t;
				}
			}

			xbar = scale * sqrt(xbar);
			xbar /= sqrt((real_T)RR_Interval_size[1] - 1.0);
			break;
		}

		Cortex_PPG_EEG_diff(RR_Interval_data, RR_Interval_size, absdiff_data,
			RwaveIndices_size);
		i = (int8_T)RwaveIndices_size[1];
		z1_size[0] = 1;
		z1_size[1] = i;
		loop_ub = i - 1;
		for (c_k = 0; c_k <= loop_ub; c_k++) {
			z1_data[c_k] = b_rMSSD_data[c_k];
		}

		for (c_k = 0; c_k < i; c_k++) {
			z1_data[c_k] = absdiff_data[c_k] * absdiff_data[c_k];
		}

		scale = sqrt(Cortex_PPG_EEG_mean_h(z1_data, z1_size));
		t = 60.0 / (Cortex_PPG_EEG_mean_h(RR_Interval_data, RR_Interval_size) /
			1000.0);
	}

	Cortex_PPG_EEG_B.y_g[0] = t;
	Cortex_PPG_EEG_B.y_g[1] = xbar;
	Cortex_PPG_EEG_B.y_g[2] = scale;

	/* End of MATLAB Function: '<S10>/HRVMetrics' */

	/* S-Function (sfix_udelay): '<S10>/Tapped Delay' */
	for (i = 0; i < 300; i++) {
		Cortex_PPG_EEG_B.TappedDelay[i] = Cortex_PPG_EEG_DW.TappedDelay_X[i];
	}

	/* End of S-Function (sfix_udelay): '<S10>/Tapped Delay' */

	/* Delay: '<S10>/Delay' */
	for (i = 0; i < 301; i++) {
		Cortex_PPG_EEG_B.Delay[i] = Cortex_PPG_EEG_DW.Delay_DSTATE[i];
	}

	/* End of Delay: '<S10>/Delay' */
	for (i = 0; i < 300; i++) {
		/* SignalConversion generated from: '<S70>/ SFunction ' incorporates:
		 *  MATLAB Function: '<S10>/MATLAB Function'
		 */
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[i] =
			Cortex_PPG_EEG_B.TappedDelay[i];
	}

	for (i = 0; i < 301; i++) {
		/* SignalConversion generated from: '<S70>/ SFunction ' incorporates:
		 *  MATLAB Function: '<S10>/MATLAB Function'
		 */
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[i + 300] =
			Cortex_PPG_EEG_B.Delay[i];

		/* MATLAB Function: '<S10>/MATLAB Function' */
		Cortex_PPG_EEG_B.y_b[i] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[i
			+ 300];
	}

	/* MATLAB Function: '<S10>/MATLAB Function' */
	ZeroCross_Index_idx_1 = 0;
	guard1 = false;
	if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[298] > 0.0005) &&
		(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[299] < -0.0005)) {
		guard1 = true;
	}
	else if (Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[298] < -0.0005) {
		if (Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[299] > 0.0005) {
			guard1 = true;
		}
		else {
			tmp = Cortex_PPG_EEG_B.y_b[300];
			for (c_k = 0; c_k < 299; c_k++) {
				tmp_0[c_k] = Cortex_PPG_EEG_B.y_b[c_k + 1];
			}

			tmp_0[299] = 0.0;
			tmp_0[300] = tmp;
			for (c_k = 0; c_k < 301; c_k++) {
				Cortex_PPG_EEG_B.y_b[c_k] = tmp_0[c_k];
			}
		}
	}
	else {
		tmp = Cortex_PPG_EEG_B.y_b[300];
		for (c_k = 0; c_k < 299; c_k++) {
			tmp_0[c_k] = Cortex_PPG_EEG_B.y_b[c_k + 1];
		}

		tmp_0[299] = 0.0;
		tmp_0[300] = tmp;
		for (c_k = 0; c_k < 301; c_k++) {
			Cortex_PPG_EEG_B.y_b[c_k] = tmp_0[c_k];
		}
	}

	if (guard1) {
		m1 = 298;
		exitg1 = false;
		while ((!exitg1) && (m1 > 2)) {
			if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1 - 2] > 0.0005) &&
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1] < -0.0005)) {
				ZeroCross_Index_idx_1 = m1;
				exitg1 = true;
			}
			else if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1 - 2] <
				-0.0005) &&
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1] > 0.0005))
			{
				ZeroCross_Index_idx_1 = m1;
				exitg1 = true;
			}
			else {
				m1--;
			}
		}

		m1 = ZeroCross_Index_idx_1;
		loop_ub = -ZeroCross_Index_idx_1;
		for (c_k = 0; c_k <= loop_ub + 299; c_k++) {
			One_y_Indices_data[c_k] =
				Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1 +
				c_k];
		}

		if (300 - ZeroCross_Index_idx_1 <= 2) {
			if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1]
				<
				Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1
				+ 1]) || (rtIsNaN
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1])
					&& (!rtIsNaN
					(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1
						+ 1])))) {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1
					+ 1];
				i = 2;
			}
			else {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1];
				i = 1;
			}
		}
		else {
			if (!rtIsNaN
			(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1]))
			{
				i = 1;
			}
			else {
				i = 0;
				c_k = 2;
				exitg1 = false;
				while ((!exitg1) && (c_k <= 300 - ZeroCross_Index_idx_1)) {
					if (!rtIsNaN(One_y_Indices_data[c_k - 1])) {
						i = c_k;
						exitg1 = true;
					}
					else {
						c_k++;
					}
				}
			}

			if (i == 0) {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[ZeroCross_Index_idx_1];
				i = 1;
			}
			else {
				xbar = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n
					[(ZeroCross_Index_idx_1 + i) - 1];
				for (c_k = i; c_k < 300 - m1; c_k++) {
					if (xbar < Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1 + c_k])
					{
						xbar = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_n[m1 + c_k];
						i = c_k + 1;
					}
				}
			}
		}

		m1 = 0;
		c_k = 0;
		exitg1 = false;
		while ((!exitg1) && (c_k < 300)) {
			if (Cortex_PPG_EEG_B.y_b[d[c_k]] != 0.0) {
				m1++;
				ii_data[m1 - 1] = c_k + 1;
				if (m1 >= 300) {
					exitg1 = true;
				}
				else {
					c_k++;
				}
			}
			else {
				c_k++;
			}
		}

		if (1 > m1) {
			m1 = 0;
		}

		One_y_Indices_size_idx_1 = m1;
		loop_ub = m1 - 1;
		for (c_k = 0; c_k <= loop_ub; c_k++) {
			One_y_Indices_data[c_k] = ii_data[c_k];
		}

		if (One_y_Indices_size_idx_1 == 0) {
			m1 = 1;
		}
		else if (One_y_Indices_size_idx_1 <= 2) {
			if (One_y_Indices_size_idx_1 == 1) {
				m1 = (int16_T)One_y_Indices_data[0];
			}
			else if ((int16_T)One_y_Indices_data[0] < (int16_T)One_y_Indices_data[1])
			{
				m1 = (int16_T)One_y_Indices_data[1];
			}
			else {
				m1 = (int16_T)One_y_Indices_data[0];
			}
		}
		else {
			m1 = (int16_T)One_y_Indices_data[0];
			for (c_k = 1; c_k < One_y_Indices_size_idx_1; c_k++) {
				if (m1 < (int16_T)One_y_Indices_data[c_k]) {
					m1 = (int16_T)One_y_Indices_data[c_k];
				}
			}
		}

		if ((xbar > Cortex_PPG_EEG_B.y_b[300]) && ((ZeroCross_Index_idx_1 + i) - m1 >
			100) && (ZeroCross_Index_idx_1 + i < 298) && (i > 2)) {
			Cortex_PPG_EEG_B.y_b[(ZeroCross_Index_idx_1 + i) - 1] = 1.0;
			xbar *= 0.2;
			if (xbar > 2.0) {
				xbar = 2.0;
			}

			for (c_k = 0; c_k < 299; c_k++) {
				tmp_0[c_k] = Cortex_PPG_EEG_B.y_b[c_k + 1];
			}

			tmp_0[299] = 0.0;
			tmp_0[300] = xbar;
			for (c_k = 0; c_k < 301; c_k++) {
				Cortex_PPG_EEG_B.y_b[c_k] = tmp_0[c_k];
			}
		}
	}

	/* DiscreteFilter: '<S68>/LPF_3Hz_Butter_4' */
	xbar = Cortex_PPG_EEG_B.y_b[0];
	xbar -= -3.8029975416543831 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[0L];
	xbar -= 5.4281659636838917 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[1L];
	xbar -= -3.4462642180932059 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[2L];
	xbar -= 0.821125136892454 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[3L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp = xbar;
	xbar = 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp;
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[0L];
	xbar += 1.10028107839777E-5 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[1L];
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[2L];
	xbar += 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[3L];
	Cortex_PPG_EEG_B.LPF_3Hz_Butter_4 = xbar;

	/* Buffer: '<S68>/Buffer' */
	inputIdx = 1L;
	k = 34L - Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx;
	currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx;
	if (k <= 1L) {
		inputSegment = 0L;
		while (inputSegment < k) {
			Cortex_PPG_EEG_DW.Buffer_CircBuf[currentOffset_0] =
				Cortex_PPG_EEG_B.LPF_3Hz_Butter_4;
			inputSegment = 1L;
		}

		currentOffset_0 = 0L;
		inputIdx = 1L - k;
	}

	for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
		Cortex_PPG_EEG_DW.Buffer_CircBuf[currentOffset_0 + inputSegment] =
			Cortex_PPG_EEG_B.LPF_3Hz_Butter_4;
	}

	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx++;
	if (Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx >= 34L) {
		Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx -= 34L;
	}

	Cortex_PPG_EEG_DW.Buffer_bufferLength++;
	if (Cortex_PPG_EEG_DW.Buffer_bufferLength > 34L) {
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx =
			(Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx +
				Cortex_PPG_EEG_DW.Buffer_bufferLength) - 34L;
		if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx > 34L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx -= 34L;
		}

		Cortex_PPG_EEG_DW.Buffer_bufferLength = 34L;
	}

	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		Cortex_PPG_EEG_DW.Buffer_bufferLength -= 17L;
		if (Cortex_PPG_EEG_DW.Buffer_bufferLength < 0L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx +=
				Cortex_PPG_EEG_DW.Buffer_bufferLength;
			if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx < 0L) {
				Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx += 34L;
			}

			Cortex_PPG_EEG_DW.Buffer_bufferLength = 0L;
		}

		uyIdx = 0L;
		currentOffset = Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx;
		if (currentOffset < 0L) {
			currentOffset += 34L;
		}

		k = 34L - currentOffset;
		inputIdx = 17L;
		if (k <= 17L) {
			currentOffset_0 = currentOffset;
			for (inputSegment = 0L; inputSegment < k; inputSegment = (int16_T)
				inputSegment + 1) {
				Cortex_PPG_EEG_B.Buffer[inputSegment] =
					Cortex_PPG_EEG_DW.Buffer_CircBuf[currentOffset_0 + inputSegment];
			}

			uyIdx = k;
			currentOffset = 0L;
			inputIdx = 17L - k;
		}

		currentOffset_0 = currentOffset;
		for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
			Cortex_PPG_EEG_B.Buffer[uyIdx + inputSegment] =
				Cortex_PPG_EEG_DW.Buffer_CircBuf[currentOffset_0 + inputSegment];
		}

		currentOffset += inputIdx;
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx = currentOffset;

		/* S-Function (sdspfirdn2): '<S68>/FIR Decimation' */
		inputIdx = 0L;
		uyIdx = Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex;
		currentOffset = Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx;
		currentOffset_0 = Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx;
		inputSegment = (currentOffset + 1L) * 23L - 23L;
		for (i = 0; i < 17; i++) {
			k = uyIdx;
			Cortex_PPG_EEG_DW.FIRDecimation_Sums += Cortex_PPG_EEG_B.Buffer[inputIdx] *
				Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
			currentOffset_0++;
			for (jIdx = k + 1L; jIdx < inputSegment + 23L; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			for (jIdx = inputSegment; jIdx <= k; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff[k] =
				Cortex_PPG_EEG_B.Buffer[inputIdx];
			inputIdx++;
			uyIdx += 23L;
			if (uyIdx >= 391L) {
				uyIdx -= 391L;
			}

			currentOffset++;
			if (currentOffset < 17L) {
				inputSegment += 23L;
			}
			else {
				Cortex_PPG_EEG_B.FIRDecimation = Cortex_PPG_EEG_DW.FIRDecimation_Sums;
				Cortex_PPG_EEG_DW.FIRDecimation_Sums = 0.0;
				currentOffset = 0L;
				currentOffset_0 = 0L;
				uyIdx--;
				if (uyIdx < 0L) {
					uyIdx += 23L;
				}

				inputSegment = 0L;
			}
		}

		Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex = uyIdx;
		Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx = currentOffset_0;
		Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx = currentOffset;

		/* End of S-Function (sdspfirdn2): '<S68>/FIR Decimation' */

		/* DiscreteFilter: '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled8[inputIdx] *
				Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp = xbar;
		xbar = 0.009538545804899 * Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled7[inputIdx] *
				Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th = xbar;

		/* End of DiscreteFilter: '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */

		/* S-Function (sdspupfir2): '<S68>/FIR Interpolation ' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex; k < 23L; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx;
	}

	/* End of Buffer: '<S68>/Buffer' */

	/* S-Function (sdspupfir2): '<S68>/FIR Interpolation ' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx = 0L;
	}

	Cortex_PPG_EEG_MovingRMS3(Cortex_PPG_EEG_B.FIRInterpolation,
		&Cortex_PPG_EEG_B.MovingRMS3_p, &Cortex_PPG_EEG_DW.MovingRMS3_p);
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* DiscreteFilter: '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled11[inputIdx] *
				Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp = xbar;
		xbar = 0.009438851055717 * Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled10[inputIdx] *
				Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th = xbar;

		/* End of DiscreteFilter: '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */

		/* S-Function (sdspupfir2): '<S68>/FIR Interpolation' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_f) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_n[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_n[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_b[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_f =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_f;
	}

	/* S-Function (sdspupfir2): '<S68>/FIR Interpolation' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_m;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_o =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_b[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_m++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_m >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_m = 0L;
	}

	Cortex_PPG_EEG_MovingRMS2(Cortex_PPG_EEG_B.FIRInterpolation_o,
		&Cortex_PPG_EEG_B.MovingRMS2, &Cortex_PPG_EEG_DW.MovingRMS2);

	/* Sum: '<S10>/Add' incorporates:
	 *  Constant: '<S10>/Constant'
	 */
	Cortex_PPG_EEG_B.Add = Cortex_PPG_EEG_B.MovingRMS2.MovingRMS2 +
		2.2204460492503131E-16;

	/* Product: '<S10>/Divide' */
	Cortex_PPG_EEG_B.Divide = Cortex_PPG_EEG_B.MovingRMS3_p.MovingRMS3 /
		Cortex_PPG_EEG_B.Add;

	/* S-Function (sfix_udelay): '<S11>/Tapped Delay' */
	for (i = 0; i < 300; i++) {
		Cortex_PPG_EEG_B.TappedDelay_b[i] = Cortex_PPG_EEG_DW.TappedDelay_X_j[i];
	}

	/* End of S-Function (sfix_udelay): '<S11>/Tapped Delay' */

	/* Delay: '<S11>/Delay' */
	for (i = 0; i < 301; i++) {
		Cortex_PPG_EEG_B.Delay_k[i] = Cortex_PPG_EEG_DW.Delay_DSTATE_g[i];
	}

	/* End of Delay: '<S11>/Delay' */
	for (i = 0; i < 300; i++) {
		/* SignalConversion generated from: '<S74>/ SFunction ' incorporates:
		 *  MATLAB Function: '<S11>/MATLAB Function'
		 */
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[i] =
			Cortex_PPG_EEG_B.TappedDelay_b[i];
	}

	for (i = 0; i < 301; i++) {
		/* SignalConversion generated from: '<S74>/ SFunction ' incorporates:
		 *  MATLAB Function: '<S11>/MATLAB Function'
		 */
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[i + 300] =
			Cortex_PPG_EEG_B.Delay_k[i];

		/* MATLAB Function: '<S11>/MATLAB Function' */
		Cortex_PPG_EEG_B.y_k[i] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[i
			+ 300];
	}

	/* MATLAB Function: '<S11>/MATLAB Function' */
	ZeroCross_Index_idx_1 = 0;
	guard1 = false;
	if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[298] > 0.0005) &&
		(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[299] < -0.0005)) {
		guard1 = true;
	}
	else if (Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[298] < -0.0005) {
		if (Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[299] > 0.0005) {
			guard1 = true;
		}
		else {
			tmp = Cortex_PPG_EEG_B.y_k[300];
			for (c_k = 0; c_k < 299; c_k++) {
				tmp_0[c_k] = Cortex_PPG_EEG_B.y_k[c_k + 1];
			}

			tmp_0[299] = 0.0;
			tmp_0[300] = tmp;
			for (c_k = 0; c_k < 301; c_k++) {
				Cortex_PPG_EEG_B.y_k[c_k] = tmp_0[c_k];
			}
		}
	}
	else {
		tmp = Cortex_PPG_EEG_B.y_k[300];
		for (c_k = 0; c_k < 299; c_k++) {
			tmp_0[c_k] = Cortex_PPG_EEG_B.y_k[c_k + 1];
		}

		tmp_0[299] = 0.0;
		tmp_0[300] = tmp;
		for (c_k = 0; c_k < 301; c_k++) {
			Cortex_PPG_EEG_B.y_k[c_k] = tmp_0[c_k];
		}
	}

	if (guard1) {
		m1 = 298;
		exitg1 = false;
		while ((!exitg1) && (m1 > 2)) {
			if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1 - 2] > 0.0005) &&
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1] < -0.0005)) {
				ZeroCross_Index_idx_1 = m1;
				exitg1 = true;
			}
			else if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1 - 2] <
				-0.0005) &&
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1] > 0.0005))
			{
				ZeroCross_Index_idx_1 = m1;
				exitg1 = true;
			}
			else {
				m1--;
			}
		}

		m1 = ZeroCross_Index_idx_1;
		loop_ub = -ZeroCross_Index_idx_1;
		for (c_k = 0; c_k <= loop_ub + 299; c_k++) {
			One_y_Indices_data[c_k] =
				Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1 +
				c_k];
		}

		if (300 - ZeroCross_Index_idx_1 <= 2) {
			if ((Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1]
				<
				Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1
				+ 1]) || (rtIsNaN
				(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1])
					&& (!rtIsNaN
					(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1
						+ 1])))) {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1
					+ 1];
				i = 2;
			}
			else {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1];
				i = 1;
			}
		}
		else {
			if (!rtIsNaN
			(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1]))
			{
				i = 1;
			}
			else {
				i = 0;
				c_k = 2;
				exitg1 = false;
				while ((!exitg1) && (c_k <= 300 - ZeroCross_Index_idx_1)) {
					if (!rtIsNaN(One_y_Indices_data[c_k - 1])) {
						i = c_k;
						exitg1 = true;
					}
					else {
						c_k++;
					}
				}
			}

			if (i == 0) {
				xbar =
					Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[ZeroCross_Index_idx_1];
				i = 1;
			}
			else {
				xbar = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI
					[(ZeroCross_Index_idx_1 + i) - 1];
				for (c_k = i; c_k < 300 - m1; c_k++) {
					if (xbar < Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1 + c_k])
					{
						xbar = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctionI[m1 + c_k];
						i = c_k + 1;
					}
				}
			}
		}

		m1 = 0;
		c_k = 0;
		exitg1 = false;
		while ((!exitg1) && (c_k < 300)) {
			if (Cortex_PPG_EEG_B.y_k[d[c_k]] != 0.0) {
				m1++;
				ii_data[m1 - 1] = c_k + 1;
				if (m1 >= 300) {
					exitg1 = true;
				}
				else {
					c_k++;
				}
			}
			else {
				c_k++;
			}
		}

		if (1 > m1) {
			m1 = 0;
		}

		One_y_Indices_size_idx_1 = m1;
		loop_ub = m1 - 1;
		for (c_k = 0; c_k <= loop_ub; c_k++) {
			One_y_Indices_data[c_k] = ii_data[c_k];
		}

		if (One_y_Indices_size_idx_1 == 0) {
			m1 = 1;
		}
		else if (One_y_Indices_size_idx_1 <= 2) {
			if (One_y_Indices_size_idx_1 == 1) {
				m1 = (int16_T)One_y_Indices_data[0];
			}
			else if ((int16_T)One_y_Indices_data[0] < (int16_T)One_y_Indices_data[1])
			{
				m1 = (int16_T)One_y_Indices_data[1];
			}
			else {
				m1 = (int16_T)One_y_Indices_data[0];
			}
		}
		else {
			m1 = (int16_T)One_y_Indices_data[0];
			for (c_k = 1; c_k < One_y_Indices_size_idx_1; c_k++) {
				if (m1 < (int16_T)One_y_Indices_data[c_k]) {
					m1 = (int16_T)One_y_Indices_data[c_k];
				}
			}
		}

		if ((xbar > Cortex_PPG_EEG_B.y_k[300]) && ((ZeroCross_Index_idx_1 + i) - m1 >
			100) && (ZeroCross_Index_idx_1 + i < 298) && (i > 2)) {
			Cortex_PPG_EEG_B.y_k[(ZeroCross_Index_idx_1 + i) - 1] = 1.0;
			xbar *= 0.2;
			if (xbar > 2.0) {
				xbar = 2.0;
			}

			for (c_k = 0; c_k < 299; c_k++) {
				tmp_0[c_k] = Cortex_PPG_EEG_B.y_k[c_k + 1];
			}

			tmp_0[299] = 0.0;
			tmp_0[300] = xbar;
			for (c_k = 0; c_k < 301; c_k++) {
				Cortex_PPG_EEG_B.y_k[c_k] = tmp_0[c_k];
			}
		}
	}

	/* DiscreteFilter: '<S73>/LPF_3Hz_Butter_4' */
	xbar = Cortex_PPG_EEG_B.y_k[0];
	xbar -= -3.8029975416543831 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[0L];
	xbar -= 5.4281659636838917 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[1L];
	xbar -= -3.4462642180932059 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[2L];
	xbar -= 0.821125136892454 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[3L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_o = xbar;
	xbar = 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_o;
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[0L];
	xbar += 1.10028107839777E-5 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[1L];
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[2L];
	xbar += 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[3L];
	Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_f = xbar;

	/* Buffer: '<S73>/Buffer' */
	inputIdx = 1L;
	k = 34L - Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k;
	currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k;
	if (k <= 1L) {
		inputSegment = 0L;
		while (inputSegment < k) {
			Cortex_PPG_EEG_DW.Buffer_CircBuf_j[currentOffset_0] =
				Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_f;
			inputSegment = 1L;
		}

		currentOffset_0 = 0L;
		inputIdx = 1L - k;
	}

	for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
		Cortex_PPG_EEG_DW.Buffer_CircBuf_j[currentOffset_0 + inputSegment] =
			Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_f;
	}

	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k++;
	if (Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k >= 34L) {
		Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k -= 34L;
	}

	Cortex_PPG_EEG_DW.Buffer_bufferLength_l++;
	if (Cortex_PPG_EEG_DW.Buffer_bufferLength_l > 34L) {
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e =
			(Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e +
				Cortex_PPG_EEG_DW.Buffer_bufferLength_l) - 34L;
		if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e > 34L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e -= 34L;
		}

		Cortex_PPG_EEG_DW.Buffer_bufferLength_l = 34L;
	}

	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		Cortex_PPG_EEG_DW.Buffer_bufferLength_l -= 17L;
		if (Cortex_PPG_EEG_DW.Buffer_bufferLength_l < 0L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e +=
				Cortex_PPG_EEG_DW.Buffer_bufferLength_l;
			if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e < 0L) {
				Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e += 34L;
			}

			Cortex_PPG_EEG_DW.Buffer_bufferLength_l = 0L;
		}

		uyIdx = 0L;
		currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e;
		if (currentOffset_0 < 0L) {
			currentOffset_0 += 34L;
		}

		k = 34L - currentOffset_0;
		inputIdx = 17L;
		if (k <= 17L) {
			for (inputSegment = 0L; inputSegment < k; inputSegment = (int16_T)
				inputSegment + 1) {
				Cortex_PPG_EEG_B.Buffer_n[inputSegment] =
					Cortex_PPG_EEG_DW.Buffer_CircBuf_j[currentOffset_0 + inputSegment];
			}

			uyIdx = k;
			currentOffset_0 = 0L;
			inputIdx = 17L - k;
		}

		for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
			Cortex_PPG_EEG_B.Buffer_n[uyIdx + inputSegment] =
				Cortex_PPG_EEG_DW.Buffer_CircBuf_j[currentOffset_0 + inputSegment];
		}

		currentOffset_0 += inputIdx;
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_e = currentOffset_0;

		/* S-Function (sdspfirdn2): '<S73>/FIR Decimation' */
		inputIdx = 0L;
		uyIdx = Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_g;
		currentOffset = Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_m;
		currentOffset_0 = Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_j;
		inputSegment = (currentOffset + 1L) * 23L - 23L;
		for (i = 0; i < 17; i++) {
			k = uyIdx;
			Cortex_PPG_EEG_DW.FIRDecimation_Sums_o +=
				Cortex_PPG_EEG_B.Buffer_n[inputIdx] *
				Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
			currentOffset_0++;
			for (jIdx = k + 1L; jIdx < inputSegment + 23L; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_o +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_g[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			for (jIdx = inputSegment; jIdx <= k; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_o +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_g[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_g[k] =
				Cortex_PPG_EEG_B.Buffer_n[inputIdx];
			inputIdx++;
			uyIdx += 23L;
			if (uyIdx >= 391L) {
				uyIdx -= 391L;
			}

			currentOffset++;
			if (currentOffset < 17L) {
				inputSegment += 23L;
			}
			else {
				Cortex_PPG_EEG_B.FIRDecimation_b =
					Cortex_PPG_EEG_DW.FIRDecimation_Sums_o;
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_o = 0.0;
				currentOffset = 0L;
				currentOffset_0 = 0L;
				uyIdx--;
				if (uyIdx < 0L) {
					uyIdx += 23L;
				}

				inputSegment = 0L;
			}
		}

		Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_g = uyIdx;
		Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_j = currentOffset_0;
		Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_m = currentOffset;

		/* End of S-Function (sdspfirdn2): '<S73>/FIR Decimation' */

		/* DiscreteFilter: '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_b;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled8[inputIdx] *
				Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_state_f[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp_d = xbar;
		xbar = 0.009538545804899 * Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp_d;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled7[inputIdx] *
				Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_state_f[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th_j = xbar;

		/* End of DiscreteFilter: '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */

		/* S-Function (sdspupfir2): '<S73>/FIR Interpolation ' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_d) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th_j *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_o[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_o[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_f[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_d =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_d;
	}

	/* End of Buffer: '<S73>/Buffer' */

	/* S-Function (sdspupfir2): '<S73>/FIR Interpolation ' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_c;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_h =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_f[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_c++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_c >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_c = 0L;
	}

	Cortex_PPG_EEG_MovingRMS3(Cortex_PPG_EEG_B.FIRInterpolation_h,
		&Cortex_PPG_EEG_B.MovingRMS3_pn, &Cortex_PPG_EEG_DW.MovingRMS3_pn);
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* DiscreteFilter: '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_b;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled11[inputIdx] *
				Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_state_n[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp_n = xbar;
		xbar = 0.009438851055717 * Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp_n;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled10[inputIdx] *
				Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_state_n[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th_m = xbar;

		/* End of DiscreteFilter: '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */

		/* S-Function (sdspupfir2): '<S73>/FIR Interpolation' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_i) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th_m *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_j[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_j[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_c[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_i =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_i;
	}

	/* S-Function (sdspupfir2): '<S73>/FIR Interpolation' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_g;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_os =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_c[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_g++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_g >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_g = 0L;
	}

	Cortex_PPG_EEG_MovingRMS2(Cortex_PPG_EEG_B.FIRInterpolation_os,
		&Cortex_PPG_EEG_B.MovingRMS2_p, &Cortex_PPG_EEG_DW.MovingRMS2_p);

	/* Sum: '<S11>/Add' incorporates:
	 *  Constant: '<S11>/Constant'
	 */
	Cortex_PPG_EEG_B.Add_l = Cortex_PPG_EEG_B.MovingRMS2_p.MovingRMS2 +
		2.2204460492503131E-16;

	/* Product: '<S11>/Divide' */
	Cortex_PPG_EEG_B.Divide_a = Cortex_PPG_EEG_B.MovingRMS3_pn.MovingRMS3 /
		Cortex_PPG_EEG_B.Add_l;

	/* DiscreteFilter: '<S3>/60 Hz notch filter3' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[3];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter3_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter3_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter3 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter3' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter3_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter3_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter3_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter3_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter3 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter3' */

	/* DiscreteFilter: '<S52>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter = xbar;

	/* End of DiscreteFilter: '<S52>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter,
		&Cortex_PPG_EEG_B.MovingRMS_py, &Cortex_PPG_EEG_DW.MovingRMS_py);

	/* Math: '<S127>/Square' */
	Cortex_PPG_EEG_B.Square = Cortex_PPG_EEG_B.MovingRMS_py.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_py.MovingRMS;
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter3,
		&Cortex_PPG_EEG_B.MovingRMS_pn, &Cortex_PPG_EEG_DW.MovingRMS_pn);

	/* Math: '<S35>/Square' */
	Cortex_PPG_EEG_B.Square_i = Cortex_PPG_EEG_B.MovingRMS_pn.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pn.MovingRMS;

	/* Sum: '<S57>/Sum1' incorporates:
	 *  Constant: '<S57>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1 = Cortex_PPG_EEG_B.Square_i + 2.2204460492503131E-16;

	/* Product: '<S57>/Divide' */
	Cortex_PPG_EEG_B.Divide_h = Cortex_PPG_EEG_B.Square / Cortex_PPG_EEG_B.Sum1;

	/* DiscreteFilter: '<S3>/60 Hz notch filter6' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[6];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter6_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter6_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter6 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter6' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter6_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter6_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter6_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter6_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter6 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter6' */

	/* DiscreteFilter: '<S53>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_i = xbar;

	/* End of DiscreteFilter: '<S53>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_i,
		&Cortex_PPG_EEG_B.MovingRMS_fp, &Cortex_PPG_EEG_DW.MovingRMS_fp);

	/* Math: '<S132>/Square' */
	Cortex_PPG_EEG_B.Square_d = Cortex_PPG_EEG_B.MovingRMS_fp.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_fp.MovingRMS;
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter6,
		&Cortex_PPG_EEG_B.MovingRMS_pnaev, &Cortex_PPG_EEG_DW.MovingRMS_pnaev);

	/* Math: '<S38>/Square' */
	Cortex_PPG_EEG_B.Square_e = Cortex_PPG_EEG_B.MovingRMS_pnaev.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaev.MovingRMS;

	/* Sum: '<S58>/Sum1' incorporates:
	 *  Constant: '<S58>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_e = Cortex_PPG_EEG_B.Square_e + 2.2204460492503131E-16;

	/* Product: '<S58>/Divide' */
	Cortex_PPG_EEG_B.Divide_o = Cortex_PPG_EEG_B.Square_d /
		Cortex_PPG_EEG_B.Sum1_e;

	/* DiscreteFilter: '<S3>/60 Hz notch filter4' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[4];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter4_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter4_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter4 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter4' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter4_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter4_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter4_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter4_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter4 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter4' */

	/* DiscreteFilter: '<S41>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_o = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_o;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_n = xbar;

	/* End of DiscreteFilter: '<S41>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_n,
		&Cortex_PPG_EEG_B.MovingRMS_o, &Cortex_PPG_EEG_DW.MovingRMS_o);

	/* Math: '<S97>/Square' */
	Cortex_PPG_EEG_B.Square_o = Cortex_PPG_EEG_B.MovingRMS_o.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_o.MovingRMS;
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter4,
		&Cortex_PPG_EEG_B.MovingRMS_pna, &Cortex_PPG_EEG_DW.MovingRMS_pna);

	/* Math: '<S36>/Square' */
	Cortex_PPG_EEG_B.Square_a = Cortex_PPG_EEG_B.MovingRMS_pna.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pna.MovingRMS;

	/* Sum: '<S59>/Sum1' incorporates:
	 *  Constant: '<S59>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_l = Cortex_PPG_EEG_B.Square_a + 2.2204460492503131E-16;

	/* Product: '<S59>/Divide' */
	Cortex_PPG_EEG_B.Divide_p = Cortex_PPG_EEG_B.Square_o /
		Cortex_PPG_EEG_B.Sum1_l;

	/* DiscreteFilter: '<S3>/60 Hz notch filter7' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[7];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter7_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter7_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter7 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter7' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter7_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter7_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter7_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter7_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter7 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter7' */

	/* DiscreteFilter: '<S42>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a0 = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a0;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_d = xbar;

	/* End of DiscreteFilter: '<S42>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_d,
		&Cortex_PPG_EEG_B.MovingRMS_m, &Cortex_PPG_EEG_DW.MovingRMS_m);

	/* Math: '<S102>/Square' */
	Cortex_PPG_EEG_B.Square_dt = Cortex_PPG_EEG_B.MovingRMS_m.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_m.MovingRMS;
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter7,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevv, &Cortex_PPG_EEG_DW.MovingRMS_pnaevv);

	/* Math: '<S39>/Square' */
	Cortex_PPG_EEG_B.Square_b = Cortex_PPG_EEG_B.MovingRMS_pnaevv.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevv.MovingRMS;

	/* Sum: '<S60>/Sum1' incorporates:
	 *  Constant: '<S60>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_b = Cortex_PPG_EEG_B.Square_b + 2.2204460492503131E-16;

	/* Product: '<S60>/Divide' */
	Cortex_PPG_EEG_B.Divide_f = Cortex_PPG_EEG_B.Square_dt /
		Cortex_PPG_EEG_B.Sum1_b;

	/* DiscreteFilter: '<S52>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter = xbar;

	/* End of DiscreteFilter: '<S52>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter,
		&Cortex_PPG_EEG_B.MovingRMS_px, &Cortex_PPG_EEG_DW.MovingRMS_px);

	/* Math: '<S129>/Square' */
	Cortex_PPG_EEG_B.Square_m = Cortex_PPG_EEG_B.MovingRMS_px.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_px.MovingRMS;

	/* Sum: '<S61>/Sum1' incorporates:
	 *  Constant: '<S61>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_f = Cortex_PPG_EEG_B.Square_i + 2.2204460492503131E-16;

	/* Product: '<S61>/Divide' */
	Cortex_PPG_EEG_B.Divide_l = Cortex_PPG_EEG_B.Square_m /
		Cortex_PPG_EEG_B.Sum1_f;

	/* DiscreteFilter: '<S53>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_l = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_l;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_o = xbar;

	/* End of DiscreteFilter: '<S53>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_o,
		&Cortex_PPG_EEG_B.MovingRMS_mw, &Cortex_PPG_EEG_DW.MovingRMS_mw);

	/* Math: '<S134>/Square' */
	Cortex_PPG_EEG_B.Square_h = Cortex_PPG_EEG_B.MovingRMS_mw.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_mw.MovingRMS;

	/* Sum: '<S62>/Sum1' incorporates:
	 *  Constant: '<S62>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_j = Cortex_PPG_EEG_B.Square_e + 2.2204460492503131E-16;

	/* Product: '<S62>/Divide' */
	Cortex_PPG_EEG_B.Divide_pc = Cortex_PPG_EEG_B.Square_h /
		Cortex_PPG_EEG_B.Sum1_j;

	/* DiscreteFilter: '<S41>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_d = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_d;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_i = xbar;

	/* End of DiscreteFilter: '<S41>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_i,
		&Cortex_PPG_EEG_B.MovingRMS_d, &Cortex_PPG_EEG_DW.MovingRMS_d);

	/* Math: '<S99>/Square' */
	Cortex_PPG_EEG_B.Square_ix = Cortex_PPG_EEG_B.MovingRMS_d.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_d.MovingRMS;

	/* Sum: '<S63>/Sum1' incorporates:
	 *  Constant: '<S63>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_d = Cortex_PPG_EEG_B.Square_a + 2.2204460492503131E-16;

	/* Product: '<S63>/Divide' */
	Cortex_PPG_EEG_B.Divide_n = Cortex_PPG_EEG_B.Square_ix /
		Cortex_PPG_EEG_B.Sum1_d;

	/* DiscreteFilter: '<S42>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_b[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_b[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_f = xbar;

	/* End of DiscreteFilter: '<S42>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_f,
		&Cortex_PPG_EEG_B.MovingRMS_i, &Cortex_PPG_EEG_DW.MovingRMS_i);

	/* Math: '<S104>/Square' */
	Cortex_PPG_EEG_B.Square_az = Cortex_PPG_EEG_B.MovingRMS_i.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_i.MovingRMS;

	/* Sum: '<S64>/Sum1' incorporates:
	 *  Constant: '<S64>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_i = Cortex_PPG_EEG_B.Square_b + 2.2204460492503131E-16;

	/* Product: '<S64>/Divide' */
	Cortex_PPG_EEG_B.Divide_pn = Cortex_PPG_EEG_B.Square_az /
		Cortex_PPG_EEG_B.Sum1_i;

	/* Sum: '<S65>/Sum2' */
	Cortex_PPG_EEG_B.Sum2 = Cortex_PPG_EEG_B.Square_e - Cortex_PPG_EEG_B.Square_i;

	/* Sum: '<S65>/Sum1' incorporates:
	 *  Constant: '<S65>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_o = (Cortex_PPG_EEG_B.Square_i +
		Cortex_PPG_EEG_B.Square_e) + 2.2204460492503131E-16;

	/* Product: '<S65>/Divide' */
	Cortex_PPG_EEG_B.Divide_b = Cortex_PPG_EEG_B.Sum2 / Cortex_PPG_EEG_B.Sum1_o;

	/* Sum: '<S66>/Sum2' */
	Cortex_PPG_EEG_B.Sum2_n = Cortex_PPG_EEG_B.Square_b -
		Cortex_PPG_EEG_B.Square_a;

	/* Sum: '<S66>/Sum1' incorporates:
	 *  Constant: '<S66>/Constant1'
	 */
	Cortex_PPG_EEG_B.Sum1_j3 = (Cortex_PPG_EEG_B.Square_a +
		Cortex_PPG_EEG_B.Square_b) + 2.2204460492503131E-16;

	/* Product: '<S66>/Divide' */
	Cortex_PPG_EEG_B.Divide_i = Cortex_PPG_EEG_B.Sum2_n / Cortex_PPG_EEG_B.Sum1_j3;

	/* DiscreteFilter: '<S52>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter = xbar;

	/* End of DiscreteFilter: '<S52>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter,
		&Cortex_PPG_EEG_B.MovingRMS_p4, &Cortex_PPG_EEG_DW.MovingRMS_p4);

	/* Math: '<S126>/Square' */
	Cortex_PPG_EEG_B.Square_ml = Cortex_PPG_EEG_B.MovingRMS_p4.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_p4.MovingRMS;

	/* DiscreteFilter: '<S53>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_p = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_p;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_c = xbar;

	/* End of DiscreteFilter: '<S53>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_c,
		&Cortex_PPG_EEG_B.MovingRMS_nk, &Cortex_PPG_EEG_DW.MovingRMS_nk);

	/* Math: '<S131>/Square' */
	Cortex_PPG_EEG_B.Square_hd = Cortex_PPG_EEG_B.MovingRMS_nk.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_nk.MovingRMS;

	/* Sum: '<S30>/T3T4ThetaPow' */
	Cortex_PPG_EEG_B.T3T4ThetaPow = Cortex_PPG_EEG_B.Square_ml +
		Cortex_PPG_EEG_B.Square_hd;

	/* Gain: '<S30>/Gain' */
	Cortex_PPG_EEG_B.Gain = 0.5 * Cortex_PPG_EEG_B.T3T4ThetaPow;

	/* Sum: '<S30>/T3T4AlphaPow' */
	Cortex_PPG_EEG_B.T3T4AlphaPow = Cortex_PPG_EEG_B.Square +
		Cortex_PPG_EEG_B.Square_d;

	/* Gain: '<S30>/Gain1' */
	Cortex_PPG_EEG_B.Gain1 = 0.5 * Cortex_PPG_EEG_B.T3T4AlphaPow;

	/* DiscreteFilter: '<S52>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter = xbar;

	/* End of DiscreteFilter: '<S52>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter,
		&Cortex_PPG_EEG_B.MovingRMS_en, &Cortex_PPG_EEG_DW.MovingRMS_en);

	/* Math: '<S128>/Square' */
	Cortex_PPG_EEG_B.Square_j = Cortex_PPG_EEG_B.MovingRMS_en.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_en.MovingRMS;

	/* DiscreteFilter: '<S53>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_p = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_p;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_d = xbar;

	/* End of DiscreteFilter: '<S53>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_d,
		&Cortex_PPG_EEG_B.MovingRMS_df, &Cortex_PPG_EEG_DW.MovingRMS_df);

	/* Math: '<S133>/Square' */
	Cortex_PPG_EEG_B.Square_ig = Cortex_PPG_EEG_B.MovingRMS_df.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_df.MovingRMS;

	/* Sum: '<S30>/T3T4SMRPow' */
	Cortex_PPG_EEG_B.T3T4SMRPow = Cortex_PPG_EEG_B.Square_j +
		Cortex_PPG_EEG_B.Square_ig;

	/* Gain: '<S30>/Gain2' */
	Cortex_PPG_EEG_B.Gain2 = 0.5 * Cortex_PPG_EEG_B.T3T4SMRPow;

	/* Sum: '<S30>/T3T4BetaPow' */
	Cortex_PPG_EEG_B.T3T4BetaPow = Cortex_PPG_EEG_B.Square_m +
		Cortex_PPG_EEG_B.Square_h;

	/* Gain: '<S30>/Gain3' */
	Cortex_PPG_EEG_B.Gain3 = 0.5 * Cortex_PPG_EEG_B.T3T4BetaPow;

	/* DiscreteFilter: '<S52>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter3;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter = xbar;

	/* End of DiscreteFilter: '<S52>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter,
		&Cortex_PPG_EEG_B.MovingRMS_mk, &Cortex_PPG_EEG_DW.MovingRMS_mk);

	/* Math: '<S130>/Square' */
	Cortex_PPG_EEG_B.Square_ml4 = Cortex_PPG_EEG_B.MovingRMS_mk.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_mk.MovingRMS;

	/* DiscreteFilter: '<S53>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter6;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_b = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_b;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_k = xbar;

	/* End of DiscreteFilter: '<S53>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_k,
		&Cortex_PPG_EEG_B.MovingRMS_h3, &Cortex_PPG_EEG_DW.MovingRMS_h3);

	/* Math: '<S135>/Square' */
	Cortex_PPG_EEG_B.Square_i4 = Cortex_PPG_EEG_B.MovingRMS_h3.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h3.MovingRMS;

	/* Sum: '<S30>/T3T4GammaPow' */
	Cortex_PPG_EEG_B.T3T4GammaPow = Cortex_PPG_EEG_B.Square_ml4 +
		Cortex_PPG_EEG_B.Square_i4;

	/* Gain: '<S30>/Gain4' */
	Cortex_PPG_EEG_B.Gain4 = 0.5 * Cortex_PPG_EEG_B.T3T4GammaPow;

	/* Sum: '<S1>/F7F8 Alpha Power Difference' */
	Cortex_PPG_EEG_B.F7F8AlphaPowerDifference = Cortex_PPG_EEG_B.Square_o -
		Cortex_PPG_EEG_B.Square_dt;

	/* DiscreteFilter: '<S41>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c5[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_k = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_k;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c5[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_h = xbar;

	/* End of DiscreteFilter: '<S41>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_h,
		&Cortex_PPG_EEG_B.MovingRMS_ez, &Cortex_PPG_EEG_DW.MovingRMS_ez);

	/* Math: '<S96>/Square' */
	Cortex_PPG_EEG_B.Square_n = Cortex_PPG_EEG_B.MovingRMS_ez.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ez.MovingRMS;

	/* DiscreteFilter: '<S41>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_n[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_g = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_g;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_n[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_o = xbar;

	/* End of DiscreteFilter: '<S41>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_o,
		&Cortex_PPG_EEG_B.MovingRMS_pd, &Cortex_PPG_EEG_DW.MovingRMS_pd);

	/* Math: '<S98>/Square' */
	Cortex_PPG_EEG_B.Square_jx = Cortex_PPG_EEG_B.MovingRMS_pd.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pd.MovingRMS;

	/* DiscreteFilter: '<S41>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_k = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_k;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_g = xbar;

	/* End of DiscreteFilter: '<S41>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_g,
		&Cortex_PPG_EEG_B.MovingRMS_dm, &Cortex_PPG_EEG_DW.MovingRMS_dm);

	/* Math: '<S100>/Square' */
	Cortex_PPG_EEG_B.Square_l = Cortex_PPG_EEG_B.MovingRMS_dm.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_dm.MovingRMS;

	/* DiscreteFilter: '<S42>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_pz = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_pz;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_j = xbar;

	/* End of DiscreteFilter: '<S42>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_j,
		&Cortex_PPG_EEG_B.MovingRMS_gy, &Cortex_PPG_EEG_DW.MovingRMS_gy);

	/* Math: '<S101>/Square' */
	Cortex_PPG_EEG_B.Square_mu = Cortex_PPG_EEG_B.MovingRMS_gy.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_gy.MovingRMS;

	/* DiscreteFilter: '<S42>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_m = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_m;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_n = xbar;

	/* End of DiscreteFilter: '<S42>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_n,
		&Cortex_PPG_EEG_B.MovingRMS_pdn, &Cortex_PPG_EEG_DW.MovingRMS_pdn);

	/* Math: '<S103>/Square' */
	Cortex_PPG_EEG_B.Square_ox = Cortex_PPG_EEG_B.MovingRMS_pdn.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pdn.MovingRMS;

	/* DiscreteFilter: '<S42>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter7;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_j[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bp = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_j[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_h = xbar;

	/* End of DiscreteFilter: '<S42>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_h,
		&Cortex_PPG_EEG_B.MovingRMS_pr, &Cortex_PPG_EEG_DW.MovingRMS_pr);

	/* Math: '<S105>/Square' */
	Cortex_PPG_EEG_B.Square_ho = Cortex_PPG_EEG_B.MovingRMS_pr.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pr.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter2' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[2];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter2_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter2_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter2 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter2' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter2_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter2_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter2_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter2_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter2 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter2' */

	/* DiscreteFilter: '<S54>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_i = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_i;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_e = xbar;

	/* End of DiscreteFilter: '<S54>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_e,
		&Cortex_PPG_EEG_B.MovingRMS_hz, &Cortex_PPG_EEG_DW.MovingRMS_hz);

	/* Math: '<S136>/Square' */
	Cortex_PPG_EEG_B.Square_df = Cortex_PPG_EEG_B.MovingRMS_hz.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_hz.MovingRMS;

	/* DiscreteFilter: '<S54>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_h = xbar;

	/* End of DiscreteFilter: '<S54>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_h,
		&Cortex_PPG_EEG_B.MovingRMS_h2, &Cortex_PPG_EEG_DW.MovingRMS_h2);

	/* Math: '<S137>/Square' */
	Cortex_PPG_EEG_B.Square_hb = Cortex_PPG_EEG_B.MovingRMS_h2.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h2.MovingRMS;

	/* DiscreteFilter: '<S54>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_j = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_j;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_b = xbar;

	/* End of DiscreteFilter: '<S54>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_b,
		&Cortex_PPG_EEG_B.MovingRMS_hs5, &Cortex_PPG_EEG_DW.MovingRMS_hs5);

	/* Math: '<S138>/Square' */
	Cortex_PPG_EEG_B.Square_ey = Cortex_PPG_EEG_B.MovingRMS_hs5.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_hs5.MovingRMS;

	/* DiscreteFilter: '<S54>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_n = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_n;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_h = xbar;

	/* End of DiscreteFilter: '<S54>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_h,
		&Cortex_PPG_EEG_B.MovingRMS_i3n, &Cortex_PPG_EEG_DW.MovingRMS_i3n);

	/* Math: '<S139>/Square' */
	Cortex_PPG_EEG_B.Square_h3 = Cortex_PPG_EEG_B.MovingRMS_i3n.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_i3n.MovingRMS;

	/* DiscreteFilter: '<S54>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_n = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_n;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_p = xbar;

	/* End of DiscreteFilter: '<S54>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_p,
		&Cortex_PPG_EEG_B.MovingRMS_h5, &Cortex_PPG_EEG_DW.MovingRMS_h5);

	/* Math: '<S140>/Square' */
	Cortex_PPG_EEG_B.Square_ma = Cortex_PPG_EEG_B.MovingRMS_h5.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h5.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter5' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[5];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter5_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter5_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter5 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter5' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter5_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter5_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter5_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter5_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter5 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter5' */

	/* DiscreteFilter: '<S55>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f1[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f1[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_g = xbar;

	/* End of DiscreteFilter: '<S55>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_g,
		&Cortex_PPG_EEG_B.MovingRMS_h1, &Cortex_PPG_EEG_DW.MovingRMS_h1);

	/* Math: '<S141>/Square' */
	Cortex_PPG_EEG_B.Square_li = Cortex_PPG_EEG_B.MovingRMS_h1.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h1.MovingRMS;

	/* DiscreteFilter: '<S55>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ms[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ms[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_g = xbar;

	/* End of DiscreteFilter: '<S55>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_g,
		&Cortex_PPG_EEG_B.MovingRMS_ig, &Cortex_PPG_EEG_DW.MovingRMS_ig);

	/* Math: '<S142>/Square' */
	Cortex_PPG_EEG_B.Square_k = Cortex_PPG_EEG_B.MovingRMS_ig.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ig.MovingRMS;

	/* DiscreteFilter: '<S55>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_d[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_h = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_h;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_d[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_j = xbar;

	/* End of DiscreteFilter: '<S55>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_j,
		&Cortex_PPG_EEG_B.MovingRMS_dz, &Cortex_PPG_EEG_DW.MovingRMS_dz);

	/* Math: '<S143>/Square' */
	Cortex_PPG_EEG_B.Square_lb = Cortex_PPG_EEG_B.MovingRMS_dz.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_dz.MovingRMS;

	/* DiscreteFilter: '<S55>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_o = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_o;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_e = xbar;

	/* End of DiscreteFilter: '<S55>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_e,
		&Cortex_PPG_EEG_B.MovingRMS_a, &Cortex_PPG_EEG_DW.MovingRMS_a);

	/* Math: '<S144>/Square' */
	Cortex_PPG_EEG_B.Square_ee = Cortex_PPG_EEG_B.MovingRMS_a.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_a.MovingRMS;

	/* DiscreteFilter: '<S55>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter5;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_d[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_i = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_i;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_d[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_a = xbar;

	/* End of DiscreteFilter: '<S55>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_a,
		&Cortex_PPG_EEG_B.MovingRMS_id, &Cortex_PPG_EEG_DW.MovingRMS_id);

	/* Math: '<S145>/Square' */
	Cortex_PPG_EEG_B.Square_de = Cortex_PPG_EEG_B.MovingRMS_id.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_id.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter1' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[1];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter1_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter1_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter1 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter1' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter1_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter1_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter1_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter1_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter1 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter1' */

	/* DiscreteFilter: '<S9>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_g = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_g;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_b = xbar;

	/* End of DiscreteFilter: '<S9>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_b,
		&Cortex_PPG_EEG_B.MovingRMS_pe, &Cortex_PPG_EEG_DW.MovingRMS_pe);

	/* Math: '<S106>/Square' */
	Cortex_PPG_EEG_B.Square_bb = Cortex_PPG_EEG_B.MovingRMS_pe.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pe.MovingRMS;

	/* DiscreteFilter: '<S9>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_e[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l2 = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_e[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_m = xbar;

	/* End of DiscreteFilter: '<S9>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_m,
		&Cortex_PPG_EEG_B.MovingRMS_o3, &Cortex_PPG_EEG_DW.MovingRMS_o3);

	/* Math: '<S107>/Square' */
	Cortex_PPG_EEG_B.Square_mr = Cortex_PPG_EEG_B.MovingRMS_o3.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_o3.MovingRMS;

	/* DiscreteFilter: '<S9>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_e = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_e;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_e = xbar;

	/* End of DiscreteFilter: '<S9>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_e,
		&Cortex_PPG_EEG_B.MovingRMS_e4, &Cortex_PPG_EEG_DW.MovingRMS_e4);

	/* Math: '<S108>/Square' */
	Cortex_PPG_EEG_B.Square_nn = Cortex_PPG_EEG_B.MovingRMS_e4.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_e4.MovingRMS;

	/* DiscreteFilter: '<S9>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_f = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_f;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_i1 = xbar;

	/* End of DiscreteFilter: '<S9>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_i1,
		&Cortex_PPG_EEG_B.MovingRMS_mc, &Cortex_PPG_EEG_DW.MovingRMS_mc);

	/* Math: '<S109>/Square' */
	Cortex_PPG_EEG_B.Square_dl = Cortex_PPG_EEG_B.MovingRMS_mc.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_mc.MovingRMS;

	/* DiscreteFilter: '<S9>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter1;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_p = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_p;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_hk = xbar;

	/* End of DiscreteFilter: '<S9>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_hk,
		&Cortex_PPG_EEG_B.MovingRMS_j, &Cortex_PPG_EEG_DW.MovingRMS_j);

	/* Math: '<S110>/Square' */
	Cortex_PPG_EEG_B.Square_jt = Cortex_PPG_EEG_B.MovingRMS_j.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_j.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter8' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[8];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter8_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter8_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter8 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter8' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter8_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter8_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter8_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter8_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter8 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter8' */

	/* DiscreteFilter: '<S43>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_j = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_j;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_a = xbar;

	/* End of DiscreteFilter: '<S43>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_a,
		&Cortex_PPG_EEG_B.MovingRMS_po, &Cortex_PPG_EEG_DW.MovingRMS_po);

	/* Math: '<S111>/Square' */
	Cortex_PPG_EEG_B.Square_h2 = Cortex_PPG_EEG_B.MovingRMS_po.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_po.MovingRMS;

	/* DiscreteFilter: '<S43>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ac[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_ii = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_ii;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ac[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_a = xbar;

	/* End of DiscreteFilter: '<S43>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_a,
		&Cortex_PPG_EEG_B.MovingRMS_m3, &Cortex_PPG_EEG_DW.MovingRMS_m3);

	/* Math: '<S112>/Square' */
	Cortex_PPG_EEG_B.Square_p = Cortex_PPG_EEG_B.MovingRMS_m3.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_m3.MovingRMS;

	/* DiscreteFilter: '<S43>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_c = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_c;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_nc = xbar;

	/* End of DiscreteFilter: '<S43>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_nc,
		&Cortex_PPG_EEG_B.MovingRMS_p2, &Cortex_PPG_EEG_DW.MovingRMS_p2);

	/* Math: '<S113>/Square' */
	Cortex_PPG_EEG_B.Square_jz = Cortex_PPG_EEG_B.MovingRMS_p2.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_p2.MovingRMS;

	/* DiscreteFilter: '<S43>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l0[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_j = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_j;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l0[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_k = xbar;

	/* End of DiscreteFilter: '<S43>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_k,
		&Cortex_PPG_EEG_B.MovingRMS_i3, &Cortex_PPG_EEG_DW.MovingRMS_i3);

	/* Math: '<S114>/Square' */
	Cortex_PPG_EEG_B.Square_et = Cortex_PPG_EEG_B.MovingRMS_i3.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_i3.MovingRMS;

	/* DiscreteFilter: '<S43>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter8;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_m = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_m;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_ge = xbar;

	/* End of DiscreteFilter: '<S43>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_ge,
		&Cortex_PPG_EEG_B.MovingRMS_ka1, &Cortex_PPG_EEG_DW.MovingRMS_ka1);

	/* Math: '<S115>/Square' */
	Cortex_PPG_EEG_B.Square_no = Cortex_PPG_EEG_B.MovingRMS_ka1.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ka1.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter11' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[10];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter11_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter11_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter11 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter10' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter10_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter10_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter10_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter10_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter10 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter10' */

	/* DiscreteFilter: '<S44>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p0[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_d = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_d;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p0[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_m = xbar;

	/* End of DiscreteFilter: '<S44>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_m,
		&Cortex_PPG_EEG_B.MovingRMS_e, &Cortex_PPG_EEG_DW.MovingRMS_e);

	/* Math: '<S86>/Square' */
	Cortex_PPG_EEG_B.Square_hu = Cortex_PPG_EEG_B.MovingRMS_e.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_e.MovingRMS;

	/* DiscreteFilter: '<S44>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ma[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_m = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_m;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ma[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_o = xbar;

	/* End of DiscreteFilter: '<S44>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_o,
		&Cortex_PPG_EEG_B.MovingRMS_n, &Cortex_PPG_EEG_DW.MovingRMS_n);

	/* Math: '<S87>/Square' */
	Cortex_PPG_EEG_B.Square_oy = Cortex_PPG_EEG_B.MovingRMS_n.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_n.MovingRMS;

	/* DiscreteFilter: '<S44>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_d = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_d;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_f = xbar;

	/* End of DiscreteFilter: '<S44>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_f,
		&Cortex_PPG_EEG_B.MovingRMS_f, &Cortex_PPG_EEG_DW.MovingRMS_f);

	/* Math: '<S88>/Square' */
	Cortex_PPG_EEG_B.Square_hn = Cortex_PPG_EEG_B.MovingRMS_f.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_f.MovingRMS;

	/* DiscreteFilter: '<S44>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_oi[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_le = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_le;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_oi[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_n = xbar;

	/* End of DiscreteFilter: '<S44>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_n,
		&Cortex_PPG_EEG_B.MovingRMS_k, &Cortex_PPG_EEG_DW.MovingRMS_k);

	/* Math: '<S89>/Square' */
	Cortex_PPG_EEG_B.Square_nq = Cortex_PPG_EEG_B.MovingRMS_k.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_k.MovingRMS;

	/* DiscreteFilter: '<S44>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_fc[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bj = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bj;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_fc[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_gq = xbar;

	/* End of DiscreteFilter: '<S44>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_gq,
		&Cortex_PPG_EEG_B.MovingRMS_h, &Cortex_PPG_EEG_DW.MovingRMS_h);

	/* Math: '<S90>/Square' */
	Cortex_PPG_EEG_B.Square_im = Cortex_PPG_EEG_B.MovingRMS_h.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter10' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[11];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter10_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter10_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter10 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter9' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter10;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter9_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter9_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter9_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter9_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter9 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter9' */

	/* DiscreteFilter: '<S45>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_mz[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_dw = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_dw;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_mz[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_n = xbar;

	/* End of DiscreteFilter: '<S45>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_n,
		&Cortex_PPG_EEG_B.MovingRMS_kw, &Cortex_PPG_EEG_DW.MovingRMS_kw);

	/* Math: '<S91>/Square' */
	Cortex_PPG_EEG_B.Square_eo = Cortex_PPG_EEG_B.MovingRMS_kw.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_kw.MovingRMS;

	/* DiscreteFilter: '<S45>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i2 = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i2;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_p[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_dy = xbar;

	/* End of DiscreteFilter: '<S45>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_dy,
		&Cortex_PPG_EEG_B.MovingRMS_ka, &Cortex_PPG_EEG_DW.MovingRMS_ka);

	/* Math: '<S92>/Square' */
	Cortex_PPG_EEG_B.Square_hdj = Cortex_PPG_EEG_B.MovingRMS_ka.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ka.MovingRMS;

	/* DiscreteFilter: '<S45>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_l[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gh = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gh;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_l[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_o2 = xbar;

	/* End of DiscreteFilter: '<S45>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_o2,
		&Cortex_PPG_EEG_B.MovingRMS_kaa, &Cortex_PPG_EEG_DW.MovingRMS_kaa);

	/* Math: '<S93>/Square' */
	Cortex_PPG_EEG_B.Square_en = Cortex_PPG_EEG_B.MovingRMS_kaa.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_kaa.MovingRMS;

	/* DiscreteFilter: '<S45>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_a = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_a;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_g = xbar;

	/* End of DiscreteFilter: '<S45>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_g,
		&Cortex_PPG_EEG_B.MovingRMS_el, &Cortex_PPG_EEG_DW.MovingRMS_el);

	/* Math: '<S94>/Square' */
	Cortex_PPG_EEG_B.Square_g = Cortex_PPG_EEG_B.MovingRMS_el.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_el.MovingRMS;

	/* DiscreteFilter: '<S45>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_is[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_a = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_a;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_is[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_n = xbar;

	/* End of DiscreteFilter: '<S45>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_n,
		&Cortex_PPG_EEG_B.MovingRMS_cj, &Cortex_PPG_EEG_DW.MovingRMS_cj);

	/* Math: '<S95>/Square' */
	Cortex_PPG_EEG_B.Square_bs = Cortex_PPG_EEG_B.MovingRMS_cj.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_cj.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter12' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[12];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter12_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter12_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter12 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter11' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter11_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter11_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter11_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter11_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter11 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter11' */

	/* DiscreteFilter: '<S46>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_j[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_a = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_a;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_j[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_bf = xbar;

	/* End of DiscreteFilter: '<S46>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_bf,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfp, &Cortex_PPG_EEG_DW.MovingRMS_pnaevvfp);

	/* Math: '<S76>/Square' */
	Cortex_PPG_EEG_B.Square_dl0 = Cortex_PPG_EEG_B.MovingRMS_pnaevvfp.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfp.MovingRMS;

	/* DiscreteFilter: '<S46>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_am = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_am;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_c[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_mq = xbar;

	/* End of DiscreteFilter: '<S46>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_mq,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpg,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpg);

	/* Math: '<S77>/Square' */
	Cortex_PPG_EEG_B.Square_f = Cortex_PPG_EEG_B.MovingRMS_pnaevvfpg.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpg.MovingRMS;

	/* DiscreteFilter: '<S46>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_ks[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_hq = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_hq;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_ks[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_dv = xbar;

	/* End of DiscreteFilter: '<S46>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_dv,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh);

	/* Math: '<S78>/Square' */
	Cortex_PPG_EEG_B.Square_ew = Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh.MovingRMS;

	/* DiscreteFilter: '<S46>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_e = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_e;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_j = xbar;

	/* End of DiscreteFilter: '<S46>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_j,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5);

	/* Math: '<S79>/Square' */
	Cortex_PPG_EEG_B.Square_gl = Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5.MovingRMS;

	/* DiscreteFilter: '<S46>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter11;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_l = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_l;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_k[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_ni = xbar;

	/* End of DiscreteFilter: '<S46>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_ni,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5z,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5z);

	/* Math: '<S80>/Square' */
	Cortex_PPG_EEG_B.Square_ik = Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5z.MovingRMS
		* Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5z.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter13' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[13];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter13_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter13_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter13 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter12' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter12_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter12_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter12_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter12_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter12 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter12' */

	/* DiscreteFilter: '<S47>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_pv[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_l = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_l;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_pv[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_n1 = xbar;

	/* End of DiscreteFilter: '<S47>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_n1,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zz,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zz);

	/* Math: '<S81>/Square' */
	Cortex_PPG_EEG_B.Square_ed =
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zz.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zz.MovingRMS;

	/* DiscreteFilter: '<S47>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_n = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_n;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_aj = xbar;

	/* End of DiscreteFilter: '<S47>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_aj,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzh,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzh);

	/* Math: '<S82>/Square' */
	Cortex_PPG_EEG_B.Square_c =
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzh.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzh.MovingRMS;

	/* DiscreteFilter: '<S47>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_bw = xbar;

	/* End of DiscreteFilter: '<S47>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_bw,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzhe,
		&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzhe);

	/* Math: '<S83>/Square' */
	Cortex_PPG_EEG_B.Square_of =
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzhe.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_pnaevvfpgh5zzhe.MovingRMS;

	/* DiscreteFilter: '<S47>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_i = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_i;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_h5 = xbar;

	/* End of DiscreteFilter: '<S47>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_h5,
		&Cortex_PPG_EEG_B.MovingRMS_g, &Cortex_PPG_EEG_DW.MovingRMS_g);

	/* Math: '<S84>/Square' */
	Cortex_PPG_EEG_B.Square_lk = Cortex_PPG_EEG_B.MovingRMS_g.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_g.MovingRMS;

	/* DiscreteFilter: '<S47>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter12;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_e = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_e;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_m[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_kr = xbar;

	/* End of DiscreteFilter: '<S47>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_kr,
		&Cortex_PPG_EEG_B.MovingRMS_c, &Cortex_PPG_EEG_DW.MovingRMS_c);

	/* Math: '<S85>/Square' */
	Cortex_PPG_EEG_B.Square_j1 = Cortex_PPG_EEG_B.MovingRMS_c.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_c.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter14' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[14];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter14_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter14_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter14 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter13' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter13_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter13_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter13_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter13_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter13 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter13' */

	/* DiscreteFilter: '<S48>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_om[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_ij = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_ij;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_om[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_nc = xbar;

	/* End of DiscreteFilter: '<S48>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_nc,
		&Cortex_PPG_EEG_B.MovingRMS_hs, &Cortex_PPG_EEG_DW.MovingRMS_hs);

	/* Math: '<S116>/Square' */
	Cortex_PPG_EEG_B.Square_lh = Cortex_PPG_EEG_B.MovingRMS_hs.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_hs.MovingRMS;

	/* DiscreteFilter: '<S48>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_af[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_mp = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_mp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_af[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_f = xbar;

	/* End of DiscreteFilter: '<S48>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_f,
		&Cortex_PPG_EEG_B.MovingRMS_b, &Cortex_PPG_EEG_DW.MovingRMS_b);

	/* Math: '<S117>/Square' */
	Cortex_PPG_EEG_B.Square_j4 = Cortex_PPG_EEG_B.MovingRMS_b.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_b.MovingRMS;

	/* DiscreteFilter: '<S48>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_fs[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a4 = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a4;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_fs[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_l = xbar;

	/* End of DiscreteFilter: '<S48>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_l,
		&Cortex_PPG_EEG_B.MovingRMS_ng, &Cortex_PPG_EEG_DW.MovingRMS_ng);

	/* Math: '<S118>/Square' */
	Cortex_PPG_EEG_B.Square_pq = Cortex_PPG_EEG_B.MovingRMS_ng.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ng.MovingRMS;

	/* DiscreteFilter: '<S48>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_ie[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_db = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_db;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_ie[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_c = xbar;

	/* End of DiscreteFilter: '<S48>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_c,
		&Cortex_PPG_EEG_B.MovingRMS_gye, &Cortex_PPG_EEG_DW.MovingRMS_gye);

	/* Math: '<S119>/Square' */
	Cortex_PPG_EEG_B.Square_g2 = Cortex_PPG_EEG_B.MovingRMS_gye.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_gye.MovingRMS;

	/* DiscreteFilter: '<S48>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter13;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_g = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_g;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_d = xbar;

	/* End of DiscreteFilter: '<S48>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_d,
		&Cortex_PPG_EEG_B.MovingRMS_go, &Cortex_PPG_EEG_DW.MovingRMS_go);

	/* Math: '<S120>/Square' */
	Cortex_PPG_EEG_B.Square_ln = Cortex_PPG_EEG_B.MovingRMS_go.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_go.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter15' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[15];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter15_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter15_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter15 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter14' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter14_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter14_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter14_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter14_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter14 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter14' */

	/* DiscreteFilter: '<S49>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_e[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o0 = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o0;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_e[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_ae = xbar;

	/* End of DiscreteFilter: '<S49>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_ae,
		&Cortex_PPG_EEG_B.MovingRMS_ep, &Cortex_PPG_EEG_DW.MovingRMS_ep);

	/* Math: '<S121>/Square' */
	Cortex_PPG_EEG_B.Square_f3 = Cortex_PPG_EEG_B.MovingRMS_ep.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ep.MovingRMS;

	/* DiscreteFilter: '<S49>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_mp[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_c = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_c;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_mp[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_j = xbar;

	/* End of DiscreteFilter: '<S49>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_j,
		&Cortex_PPG_EEG_B.MovingRMS_kf, &Cortex_PPG_EEG_DW.MovingRMS_kf);

	/* Math: '<S122>/Square' */
	Cortex_PPG_EEG_B.Square_d5 = Cortex_PPG_EEG_B.MovingRMS_kf.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_kf.MovingRMS;

	/* DiscreteFilter: '<S49>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gm = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gm;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_i[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_jp = xbar;

	/* End of DiscreteFilter: '<S49>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_jp,
		&Cortex_PPG_EEG_B.MovingRMS_bn, &Cortex_PPG_EEG_DW.MovingRMS_bn);

	/* Math: '<S123>/Square' */
	Cortex_PPG_EEG_B.Square_k0 = Cortex_PPG_EEG_B.MovingRMS_bn.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_bn.MovingRMS;

	/* DiscreteFilter: '<S49>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_fm[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c0 = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c0;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_fm[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_hx = xbar;

	/* End of DiscreteFilter: '<S49>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_hx,
		&Cortex_PPG_EEG_B.MovingRMS_c4, &Cortex_PPG_EEG_DW.MovingRMS_c4);

	/* Math: '<S124>/Square' */
	Cortex_PPG_EEG_B.Square_lk2 = Cortex_PPG_EEG_B.MovingRMS_c4.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_c4.MovingRMS;

	/* DiscreteFilter: '<S49>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter14;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_dc[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_c = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_c;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_dc[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_nf = xbar;

	/* End of DiscreteFilter: '<S49>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_nf,
		&Cortex_PPG_EEG_B.MovingRMS_l, &Cortex_PPG_EEG_DW.MovingRMS_l);

	/* Math: '<S125>/Square' */
	Cortex_PPG_EEG_B.Square_ne = Cortex_PPG_EEG_B.MovingRMS_l.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_l.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter16' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[16];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter16_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter16_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter16 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter15' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter15_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter15_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter15_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter15_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter15 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter15' */

	/* DiscreteFilter: '<S50>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_jq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_oh = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_oh;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_jq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_k = xbar;

	/* End of DiscreteFilter: '<S50>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_k,
		&Cortex_PPG_EEG_B.MovingRMS_bx, &Cortex_PPG_EEG_DW.MovingRMS_bx);

	/* Math: '<S146>/Square' */
	Cortex_PPG_EEG_B.Square_g4 = Cortex_PPG_EEG_B.MovingRMS_bx.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_bx.MovingRMS;

	/* DiscreteFilter: '<S50>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_im[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nn = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nn;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_im[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_l = xbar;

	/* End of DiscreteFilter: '<S50>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_l,
		&Cortex_PPG_EEG_B.MovingRMS_dp, &Cortex_PPG_EEG_DW.MovingRMS_dp);

	/* Math: '<S147>/Square' */
	Cortex_PPG_EEG_B.Square_cx = Cortex_PPG_EEG_B.MovingRMS_dp.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_dp.MovingRMS;

	/* DiscreteFilter: '<S50>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_dt[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_b = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_b;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_dt[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_ek = xbar;

	/* End of DiscreteFilter: '<S50>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_ek,
		&Cortex_PPG_EEG_B.MovingRMS_j5, &Cortex_PPG_EEG_DW.MovingRMS_j5);

	/* Math: '<S148>/Square' */
	Cortex_PPG_EEG_B.Square_el = Cortex_PPG_EEG_B.MovingRMS_j5.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_j5.MovingRMS;

	/* DiscreteFilter: '<S50>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bd[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_dy = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_dy;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bd[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_nh = xbar;

	/* End of DiscreteFilter: '<S50>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_nh,
		&Cortex_PPG_EEG_B.MovingRMS_lb, &Cortex_PPG_EEG_DW.MovingRMS_lb);

	/* Math: '<S149>/Square' */
	Cortex_PPG_EEG_B.Square_ny = Cortex_PPG_EEG_B.MovingRMS_lb.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_lb.MovingRMS;

	/* DiscreteFilter: '<S50>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter15;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h4[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_ks = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_ks;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h4[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_e = xbar;

	/* End of DiscreteFilter: '<S50>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_e,
		&Cortex_PPG_EEG_B.MovingRMS_ev, &Cortex_PPG_EEG_DW.MovingRMS_ev);

	/* Math: '<S150>/Square' */
	Cortex_PPG_EEG_B.Square_gm = Cortex_PPG_EEG_B.MovingRMS_ev.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ev.MovingRMS;

	/* DiscreteFilter: '<S3>/60 Hz notch filter17' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[17];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter17_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter17_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter17 = xbar;

	/* DiscreteFilter: '<S3>/[1 100] Hz Band filter16' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter17;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled15[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter16_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter16_tmp = xbar;
	xbar = 0.340681282165238 * Cortex_PPG_EEG_DW.u100HzBandfilter16_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 10L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled14[inputIdx] *
			Cortex_PPG_EEG_DW.u100HzBandfilter16_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.u100HzBandfilter16 = xbar;

	/* End of DiscreteFilter: '<S3>/[1 100] Hz Band filter16' */

	/* DiscreteFilter: '<S51>/Theta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled21[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_kh = xbar;
	xbar = 0.002885692894192 * Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_kh;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled20[inputIdx] *
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.ThetaBandfilter_jn = xbar;

	/* End of DiscreteFilter: '<S51>/Theta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.ThetaBandfilter_jn,
		&Cortex_PPG_EEG_B.MovingRMS_le, &Cortex_PPG_EEG_DW.MovingRMS_le);

	/* Math: '<S151>/Square' */
	Cortex_PPG_EEG_B.Square_d0 = Cortex_PPG_EEG_B.MovingRMS_le.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_le.MovingRMS;

	/* DiscreteFilter: '<S51>/Alpha Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled17[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_aq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nv = xbar;
	xbar = 0.002898956706637 * Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nv;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled16[inputIdx] *
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_aq[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.AlphaBandfilter_p = xbar;

	/* End of DiscreteFilter: '<S51>/Alpha Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.AlphaBandfilter_p,
		&Cortex_PPG_EEG_B.MovingRMS_h0, &Cortex_PPG_EEG_DW.MovingRMS_h0);

	/* Math: '<S152>/Square' */
	Cortex_PPG_EEG_B.Square_js = Cortex_PPG_EEG_B.MovingRMS_h0.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_h0.MovingRMS;

	/* DiscreteFilter: '<S51>/SMR Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled24[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g1[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.SMRBandfilter_tmp_pp = xbar;
	xbar = 0.002899197083503 * Cortex_PPG_EEG_DW.SMRBandfilter_tmp_pp;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled23[inputIdx] *
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g1[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.SMRBandfilter_c = xbar;

	/* End of DiscreteFilter: '<S51>/SMR Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.SMRBandfilter_c,
		&Cortex_PPG_EEG_B.MovingRMS_hc, &Cortex_PPG_EEG_DW.MovingRMS_hc);

	/* Math: '<S153>/Square' */
	Cortex_PPG_EEG_B.Square_jy = Cortex_PPG_EEG_B.MovingRMS_hc.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_hc.MovingRMS;

	/* DiscreteFilter: '<S51>/Beta Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled19[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.BetaBandfilter_tmp_ah = xbar;
	xbar = 0.005045932326505 * Cortex_PPG_EEG_DW.BetaBandfilter_tmp_ah;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled18[inputIdx] *
			Cortex_PPG_EEG_DW.BetaBandfilter_states_a[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.BetaBandfilter_is = xbar;

	/* End of DiscreteFilter: '<S51>/Beta Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.BetaBandfilter_is,
		&Cortex_PPG_EEG_B.MovingRMS_hl, &Cortex_PPG_EEG_DW.MovingRMS_hl);

	/* Math: '<S154>/Square' */
	Cortex_PPG_EEG_B.Square_lm = Cortex_PPG_EEG_B.MovingRMS_hl.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_hl.MovingRMS;

	/* DiscreteFilter: '<S51>/Gamma Band filter' */
	xbar = Cortex_PPG_EEG_B.u100HzBandfilter16;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled26[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.GammaBandfilter_tmp_aq = xbar;
	xbar = 0.055358019483807 * Cortex_PPG_EEG_DW.GammaBandfilter_tmp_aq;
	inputIdx = 1L;
	for (k = 0L; k < 12L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled25[inputIdx] *
			Cortex_PPG_EEG_DW.GammaBandfilter_states_o[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.GammaBandfilter_dt = xbar;

	/* End of DiscreteFilter: '<S51>/Gamma Band filter' */
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.GammaBandfilter_dt,
		&Cortex_PPG_EEG_B.MovingRMS_ef, &Cortex_PPG_EEG_DW.MovingRMS_ef);

	/* Math: '<S155>/Square' */
	Cortex_PPG_EEG_B.Square_mi = Cortex_PPG_EEG_B.MovingRMS_ef.MovingRMS *
		Cortex_PPG_EEG_B.MovingRMS_ef.MovingRMS;

	/* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
	 *  MATLAB Function: '<S1>/Display Brain Map'
	 */
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[0] =
		Cortex_PPG_EEG_B.Square_ml;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[1] = Cortex_PPG_EEG_B.Square;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[2] =
		Cortex_PPG_EEG_B.Square_j;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[3] =
		Cortex_PPG_EEG_B.Square_m;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[4] =
		Cortex_PPG_EEG_B.Square_ml4;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[5] =
		Cortex_PPG_EEG_B.Square_hd;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[6] =
		Cortex_PPG_EEG_B.Square_d;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[7] =
		Cortex_PPG_EEG_B.Square_ig;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[8] =
		Cortex_PPG_EEG_B.Square_h;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[9] =
		Cortex_PPG_EEG_B.Square_i4;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[10] =
		Cortex_PPG_EEG_B.Square_n;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[11] =
		Cortex_PPG_EEG_B.Square_o;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[12] =
		Cortex_PPG_EEG_B.Square_jx;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[13] =
		Cortex_PPG_EEG_B.Square_ix;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[14] =
		Cortex_PPG_EEG_B.Square_l;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[15] =
		Cortex_PPG_EEG_B.Square_mu;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[16] =
		Cortex_PPG_EEG_B.Square_dt;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[17] =
		Cortex_PPG_EEG_B.Square_ox;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[18] =
		Cortex_PPG_EEG_B.Square_az;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[19] =
		Cortex_PPG_EEG_B.Square_ho;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[20] =
		Cortex_PPG_EEG_B.Square_df;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[21] =
		Cortex_PPG_EEG_B.Square_hb;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[22] =
		Cortex_PPG_EEG_B.Square_ey;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[23] =
		Cortex_PPG_EEG_B.Square_h3;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[24] =
		Cortex_PPG_EEG_B.Square_ma;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[25] =
		Cortex_PPG_EEG_B.Square_li;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[26] =
		Cortex_PPG_EEG_B.Square_k;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[27] =
		Cortex_PPG_EEG_B.Square_lb;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[28] =
		Cortex_PPG_EEG_B.Square_ee;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[29] =
		Cortex_PPG_EEG_B.Square_de;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[30] =
		Cortex_PPG_EEG_B.Square_bb;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[31] =
		Cortex_PPG_EEG_B.Square_mr;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[32] =
		Cortex_PPG_EEG_B.Square_nn;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[33] =
		Cortex_PPG_EEG_B.Square_dl;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[34] =
		Cortex_PPG_EEG_B.Square_jt;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[35] =
		Cortex_PPG_EEG_B.Square_h2;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[36] =
		Cortex_PPG_EEG_B.Square_p;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[37] =
		Cortex_PPG_EEG_B.Square_jz;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[38] =
		Cortex_PPG_EEG_B.Square_et;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[39] =
		Cortex_PPG_EEG_B.Square_no;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[40] =
		Cortex_PPG_EEG_B.Square_hu;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[41] =
		Cortex_PPG_EEG_B.Square_oy;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[42] =
		Cortex_PPG_EEG_B.Square_hn;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[43] =
		Cortex_PPG_EEG_B.Square_nq;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[44] =
		Cortex_PPG_EEG_B.Square_im;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[45] =
		Cortex_PPG_EEG_B.Square_eo;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[46] =
		Cortex_PPG_EEG_B.Square_hdj;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[47] =
		Cortex_PPG_EEG_B.Square_en;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[48] =
		Cortex_PPG_EEG_B.Square_g;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[49] =
		Cortex_PPG_EEG_B.Square_bs;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[50] =
		Cortex_PPG_EEG_B.Square_dl0;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[51] =
		Cortex_PPG_EEG_B.Square_f;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[52] =
		Cortex_PPG_EEG_B.Square_ew;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[53] =
		Cortex_PPG_EEG_B.Square_gl;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[54] =
		Cortex_PPG_EEG_B.Square_ik;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[55] =
		Cortex_PPG_EEG_B.Square_ed;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[56] =
		Cortex_PPG_EEG_B.Square_c;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[57] =
		Cortex_PPG_EEG_B.Square_of;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[58] =
		Cortex_PPG_EEG_B.Square_lk;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[59] =
		Cortex_PPG_EEG_B.Square_j1;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[60] =
		Cortex_PPG_EEG_B.Square_lh;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[61] =
		Cortex_PPG_EEG_B.Square_j4;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[62] =
		Cortex_PPG_EEG_B.Square_pq;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[63] =
		Cortex_PPG_EEG_B.Square_g2;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[64] =
		Cortex_PPG_EEG_B.Square_ln;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[65] =
		Cortex_PPG_EEG_B.Square_f3;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[66] =
		Cortex_PPG_EEG_B.Square_d5;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[67] =
		Cortex_PPG_EEG_B.Square_k0;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[68] =
		Cortex_PPG_EEG_B.Square_lk2;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[69] =
		Cortex_PPG_EEG_B.Square_ne;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[70] =
		Cortex_PPG_EEG_B.Square_g4;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[71] =
		Cortex_PPG_EEG_B.Square_cx;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[72] =
		Cortex_PPG_EEG_B.Square_el;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[73] =
		Cortex_PPG_EEG_B.Square_ny;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[74] =
		Cortex_PPG_EEG_B.Square_gm;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[75] =
		Cortex_PPG_EEG_B.Square_d0;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[76] =
		Cortex_PPG_EEG_B.Square_js;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[77] =
		Cortex_PPG_EEG_B.Square_jy;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[78] =
		Cortex_PPG_EEG_B.Square_lm;
	Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[79] =
		Cortex_PPG_EEG_B.Square_mi;

	/* MATLAB Function: '<S1>/Display Brain Map' */
	scale = Cortex_PPG_EEG_sum(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[0]);
	TotalPower_F7_F8 = Cortex_PPG_EEG_sum
	(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[10]);
	TotalPower_T5_T6 = Cortex_PPG_EEG_sum
	(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[20]);
	TotalPower_O1_O2 = Cortex_PPG_EEG_sum
	(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[30]);
	TotalPower_F3_F4 = Cortex_PPG_EEG_sum
	(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[40]);
	TotalPower_C3_C4 = Cortex_PPG_EEG_sum
	(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[50]);
	t = Cortex_PPG_EEG_sum(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[60]);
	xbar = Cortex_PPG_EEG_sum(&Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[70]);
	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[0] / scale);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[1] / scale);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[2] / scale);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[3] / scale);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[4] / scale);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[5] / scale);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[6] / scale);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[7] / scale);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[8] / scale);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[9] / scale);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		m1 = 1;
	}
	else {
		m1 = 0;
		c_k = 2;
		exitg1 = false;
		while ((!exitg1) && (c_k < 11)) {
			if (!rtIsNaN(varargin_1[c_k - 1])) {
				m1 = c_k;
				exitg1 = true;
			}
			else {
				c_k++;
			}
		}
	}

	if (m1 == 0) {
		scale = varargin_1[0];
		m1 = 1;
	}
	else {
		scale = varargin_1[m1 - 1];
		for (c_k = m1; c_k < 10; c_k++) {
			if (scale < varargin_1[c_k]) {
				scale = varargin_1[c_k];
				m1 = c_k + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[10] /
		TotalPower_F7_F8);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[11] /
		TotalPower_F7_F8);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[12] /
		TotalPower_F7_F8);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[13] /
		TotalPower_F7_F8);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[14] /
		TotalPower_F7_F8);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[15] /
		TotalPower_F7_F8);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[16] /
		TotalPower_F7_F8);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[17] /
		TotalPower_F7_F8);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[18] /
		TotalPower_F7_F8);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[19] /
		TotalPower_F7_F8);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		i = 1;
	}
	else {
		i = 0;
		c_k = 2;
		exitg1 = false;
		while ((!exitg1) && (c_k < 11)) {
			if (!rtIsNaN(varargin_1[c_k - 1])) {
				i = c_k;
				exitg1 = true;
			}
			else {
				c_k++;
			}
		}
	}

	if (i == 0) {
		TotalPower_F7_F8 = varargin_1[0];
		i = 1;
	}
	else {
		TotalPower_F7_F8 = varargin_1[i - 1];
		for (c_k = i; c_k < 10; c_k++) {
			if (TotalPower_F7_F8 < varargin_1[c_k]) {
				TotalPower_F7_F8 = varargin_1[c_k];
				i = c_k + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[20] /
		TotalPower_T5_T6);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[21] /
		TotalPower_T5_T6);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[22] /
		TotalPower_T5_T6);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[23] /
		TotalPower_T5_T6);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[24] /
		TotalPower_T5_T6);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[25] /
		TotalPower_T5_T6);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[26] /
		TotalPower_T5_T6);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[27] /
		TotalPower_T5_T6);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[28] /
		TotalPower_T5_T6);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[29] /
		TotalPower_T5_T6);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		c_k = 1;
	}
	else {
		c_k = 0;
		loop_ub = 2;
		exitg1 = false;
		while ((!exitg1) && (loop_ub < 11)) {
			if (!rtIsNaN(varargin_1[loop_ub - 1])) {
				c_k = loop_ub;
				exitg1 = true;
			}
			else {
				loop_ub++;
			}
		}
	}

	if (c_k == 0) {
		TotalPower_T5_T6 = varargin_1[0];
		c_k = 1;
	}
	else {
		TotalPower_T5_T6 = varargin_1[c_k - 1];
		for (loop_ub = c_k; loop_ub < 10; loop_ub++) {
			if (TotalPower_T5_T6 < varargin_1[loop_ub]) {
				TotalPower_T5_T6 = varargin_1[loop_ub];
				c_k = loop_ub + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[30] /
		TotalPower_O1_O2);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[31] /
		TotalPower_O1_O2);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[32] /
		TotalPower_O1_O2);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[33] /
		TotalPower_O1_O2);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[34] /
		TotalPower_O1_O2);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[35] /
		TotalPower_O1_O2);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[36] /
		TotalPower_O1_O2);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[37] /
		TotalPower_O1_O2);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[38] /
		TotalPower_O1_O2);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[39] /
		TotalPower_O1_O2);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		loop_ub = 1;
	}
	else {
		loop_ub = 0;
		ZeroCross_Index_idx_1 = 2;
		exitg1 = false;
		while ((!exitg1) && (ZeroCross_Index_idx_1 < 11)) {
			if (!rtIsNaN(varargin_1[ZeroCross_Index_idx_1 - 1])) {
				loop_ub = ZeroCross_Index_idx_1;
				exitg1 = true;
			}
			else {
				ZeroCross_Index_idx_1++;
			}
		}
	}

	if (loop_ub == 0) {
		TotalPower_O1_O2 = varargin_1[0];
		loop_ub = 1;
	}
	else {
		TotalPower_O1_O2 = varargin_1[loop_ub - 1];
		for (ZeroCross_Index_idx_1 = loop_ub; ZeroCross_Index_idx_1 < 10;
			ZeroCross_Index_idx_1++) {
			if (TotalPower_O1_O2 < varargin_1[ZeroCross_Index_idx_1]) {
				TotalPower_O1_O2 = varargin_1[ZeroCross_Index_idx_1];
				loop_ub = ZeroCross_Index_idx_1 + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[40] /
		TotalPower_F3_F4);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[41] /
		TotalPower_F3_F4);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[42] /
		TotalPower_F3_F4);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[43] /
		TotalPower_F3_F4);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[44] /
		TotalPower_F3_F4);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[45] /
		TotalPower_F3_F4);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[46] /
		TotalPower_F3_F4);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[47] /
		TotalPower_F3_F4);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[48] /
		TotalPower_F3_F4);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[49] /
		TotalPower_F3_F4);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		ZeroCross_Index_idx_1 = 1;
	}
	else {
		ZeroCross_Index_idx_1 = 0;
		One_y_Indices_size_idx_1 = 2;
		exitg1 = false;
		while ((!exitg1) && (One_y_Indices_size_idx_1 < 11)) {
			if (!rtIsNaN(varargin_1[One_y_Indices_size_idx_1 - 1])) {
				ZeroCross_Index_idx_1 = One_y_Indices_size_idx_1;
				exitg1 = true;
			}
			else {
				One_y_Indices_size_idx_1++;
			}
		}
	}

	if (ZeroCross_Index_idx_1 == 0) {
		TotalPower_F3_F4 = varargin_1[0];
		ZeroCross_Index_idx_1 = 1;
	}
	else {
		TotalPower_F3_F4 = varargin_1[ZeroCross_Index_idx_1 - 1];
		for (One_y_Indices_size_idx_1 = ZeroCross_Index_idx_1;
			One_y_Indices_size_idx_1 < 10; One_y_Indices_size_idx_1++) {
			if (TotalPower_F3_F4 < varargin_1[One_y_Indices_size_idx_1]) {
				TotalPower_F3_F4 = varargin_1[One_y_Indices_size_idx_1];
				ZeroCross_Index_idx_1 = One_y_Indices_size_idx_1 + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[50] /
		TotalPower_C3_C4);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[51] /
		TotalPower_C3_C4);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[52] /
		TotalPower_C3_C4);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[53] /
		TotalPower_C3_C4);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[54] /
		TotalPower_C3_C4);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[55] /
		TotalPower_C3_C4);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[56] /
		TotalPower_C3_C4);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[57] /
		TotalPower_C3_C4);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[58] /
		TotalPower_C3_C4);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[59] /
		TotalPower_C3_C4);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		One_y_Indices_size_idx_1 = 1;
	}
	else {
		One_y_Indices_size_idx_1 = 0;
		k_k = 2;
		exitg1 = false;
		while ((!exitg1) && (k_k < 11)) {
			if (!rtIsNaN(varargin_1[k_k - 1])) {
				One_y_Indices_size_idx_1 = k_k;
				exitg1 = true;
			}
			else {
				k_k++;
			}
		}
	}

	if (One_y_Indices_size_idx_1 == 0) {
		TotalPower_C3_C4 = varargin_1[0];
		One_y_Indices_size_idx_1 = 1;
	}
	else {
		TotalPower_C3_C4 = varargin_1[One_y_Indices_size_idx_1 - 1];
		for (k_k = One_y_Indices_size_idx_1; k_k < 10; k_k++) {
			if (TotalPower_C3_C4 < varargin_1[k_k]) {
				TotalPower_C3_C4 = varargin_1[k_k];
				One_y_Indices_size_idx_1 = k_k + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[60] / t);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[61] / t);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[62] / t);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[63] / t);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[64] / t);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[65] / t);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[66] / t);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[67] / t);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[68] / t);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[69] / t);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		k_k = 1;
	}
	else {
		k_k = 0;
		m_k = 2;
		exitg1 = false;
		while ((!exitg1) && (m_k < 11)) {
			if (!rtIsNaN(varargin_1[m_k - 1])) {
				k_k = m_k;
				exitg1 = true;
			}
			else {
				m_k++;
			}
		}
	}

	if (k_k == 0) {
		t = varargin_1[0];
		k_k = 1;
	}
	else {
		t = varargin_1[k_k - 1];
		for (m_k = k_k; m_k < 10; m_k++) {
			if (t < varargin_1[m_k]) {
				t = varargin_1[m_k];
				k_k = m_k + 1;
			}
		}
	}

	tmp = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[70] / xbar);
	tmp_1 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[71] / xbar);
	tmp_2 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[72] / xbar);
	tmp_3 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[73] / xbar);
	tmp_4 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[74] / xbar);
	tmp_5 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[75] / xbar);
	tmp_6 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[76] / xbar);
	tmp_7 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[77] / xbar);
	tmp_8 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[78] / xbar);
	tmp_9 = fabs(Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_b[79] / xbar);
	varargin_1[0] = tmp;
	varargin_1[1] = tmp_1;
	varargin_1[2] = tmp_2;
	varargin_1[3] = tmp_3;
	varargin_1[4] = tmp_4;
	varargin_1[5] = tmp_5;
	varargin_1[6] = tmp_6;
	varargin_1[7] = tmp_7;
	varargin_1[8] = tmp_8;
	varargin_1[9] = tmp_9;
	if (!rtIsNaN(varargin_1[0])) {
		m_k = 1;
	}
	else {
		m_k = 0;
		o_k = 2;
		exitg1 = false;
		while ((!exitg1) && (o_k < 11)) {
			if (!rtIsNaN(varargin_1[o_k - 1])) {
				m_k = o_k;
				exitg1 = true;
			}
			else {
				o_k++;
			}
		}
	}

	if (m_k == 0) {
		xbar = varargin_1[0];
		m_k = 1;
	}
	else {
		xbar = varargin_1[m_k - 1];
		for (o_k = m_k; o_k < 10; o_k++) {
			if (xbar < varargin_1[o_k]) {
				xbar = varargin_1[o_k];
				m_k = o_k + 1;
			}
		}
	}

	Cortex_PPG_EEG_B.y_o[0] = scale;
	Cortex_PPG_EEG_B.y_o[1] = m1;
	Cortex_PPG_EEG_B.y_o[2] = TotalPower_F7_F8;
	Cortex_PPG_EEG_B.y_o[3] = i;
	Cortex_PPG_EEG_B.y_o[4] = TotalPower_T5_T6;
	Cortex_PPG_EEG_B.y_o[5] = c_k;
	Cortex_PPG_EEG_B.y_o[6] = TotalPower_O1_O2;
	Cortex_PPG_EEG_B.y_o[7] = loop_ub;
	Cortex_PPG_EEG_B.y_o[8] = TotalPower_F3_F4;
	Cortex_PPG_EEG_B.y_o[9] = ZeroCross_Index_idx_1;
	Cortex_PPG_EEG_B.y_o[10] = TotalPower_C3_C4;
	Cortex_PPG_EEG_B.y_o[11] = One_y_Indices_size_idx_1;
	Cortex_PPG_EEG_B.y_o[12] = t;
	Cortex_PPG_EEG_B.y_o[13] = k_k;
	Cortex_PPG_EEG_B.y_o[14] = xbar;
	Cortex_PPG_EEG_B.y_o[15] = m_k;

	/* DiscreteFilter: '<S32>/LPF_3Hz_Butter_4' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[2];
	xbar -= -3.8029975416543831 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[0L];
	xbar -= 5.4281659636838917 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[1L];
	xbar -= -3.4462642180932059 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[2L];
	xbar -= 0.821125136892454 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[3L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_h = xbar;
	xbar = 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_h;
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf
		[0L];
	xbar += 1.10028107839777E-5 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[1L];
	xbar += 7.3352071893185007E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf
		[2L];
	xbar += 1.8338017973296002E-6 * Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf
		[3L];
	Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_c = xbar;

	/* Buffer: '<S32>/Buffer' */
	inputIdx = 1L;
	k = 34L - Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b;
	currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b;
	if (k <= 1L) {
		inputSegment = 0L;
		while (inputSegment < k) {
			Cortex_PPG_EEG_DW.Buffer_CircBuf_m[currentOffset_0] =
				Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_c;
			inputSegment = 1L;
		}

		currentOffset_0 = 0L;
		inputIdx = 1L - k;
	}

	for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
		Cortex_PPG_EEG_DW.Buffer_CircBuf_m[currentOffset_0 + inputSegment] =
			Cortex_PPG_EEG_B.LPF_3Hz_Butter_4_c;
	}

	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b++;
	if (Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b >= 34L) {
		Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b -= 34L;
	}

	Cortex_PPG_EEG_DW.Buffer_bufferLength_a++;
	if (Cortex_PPG_EEG_DW.Buffer_bufferLength_a > 34L) {
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb =
			(Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb +
				Cortex_PPG_EEG_DW.Buffer_bufferLength_a) - 34L;
		if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb > 34L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb -= 34L;
		}

		Cortex_PPG_EEG_DW.Buffer_bufferLength_a = 34L;
	}

	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		Cortex_PPG_EEG_DW.Buffer_bufferLength_a -= 17L;
		if (Cortex_PPG_EEG_DW.Buffer_bufferLength_a < 0L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb +=
				Cortex_PPG_EEG_DW.Buffer_bufferLength_a;
			if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb < 0L) {
				Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb += 34L;
			}

			Cortex_PPG_EEG_DW.Buffer_bufferLength_a = 0L;
		}

		uyIdx = 0L;
		currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb;
		if (currentOffset_0 < 0L) {
			currentOffset_0 += 34L;
		}

		k = 34L - currentOffset_0;
		inputIdx = 17L;
		if (k <= 17L) {
			for (inputSegment = 0L; inputSegment < k; inputSegment = (int16_T)
				inputSegment + 1) {
				Cortex_PPG_EEG_B.Buffer_k[inputSegment] =
					Cortex_PPG_EEG_DW.Buffer_CircBuf_m[currentOffset_0 + inputSegment];
			}

			uyIdx = k;
			currentOffset_0 = 0L;
			inputIdx = 17L - k;
		}

		for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
			Cortex_PPG_EEG_B.Buffer_k[uyIdx + inputSegment] =
				Cortex_PPG_EEG_DW.Buffer_CircBuf_m[currentOffset_0 + inputSegment];
		}

		currentOffset_0 += inputIdx;
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_eb = currentOffset_0;

		/* S-Function (sdspfirdn2): '<S32>/FIR Decimation' */
		inputIdx = 0L;
		uyIdx = Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_m;
		currentOffset = Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_mp;
		currentOffset_0 = Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_h;
		inputSegment = (currentOffset + 1L) * 23L - 23L;
		for (i = 0; i < 17; i++) {
			k = uyIdx;
			Cortex_PPG_EEG_DW.FIRDecimation_Sums_j +=
				Cortex_PPG_EEG_B.Buffer_k[inputIdx] *
				Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
			currentOffset_0++;
			for (jIdx = k + 1L; jIdx < inputSegment + 23L; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_j +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_p[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			for (jIdx = inputSegment; jIdx <= k; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_j +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_p[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled6[currentOffset_0];
				currentOffset_0++;
			}

			Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_p[k] =
				Cortex_PPG_EEG_B.Buffer_k[inputIdx];
			inputIdx++;
			uyIdx += 23L;
			if (uyIdx >= 391L) {
				uyIdx -= 391L;
			}

			currentOffset++;
			if (currentOffset < 17L) {
				inputSegment += 23L;
			}
			else {
				Cortex_PPG_EEG_B.FIRDecimation_f =
					Cortex_PPG_EEG_DW.FIRDecimation_Sums_j;
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_j = 0.0;
				currentOffset = 0L;
				currentOffset_0 = 0L;
				uyIdx--;
				if (uyIdx < 0L) {
					uyIdx += 23L;
				}

				inputSegment = 0L;
			}
		}

		Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_m = uyIdx;
		Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_h = currentOffset_0;
		Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_mp = currentOffset;

		/* End of S-Function (sdspfirdn2): '<S32>/FIR Decimation' */

		/* DiscreteFilter: '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_f;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.LF_006_014Hz_Cheby2_4th_DenCoef[inputIdx] *
				Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_tmp = xbar;
		xbar = 0.009794511583416 * Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_tmp;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.LF_006_014Hz_Cheby2_4th_NumCoef[inputIdx] *
				Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.LF_006_014Hz_Cheby2_4th = xbar;

		/* End of DiscreteFilter: '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */

		/* S-Function (sdspupfir2): '<S32>/FIR Interpolation' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_ia) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.LF_006_014Hz_Cheby2_4th *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_i[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_i[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_cv[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_ia =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_ia;
	}

	/* End of Buffer: '<S32>/Buffer' */

	/* S-Function (sdspupfir2): '<S32>/FIR Interpolation' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_l;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_l =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_cv[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_l++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_l >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_l = 0L;
	}

	Cortex_PPG_EEG_MovingRMS3(Cortex_PPG_EEG_B.FIRInterpolation_l,
		&Cortex_PPG_EEG_B.MovingRMS3, &Cortex_PPG_EEG_DW.MovingRMS3);

	/* DiscreteFilter: '<S3>/60 Hz notch filter' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[0];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter = xbar;

	/* DiscreteFilter: '<S28>/LPF_4Hz' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter;
	inputIdx = 1L;
	for (k = 0L; k < 6L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled28[inputIdx] *
			Cortex_PPG_EEG_DW.LPF_4Hz_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.LPF_4Hz_tmp = xbar;
	xbar = 0.002890550446273 * Cortex_PPG_EEG_DW.LPF_4Hz_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 6L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled27[inputIdx] *
			Cortex_PPG_EEG_DW.LPF_4Hz_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.LPF_4Hz = xbar;

	/* End of DiscreteFilter: '<S28>/LPF_4Hz' */

	/* Buffer: '<S28>/Buffer' */
	inputIdx = 1L;
	k = 20L - Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g;
	currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g;
	if (k <= 1L) {
		inputSegment = 0L;
		while (inputSegment < k) {
			Cortex_PPG_EEG_DW.Buffer_CircBuf_i[currentOffset_0] =
				Cortex_PPG_EEG_B.LPF_4Hz;
			inputSegment = 1L;
		}

		currentOffset_0 = 0L;
		inputIdx = 1L - k;
	}

	for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
		Cortex_PPG_EEG_DW.Buffer_CircBuf_i[currentOffset_0 + inputSegment] =
			Cortex_PPG_EEG_B.LPF_4Hz;
	}

	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g++;
	if (Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g >= 20L) {
		Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g -= 20L;
	}

	Cortex_PPG_EEG_DW.Buffer_bufferLength_av++;
	if (Cortex_PPG_EEG_DW.Buffer_bufferLength_av > 20L) {
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l =
			(Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l +
				Cortex_PPG_EEG_DW.Buffer_bufferLength_av) - 20L;
		if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l > 20L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l -= 20L;
		}

		Cortex_PPG_EEG_DW.Buffer_bufferLength_av = 20L;
	}

	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1] == 0) {
		Cortex_PPG_EEG_DW.Buffer_bufferLength_av -= 10L;
		if (Cortex_PPG_EEG_DW.Buffer_bufferLength_av < 0L) {
			Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l +=
				Cortex_PPG_EEG_DW.Buffer_bufferLength_av;
			if (Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l < 0L) {
				Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l += 20L;
			}

			Cortex_PPG_EEG_DW.Buffer_bufferLength_av = 0L;
		}

		uyIdx = 0L;
		currentOffset_0 = Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l;
		if (currentOffset_0 < 0L) {
			currentOffset_0 += 20L;
		}

		k = 20L - currentOffset_0;
		inputIdx = 10L;
		if (k <= 10L) {
			for (inputSegment = 0L; inputSegment < k; inputSegment = (int16_T)
				inputSegment + 1) {
				Cortex_PPG_EEG_B.Buffer_g[inputSegment] =
					Cortex_PPG_EEG_DW.Buffer_CircBuf_i[currentOffset_0 + inputSegment];
			}

			uyIdx = k;
			currentOffset_0 = 0L;
			inputIdx = 10L - k;
		}

		for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
			Cortex_PPG_EEG_B.Buffer_g[uyIdx + inputSegment] =
				Cortex_PPG_EEG_DW.Buffer_CircBuf_i[currentOffset_0 + inputSegment];
		}

		currentOffset_0 += inputIdx;
		Cortex_PPG_EEG_DW.Buffer_outBufPtrIdx_l = currentOffset_0;

		/* S-Function (sdspfirdn2): '<S28>/FIR Decimation' */
		inputIdx = 0L;
		uyIdx = Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_a;
		currentOffset = Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_d;
		currentOffset_0 = Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_i;
		inputSegment = (currentOffset + 1L) * 23L - 23L;
		for (i = 0; i < 10; i++) {
			k = uyIdx;
			Cortex_PPG_EEG_DW.FIRDecimation_Sums_a +=
				Cortex_PPG_EEG_B.Buffer_g[inputIdx] *
				Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
			currentOffset_0++;
			for (jIdx = k + 1L; jIdx < inputSegment + 23L; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_a +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_f[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
				currentOffset_0++;
			}

			for (jIdx = inputSegment; jIdx <= k; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_a +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_f[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
				currentOffset_0++;
			}

			Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_f[k] =
				Cortex_PPG_EEG_B.Buffer_g[inputIdx];
			inputIdx++;
			uyIdx += 23L;
			if (uyIdx >= 230L) {
				uyIdx -= 230L;
			}

			currentOffset++;
			if (currentOffset < 10L) {
				inputSegment += 23L;
			}
			else {
				Cortex_PPG_EEG_B.FIRDecimation_n =
					Cortex_PPG_EEG_DW.FIRDecimation_Sums_a;
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_a = 0.0;
				currentOffset = 0L;
				currentOffset_0 = 0L;
				uyIdx--;
				if (uyIdx < 0L) {
					uyIdx += 23L;
				}

				inputSegment = 0L;
			}
		}

		Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_a = uyIdx;
		Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_i = currentOffset_0;
		Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_d = currentOffset;

		/* End of S-Function (sdspfirdn2): '<S28>/FIR Decimation' */

		/* DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_n;
		inputIdx = 1L;
		for (k = 0L; k < 12L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled31[inputIdx] *
				Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6thto[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_a = xbar;
		xbar = 3.5000317975484E-5 *
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_a;
		inputIdx = 1L;
		for (k = 0L; k < 12L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled30[inputIdx] *
				Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6thto[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.Bandpass_072Hz_234_Butter_6thto = xbar;

		/* End of DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
		Cortex_PPG_EEG_MovingRMS1(Cortex_PPG_EEG_B.Bandpass_072Hz_234_Butter_6thto,
			&Cortex_PPG_EEG_B.MovingRMS3_pna, &Cortex_PPG_EEG_DW.MovingRMS3_pna);

		/* DiscreteFilter: '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_n;
		xbar -= -3.90149030263364 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[0L];
		xbar -= 5.7092940017625136 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[1L];
		xbar -= -3.713979922239715 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[2L];
		xbar -= 0.906178146809435 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[3L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_j = xbar;
		xbar = 1.2023116208181898E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_j;
		xbar += 4.80924648327274E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[0L];
		xbar += 7.21386972490912E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[1L];
		xbar += 4.80924648327274E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[2L];
		xbar += 1.2023116208181898E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[3L];
		Cortex_PPG_EEG_B.Lowpass_015Hz_Butter_4thtoextra = xbar;

		/* Sum: '<S28>/Add1' incorporates:
		 *  Constant: '<S28>/Constant'
		 */
		Cortex_PPG_EEG_B.Add1 = Cortex_PPG_EEG_B.Lowpass_015Hz_Butter_4thtoextra +
			2.2204460492503131E-16;

		/* Product: '<S28>/Product' */
		Cortex_PPG_EEG_B.Product = Cortex_PPG_EEG_B.MovingRMS3_pna.MovingRMS1 /
			Cortex_PPG_EEG_B.Add1;
	}

	/* End of Buffer: '<S28>/Buffer' */

	/* DiscreteFilter: '<S3>/60 Hz notch filter9' incorporates:
	 *  Inport: '<Root>/In'
	 */
	xbar = Cortex_PPG_EEG_U.In[9];
	xbar -= -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[0L];
	xbar -= 0.8595 * Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[1L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter9_tmp = xbar;
	xbar = 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter9_tmp;
	xbar += -0.1168 * Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[0L];
	xbar += 0.9298 * Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[1L];
	Cortex_PPG_EEG_B.u0Hznotchfilter9 = xbar;

	/* DiscreteFilter: '<S28>/LPF_4Hz ' */
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter9;
	inputIdx = 1L;
	for (k = 0L; k < 6L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled28[inputIdx] *
			Cortex_PPG_EEG_DW.LPF_4Hz_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_DW.LPF_4Hz_tmp_j = xbar;
	xbar = 0.002890550446273 * Cortex_PPG_EEG_DW.LPF_4Hz_tmp_j;
	inputIdx = 1L;
	for (k = 0L; k < 6L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled27[inputIdx] *
			Cortex_PPG_EEG_DW.LPF_4Hz_states_f[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.LPF_4Hz_l = xbar;

	/* End of DiscreteFilter: '<S28>/LPF_4Hz ' */

	/* Buffer: '<S28>/Buffer1' */
	inputIdx = 1L;
	k = 20L - Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx;
	currentOffset_0 = Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx;
	if (k <= 1L) {
		inputSegment = 0L;
		while (inputSegment < k) {
			Cortex_PPG_EEG_DW.Buffer1_CircBuf[currentOffset_0] =
				Cortex_PPG_EEG_B.LPF_4Hz_l;
			inputSegment = 1L;
		}

		currentOffset_0 = 0L;
		inputIdx = 1L - k;
	}

	for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
		Cortex_PPG_EEG_DW.Buffer1_CircBuf[currentOffset_0 + inputSegment] =
			Cortex_PPG_EEG_B.LPF_4Hz_l;
	}

	Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx++;
	if (Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx >= 20L) {
		Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx -= 20L;
	}

	Cortex_PPG_EEG_DW.Buffer1_bufferLength++;
	if (Cortex_PPG_EEG_DW.Buffer1_bufferLength > 20L) {
		Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx =
			(Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx +
				Cortex_PPG_EEG_DW.Buffer1_bufferLength) - 20L;
		if (Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx > 20L) {
			Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx -= 20L;
		}

		Cortex_PPG_EEG_DW.Buffer1_bufferLength = 20L;
	}

	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1] == 0) {
		Cortex_PPG_EEG_DW.Buffer1_bufferLength -= 10L;
		if (Cortex_PPG_EEG_DW.Buffer1_bufferLength < 0L) {
			Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx +=
				Cortex_PPG_EEG_DW.Buffer1_bufferLength;
			if (Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx < 0L) {
				Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx += 20L;
			}

			Cortex_PPG_EEG_DW.Buffer1_bufferLength = 0L;
		}

		uyIdx = 0L;
		currentOffset_0 = Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx;
		if (currentOffset_0 < 0L) {
			currentOffset_0 += 20L;
		}

		k = 20L - currentOffset_0;
		inputIdx = 10L;
		if (k <= 10L) {
			for (inputSegment = 0L; inputSegment < k; inputSegment = (int16_T)
				inputSegment + 1) {
				Cortex_PPG_EEG_B.Buffer1[inputSegment] =
					Cortex_PPG_EEG_DW.Buffer1_CircBuf[currentOffset_0 + inputSegment];
			}

			uyIdx = k;
			currentOffset_0 = 0L;
			inputIdx = 10L - k;
		}

		for (inputSegment = 0L; inputSegment < inputIdx; inputSegment++) {
			Cortex_PPG_EEG_B.Buffer1[uyIdx + inputSegment] =
				Cortex_PPG_EEG_DW.Buffer1_CircBuf[currentOffset_0 + inputSegment];
		}

		currentOffset_0 += inputIdx;
		Cortex_PPG_EEG_DW.Buffer1_outBufPtrIdx = currentOffset_0;

		/* S-Function (sdspfirdn2): '<S28>/FIR Decimation ' */
		inputIdx = 0L;
		uyIdx = Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_k;
		currentOffset = Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_b;
		currentOffset_0 = Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_hm;
		inputSegment = (currentOffset + 1L) * 23L - 23L;
		for (i = 0; i < 10; i++) {
			k = uyIdx;
			Cortex_PPG_EEG_DW.FIRDecimation_Sums_ov +=
				Cortex_PPG_EEG_B.Buffer1[inputIdx] *
				Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
			currentOffset_0++;
			for (jIdx = k + 1L; jIdx < inputSegment + 23L; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_ov +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_l[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
				currentOffset_0++;
			}

			for (jIdx = inputSegment; jIdx <= k; jIdx++) {
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_ov +=
					Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_l[jIdx] *
					Cortex_PPG_EEG_ConstP.pooled29[currentOffset_0];
				currentOffset_0++;
			}

			Cortex_PPG_EEG_DW.FIRDecimation_StatesBuff_l[k] =
				Cortex_PPG_EEG_B.Buffer1[inputIdx];
			inputIdx++;
			uyIdx += 23L;
			if (uyIdx >= 230L) {
				uyIdx -= 230L;
			}

			currentOffset++;
			if (currentOffset < 10L) {
				inputSegment += 23L;
			}
			else {
				Cortex_PPG_EEG_B.FIRDecimation_h =
					Cortex_PPG_EEG_DW.FIRDecimation_Sums_ov;
				Cortex_PPG_EEG_DW.FIRDecimation_Sums_ov = 0.0;
				currentOffset = 0L;
				currentOffset_0 = 0L;
				uyIdx--;
				if (uyIdx < 0L) {
					uyIdx += 23L;
				}

				inputSegment = 0L;
			}
		}

		Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_k = uyIdx;
		Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_hm = currentOffset_0;
		Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_b = currentOffset;

		/* End of S-Function (sdspfirdn2): '<S28>/FIR Decimation ' */

		/* DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_h;
		inputIdx = 1L;
		for (k = 0L; k < 12L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled31[inputIdx] *
				Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_j[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_l = xbar;
		xbar = 3.5000317975484E-5 *
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_l;
		inputIdx = 1L;
		for (k = 0L; k < 12L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled30[inputIdx] *
				Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_j[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.Bandpass_072Hz_234_Butter_6th_k = xbar;

		/* End of DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
		Cortex_PPG_EEG_MovingRMS1(Cortex_PPG_EEG_B.Bandpass_072Hz_234_Butter_6th_k,
			&Cortex_PPG_EEG_B.MovingRMS1, &Cortex_PPG_EEG_DW.MovingRMS1);

		/* DiscreteFilter: '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part1' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_h;
		xbar -= -3.90149030263364 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[0L];
		xbar -= 5.7092940017625136 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[1L];
		xbar -= -3.713979922239715 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[2L];
		xbar -= 0.906178146809435 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[3L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoex_ig = xbar;
		xbar = 1.2023116208181898E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoex_ig;
		xbar += 4.80924648327274E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[0L];
		xbar += 7.21386972490912E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[1L];
		xbar += 4.80924648327274E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[2L];
		xbar += 1.2023116208181898E-7 *
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[3L];
		Cortex_PPG_EEG_B.Lowpass_015Hz_Butter_4thtoext_d = xbar;

		/* Sum: '<S28>/Add' incorporates:
		 *  Constant: '<S28>/Constant'
		 */
		Cortex_PPG_EEG_B.Add_a = Cortex_PPG_EEG_B.Lowpass_015Hz_Butter_4thtoext_d +
			2.2204460492503131E-16;

		/* Product: '<S28>/Product1' */
		Cortex_PPG_EEG_B.Product1 = Cortex_PPG_EEG_B.MovingRMS1.MovingRMS1 /
			Cortex_PPG_EEG_B.Add_a;

		/* Sum: '<S28>/Add2' incorporates:
		 *  Constant: '<S28>/Constant3'
		 */
		Cortex_PPG_EEG_B.Add2 = Cortex_PPG_EEG_B.Product1 + 2.2204460492503131E-16;

		/* Product: '<S28>/Product2' */
		Cortex_PPG_EEG_B.Product2 = Cortex_PPG_EEG_B.Product / Cortex_PPG_EEG_B.Add2;

		/* Product: '<S28>/Product3' incorporates:
		 *  Constant: '<S28>/Constant1'
		 */
		Cortex_PPG_EEG_B.Product3 = Cortex_PPG_EEG_B.Product2 * 25.0;

		/* Sum: '<S28>/Sum1' incorporates:
		 *  Constant: '<S28>/Constant2'
		 */
		Cortex_PPG_EEG_B.Sum1_h = 110.0 - Cortex_PPG_EEG_B.Product3;

		/* S-Function (sdspupfir2): '<S28>/FIR Interpolation ' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_c) {
			currentOffset = 10L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 10L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.Sum1_h *
				Cortex_PPG_EEG_ConstP.FIRInterpolation_FILTER_COEFF[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_k[k] *
					Cortex_PPG_EEG_ConstP.FIRInterpolation_FILTER_COEFF[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_k[k] *
					Cortex_PPG_EEG_ConstP.FIRInterpolation_FILTER_COEFF[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_bo[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_c =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_c;
	}

	/* End of Buffer: '<S28>/Buffer1' */

	/* S-Function (sdspupfir2): '<S28>/FIR Interpolation ' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_p;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_oe =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_bo[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_p++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_p >= 20L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_p = 0L;
	}

	/* Gain: '<S1>/Gain' */
	Cortex_PPG_EEG_B.Gain_k = 0.0 * Cortex_PPG_EEG_B.Divide;

	/* Sum: '<S1>/Add' incorporates:
	 *  Constant: '<S1>/Constant'
	 */
	Cortex_PPG_EEG_B.Add_c = Cortex_PPG_EEG_B.Gain_k + 1.0;

	/* S-Function (sfix_udelay): '<S29>/Tapped Delay' */
	for (i = 0; i < 256; i++) {
		Cortex_PPG_EEG_B.TappedDelay_p[i] = Cortex_PPG_EEG_DW.TappedDelay_X_e[i];
	}

	/* End of S-Function (sfix_udelay): '<S29>/Tapped Delay' */

	/* MATLAB Function: '<S29>/MATLAB Function' */
	Cortex_PPG_EEG_MATLABFunction(Cortex_PPG_EEG_B.TappedDelay_p,
		Cortex_PPG_EEG_B.y_c);

	/* Math: '<S29>/Transpose' */
	for (i = 0; i < 128; i++) {
		Cortex_PPG_EEG_B.Transpose[i] = Cortex_PPG_EEG_B.y_c[i];
	}

	/* End of Math: '<S29>/Transpose' */
	Cortex_PPG_EEG_MovingAverage(Cortex_PPG_EEG_B.Transpose,
		&Cortex_PPG_EEG_B.MovingAverage, &Cortex_PPG_EEG_DW.MovingAverage);

	/* Math: '<S29>/Transpose1' */
	for (i = 0; i < 128; i++) {
		Cortex_PPG_EEG_B.Transpose1[i] =
			Cortex_PPG_EEG_B.MovingAverage.MovingAverage[i];
	}

	/* End of Math: '<S29>/Transpose1' */

	/* S-Function (sfix_udelay): '<S31>/Tapped Delay' */
	for (i = 0; i < 256; i++) {
		Cortex_PPG_EEG_B.TappedDelay_c[i] = Cortex_PPG_EEG_DW.TappedDelay_X_p[i];
	}

	/* End of S-Function (sfix_udelay): '<S31>/Tapped Delay' */

	/* MATLAB Function: '<S31>/MATLAB Function' */
	Cortex_PPG_EEG_MATLABFunction(Cortex_PPG_EEG_B.TappedDelay_c,
		Cortex_PPG_EEG_B.y);

	/* Math: '<S31>/Transpose' */
	for (i = 0; i < 128; i++) {
		Cortex_PPG_EEG_B.Transpose_c[i] = Cortex_PPG_EEG_B.y[i];
	}

	/* End of Math: '<S31>/Transpose' */
	Cortex_PPG_EEG_MovingAverage(Cortex_PPG_EEG_B.Transpose_c,
		&Cortex_PPG_EEG_B.MovingAverage_p, &Cortex_PPG_EEG_DW.MovingAverage_p);

	/* Math: '<S31>/Transpose1' */
	for (i = 0; i < 128; i++) {
		Cortex_PPG_EEG_B.Transpose1_h[i] =
			Cortex_PPG_EEG_B.MovingAverage_p.MovingAverage[i];
	}

	/* End of Math: '<S31>/Transpose1' */
	for (i = 0; i < 12000; i++) {
		/* S-Function (sfix_udelay): '<S7>/Tapped Delay' */
		Cortex_PPG_EEG_B.TappedDelay_l[i] = Cortex_PPG_EEG_DW.TappedDelay_X_l[i];

		/* S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
		Cortex_PPG_EEG_B.TappedDelay1_b[i] = Cortex_PPG_EEG_DW.TappedDelay1_X_p[i];

		/* SignalConversion generated from: '<S56>/ SFunction ' incorporates:
		 *  MATLAB Function: '<S7>/MATLAB Function'
		 */
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[i] =
			Cortex_PPG_EEG_B.TappedDelay_l[i];
		Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[i + 12000] =
			Cortex_PPG_EEG_B.TappedDelay1_b[i];
	}

	/* MATLAB Function: '<S7>/MATLAB Function' */
	memset(&Cortex_PPG_EEG_B.y_cl[0], 0, 20U * sizeof(real_T));
	for (c_k = 0; c_k < 240; c_k++) {
		HRV[c_k] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[50 * c_k];
		EEG[c_k] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[50 * c_k + 12000];
	}

	tmp = Cortex_PPG_EEG_mean(HRV);
	tmp_1 = Cortex_PPG_EEG_mean(EEG);
	for (c_k = 0; c_k < 240; c_k++) {
		HRV[c_k] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[50 * c_k] - tmp;
		EEG[c_k] = Cortex_PPG_EEG_B.TmpSignalConversionAtSFunctio_m[50 * c_k + 12000]
			- tmp_1;
	}

	if (Cortex_PPG_EEG_sum_b(HRV) == 0.0) {
		for (c_k = 0; c_k < 10; c_k++) {
			Cortex_PPG_EEG_B.y_cl[c_k] = 0.0390625 * (real_T)c_k + 0.0390625;
		}
	}
	else if (Cortex_PPG_EEG_sum_b(EEG) == 0.0) {
		for (c_k = 0; c_k < 10; c_k++) {
			Cortex_PPG_EEG_B.y_cl[c_k] = 0.0390625 * (real_T)c_k + 0.0390625;
		}
	}
	else {
		Cortex_PPG_EEG_mscohere(HRV, EEG, cxy_data, RR_Interval_size, fc_data, &i);
		for (m1 = 0; m1 < 10; m1++) {
			Cortex_PPG_EEG_B.y_cl[m1] = fc_data[m1 + 1];
			Cortex_PPG_EEG_B.y_cl[m1 + 10] = rt_hypotd_snf(cxy_data[m1 + 1].re,
				cxy_data[m1 + 1].im);
		}
	}

	/* Outport: '<Root>/Out' incorporates:
	 *  Constant: '<S11>/Constant1'
	 */
	Cortex_PPG_EEG_Y.Out[0] = Cortex_PPG_EEG_B.y_g[0];
	Cortex_PPG_EEG_Y.Out[1] = Cortex_PPG_EEG_B.y_g[1];
	Cortex_PPG_EEG_Y.Out[2] = Cortex_PPG_EEG_B.y_g[2];
	Cortex_PPG_EEG_Y.Out[3] = Cortex_PPG_EEG_B.MovingRMS3_p.MovingRMS3;
	Cortex_PPG_EEG_Y.Out[4] = Cortex_PPG_EEG_B.MovingRMS2.MovingRMS2;
	Cortex_PPG_EEG_Y.Out[5] = Cortex_PPG_EEG_B.Divide;
	Cortex_PPG_EEG_Y.Out[6] = 0.0;
	Cortex_PPG_EEG_Y.Out[7] = 0.0;
	Cortex_PPG_EEG_Y.Out[8] = 0.0;
	Cortex_PPG_EEG_Y.Out[9] = Cortex_PPG_EEG_B.MovingRMS3_pn.MovingRMS3;
	Cortex_PPG_EEG_Y.Out[10] = Cortex_PPG_EEG_B.MovingRMS2_p.MovingRMS2;
	Cortex_PPG_EEG_Y.Out[11] = Cortex_PPG_EEG_B.Divide_a;
	Cortex_PPG_EEG_Y.Out[12] = Cortex_PPG_EEG_B.Divide_h;
	Cortex_PPG_EEG_Y.Out[13] = Cortex_PPG_EEG_B.Divide_o;
	Cortex_PPG_EEG_Y.Out[14] = Cortex_PPG_EEG_B.Divide_p;
	Cortex_PPG_EEG_Y.Out[15] = Cortex_PPG_EEG_B.Divide_f;
	Cortex_PPG_EEG_Y.Out[16] = Cortex_PPG_EEG_B.Divide_l;
	Cortex_PPG_EEG_Y.Out[17] = Cortex_PPG_EEG_B.Divide_pc;
	Cortex_PPG_EEG_Y.Out[18] = Cortex_PPG_EEG_B.Divide_n;
	Cortex_PPG_EEG_Y.Out[19] = Cortex_PPG_EEG_B.Divide_pn;
	Cortex_PPG_EEG_Y.Out[20] = Cortex_PPG_EEG_B.Divide_b;
	Cortex_PPG_EEG_Y.Out[21] = Cortex_PPG_EEG_B.Divide_i;
	Cortex_PPG_EEG_Y.Out[22] = Cortex_PPG_EEG_B.Gain;
	Cortex_PPG_EEG_Y.Out[23] = Cortex_PPG_EEG_B.Gain1;
	Cortex_PPG_EEG_Y.Out[24] = Cortex_PPG_EEG_B.Gain2;
	Cortex_PPG_EEG_Y.Out[25] = Cortex_PPG_EEG_B.Gain3;
	Cortex_PPG_EEG_Y.Out[26] = Cortex_PPG_EEG_B.Gain4;
	Cortex_PPG_EEG_Y.Out[27] = Cortex_PPG_EEG_B.F7F8AlphaPowerDifference;
	for (i = 0; i < 8; i++) {
		Cortex_PPG_EEG_Y.Out[i + 28] = Cortex_PPG_EEG_B.y_o[i];
	}

	Cortex_PPG_EEG_Y.Out[36] = Cortex_PPG_EEG_B.MovingRMS3.MovingRMS3;
	Cortex_PPG_EEG_Y.Out[37] = Cortex_PPG_EEG_B.FIRInterpolation;
	Cortex_PPG_EEG_Y.Out[38] = Cortex_PPG_EEG_B.FIRInterpolation_oe;
	Cortex_PPG_EEG_Y.Out[39] = Cortex_PPG_EEG_B.Add_c;
	for (i = 0; i < 128; i++) {
		Cortex_PPG_EEG_Y.Out[i + 40] = Cortex_PPG_EEG_B.Transpose1[i];
		Cortex_PPG_EEG_Y.Out[i + 168] = Cortex_PPG_EEG_B.Transpose1_h[i];
	}

	for (i = 0; i < 20; i++) {
		Cortex_PPG_EEG_Y.Out[i + 296] = Cortex_PPG_EEG_B.y_cl[i];
	}

	for (i = 0; i < 8; i++) {
		Cortex_PPG_EEG_Y.Out[i + 316] = Cortex_PPG_EEG_B.y_o[i + 8];
	}

	/* End of Outport: '<Root>/Out' */
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* DiscreteFilter: '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation_f;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled35[inputIdx] *
				Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp = xbar;
		xbar = 0.009445133134969 * Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled34[inputIdx] *
				Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_states[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th = xbar;

		/* End of DiscreteFilter: '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */

		/* S-Function (sdspupfir2): '<S32>/FIR Interpolation ' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_p) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_e[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_e[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_bc[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_p =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_p;
	}

	/* S-Function (sdspupfir2): '<S32>/FIR Interpolation ' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_k;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_oo =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_bc[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_k++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_k >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_k = 0L;
	}

	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter1,
		&Cortex_PPG_EEG_B.MovingRMS, &Cortex_PPG_EEG_DW.MovingRMS);
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter2,
		&Cortex_PPG_EEG_B.MovingRMS_p, &Cortex_PPG_EEG_DW.MovingRMS_p);
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter5,
		&Cortex_PPG_EEG_B.MovingRMS_pnae, &Cortex_PPG_EEG_DW.MovingRMS_pnae);
	Cortex_PPG_EEG_MovingRMS(Cortex_PPG_EEG_B.u100HzBandfilter8,
		&Cortex_PPG_EEG_B.MovingRMS_pnaevvf, &Cortex_PPG_EEG_DW.MovingRMS_pnaevvf);

	/* Delay: '<S67>/Delay' */
	Cortex_PPG_EEG_B.Delay_a = Cortex_PPG_EEG_DW.Delay_DSTATE_f;

	/* Gain: '<S67>/1-alpha' */
	Cortex_PPG_EEG_B.ualpha = 0.05 * Cortex_PPG_EEG_B.Delay_a;

	/* Delay: '<S67>/Delay1' */
	Cortex_PPG_EEG_B.Delay1 = Cortex_PPG_EEG_DW.Delay1_DSTATE;

	/* Gain: '<S67>/alpha' */
	Cortex_PPG_EEG_B.alpha = 0.95 * Cortex_PPG_EEG_B.Delay1;

	/* Sum: '<S67>/Add' */
	Cortex_PPG_EEG_B.Add_k = Cortex_PPG_EEG_B.ualpha + Cortex_PPG_EEG_B.alpha;

	/* Sum: '<S67>/Add1' incorporates:
	 *  Constant: '<S67>/Constant'
	 */
	Cortex_PPG_EEG_B.Add1_f = Cortex_PPG_EEG_B.Add_k + 2.2204460492503131E-16;

	/* DiscreteFir: '<S10>/BPF_2_10_Hz' */
	currentOffset_0 = 1L;
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter * -0.0010094714296568252;
	for (k = Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf; k < 80L; k++) {
		scale = Cortex_PPG_EEG_DW.BPF_2_10_Hz_states[k] *
			Cortex_PPG_EEG_ConstP.pooled38[currentOffset_0];
		xbar += scale;
		currentOffset_0++;
	}

	for (k = 0L; k < Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf; k++) {
		scale = Cortex_PPG_EEG_DW.BPF_2_10_Hz_states[k] *
			Cortex_PPG_EEG_ConstP.pooled38[currentOffset_0];
		xbar += scale;
		currentOffset_0++;
	}

	Cortex_PPG_EEG_B.BPF_2_10_Hz = xbar;

	/* End of DiscreteFir: '<S10>/BPF_2_10_Hz' */

	/* DiscreteFilter: '<S10>/DC Removal' */
	xbar = Cortex_PPG_EEG_B.BPF_2_10_Hz;
	inputIdx = 1L;
	for (k = 0L; k < 101L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled40[inputIdx] *
			Cortex_PPG_EEG_DW.DCRemoval_states[k];
		inputIdx++;
	}

	xbar /= 100.0;
	Cortex_PPG_EEG_DW.DCRemoval_tmp = xbar;
	xbar = -Cortex_PPG_EEG_DW.DCRemoval_tmp;
	inputIdx = 1L;
	for (k = 0L; k < 101L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled39[inputIdx] *
			Cortex_PPG_EEG_DW.DCRemoval_states[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.DCRemoval = xbar;

	/* End of DiscreteFilter: '<S10>/DC Removal' */

	/* Product: '<S67>/Product' */
	Cortex_PPG_EEG_B.Product_e = Cortex_PPG_EEG_B.DCRemoval *
		Cortex_PPG_EEG_B.DCRemoval;

	/* Sqrt: '<S67>/Reciprocal Sqrt' */
	xbar = Cortex_PPG_EEG_B.Add1_f;
	if (xbar > 0.0) {
		if (rtIsInf(xbar)) {
			Cortex_PPG_EEG_B.ReciprocalSqrt = 0.0;
		}
		else {
			Cortex_PPG_EEG_B.ReciprocalSqrt = 1.0 / sqrt(xbar);
		}
	}
	else if (xbar == 0.0) {
		Cortex_PPG_EEG_B.ReciprocalSqrt = (rtInf);
	}
	else {
		Cortex_PPG_EEG_B.ReciprocalSqrt = (rtNaN);
	}

	/* End of Sqrt: '<S67>/Reciprocal Sqrt' */

	/* Product: '<S67>/Product1' */
	Cortex_PPG_EEG_B.Product1_g = Cortex_PPG_EEG_B.DCRemoval *
		Cortex_PPG_EEG_B.ReciprocalSqrt;
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* DiscreteFilter: '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */
		xbar = Cortex_PPG_EEG_B.FIRDecimation;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar -= Cortex_PPG_EEG_ConstP.pooled35[inputIdx] *
				Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_state_p[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp_c = xbar;
		xbar = 0.009445133134969 * Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp_c;
		inputIdx = 1L;
		for (k = 0L; k < 8L; k++) {
			xbar += Cortex_PPG_EEG_ConstP.pooled34[inputIdx] *
				Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_state_p[k];
			inputIdx++;
		}

		Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th_j = xbar;

		/* End of DiscreteFilter: '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */

		/* S-Function (sdspupfir2): '<S68>/FIR Interpolation  ' */
		if (Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_e) {
			currentOffset = 17L;
		}
		else {
			currentOffset = 0L;
		}

		for (inputSegment = 0L; inputSegment < 17L; inputSegment++) {
			uyIdx = (int16_T)inputSegment * 24;
			scale = Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th_j *
				Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
			xbar = scale;
			uyIdx = (int16_T)uyIdx + 1;
			for (k = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt; k < 23L; k++)
			{
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_m[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			for (k = 0L; k < Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt; k++) {
				scale = Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_m[k] *
					Cortex_PPG_EEG_ConstP.pooled9[uyIdx];
				xbar += scale;
				uyIdx++;
			}

			Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_d[currentOffset] = xbar;
			currentOffset++;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_e =
			!Cortex_PPG_EEG_DW.FIRInterpolation_wrtBufIdx_e;
	}

	/* S-Function (sdspupfir2): '<S68>/FIR Interpolation  ' */
	currentOffset_0 = Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_a;
	currentOffset = currentOffset_0;
	Cortex_PPG_EEG_B.FIRInterpolation_j =
		Cortex_PPG_EEG_DW.FIRInterpolation_OutBuff_d[currentOffset];
	Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_a++;
	if (Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_a >= 34L) {
		Cortex_PPG_EEG_DW.FIRInterpolation_ReadIdx_a = 0L;
	}

	/* Delay: '<S72>/Delay' */
	Cortex_PPG_EEG_B.Delay_d = Cortex_PPG_EEG_DW.Delay_DSTATE_a;

	/* Gain: '<S72>/1-alpha' */
	Cortex_PPG_EEG_B.ualpha_d = 0.05 * Cortex_PPG_EEG_B.Delay_d;

	/* Delay: '<S72>/Delay1' */
	Cortex_PPG_EEG_B.Delay1_b = Cortex_PPG_EEG_DW.Delay1_DSTATE_d;

	/* Gain: '<S72>/alpha' */
	Cortex_PPG_EEG_B.alpha_i = 0.95 * Cortex_PPG_EEG_B.Delay1_b;

	/* Sum: '<S72>/Add' */
	Cortex_PPG_EEG_B.Add_p = Cortex_PPG_EEG_B.ualpha_d + Cortex_PPG_EEG_B.alpha_i;

	/* Sum: '<S72>/Add1' incorporates:
	 *  Constant: '<S72>/Constant'
	 */
	Cortex_PPG_EEG_B.Add1_p = Cortex_PPG_EEG_B.Add_p + 2.2204460492503131E-16;

	/* DiscreteFir: '<S11>/BPF_2_10_Hz' */
	currentOffset_0 = 1L;
	xbar = Cortex_PPG_EEG_B.u0Hznotchfilter9 * -0.0010094714296568252;
	for (k = Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m; k < 80L; k++) {
		scale = Cortex_PPG_EEG_DW.BPF_2_10_Hz_states_p[k] *
			Cortex_PPG_EEG_ConstP.pooled38[currentOffset_0];
		xbar += scale;
		currentOffset_0++;
	}

	for (k = 0L; k < Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m; k++) {
		scale = Cortex_PPG_EEG_DW.BPF_2_10_Hz_states_p[k] *
			Cortex_PPG_EEG_ConstP.pooled38[currentOffset_0];
		xbar += scale;
		currentOffset_0++;
	}

	Cortex_PPG_EEG_B.BPF_2_10_Hz_b = xbar;

	/* End of DiscreteFir: '<S11>/BPF_2_10_Hz' */

	/* DiscreteFilter: '<S11>/DC Removal' */
	xbar = Cortex_PPG_EEG_B.BPF_2_10_Hz_b;
	inputIdx = 1L;
	for (k = 0L; k < 101L; k++) {
		xbar -= Cortex_PPG_EEG_ConstP.pooled40[inputIdx] *
			Cortex_PPG_EEG_DW.DCRemoval_states_h[k];
		inputIdx++;
	}

	xbar /= 100.0;
	Cortex_PPG_EEG_DW.DCRemoval_tmp_d = xbar;
	xbar = -Cortex_PPG_EEG_DW.DCRemoval_tmp_d;
	inputIdx = 1L;
	for (k = 0L; k < 101L; k++) {
		xbar += Cortex_PPG_EEG_ConstP.pooled39[inputIdx] *
			Cortex_PPG_EEG_DW.DCRemoval_states_h[k];
		inputIdx++;
	}

	Cortex_PPG_EEG_B.DCRemoval_m = xbar;

	/* End of DiscreteFilter: '<S11>/DC Removal' */

	/* Product: '<S72>/Product' */
	Cortex_PPG_EEG_B.Product_g = Cortex_PPG_EEG_B.DCRemoval_m *
		Cortex_PPG_EEG_B.DCRemoval_m;

	/* Sqrt: '<S72>/Reciprocal Sqrt' */
	xbar = Cortex_PPG_EEG_B.Add1_p;
	if (xbar > 0.0) {
		if (rtIsInf(xbar)) {
			Cortex_PPG_EEG_B.ReciprocalSqrt_p = 0.0;
		}
		else {
			Cortex_PPG_EEG_B.ReciprocalSqrt_p = 1.0 / sqrt(xbar);
		}
	}
	else if (xbar == 0.0) {
		Cortex_PPG_EEG_B.ReciprocalSqrt_p = (rtInf);
	}
	else {
		Cortex_PPG_EEG_B.ReciprocalSqrt_p = (rtNaN);
	}

	/* End of Sqrt: '<S72>/Reciprocal Sqrt' */

	/* Product: '<S72>/Product1' */
	Cortex_PPG_EEG_B.Product1_l = Cortex_PPG_EEG_B.DCRemoval_m *
		Cortex_PPG_EEG_B.ReciprocalSqrt_p;

	/* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
	for (i = 0; i < 2499; i++) {
		Cortex_PPG_EEG_DW.TappedDelay1_X[i] = Cortex_PPG_EEG_DW.TappedDelay1_X[i + 1];
	}

	Cortex_PPG_EEG_DW.TappedDelay1_X[2499] = Cortex_PPG_EEG_B.y_b[0];

	/* End of Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */

	/* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */
	for (i = 0; i < 299; i++) {
		Cortex_PPG_EEG_DW.TappedDelay_X[i] = Cortex_PPG_EEG_DW.TappedDelay_X[i + 1];
	}

	Cortex_PPG_EEG_DW.TappedDelay_X[299] = Cortex_PPG_EEG_B.Product1_g;

	/* End of Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */

	/* Update for Delay: '<S10>/Delay' */
	for (i = 0; i < 301; i++) {
		Cortex_PPG_EEG_DW.Delay_DSTATE[i] = Cortex_PPG_EEG_B.y_b[i];
	}

	/* End of Update for Delay: '<S10>/Delay' */

	/* Update for DiscreteFilter: '<S68>/LPF_3Hz_Butter_4' */
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[3L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[2L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[2L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[1L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[1L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[0L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states[0L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp;
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* Update for DiscreteFilter: '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_states[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_states[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_states[0L] =
			Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp;

		/* End of Update for DiscreteFilter: '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */

		/* Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation ' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayIndex]
			= Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th;

		/* End of Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation ' */

		/* Update for DiscreteFilter: '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_states[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_states[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_states[0L] =
			Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp;

		/* End of Update for DiscreteFilter: '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */

		/* Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_n[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_o]
			= Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th;

		/* End of Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation' */
	}

	/* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
	for (i = 0; i < 299; i++) {
		Cortex_PPG_EEG_DW.TappedDelay_X_j[i] = Cortex_PPG_EEG_DW.TappedDelay_X_j[i +
			1];
	}

	Cortex_PPG_EEG_DW.TappedDelay_X_j[299] = Cortex_PPG_EEG_B.Product1_l;

	/* End of Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */

	/* Update for Delay: '<S11>/Delay' */
	for (i = 0; i < 301; i++) {
		Cortex_PPG_EEG_DW.Delay_DSTATE_g[i] = Cortex_PPG_EEG_B.y_k[i];
	}

	/* End of Update for Delay: '<S11>/Delay' */

	/* Update for DiscreteFilter: '<S73>/LPF_3Hz_Butter_4' */
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[3L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[2L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[2L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[1L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[1L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[0L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_g[0L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_o;
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* Update for DiscreteFilter: '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_state_f[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_state_f[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_state_f[0L] =
			Cortex_PPG_EEG_DW.LF_005_015Hz_Cheby2_4th_tmp_d;

		/* End of Update for DiscreteFilter: '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */

		/* Update for S-Function (sdspupfir2): '<S73>/FIR Interpolation ' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_o[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_j]
			= Cortex_PPG_EEG_B.LF_005_015Hz_Cheby2_4th_j;

		/* End of Update for S-Function (sdspupfir2): '<S73>/FIR Interpolation ' */

		/* Update for DiscreteFilter: '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_state_n[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_state_n[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_state_n[0L] =
			Cortex_PPG_EEG_DW.HF_015_04Hz_Chebey2_4th_tmp_n;

		/* End of Update for DiscreteFilter: '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */

		/* Update for S-Function (sdspupfir2): '<S73>/FIR Interpolation' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_j[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_n]
			= Cortex_PPG_EEG_B.HF_015_04Hz_Chebey2_4th_m;

		/* End of Update for S-Function (sdspupfir2): '<S73>/FIR Interpolation' */
	}

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter3' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter3_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter3_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter3' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter3_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter3_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter3_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter3_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter3' */

	/* Update for DiscreteFilter: '<S52>/Alpha Band filter' */
	for (k = 0L; k < 11L; k++) {
		Cortex_PPG_EEG_DW.AlphaBandfilter_states[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states[(int32_T)(10 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_states[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp;

	/* End of Update for DiscreteFilter: '<S52>/Alpha Band filter' */

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter6' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter6_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter6_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter6' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter6_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter6_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter6_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter6_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter6' */

	/* Update for DiscreteFilter: '<S53>/Alpha Band filter' */
	for (k = 0L; k < 11L; k++) {
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_a[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_a[(int32_T)(10 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_states_a[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a;

	/* End of Update for DiscreteFilter: '<S53>/Alpha Band filter' */

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter4' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter4_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter4_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter4' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter4_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter4_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter4_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter4_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter4' */

	/* Update for DiscreteFilter: '<S41>/Alpha Band filter' */
	for (k = 0L; k < 11L; k++) {
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_h[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_h[(int32_T)(10 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.AlphaBandfilter_states_h[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_o;

	/* End of Update for DiscreteFilter: '<S41>/Alpha Band filter' */

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter7' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter7_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter7_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter7' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter7_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter7_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter7_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter7_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter7' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S42>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_m[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_m[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S52>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S53>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_k[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_k[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S41>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_p[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_p[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S42>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_b[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_b[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S52>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S53>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_c[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S52>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S53>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_m[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_m[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S52>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S53>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_c[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_c[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S41>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_c5[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_c5[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S41>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_n[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_n[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S41>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_i[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_i[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S42>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_f[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S42>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_f[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_f[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S42>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_j[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_j[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S42>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_m[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_a0;

	/* Update for DiscreteFilter: '<S52>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp;

	/* Update for DiscreteFilter: '<S53>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_k[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_l;

	/* Update for DiscreteFilter: '<S41>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_p[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_d;

	/* Update for DiscreteFilter: '<S42>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_b[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c;

	/* Update for DiscreteFilter: '<S52>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp;

	/* Update for DiscreteFilter: '<S53>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_c[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_p;

	/* Update for DiscreteFilter: '<S52>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp;

	/* Update for DiscreteFilter: '<S53>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_m[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_p;

	/* Update for DiscreteFilter: '<S52>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp;

	/* Update for DiscreteFilter: '<S53>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_c[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_b;

	/* Update for DiscreteFilter: '<S41>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_c5[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_k;

	/* Update for DiscreteFilter: '<S41>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_n[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_g;

	/* Update for DiscreteFilter: '<S41>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_i[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_k;

	/* Update for DiscreteFilter: '<S42>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_f[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_pz;

	/* Update for DiscreteFilter: '<S42>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_f[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_m;

	/* Update for DiscreteFilter: '<S42>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_j[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bp;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter2' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter2_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter2_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter2' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter2_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter2_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter2_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter2_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter2' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S54>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_m[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_m[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S54>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_i[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_i[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S54>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_c[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_c[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S54>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_o[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_o[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S54>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_p[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_p[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S54>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_m[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_i;

	/* Update for DiscreteFilter: '<S54>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_i[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i;

	/* Update for DiscreteFilter: '<S54>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_c[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_j;

	/* Update for DiscreteFilter: '<S54>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_o[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_n;

	/* Update for DiscreteFilter: '<S54>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_p[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_n;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter5' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter5_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter5_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter5' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter5_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter5_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter5_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter5_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter5' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S55>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_f1[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_f1[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S55>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_ms[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ms[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S55>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_d[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_d[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S55>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_l[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S55>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_d[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_d[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S55>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_f1[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o;

	/* Update for DiscreteFilter: '<S55>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_ms[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l;

	/* Update for DiscreteFilter: '<S55>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_d[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_h;

	/* Update for DiscreteFilter: '<S55>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_l[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_o;

	/* Update for DiscreteFilter: '<S55>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_d[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_i;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter1' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter1_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter1_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter1' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter1_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter1_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter1_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter1_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter1' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S9>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_p[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S9>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_e[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_e[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S9>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_g[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S9>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_i[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_i[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S9>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_a[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_a[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S9>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_p[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_g;

	/* Update for DiscreteFilter: '<S9>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_e[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_l2;

	/* Update for DiscreteFilter: '<S9>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_g[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_e;

	/* Update for DiscreteFilter: '<S9>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_i[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_f;

	/* Update for DiscreteFilter: '<S9>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_a[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_p;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter8' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter8_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter8_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter8' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter8_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter8_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter8_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter8_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter8' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S43>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_o[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_o[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S43>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_ac[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ac[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S43>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_k[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_k[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S43>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_l0[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_l0[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S43>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_f[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_f[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S43>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_o[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_j;

	/* Update for DiscreteFilter: '<S43>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_ac[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_ii;

	/* Update for DiscreteFilter: '<S43>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_k[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_c;

	/* Update for DiscreteFilter: '<S43>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_l0[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_j;

	/* Update for DiscreteFilter: '<S43>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_f[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_m;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter11' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter11_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter11_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter10' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter10_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter10_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter10_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter10_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter10' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S44>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_p0[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_p0[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S44>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_ma[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_ma[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S44>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_h[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_h[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S44>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_oi[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_oi[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S44>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_fc[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_fc[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S44>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_p0[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_d;

	/* Update for DiscreteFilter: '<S44>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_ma[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_m;

	/* Update for DiscreteFilter: '<S44>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_h[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_d;

	/* Update for DiscreteFilter: '<S44>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_oi[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_le;

	/* Update for DiscreteFilter: '<S44>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_fc[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_bj;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter10' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter10_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter10_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter9' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter9_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter9_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter9_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter9_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter9' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S45>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_mz[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_mz[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S45>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_p[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_p[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S45>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_l[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_l[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S45>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_m[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_m[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S45>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_is[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_is[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S45>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_mz[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_dw;

	/* Update for DiscreteFilter: '<S45>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_p[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_i2;

	/* Update for DiscreteFilter: '<S45>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_l[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gh;

	/* Update for DiscreteFilter: '<S45>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_m[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_a;

	/* Update for DiscreteFilter: '<S45>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_is[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_a;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter12' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter12_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter12_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter11' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter11_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter11_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter11_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter11_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter11' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S46>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_j[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_j[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S46>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_c[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_c[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S46>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_ks[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_ks[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S46>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_f[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_f[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S46>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_k[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_k[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S46>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_j[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_a;

	/* Update for DiscreteFilter: '<S46>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_c[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_am;

	/* Update for DiscreteFilter: '<S46>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_ks[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_hq;

	/* Update for DiscreteFilter: '<S46>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_f[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_e;

	/* Update for DiscreteFilter: '<S46>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_k[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_l;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter13' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter13_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter13_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter12' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter12_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter12_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter12_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter12_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter12' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S47>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_pv[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_pv[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S47>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_f[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_f[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S47>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_a[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_a[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S47>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_bq[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bq[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S47>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_m[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_m[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S47>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_pv[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_l;

	/* Update for DiscreteFilter: '<S47>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_f[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_n;

	/* Update for DiscreteFilter: '<S47>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_a[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a;

	/* Update for DiscreteFilter: '<S47>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_bq[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_i;

	/* Update for DiscreteFilter: '<S47>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_m[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_e;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter14' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter14_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter14_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter13' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter13_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter13_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter13_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter13_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter13' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S48>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_om[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_om[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S48>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_af[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_af[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S48>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_fs[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_fs[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S48>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_ie[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_ie[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S48>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_h[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S48>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_om[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_ij;

	/* Update for DiscreteFilter: '<S48>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_af[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_mp;

	/* Update for DiscreteFilter: '<S48>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_fs[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_a4;

	/* Update for DiscreteFilter: '<S48>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_ie[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_db;

	/* Update for DiscreteFilter: '<S48>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_h[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_g;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter15' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter15_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter15_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter14' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter14_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter14_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter14_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter14_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter14' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S49>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_e[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_e[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S49>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_mp[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_mp[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S49>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_i[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_i[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S49>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_fm[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_fm[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S49>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_dc[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_dc[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S49>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_e[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_o0;

	/* Update for DiscreteFilter: '<S49>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_mp[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_c;

	/* Update for DiscreteFilter: '<S49>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_i[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_gm;

	/* Update for DiscreteFilter: '<S49>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_fm[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_c0;

	/* Update for DiscreteFilter: '<S49>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_dc[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_c;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter16' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter16_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter16_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter15' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter15_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter15_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter15_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter15_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter15' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S50>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_jq[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_jq[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S50>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_im[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_im[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S50>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_dt[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_dt[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S50>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_bd[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_bd[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S50>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_h4[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_h4[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S50>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_jq[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_oh;

	/* Update for DiscreteFilter: '<S50>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_im[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nn;

	/* Update for DiscreteFilter: '<S50>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_dt[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_b;

	/* Update for DiscreteFilter: '<S50>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_bd[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_dy;

	/* Update for DiscreteFilter: '<S50>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_h4[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_ks;

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter17' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter17_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter17_tmp;

	/* Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter16' */
	for (k = 0L; k < 9L; k++) {
		Cortex_PPG_EEG_DW.u100HzBandfilter16_states[(int32_T)(9 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.u100HzBandfilter16_states[(int32_T)(8 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.u100HzBandfilter16_states[0L] =
		Cortex_PPG_EEG_DW.u100HzBandfilter16_tmp;

	/* End of Update for DiscreteFilter: '<S3>/[1 100] Hz Band filter16' */
	for (k = 0L; k < 11L; k++) {
		/* Update for DiscreteFilter: '<S51>/Theta Band filter' */
		Cortex_PPG_EEG_DW.ThetaBandfilter_states_a[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.ThetaBandfilter_states_a[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S51>/Alpha Band filter' */
		Cortex_PPG_EEG_DW.AlphaBandfilter_states_aq[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.AlphaBandfilter_states_aq[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S51>/SMR Band filter' */
		Cortex_PPG_EEG_DW.SMRBandfilter_states_g1[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.SMRBandfilter_states_g1[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S51>/Beta Band filter' */
		Cortex_PPG_EEG_DW.BetaBandfilter_states_a[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.BetaBandfilter_states_a[(int32_T)(10 - (int16_T)k)];

		/* Update for DiscreteFilter: '<S51>/Gamma Band filter' */
		Cortex_PPG_EEG_DW.GammaBandfilter_states_o[(int32_T)(11 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.GammaBandfilter_states_o[(int32_T)(10 - (int16_T)k)];
	}

	/* Update for DiscreteFilter: '<S51>/Theta Band filter' */
	Cortex_PPG_EEG_DW.ThetaBandfilter_states_a[0L] =
		Cortex_PPG_EEG_DW.ThetaBandfilter_tmp_kh;

	/* Update for DiscreteFilter: '<S51>/Alpha Band filter' */
	Cortex_PPG_EEG_DW.AlphaBandfilter_states_aq[0L] =
		Cortex_PPG_EEG_DW.AlphaBandfilter_tmp_nv;

	/* Update for DiscreteFilter: '<S51>/SMR Band filter' */
	Cortex_PPG_EEG_DW.SMRBandfilter_states_g1[0L] =
		Cortex_PPG_EEG_DW.SMRBandfilter_tmp_pp;

	/* Update for DiscreteFilter: '<S51>/Beta Band filter' */
	Cortex_PPG_EEG_DW.BetaBandfilter_states_a[0L] =
		Cortex_PPG_EEG_DW.BetaBandfilter_tmp_ah;

	/* Update for DiscreteFilter: '<S51>/Gamma Band filter' */
	Cortex_PPG_EEG_DW.GammaBandfilter_states_o[0L] =
		Cortex_PPG_EEG_DW.GammaBandfilter_tmp_aq;

	/* Update for DiscreteFilter: '<S32>/LPF_3Hz_Butter_4' */
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[3L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[2L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[2L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[1L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[1L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[0L];
	Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_states_gf[0L] =
		Cortex_PPG_EEG_DW.LPF_3Hz_Butter_4_tmp_h;
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* Update for DiscreteFilter: '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_states[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_states[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_states[0L] =
			Cortex_PPG_EEG_DW.LF_006_014Hz_Cheby2_4th_tmp;

		/* End of Update for DiscreteFilter: '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */

		/* Update for S-Function (sdspupfir2): '<S32>/FIR Interpolation' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_i[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_nv]
			= Cortex_PPG_EEG_B.LF_006_014Hz_Cheby2_4th;

		/* End of Update for S-Function (sdspupfir2): '<S32>/FIR Interpolation' */
	}

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter_tmp;

	/* Update for DiscreteFilter: '<S28>/LPF_4Hz' */
	for (k = 0L; k < 5L; k++) {
		Cortex_PPG_EEG_DW.LPF_4Hz_states[(int32_T)(5 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.LPF_4Hz_states[(int32_T)(4 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.LPF_4Hz_states[0L] = Cortex_PPG_EEG_DW.LPF_4Hz_tmp;

	/* End of Update for DiscreteFilter: '<S28>/LPF_4Hz' */
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1] == 0) {
		/* Update for DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
		for (k = 0L; k < 11L; k++) {
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6thto[(int32_T)(11 - (int16_T)
				k)] = Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6thto[(int32_T)(10 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6thto[0L] =
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_a;

		/* End of Update for DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */

		/* Update for DiscreteFilter: '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part' */
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[3L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[2L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[2L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[1L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[1L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[0L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoextra[0L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_j;
	}

	/* Update for DiscreteFilter: '<S3>/60 Hz notch filter9' */
	Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[1L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[0L];
	Cortex_PPG_EEG_DW.u0Hznotchfilter9_states[0L] =
		Cortex_PPG_EEG_DW.u0Hznotchfilter9_tmp;

	/* Update for DiscreteFilter: '<S28>/LPF_4Hz ' */
	for (k = 0L; k < 5L; k++) {
		Cortex_PPG_EEG_DW.LPF_4Hz_states_f[(int32_T)(5 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.LPF_4Hz_states_f[(int32_T)(4 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.LPF_4Hz_states_f[0L] = Cortex_PPG_EEG_DW.LPF_4Hz_tmp_j;

	/* End of Update for DiscreteFilter: '<S28>/LPF_4Hz ' */
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[1] == 0) {
		/* Update for DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
		for (k = 0L; k < 11L; k++) {
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_j[(int32_T)(11 - (int16_T)
				k)] = Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_j[(int32_T)(10 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_j[0L] =
			Cortex_PPG_EEG_DW.Bandpass_072Hz_234_Butter_6th_l;

		/* End of Update for DiscreteFilter: '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */

		/* Update for DiscreteFilter: '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part1' */
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[3L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[2L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[2L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[1L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[1L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[0L];
		Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoext_i[0L] =
			Cortex_PPG_EEG_DW.Lowpass_015Hz_Butter_4thtoex_ig;

		/* Update for S-Function (sdspupfir2): '<S28>/FIR Interpolation ' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_k[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_m]
			= Cortex_PPG_EEG_B.Sum1_h;

		/* End of Update for S-Function (sdspupfir2): '<S28>/FIR Interpolation ' */
	}

	for (i = 0; i < 255; i++) {
		/* Update for S-Function (sfix_udelay): '<S29>/Tapped Delay' */
		Cortex_PPG_EEG_DW.TappedDelay_X_e[i] = Cortex_PPG_EEG_DW.TappedDelay_X_e[i +
			1];

		/* Update for S-Function (sfix_udelay): '<S31>/Tapped Delay' */
		Cortex_PPG_EEG_DW.TappedDelay_X_p[i] = Cortex_PPG_EEG_DW.TappedDelay_X_p[i +
			1];
	}

	/* Update for S-Function (sfix_udelay): '<S29>/Tapped Delay' */
	Cortex_PPG_EEG_DW.TappedDelay_X_e[255] = Cortex_PPG_EEG_B.u100HzBandfilter3;

	/* Update for S-Function (sfix_udelay): '<S31>/Tapped Delay' */
	Cortex_PPG_EEG_DW.TappedDelay_X_p[255] = Cortex_PPG_EEG_B.u100HzBandfilter6;
	for (i = 0; i < 11999; i++) {
		/* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
		Cortex_PPG_EEG_DW.TappedDelay_X_l[i] = Cortex_PPG_EEG_DW.TappedDelay_X_l[i +
			1];

		/* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
		Cortex_PPG_EEG_DW.TappedDelay1_X_p[i] = Cortex_PPG_EEG_DW.TappedDelay1_X_p[i
			+ 1];
	}

	/* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
	Cortex_PPG_EEG_DW.TappedDelay_X_l[11999] = Cortex_PPG_EEG_B.FIRInterpolation_j;

	/* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
	Cortex_PPG_EEG_DW.TappedDelay1_X_p[11999] =
		Cortex_PPG_EEG_B.FIRInterpolation_oo;
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* Update for DiscreteFilter: '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_states[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_states[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_states[0L] =
			Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp;

		/* End of Update for DiscreteFilter: '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */

		/* Update for S-Function (sdspupfir2): '<S32>/FIR Interpolation ' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_e[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInde_h]
			= Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th;

		/* End of Update for S-Function (sdspupfir2): '<S32>/FIR Interpolation ' */
	}

	/* Update for Delay: '<S67>/Delay' */
	Cortex_PPG_EEG_DW.Delay_DSTATE_f = Cortex_PPG_EEG_B.Product_e;

	/* Update for Delay: '<S67>/Delay1' */
	Cortex_PPG_EEG_DW.Delay1_DSTATE = Cortex_PPG_EEG_B.Add_k;

	/* Update for DiscreteFir: '<S10>/BPF_2_10_Hz' */
	/* Update circular buffer index */
	Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf--;
	if (Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf < 0L) {
		Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf = 79L;
	}

	/* Update circular buffer */
	Cortex_PPG_EEG_DW.BPF_2_10_Hz_states[Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf] =
		Cortex_PPG_EEG_B.u0Hznotchfilter;

	/* End of Update for DiscreteFir: '<S10>/BPF_2_10_Hz' */

	/* Update for DiscreteFilter: '<S10>/DC Removal' */
	for (k = 0L; k < 100L; k++) {
		Cortex_PPG_EEG_DW.DCRemoval_states[(int32_T)(100 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.DCRemoval_states[(int32_T)(99 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.DCRemoval_states[0L] = Cortex_PPG_EEG_DW.DCRemoval_tmp;

	/* End of Update for DiscreteFilter: '<S10>/DC Removal' */
	if (Cortex_PPG_EEG_M->Timing.TaskCounters.TID[2] == 0) {
		/* Update for DiscreteFilter: '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */
		for (k = 0L; k < 7L; k++) {
			Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_state_p[(int32_T)(7 - (int16_T)k)]
				= Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_state_p[(int32_T)(6 -
				(int16_T)k)];
		}

		Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_state_p[0L] =
			Cortex_PPG_EEG_DW.BPF_003_04Hz_Cheby2_4th_tmp_c;

		/* End of Update for DiscreteFilter: '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */

		/* Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation  ' */
		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt--;
		if (Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt < 0L) {
			Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt = 22L;
		}

		Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayBuff_m[Cortex_PPG_EEG_DW.FIRInterpolation_TapDelayInd_jt]
			= Cortex_PPG_EEG_B.BPF_003_04Hz_Cheby2_4th_j;

		/* End of Update for S-Function (sdspupfir2): '<S68>/FIR Interpolation  ' */
	}

	/* Update for Delay: '<S72>/Delay' */
	Cortex_PPG_EEG_DW.Delay_DSTATE_a = Cortex_PPG_EEG_B.Product_g;

	/* Update for Delay: '<S72>/Delay1' */
	Cortex_PPG_EEG_DW.Delay1_DSTATE_d = Cortex_PPG_EEG_B.Add_p;

	/* Update for DiscreteFir: '<S11>/BPF_2_10_Hz' */
	/* Update circular buffer index */
	Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m--;
	if (Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m < 0L) {
		Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m = 79L;
	}

	/* Update circular buffer */
	Cortex_PPG_EEG_DW.BPF_2_10_Hz_states_p[Cortex_PPG_EEG_DW.BPF_2_10_Hz_circBuf_m]
		= Cortex_PPG_EEG_B.u0Hznotchfilter9;

	/* End of Update for DiscreteFir: '<S11>/BPF_2_10_Hz' */

	/* Update for DiscreteFilter: '<S11>/DC Removal' */
	for (k = 0L; k < 100L; k++) {
		Cortex_PPG_EEG_DW.DCRemoval_states_h[(int32_T)(100 - (int16_T)k)] =
			Cortex_PPG_EEG_DW.DCRemoval_states_h[(int32_T)(99 - (int16_T)k)];
	}

	Cortex_PPG_EEG_DW.DCRemoval_states_h[0L] = Cortex_PPG_EEG_DW.DCRemoval_tmp_d;

	/* End of Update for DiscreteFilter: '<S11>/DC Removal' */
	rate_scheduler();
}

/* Model initialize function */
void Cortex_PPG_EEG_initialize(void)
{
	/* Registration code */

	/* initialize non-finites */
	rt_InitInfAndNaN(sizeof(real_T));
	Cortex_PPG_EEG_MovingRMS3_Start(&Cortex_PPG_EEG_DW.MovingRMS3_p);
	Cortex_PPG_EEG_MovingRMS2_Start(&Cortex_PPG_EEG_DW.MovingRMS2);
	Cortex_PPG_EEG_MovingRMS3_Start(&Cortex_PPG_EEG_DW.MovingRMS3_pn);
	Cortex_PPG_EEG_MovingRMS2_Start(&Cortex_PPG_EEG_DW.MovingRMS2_p);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_py);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pn);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_fp);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaev);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_o);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pna);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_m);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevv);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_px);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_mw);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_d);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_i);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_p4);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_nk);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_en);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_df);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_mk);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h3);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ez);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pd);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_dm);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_gy);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pdn);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pr);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_hz);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h2);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_hs5);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_i3n);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h5);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h1);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ig);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_dz);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_a);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_id);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pe);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_o3);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_e4);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_mc);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_j);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_po);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_m3);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_p2);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_i3);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ka1);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_e);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_n);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_f);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_k);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_kw);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ka);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_kaa);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_el);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_cj);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfp);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpg);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5z);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zz);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzh);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzhe);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_g);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_c);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_hs);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_b);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ng);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_gye);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_go);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ep);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_kf);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_bn);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_c4);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_l);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_bx);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_dp);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_j5);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_lb);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ev);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_le);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_h0);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_hc);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_hl);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_ef);
	Cortex_PPG_EEG_MovingRMS3_Start(&Cortex_PPG_EEG_DW.MovingRMS3);
	Cortex_PPG_EEG_MovingRMS1_Start(&Cortex_PPG_EEG_DW.MovingRMS3_pna);
	Cortex_PPG_EEG_MovingRMS1_Start(&Cortex_PPG_EEG_DW.MovingRMS1);
	Cortex_PPG__MovingAverage_Start(&Cortex_PPG_EEG_DW.MovingAverage);
	Cortex_PPG__MovingAverage_Start(&Cortex_PPG_EEG_DW.MovingAverage_p);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_p);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnae);
	Cortex_PPG_EEG_MovingRMS_Start(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvf);

	/* InitializeConditions for Buffer: '<S68>/Buffer' */
	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx = 17L;
	Cortex_PPG_EEG_DW.Buffer_bufferLength = 17L;

	/* InitializeConditions for S-Function (sdspfirdn2): '<S68>/FIR Decimation' */
	Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx = 384L;
	Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx = 16L;
	Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex = 368L;

	/* InitializeConditions for Buffer: '<S73>/Buffer' */
	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_k = 17L;
	Cortex_PPG_EEG_DW.Buffer_bufferLength_l = 17L;

	/* InitializeConditions for S-Function (sdspfirdn2): '<S73>/FIR Decimation' */
	Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_j = 384L;
	Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_m = 16L;
	Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_g = 368L;

	/* InitializeConditions for Buffer: '<S32>/Buffer' */
	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_b = 17L;
	Cortex_PPG_EEG_DW.Buffer_bufferLength_a = 17L;

	/* InitializeConditions for S-Function (sdspfirdn2): '<S32>/FIR Decimation' */
	Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_h = 384L;
	Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_mp = 16L;
	Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_m = 368L;

	/* InitializeConditions for Buffer: '<S28>/Buffer' */
	Cortex_PPG_EEG_DW.Buffer_inBufPtrIdx_g = 10L;
	Cortex_PPG_EEG_DW.Buffer_bufferLength_av = 10L;

	/* InitializeConditions for S-Function (sdspfirdn2): '<S28>/FIR Decimation' */
	Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_i = 216L;
	Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_d = 9L;
	Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_a = 207L;

	/* InitializeConditions for Buffer: '<S28>/Buffer1' */
	Cortex_PPG_EEG_DW.Buffer1_inBufPtrIdx = 10L;
	Cortex_PPG_EEG_DW.Buffer1_bufferLength = 10L;

	/* InitializeConditions for S-Function (sdspfirdn2): '<S28>/FIR Decimation ' */
	Cortex_PPG_EEG_DW.FIRDecimation_CoeffIdx_hm = 216L;
	Cortex_PPG_EEG_DW.FIRDecimation_PhaseIdx_b = 9L;
	Cortex_PPG_EEG_DW.FIRDecimation_TapDelayIndex_k = 207L;
	Cortex_PPG_EEG_MovingRMS3_Init(&Cortex_PPG_EEG_DW.MovingRMS3_p);
	Cortex_PPG_EEG_MovingRMS2_Init(&Cortex_PPG_EEG_DW.MovingRMS2);
	Cortex_PPG_EEG_MovingRMS3_Init(&Cortex_PPG_EEG_DW.MovingRMS3_pn);
	Cortex_PPG_EEG_MovingRMS2_Init(&Cortex_PPG_EEG_DW.MovingRMS2_p);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_py);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pn);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_fp);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaev);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_o);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pna);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_m);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevv);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_px);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_mw);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_d);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_i);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_p4);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_nk);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_en);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_df);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_mk);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h3);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ez);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pd);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_dm);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_gy);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pdn);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pr);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_hz);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h2);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_hs5);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_i3n);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h5);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h1);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ig);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_dz);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_a);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_id);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pe);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_o3);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_e4);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_mc);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_j);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_po);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_m3);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_p2);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_i3);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ka1);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_e);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_n);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_f);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_k);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_kw);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ka);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_kaa);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_el);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_cj);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfp);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpg);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5z);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zz);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzh);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzhe);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_g);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_c);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_hs);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_b);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ng);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_gye);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_go);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ep);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_kf);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_bn);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_c4);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_l);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_bx);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_dp);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_j5);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_lb);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ev);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_le);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_h0);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_hc);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_hl);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_ef);
	Cortex_PPG_EEG_MovingRMS3_Init(&Cortex_PPG_EEG_DW.MovingRMS3);
	Cortex_PPG_EEG_MovingRMS1_Init(&Cortex_PPG_EEG_DW.MovingRMS3_pna);
	Cortex_PPG_EEG_MovingRMS1_Init(&Cortex_PPG_EEG_DW.MovingRMS1);
	Cortex_PPG_E_MovingAverage_Init(&Cortex_PPG_EEG_DW.MovingAverage);
	Cortex_PPG_E_MovingAverage_Init(&Cortex_PPG_EEG_DW.MovingAverage_p);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_p);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnae);
	Cortex_PPG_EEG_MovingRMS_Init(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvf);
}

/* Model terminate function */
void Cortex_PPG_EEG_terminate(void)
{
	Cortex_PPG_EEG_MovingRMS3_Term(&Cortex_PPG_EEG_DW.MovingRMS3_p);
	Cortex_PPG_EEG_MovingRMS2_Term(&Cortex_PPG_EEG_DW.MovingRMS2);
	Cortex_PPG_EEG_MovingRMS3_Term(&Cortex_PPG_EEG_DW.MovingRMS3_pn);
	Cortex_PPG_EEG_MovingRMS2_Term(&Cortex_PPG_EEG_DW.MovingRMS2_p);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_py);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pn);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_fp);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaev);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_o);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pna);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_m);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevv);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_px);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_mw);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_d);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_i);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_p4);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_nk);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_en);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_df);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_mk);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h3);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ez);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pd);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_dm);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_gy);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pdn);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pr);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_hz);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h2);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_hs5);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_i3n);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h5);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h1);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ig);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_dz);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_a);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_id);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pe);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_o3);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_e4);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_mc);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_j);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_po);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_m3);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_p2);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_i3);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ka1);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_e);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_n);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_f);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_k);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_kw);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ka);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_kaa);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_el);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_cj);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfp);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpg);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5z);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zz);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzh);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvfpgh5zzhe);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_g);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_c);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_hs);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_b);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ng);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_gye);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_go);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ep);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_kf);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_bn);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_c4);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_l);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_bx);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_dp);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_j5);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_lb);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ev);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_le);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_h0);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_hc);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_hl);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_ef);
	Cortex_PPG_EEG_MovingRMS3_Term(&Cortex_PPG_EEG_DW.MovingRMS3);
	Cortex_PPG_EEG_MovingRMS1_Term(&Cortex_PPG_EEG_DW.MovingRMS3_pna);
	Cortex_PPG_EEG_MovingRMS1_Term(&Cortex_PPG_EEG_DW.MovingRMS1);
	Cortex_PPG_E_MovingAverage_Term(&Cortex_PPG_EEG_DW.MovingAverage);
	Cortex_PPG_E_MovingAverage_Term(&Cortex_PPG_EEG_DW.MovingAverage_p);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_p);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnae);
	Cortex_PPG_EEG_MovingRMS_Term(&Cortex_PPG_EEG_DW.MovingRMS_pnaevvf);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
