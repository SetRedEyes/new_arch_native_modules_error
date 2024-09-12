/*
 * File: Cortex_PPG_EEG.h
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

#ifndef RTW_HEADER_Cortex_PPG_EEG_h_
#define RTW_HEADER_Cortex_PPG_EEG_h_
#include <math.h>
#include <string.h>
#ifndef Cortex_PPG_EEG_COMMON_INCLUDES_
# define Cortex_PPG_EEG_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#endif                                 /* Cortex_PPG_EEG_COMMON_INCLUDES_ */

#include "Cortex_PPG_EEG_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S32>/Moving RMS3' */
typedef struct {
  real_T csumrev[2499];
  real_T MovingRMS3;                   /* '<S32>/Moving RMS3' */
} B_MovingRMS3_Cortex_PPG_EEG_T;

/* Block states (default storage) for system '<S32>/Moving RMS3' */
typedef struct {
  e_dsp_private_SlidingWindowAv_T gobj_0;/* '<S32>/Moving RMS3' */
  e_dsp_private_SlidingWindowAv_T gobj_1;/* '<S32>/Moving RMS3' */
  dsp_simulink_MovingRMS_Cortex_T obj; /* '<S32>/Moving RMS3' */
  boolean_T objisempty;                /* '<S32>/Moving RMS3' */
} DW_MovingRMS3_Cortex_PPG_EEG_T;

/* Block signals for system '<S33>/Moving RMS' */
typedef struct {
  real_T MovingRMS;                    /* '<S33>/Moving RMS' */
} B_MovingRMS_Cortex_PPG_EEG_T;

/* Block states (default storage) for system '<S33>/Moving RMS' */
typedef struct {
  e_dsp_private_SlidingWindow_j_T gobj_0;/* '<S33>/Moving RMS' */
  e_dsp_private_SlidingWindow_j_T gobj_1;/* '<S33>/Moving RMS' */
  dsp_simulink_MovingRMS_Cort_h_T obj; /* '<S33>/Moving RMS' */
  boolean_T objisempty;                /* '<S33>/Moving RMS' */
} DW_MovingRMS_Cortex_PPG_EEG_T;

/* Block signals for system '<S68>/Moving RMS2' */
typedef struct {
  real_T csumrev[1999];
  real_T MovingRMS2;                   /* '<S68>/Moving RMS2' */
} B_MovingRMS2_Cortex_PPG_EEG_T;

/* Block states (default storage) for system '<S68>/Moving RMS2' */
typedef struct {
  e_dsp_private_SlidingWindo_j0_T gobj_0;/* '<S68>/Moving RMS2' */
  e_dsp_private_SlidingWindo_j0_T gobj_1;/* '<S68>/Moving RMS2' */
  dsp_simulink_MovingRMS_Cor_hv_T obj; /* '<S68>/Moving RMS2' */
  boolean_T objisempty;                /* '<S68>/Moving RMS2' */
} DW_MovingRMS2_Cortex_PPG_EEG_T;

/* Block signals for system '<S28>/Moving RMS1' */
typedef struct {
  real_T csumrev[2999];
  real_T MovingRMS1;                   /* '<S28>/Moving RMS1' */
} B_MovingRMS1_Cortex_PPG_EEG_T;

/* Block states (default storage) for system '<S28>/Moving RMS1' */
typedef struct {
  e_dsp_private_SlidingWind_j0g_T gobj_0;/* '<S28>/Moving RMS1' */
  e_dsp_private_SlidingWind_j0g_T gobj_1;/* '<S28>/Moving RMS1' */
  dsp_simulink_MovingRMS_Co_hvs_T obj; /* '<S28>/Moving RMS1' */
  boolean_T objisempty;                /* '<S28>/Moving RMS1' */
} DW_MovingRMS1_Cortex_PPG_EEG_T;

/* Block signals for system '<S29>/Moving Average' */
typedef struct {
  real_T csumrev[2432];
  real_T MovingAverage[128];           /* '<S29>/Moving Average' */
} B_MovingAverage_Cortex_PPG_EE_T;

/* Block states (default storage) for system '<S29>/Moving Average' */
typedef struct {
  e_dsp_private_SlidingWin_j0gy_T gobj_0;/* '<S29>/Moving Average' */
  e_dsp_private_SlidingWin_j0gy_T gobj_1;/* '<S29>/Moving Average' */
  dsp_simulink_MovingAverage_Co_T obj; /* '<S29>/Moving Average' */
  boolean_T objisempty;                /* '<S29>/Moving Average' */
} DW_MovingAverage_Cortex_PPG_E_T;

/* Block signals (default storage) */
typedef struct {
  real_T TappedDelay1[2500];           /* '<S10>/Tapped Delay1' */
  real_T TappedDelay[300];             /* '<S10>/Tapped Delay' */
  real_T Delay[301];                   /* '<S10>/Delay' */
  real_T LPF_3Hz_Butter_4;             /* '<S68>/LPF_3Hz_Butter_4' */
  real_T Buffer[17];                   /* '<S68>/Buffer' */
  real_T FIRDecimation;                /* '<S68>/FIR Decimation' */
  real_T LF_005_015Hz_Cheby2_4th;      /* '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation;             /* '<S68>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th;      /* '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_o;           /* '<S68>/FIR Interpolation' */
  real_T Add;                          /* '<S10>/Add' */
  real_T Divide;                       /* '<S10>/Divide' */
  real_T TappedDelay_b[300];           /* '<S11>/Tapped Delay' */
  real_T Delay_k[301];                 /* '<S11>/Delay' */
  real_T LPF_3Hz_Butter_4_f;           /* '<S73>/LPF_3Hz_Butter_4' */
  real_T Buffer_n[17];                 /* '<S73>/Buffer' */
  real_T FIRDecimation_b;              /* '<S73>/FIR Decimation' */
  real_T LF_005_015Hz_Cheby2_4th_j;    /* '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation_h;           /* '<S73>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th_m;    /* '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_os;          /* '<S73>/FIR Interpolation' */
  real_T Add_l;                        /* '<S11>/Add' */
  real_T Divide_a;                     /* '<S11>/Divide' */
  real_T u0Hznotchfilter3;             /* '<S3>/60 Hz notch filter3' */
  real_T u100HzBandfilter3;            /* '<S3>/[1 100] Hz Band filter3' */
  real_T AlphaBandfilter;              /* '<S52>/Alpha Band filter' */
  real_T Square;                       /* '<S127>/Square' */
  real_T Square_i;                     /* '<S35>/Square' */
  real_T Sum1;                         /* '<S57>/Sum1' */
  real_T Divide_h;                     /* '<S57>/Divide' */
  real_T u0Hznotchfilter6;             /* '<S3>/60 Hz notch filter6' */
  real_T u100HzBandfilter6;            /* '<S3>/[1 100] Hz Band filter6' */
  real_T AlphaBandfilter_i;            /* '<S53>/Alpha Band filter' */
  real_T Square_d;                     /* '<S132>/Square' */
  real_T Square_e;                     /* '<S38>/Square' */
  real_T Sum1_e;                       /* '<S58>/Sum1' */
  real_T Divide_o;                     /* '<S58>/Divide' */
  real_T u0Hznotchfilter4;             /* '<S3>/60 Hz notch filter4' */
  real_T u100HzBandfilter4;            /* '<S3>/[1 100] Hz Band filter4' */
  real_T AlphaBandfilter_n;            /* '<S41>/Alpha Band filter' */
  real_T Square_o;                     /* '<S97>/Square' */
  real_T Square_a;                     /* '<S36>/Square' */
  real_T Sum1_l;                       /* '<S59>/Sum1' */
  real_T Divide_p;                     /* '<S59>/Divide' */
  real_T u0Hznotchfilter7;             /* '<S3>/60 Hz notch filter7' */
  real_T u100HzBandfilter7;            /* '<S3>/[1 100] Hz Band filter7' */
  real_T AlphaBandfilter_d;            /* '<S42>/Alpha Band filter' */
  real_T Square_dt;                    /* '<S102>/Square' */
  real_T Square_b;                     /* '<S39>/Square' */
  real_T Sum1_b;                       /* '<S60>/Sum1' */
  real_T Divide_f;                     /* '<S60>/Divide' */
  real_T BetaBandfilter;               /* '<S52>/Beta Band filter' */
  real_T Square_m;                     /* '<S129>/Square' */
  real_T Sum1_f;                       /* '<S61>/Sum1' */
  real_T Divide_l;                     /* '<S61>/Divide' */
  real_T BetaBandfilter_o;             /* '<S53>/Beta Band filter' */
  real_T Square_h;                     /* '<S134>/Square' */
  real_T Sum1_j;                       /* '<S62>/Sum1' */
  real_T Divide_pc;                    /* '<S62>/Divide' */
  real_T BetaBandfilter_i;             /* '<S41>/Beta Band filter' */
  real_T Square_ix;                    /* '<S99>/Square' */
  real_T Sum1_d;                       /* '<S63>/Sum1' */
  real_T Divide_n;                     /* '<S63>/Divide' */
  real_T BetaBandfilter_f;             /* '<S42>/Beta Band filter' */
  real_T Square_az;                    /* '<S104>/Square' */
  real_T Sum1_i;                       /* '<S64>/Sum1' */
  real_T Divide_pn;                    /* '<S64>/Divide' */
  real_T Sum2;                         /* '<S65>/Sum2' */
  real_T Sum1_o;                       /* '<S65>/Sum1' */
  real_T Divide_b;                     /* '<S65>/Divide' */
  real_T Sum2_n;                       /* '<S66>/Sum2' */
  real_T Sum1_j3;                      /* '<S66>/Sum1' */
  real_T Divide_i;                     /* '<S66>/Divide' */
  real_T ThetaBandfilter;              /* '<S52>/Theta Band filter' */
  real_T Square_ml;                    /* '<S126>/Square' */
  real_T ThetaBandfilter_c;            /* '<S53>/Theta Band filter' */
  real_T Square_hd;                    /* '<S131>/Square' */
  real_T T3T4ThetaPow;                 /* '<S30>/T3T4ThetaPow' */
  real_T Gain;                         /* '<S30>/Gain' */
  real_T T3T4AlphaPow;                 /* '<S30>/T3T4AlphaPow' */
  real_T Gain1;                        /* '<S30>/Gain1' */
  real_T SMRBandfilter;                /* '<S52>/SMR Band filter' */
  real_T Square_j;                     /* '<S128>/Square' */
  real_T SMRBandfilter_d;              /* '<S53>/SMR Band filter' */
  real_T Square_ig;                    /* '<S133>/Square' */
  real_T T3T4SMRPow;                   /* '<S30>/T3T4SMRPow' */
  real_T Gain2;                        /* '<S30>/Gain2' */
  real_T T3T4BetaPow;                  /* '<S30>/T3T4BetaPow' */
  real_T Gain3;                        /* '<S30>/Gain3' */
  real_T GammaBandfilter;              /* '<S52>/Gamma Band filter' */
  real_T Square_ml4;                   /* '<S130>/Square' */
  real_T GammaBandfilter_k;            /* '<S53>/Gamma Band filter' */
  real_T Square_i4;                    /* '<S135>/Square' */
  real_T T3T4GammaPow;                 /* '<S30>/T3T4GammaPow' */
  real_T Gain4;                        /* '<S30>/Gain4' */
  real_T F7F8AlphaPowerDifference;     /* '<S1>/F7F8 Alpha Power Difference' */
  real_T ThetaBandfilter_h;            /* '<S41>/Theta Band filter' */
  real_T Square_n;                     /* '<S96>/Square' */
  real_T SMRBandfilter_o;              /* '<S41>/SMR Band filter' */
  real_T Square_jx;                    /* '<S98>/Square' */
  real_T GammaBandfilter_g;            /* '<S41>/Gamma Band filter' */
  real_T Square_l;                     /* '<S100>/Square' */
  real_T ThetaBandfilter_j;            /* '<S42>/Theta Band filter' */
  real_T Square_mu;                    /* '<S101>/Square' */
  real_T SMRBandfilter_n;              /* '<S42>/SMR Band filter' */
  real_T Square_ox;                    /* '<S103>/Square' */
  real_T GammaBandfilter_h;            /* '<S42>/Gamma Band filter' */
  real_T Square_ho;                    /* '<S105>/Square' */
  real_T u0Hznotchfilter2;             /* '<S3>/60 Hz notch filter2' */
  real_T u100HzBandfilter2;            /* '<S3>/[1 100] Hz Band filter2' */
  real_T ThetaBandfilter_e;            /* '<S54>/Theta Band filter' */
  real_T Square_df;                    /* '<S136>/Square' */
  real_T AlphaBandfilter_h;            /* '<S54>/Alpha Band filter' */
  real_T Square_hb;                    /* '<S137>/Square' */
  real_T SMRBandfilter_b;              /* '<S54>/SMR Band filter' */
  real_T Square_ey;                    /* '<S138>/Square' */
  real_T BetaBandfilter_h;             /* '<S54>/Beta Band filter' */
  real_T Square_h3;                    /* '<S139>/Square' */
  real_T GammaBandfilter_p;            /* '<S54>/Gamma Band filter' */
  real_T Square_ma;                    /* '<S140>/Square' */
  real_T u0Hznotchfilter5;             /* '<S3>/60 Hz notch filter5' */
  real_T u100HzBandfilter5;            /* '<S3>/[1 100] Hz Band filter5' */
  real_T ThetaBandfilter_g;            /* '<S55>/Theta Band filter' */
  real_T Square_li;                    /* '<S141>/Square' */
  real_T AlphaBandfilter_g;            /* '<S55>/Alpha Band filter' */
  real_T Square_k;                     /* '<S142>/Square' */
  real_T SMRBandfilter_j;              /* '<S55>/SMR Band filter' */
  real_T Square_lb;                    /* '<S143>/Square' */
  real_T BetaBandfilter_e;             /* '<S55>/Beta Band filter' */
  real_T Square_ee;                    /* '<S144>/Square' */
  real_T GammaBandfilter_a;            /* '<S55>/Gamma Band filter' */
  real_T Square_de;                    /* '<S145>/Square' */
  real_T u0Hznotchfilter1;             /* '<S3>/60 Hz notch filter1' */
  real_T u100HzBandfilter1;            /* '<S3>/[1 100] Hz Band filter1' */
  real_T ThetaBandfilter_b;            /* '<S9>/Theta Band filter' */
  real_T Square_bb;                    /* '<S106>/Square' */
  real_T AlphaBandfilter_m;            /* '<S9>/Alpha Band filter' */
  real_T Square_mr;                    /* '<S107>/Square' */
  real_T SMRBandfilter_e;              /* '<S9>/SMR Band filter' */
  real_T Square_nn;                    /* '<S108>/Square' */
  real_T BetaBandfilter_i1;            /* '<S9>/Beta Band filter' */
  real_T Square_dl;                    /* '<S109>/Square' */
  real_T GammaBandfilter_hk;           /* '<S9>/Gamma Band filter' */
  real_T Square_jt;                    /* '<S110>/Square' */
  real_T u0Hznotchfilter8;             /* '<S3>/60 Hz notch filter8' */
  real_T u100HzBandfilter8;            /* '<S3>/[1 100] Hz Band filter8' */
  real_T ThetaBandfilter_a;            /* '<S43>/Theta Band filter' */
  real_T Square_h2;                    /* '<S111>/Square' */
  real_T AlphaBandfilter_a;            /* '<S43>/Alpha Band filter' */
  real_T Square_p;                     /* '<S112>/Square' */
  real_T SMRBandfilter_nc;             /* '<S43>/SMR Band filter' */
  real_T Square_jz;                    /* '<S113>/Square' */
  real_T BetaBandfilter_k;             /* '<S43>/Beta Band filter' */
  real_T Square_et;                    /* '<S114>/Square' */
  real_T GammaBandfilter_ge;           /* '<S43>/Gamma Band filter' */
  real_T Square_no;                    /* '<S115>/Square' */
  real_T u0Hznotchfilter11;            /* '<S3>/60 Hz notch filter11' */
  real_T u100HzBandfilter10;           /* '<S3>/[1 100] Hz Band filter10' */
  real_T ThetaBandfilter_m;            /* '<S44>/Theta Band filter' */
  real_T Square_hu;                    /* '<S86>/Square' */
  real_T AlphaBandfilter_o;            /* '<S44>/Alpha Band filter' */
  real_T Square_oy;                    /* '<S87>/Square' */
  real_T SMRBandfilter_f;              /* '<S44>/SMR Band filter' */
  real_T Square_hn;                    /* '<S88>/Square' */
  real_T BetaBandfilter_n;             /* '<S44>/Beta Band filter' */
  real_T Square_nq;                    /* '<S89>/Square' */
  real_T GammaBandfilter_gq;           /* '<S44>/Gamma Band filter' */
  real_T Square_im;                    /* '<S90>/Square' */
  real_T u0Hznotchfilter10;            /* '<S3>/60 Hz notch filter10' */
  real_T u100HzBandfilter9;            /* '<S3>/[1 100] Hz Band filter9' */
  real_T ThetaBandfilter_n;            /* '<S45>/Theta Band filter' */
  real_T Square_eo;                    /* '<S91>/Square' */
  real_T AlphaBandfilter_dy;           /* '<S45>/Alpha Band filter' */
  real_T Square_hdj;                   /* '<S92>/Square' */
  real_T SMRBandfilter_o2;             /* '<S45>/SMR Band filter' */
  real_T Square_en;                    /* '<S93>/Square' */
  real_T BetaBandfilter_g;             /* '<S45>/Beta Band filter' */
  real_T Square_g;                     /* '<S94>/Square' */
  real_T GammaBandfilter_n;            /* '<S45>/Gamma Band filter' */
  real_T Square_bs;                    /* '<S95>/Square' */
  real_T u0Hznotchfilter12;            /* '<S3>/60 Hz notch filter12' */
  real_T u100HzBandfilter11;           /* '<S3>/[1 100] Hz Band filter11' */
  real_T ThetaBandfilter_bf;           /* '<S46>/Theta Band filter' */
  real_T Square_dl0;                   /* '<S76>/Square' */
  real_T AlphaBandfilter_mq;           /* '<S46>/Alpha Band filter' */
  real_T Square_f;                     /* '<S77>/Square' */
  real_T SMRBandfilter_dv;             /* '<S46>/SMR Band filter' */
  real_T Square_ew;                    /* '<S78>/Square' */
  real_T BetaBandfilter_j;             /* '<S46>/Beta Band filter' */
  real_T Square_gl;                    /* '<S79>/Square' */
  real_T GammaBandfilter_ni;           /* '<S46>/Gamma Band filter' */
  real_T Square_ik;                    /* '<S80>/Square' */
  real_T u0Hznotchfilter13;            /* '<S3>/60 Hz notch filter13' */
  real_T u100HzBandfilter12;           /* '<S3>/[1 100] Hz Band filter12' */
  real_T ThetaBandfilter_n1;           /* '<S47>/Theta Band filter' */
  real_T Square_ed;                    /* '<S81>/Square' */
  real_T AlphaBandfilter_aj;           /* '<S47>/Alpha Band filter' */
  real_T Square_c;                     /* '<S82>/Square' */
  real_T SMRBandfilter_bw;             /* '<S47>/SMR Band filter' */
  real_T Square_of;                    /* '<S83>/Square' */
  real_T BetaBandfilter_h5;            /* '<S47>/Beta Band filter' */
  real_T Square_lk;                    /* '<S84>/Square' */
  real_T GammaBandfilter_kr;           /* '<S47>/Gamma Band filter' */
  real_T Square_j1;                    /* '<S85>/Square' */
  real_T u0Hznotchfilter14;            /* '<S3>/60 Hz notch filter14' */
  real_T u100HzBandfilter13;           /* '<S3>/[1 100] Hz Band filter13' */
  real_T ThetaBandfilter_nc;           /* '<S48>/Theta Band filter' */
  real_T Square_lh;                    /* '<S116>/Square' */
  real_T AlphaBandfilter_f;            /* '<S48>/Alpha Band filter' */
  real_T Square_j4;                    /* '<S117>/Square' */
  real_T SMRBandfilter_l;              /* '<S48>/SMR Band filter' */
  real_T Square_pq;                    /* '<S118>/Square' */
  real_T BetaBandfilter_c;             /* '<S48>/Beta Band filter' */
  real_T Square_g2;                    /* '<S119>/Square' */
  real_T GammaBandfilter_d;            /* '<S48>/Gamma Band filter' */
  real_T Square_ln;                    /* '<S120>/Square' */
  real_T u0Hznotchfilter15;            /* '<S3>/60 Hz notch filter15' */
  real_T u100HzBandfilter14;           /* '<S3>/[1 100] Hz Band filter14' */
  real_T ThetaBandfilter_ae;           /* '<S49>/Theta Band filter' */
  real_T Square_f3;                    /* '<S121>/Square' */
  real_T AlphaBandfilter_j;            /* '<S49>/Alpha Band filter' */
  real_T Square_d5;                    /* '<S122>/Square' */
  real_T SMRBandfilter_jp;             /* '<S49>/SMR Band filter' */
  real_T Square_k0;                    /* '<S123>/Square' */
  real_T BetaBandfilter_hx;            /* '<S49>/Beta Band filter' */
  real_T Square_lk2;                   /* '<S124>/Square' */
  real_T GammaBandfilter_nf;           /* '<S49>/Gamma Band filter' */
  real_T Square_ne;                    /* '<S125>/Square' */
  real_T u0Hznotchfilter16;            /* '<S3>/60 Hz notch filter16' */
  real_T u100HzBandfilter15;           /* '<S3>/[1 100] Hz Band filter15' */
  real_T ThetaBandfilter_k;            /* '<S50>/Theta Band filter' */
  real_T Square_g4;                    /* '<S146>/Square' */
  real_T AlphaBandfilter_l;            /* '<S50>/Alpha Band filter' */
  real_T Square_cx;                    /* '<S147>/Square' */
  real_T SMRBandfilter_ek;             /* '<S50>/SMR Band filter' */
  real_T Square_el;                    /* '<S148>/Square' */
  real_T BetaBandfilter_nh;            /* '<S50>/Beta Band filter' */
  real_T Square_ny;                    /* '<S149>/Square' */
  real_T GammaBandfilter_e;            /* '<S50>/Gamma Band filter' */
  real_T Square_gm;                    /* '<S150>/Square' */
  real_T u0Hznotchfilter17;            /* '<S3>/60 Hz notch filter17' */
  real_T u100HzBandfilter16;           /* '<S3>/[1 100] Hz Band filter16' */
  real_T ThetaBandfilter_jn;           /* '<S51>/Theta Band filter' */
  real_T Square_d0;                    /* '<S151>/Square' */
  real_T AlphaBandfilter_p;            /* '<S51>/Alpha Band filter' */
  real_T Square_js;                    /* '<S152>/Square' */
  real_T SMRBandfilter_c;              /* '<S51>/SMR Band filter' */
  real_T Square_jy;                    /* '<S153>/Square' */
  real_T BetaBandfilter_is;            /* '<S51>/Beta Band filter' */
  real_T Square_lm;                    /* '<S154>/Square' */
  real_T GammaBandfilter_dt;           /* '<S51>/Gamma Band filter' */
  real_T Square_mi;                    /* '<S155>/Square' */
  real_T LPF_3Hz_Butter_4_c;           /* '<S32>/LPF_3Hz_Butter_4' */
  real_T Buffer_k[17];                 /* '<S32>/Buffer' */
  real_T FIRDecimation_f;              /* '<S32>/FIR Decimation' */
  real_T LF_006_014Hz_Cheby2_4th;      /* '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */
  real_T FIRInterpolation_l;           /* '<S32>/FIR Interpolation' */
  real_T u0Hznotchfilter;              /* '<S3>/60 Hz notch filter' */
  real_T LPF_4Hz;                      /* '<S28>/LPF_4Hz' */
  real_T Buffer_g[10];                 /* '<S28>/Buffer' */
  real_T FIRDecimation_n;              /* '<S28>/FIR Decimation' */
  real_T Bandpass_072Hz_234_Butter_6thto;
            /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
  real_T Lowpass_015Hz_Butter_4thtoextra;
                  /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part' */
  real_T Add1;                         /* '<S28>/Add1' */
  real_T Product;                      /* '<S28>/Product' */
  real_T u0Hznotchfilter9;             /* '<S3>/60 Hz notch filter9' */
  real_T LPF_4Hz_l;                    /* '<S28>/LPF_4Hz ' */
  real_T Buffer1[10];                  /* '<S28>/Buffer1' */
  real_T FIRDecimation_h;              /* '<S28>/FIR Decimation ' */
  real_T Bandpass_072Hz_234_Butter_6th_k;
           /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
  real_T Lowpass_015Hz_Butter_4thtoext_d;
                 /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part1' */
  real_T Add_a;                        /* '<S28>/Add' */
  real_T Product1;                     /* '<S28>/Product1' */
  real_T Add2;                         /* '<S28>/Add2' */
  real_T Product2;                     /* '<S28>/Product2' */
  real_T Product3;                     /* '<S28>/Product3' */
  real_T Sum1_h;                       /* '<S28>/Sum1' */
  real_T FIRInterpolation_oe;          /* '<S28>/FIR Interpolation ' */
  real_T Gain_k;                       /* '<S1>/Gain' */
  real_T Add_c;                        /* '<S1>/Add' */
  real_T TappedDelay_p[256];           /* '<S29>/Tapped Delay' */
  real_T Transpose[128];               /* '<S29>/Transpose' */
  real_T Transpose1[128];              /* '<S29>/Transpose1' */
  real_T TappedDelay_c[256];           /* '<S31>/Tapped Delay' */
  real_T Transpose_c[128];             /* '<S31>/Transpose' */
  real_T Transpose1_h[128];            /* '<S31>/Transpose1' */
  real_T TappedDelay_l[12000];         /* '<S7>/Tapped Delay' */
  real_T TappedDelay1_b[12000];        /* '<S7>/Tapped Delay1' */
  real_T BPF_003_04Hz_Cheby2_4th;      /* '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_oo;          /* '<S32>/FIR Interpolation ' */
  real_T Delay_a;                      /* '<S67>/Delay' */
  real_T ualpha;                       /* '<S67>/1-alpha' */
  real_T Delay1;                       /* '<S67>/Delay1' */
  real_T alpha;                        /* '<S67>/alpha' */
  real_T Add_k;                        /* '<S67>/Add' */
  real_T Add1_f;                       /* '<S67>/Add1' */
  real_T BPF_2_10_Hz;                  /* '<S10>/BPF_2_10_Hz' */
  real_T DCRemoval;                    /* '<S10>/DC Removal' */
  real_T Product_e;                    /* '<S67>/Product' */
  real_T ReciprocalSqrt;               /* '<S67>/Reciprocal Sqrt' */
  real_T Product1_g;                   /* '<S67>/Product1' */
  real_T BPF_003_04Hz_Cheby2_4th_j;    /* '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_j;           /* '<S68>/FIR Interpolation  ' */
  real_T Delay_d;                      /* '<S72>/Delay' */
  real_T ualpha_d;                     /* '<S72>/1-alpha' */
  real_T Delay1_b;                     /* '<S72>/Delay1' */
  real_T alpha_i;                      /* '<S72>/alpha' */
  real_T Add_p;                        /* '<S72>/Add' */
  real_T Add1_p;                       /* '<S72>/Add1' */
  real_T BPF_2_10_Hz_b;                /* '<S11>/BPF_2_10_Hz' */
  real_T DCRemoval_m;                  /* '<S11>/DC Removal' */
  real_T Product_g;                    /* '<S72>/Product' */
  real_T ReciprocalSqrt_p;             /* '<S72>/Reciprocal Sqrt' */
  real_T Product1_l;                   /* '<S72>/Product1' */
  real_T y[128];                       /* '<S31>/MATLAB Function' */
  real_T y_c[128];                     /* '<S29>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctionI[601];/* '<S11>/MATLAB Function' */
  real_T y_k[301];                     /* '<S11>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctio_n[601];/* '<S10>/MATLAB Function' */
  real_T y_b[301];                     /* '<S10>/MATLAB Function' */
  real_T y_g[3];                       /* '<S10>/HRVMetrics' */
  real_T TmpSignalConversionAtSFunctio_m[24000];/* '<S7>/MATLAB Function' */
  real_T y_cl[20];                     /* '<S7>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctio_b[80];/* '<S1>/Display Brain Map' */
  real_T y_o[16];                      /* '<S1>/Display Brain Map' */
  B_MovingAverage_Cortex_PPG_EE_T MovingAverage_p;/* '<S29>/Moving Average' */
  B_MovingAverage_Cortex_PPG_EE_T MovingAverage;/* '<S29>/Moving Average' */
  B_MovingRMS1_Cortex_PPG_EEG_T MovingRMS3_pna;/* '<S28>/Moving RMS1' */
  B_MovingRMS1_Cortex_PPG_EEG_T MovingRMS1;/* '<S28>/Moving RMS1' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ef;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hl;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hc;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h0;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_le;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ev;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_lb;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_j5;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dp;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_bx;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_id;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_a;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dz;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ig;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h1;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h5;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i3n;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hs5;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h2;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hz;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h3;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mw;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_df;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_fp;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_nk;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mk;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_px;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_en;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_py;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p4;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_l;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_c4;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_bn;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kf;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ep;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_go;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_gye;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ng;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_b;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hs;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ka1;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i3;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p2;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_m3;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_po;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_j;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mc;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_e4;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_o3;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pe;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pr;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pdn;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_m;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_gy;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dm;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_d;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pd;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_o;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ez;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_cj;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_el;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kaa;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ka;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kw;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_k;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_f;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_n;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_e;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_c;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_g;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zzhe;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zzh;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zz;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5z;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpg;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfp;/* '<S33>/Moving RMS' */
  B_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3_pn;/* '<S32>/Moving RMS3' */
  B_MovingRMS2_Cortex_PPG_EEG_T MovingRMS2_p;/* '<S68>/Moving RMS2' */
  B_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3_p;/* '<S32>/Moving RMS3' */
  B_MovingRMS2_Cortex_PPG_EEG_T MovingRMS2;/* '<S68>/Moving RMS2' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvf;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevv;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaev;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnae;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pna;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pn;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p;/* '<S33>/Moving RMS' */
  B_MovingRMS_Cortex_PPG_EEG_T MovingRMS;/* '<S33>/Moving RMS' */
  B_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3;/* '<S32>/Moving RMS3' */
} B_Cortex_PPG_EEG_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TappedDelay1_X[2500];         /* '<S10>/Tapped Delay1' */
  real_T TappedDelay_X[300];           /* '<S10>/Tapped Delay' */
  real_T Delay_DSTATE[301];            /* '<S10>/Delay' */
  real_T LPF_3Hz_Butter_4_states[4];   /* '<S68>/LPF_3Hz_Butter_4' */
  real_T Buffer_CircBuf[34];           /* '<S68>/Buffer' */
  real_T FIRDecimation_Sums;           /* '<S68>/FIR Decimation' */
  real_T FIRDecimation_StatesBuff[391];/* '<S68>/FIR Decimation' */
  real_T LF_005_015Hz_Cheby2_4th_states[8];/* '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation_TapDelayBuff[23];/* '<S68>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th_states[8];/* '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_TapDelayBuff_n[23];/* '<S68>/FIR Interpolation' */
  real_T TappedDelay_X_j[300];         /* '<S11>/Tapped Delay' */
  real_T Delay_DSTATE_g[301];          /* '<S11>/Delay' */
  real_T LPF_3Hz_Butter_4_states_g[4]; /* '<S73>/LPF_3Hz_Butter_4' */
  real_T Buffer_CircBuf_j[34];         /* '<S73>/Buffer' */
  real_T FIRDecimation_Sums_o;         /* '<S73>/FIR Decimation' */
  real_T FIRDecimation_StatesBuff_g[391];/* '<S73>/FIR Decimation' */
  real_T LF_005_015Hz_Cheby2_4th_state_f[8];/* '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation_TapDelayBuff_o[23];/* '<S73>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th_state_n[8];/* '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_TapDelayBuff_j[23];/* '<S73>/FIR Interpolation' */
  real_T u0Hznotchfilter3_states[2];   /* '<S3>/60 Hz notch filter3' */
  real_T u100HzBandfilter3_states[10]; /* '<S3>/[1 100] Hz Band filter3' */
  real_T AlphaBandfilter_states[12];   /* '<S52>/Alpha Band filter' */
  real_T u0Hznotchfilter6_states[2];   /* '<S3>/60 Hz notch filter6' */
  real_T u100HzBandfilter6_states[10]; /* '<S3>/[1 100] Hz Band filter6' */
  real_T AlphaBandfilter_states_a[12]; /* '<S53>/Alpha Band filter' */
  real_T u0Hznotchfilter4_states[2];   /* '<S3>/60 Hz notch filter4' */
  real_T u100HzBandfilter4_states[10]; /* '<S3>/[1 100] Hz Band filter4' */
  real_T AlphaBandfilter_states_h[12]; /* '<S41>/Alpha Band filter' */
  real_T u0Hznotchfilter7_states[2];   /* '<S3>/60 Hz notch filter7' */
  real_T u100HzBandfilter7_states[10]; /* '<S3>/[1 100] Hz Band filter7' */
  real_T AlphaBandfilter_states_m[12]; /* '<S42>/Alpha Band filter' */
  real_T BetaBandfilter_states[12];    /* '<S52>/Beta Band filter' */
  real_T BetaBandfilter_states_k[12];  /* '<S53>/Beta Band filter' */
  real_T BetaBandfilter_states_p[12];  /* '<S41>/Beta Band filter' */
  real_T BetaBandfilter_states_b[12];  /* '<S42>/Beta Band filter' */
  real_T ThetaBandfilter_states[12];   /* '<S52>/Theta Band filter' */
  real_T ThetaBandfilter_states_c[12]; /* '<S53>/Theta Band filter' */
  real_T SMRBandfilter_states[12];     /* '<S52>/SMR Band filter' */
  real_T SMRBandfilter_states_m[12];   /* '<S53>/SMR Band filter' */
  real_T GammaBandfilter_states[12];   /* '<S52>/Gamma Band filter' */
  real_T GammaBandfilter_states_c[12]; /* '<S53>/Gamma Band filter' */
  real_T ThetaBandfilter_states_c5[12];/* '<S41>/Theta Band filter' */
  real_T SMRBandfilter_states_n[12];   /* '<S41>/SMR Band filter' */
  real_T GammaBandfilter_states_i[12]; /* '<S41>/Gamma Band filter' */
  real_T ThetaBandfilter_states_f[12]; /* '<S42>/Theta Band filter' */
  real_T SMRBandfilter_states_f[12];   /* '<S42>/SMR Band filter' */
  real_T GammaBandfilter_states_j[12]; /* '<S42>/Gamma Band filter' */
  real_T u0Hznotchfilter2_states[2];   /* '<S3>/60 Hz notch filter2' */
  real_T u100HzBandfilter2_states[10]; /* '<S3>/[1 100] Hz Band filter2' */
  real_T ThetaBandfilter_states_m[12]; /* '<S54>/Theta Band filter' */
  real_T AlphaBandfilter_states_i[12]; /* '<S54>/Alpha Band filter' */
  real_T SMRBandfilter_states_c[12];   /* '<S54>/SMR Band filter' */
  real_T BetaBandfilter_states_o[12];  /* '<S54>/Beta Band filter' */
  real_T GammaBandfilter_states_p[12]; /* '<S54>/Gamma Band filter' */
  real_T u0Hznotchfilter5_states[2];   /* '<S3>/60 Hz notch filter5' */
  real_T u100HzBandfilter5_states[10]; /* '<S3>/[1 100] Hz Band filter5' */
  real_T ThetaBandfilter_states_f1[12];/* '<S55>/Theta Band filter' */
  real_T AlphaBandfilter_states_ms[12];/* '<S55>/Alpha Band filter' */
  real_T SMRBandfilter_states_d[12];   /* '<S55>/SMR Band filter' */
  real_T BetaBandfilter_states_l[12];  /* '<S55>/Beta Band filter' */
  real_T GammaBandfilter_states_d[12]; /* '<S55>/Gamma Band filter' */
  real_T u0Hznotchfilter1_states[2];   /* '<S3>/60 Hz notch filter1' */
  real_T u100HzBandfilter1_states[10]; /* '<S3>/[1 100] Hz Band filter1' */
  real_T ThetaBandfilter_states_p[12]; /* '<S9>/Theta Band filter' */
  real_T AlphaBandfilter_states_e[12]; /* '<S9>/Alpha Band filter' */
  real_T SMRBandfilter_states_g[12];   /* '<S9>/SMR Band filter' */
  real_T BetaBandfilter_states_i[12];  /* '<S9>/Beta Band filter' */
  real_T GammaBandfilter_states_a[12]; /* '<S9>/Gamma Band filter' */
  real_T u0Hznotchfilter8_states[2];   /* '<S3>/60 Hz notch filter8' */
  real_T u100HzBandfilter8_states[10]; /* '<S3>/[1 100] Hz Band filter8' */
  real_T ThetaBandfilter_states_o[12]; /* '<S43>/Theta Band filter' */
  real_T AlphaBandfilter_states_ac[12];/* '<S43>/Alpha Band filter' */
  real_T SMRBandfilter_states_k[12];   /* '<S43>/SMR Band filter' */
  real_T BetaBandfilter_states_l0[12]; /* '<S43>/Beta Band filter' */
  real_T GammaBandfilter_states_f[12]; /* '<S43>/Gamma Band filter' */
  real_T u0Hznotchfilter11_states[2];  /* '<S3>/60 Hz notch filter11' */
  real_T u100HzBandfilter10_states[10];/* '<S3>/[1 100] Hz Band filter10' */
  real_T ThetaBandfilter_states_p0[12];/* '<S44>/Theta Band filter' */
  real_T AlphaBandfilter_states_ma[12];/* '<S44>/Alpha Band filter' */
  real_T SMRBandfilter_states_h[12];   /* '<S44>/SMR Band filter' */
  real_T BetaBandfilter_states_oi[12]; /* '<S44>/Beta Band filter' */
  real_T GammaBandfilter_states_fc[12];/* '<S44>/Gamma Band filter' */
  real_T u0Hznotchfilter10_states[2];  /* '<S3>/60 Hz notch filter10' */
  real_T u100HzBandfilter9_states[10]; /* '<S3>/[1 100] Hz Band filter9' */
  real_T ThetaBandfilter_states_mz[12];/* '<S45>/Theta Band filter' */
  real_T AlphaBandfilter_states_p[12]; /* '<S45>/Alpha Band filter' */
  real_T SMRBandfilter_states_l[12];   /* '<S45>/SMR Band filter' */
  real_T BetaBandfilter_states_m[12];  /* '<S45>/Beta Band filter' */
  real_T GammaBandfilter_states_is[12];/* '<S45>/Gamma Band filter' */
  real_T u0Hznotchfilter12_states[2];  /* '<S3>/60 Hz notch filter12' */
  real_T u100HzBandfilter11_states[10];/* '<S3>/[1 100] Hz Band filter11' */
  real_T ThetaBandfilter_states_j[12]; /* '<S46>/Theta Band filter' */
  real_T AlphaBandfilter_states_c[12]; /* '<S46>/Alpha Band filter' */
  real_T SMRBandfilter_states_ks[12];  /* '<S46>/SMR Band filter' */
  real_T BetaBandfilter_states_f[12];  /* '<S46>/Beta Band filter' */
  real_T GammaBandfilter_states_k[12]; /* '<S46>/Gamma Band filter' */
  real_T u0Hznotchfilter13_states[2];  /* '<S3>/60 Hz notch filter13' */
  real_T u100HzBandfilter12_states[10];/* '<S3>/[1 100] Hz Band filter12' */
  real_T ThetaBandfilter_states_pv[12];/* '<S47>/Theta Band filter' */
  real_T AlphaBandfilter_states_f[12]; /* '<S47>/Alpha Band filter' */
  real_T SMRBandfilter_states_a[12];   /* '<S47>/SMR Band filter' */
  real_T BetaBandfilter_states_bq[12]; /* '<S47>/Beta Band filter' */
  real_T GammaBandfilter_states_m[12]; /* '<S47>/Gamma Band filter' */
  real_T u0Hznotchfilter14_states[2];  /* '<S3>/60 Hz notch filter14' */
  real_T u100HzBandfilter13_states[10];/* '<S3>/[1 100] Hz Band filter13' */
  real_T ThetaBandfilter_states_om[12];/* '<S48>/Theta Band filter' */
  real_T AlphaBandfilter_states_af[12];/* '<S48>/Alpha Band filter' */
  real_T SMRBandfilter_states_fs[12];  /* '<S48>/SMR Band filter' */
  real_T BetaBandfilter_states_ie[12]; /* '<S48>/Beta Band filter' */
  real_T GammaBandfilter_states_h[12]; /* '<S48>/Gamma Band filter' */
  real_T u0Hznotchfilter15_states[2];  /* '<S3>/60 Hz notch filter15' */
  real_T u100HzBandfilter14_states[10];/* '<S3>/[1 100] Hz Band filter14' */
  real_T ThetaBandfilter_states_e[12]; /* '<S49>/Theta Band filter' */
  real_T AlphaBandfilter_states_mp[12];/* '<S49>/Alpha Band filter' */
  real_T SMRBandfilter_states_i[12];   /* '<S49>/SMR Band filter' */
  real_T BetaBandfilter_states_fm[12]; /* '<S49>/Beta Band filter' */
  real_T GammaBandfilter_states_dc[12];/* '<S49>/Gamma Band filter' */
  real_T u0Hznotchfilter16_states[2];  /* '<S3>/60 Hz notch filter16' */
  real_T u100HzBandfilter15_states[10];/* '<S3>/[1 100] Hz Band filter15' */
  real_T ThetaBandfilter_states_jq[12];/* '<S50>/Theta Band filter' */
  real_T AlphaBandfilter_states_im[12];/* '<S50>/Alpha Band filter' */
  real_T SMRBandfilter_states_dt[12];  /* '<S50>/SMR Band filter' */
  real_T BetaBandfilter_states_bd[12]; /* '<S50>/Beta Band filter' */
  real_T GammaBandfilter_states_h4[12];/* '<S50>/Gamma Band filter' */
  real_T u0Hznotchfilter17_states[2];  /* '<S3>/60 Hz notch filter17' */
  real_T u100HzBandfilter16_states[10];/* '<S3>/[1 100] Hz Band filter16' */
  real_T ThetaBandfilter_states_a[12]; /* '<S51>/Theta Band filter' */
  real_T AlphaBandfilter_states_aq[12];/* '<S51>/Alpha Band filter' */
  real_T SMRBandfilter_states_g1[12];  /* '<S51>/SMR Band filter' */
  real_T BetaBandfilter_states_a[12];  /* '<S51>/Beta Band filter' */
  real_T GammaBandfilter_states_o[12]; /* '<S51>/Gamma Band filter' */
  real_T LPF_3Hz_Butter_4_states_gf[4];/* '<S32>/LPF_3Hz_Butter_4' */
  real_T Buffer_CircBuf_m[34];         /* '<S32>/Buffer' */
  real_T FIRDecimation_Sums_j;         /* '<S32>/FIR Decimation' */
  real_T FIRDecimation_StatesBuff_p[391];/* '<S32>/FIR Decimation' */
  real_T LF_006_014Hz_Cheby2_4th_states[8];/* '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */
  real_T FIRInterpolation_TapDelayBuff_i[23];/* '<S32>/FIR Interpolation' */
  real_T u0Hznotchfilter_states[2];    /* '<S3>/60 Hz notch filter' */
  real_T LPF_4Hz_states[6];            /* '<S28>/LPF_4Hz' */
  real_T Buffer_CircBuf_i[20];         /* '<S28>/Buffer' */
  real_T FIRDecimation_Sums_a;         /* '<S28>/FIR Decimation' */
  real_T FIRDecimation_StatesBuff_f[230];/* '<S28>/FIR Decimation' */
  real_T Bandpass_072Hz_234_Butter_6thto[12];
            /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
  real_T Lowpass_015Hz_Butter_4thtoextra[4];
                  /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part' */
  real_T u0Hznotchfilter9_states[2];   /* '<S3>/60 Hz notch filter9' */
  real_T LPF_4Hz_states_f[6];          /* '<S28>/LPF_4Hz ' */
  real_T Buffer1_CircBuf[20];          /* '<S28>/Buffer1' */
  real_T FIRDecimation_Sums_ov;        /* '<S28>/FIR Decimation ' */
  real_T FIRDecimation_StatesBuff_l[230];/* '<S28>/FIR Decimation ' */
  real_T Bandpass_072Hz_234_Butter_6th_j[12];
           /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
  real_T Lowpass_015Hz_Butter_4thtoext_i[4];
                 /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part1' */
  real_T FIRInterpolation_TapDelayBuff_k[23];/* '<S28>/FIR Interpolation ' */
  real_T TappedDelay_X_e[256];         /* '<S29>/Tapped Delay' */
  real_T TappedDelay_X_p[256];         /* '<S31>/Tapped Delay' */
  real_T TappedDelay_X_l[12000];       /* '<S7>/Tapped Delay' */
  real_T TappedDelay1_X_p[12000];      /* '<S7>/Tapped Delay1' */
  real_T BPF_003_04Hz_Cheby2_4th_states[8];/* '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_TapDelayBuff_e[23];/* '<S32>/FIR Interpolation ' */
  real_T Delay_DSTATE_f;               /* '<S67>/Delay' */
  real_T Delay1_DSTATE;                /* '<S67>/Delay1' */
  real_T BPF_2_10_Hz_states[80];       /* '<S10>/BPF_2_10_Hz' */
  real_T DCRemoval_states[101];        /* '<S10>/DC Removal' */
  real_T BPF_003_04Hz_Cheby2_4th_state_p[8];/* '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_TapDelayBuff_m[23];/* '<S68>/FIR Interpolation  ' */
  real_T Delay_DSTATE_a;               /* '<S72>/Delay' */
  real_T Delay1_DSTATE_d;              /* '<S72>/Delay1' */
  real_T BPF_2_10_Hz_states_p[80];     /* '<S11>/BPF_2_10_Hz' */
  real_T DCRemoval_states_h[101];      /* '<S11>/DC Removal' */
  real_T LPF_3Hz_Butter_4_tmp;         /* '<S68>/LPF_3Hz_Butter_4' */
  real_T LF_005_015Hz_Cheby2_4th_tmp;  /* '<S68>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation_OutBuff[34]; /* '<S68>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th_tmp;  /* '<S68>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_OutBuff_b[34];/* '<S68>/FIR Interpolation' */
  real_T LPF_3Hz_Butter_4_tmp_o;       /* '<S73>/LPF_3Hz_Butter_4' */
  real_T LF_005_015Hz_Cheby2_4th_tmp_d;/* '<S73>/LF_0.05_0.15Hz_Cheby2_4th' */
  real_T FIRInterpolation_OutBuff_f[34];/* '<S73>/FIR Interpolation ' */
  real_T HF_015_04Hz_Chebey2_4th_tmp_n;/* '<S73>/HF_0.15_0.4Hz_Chebey2_4th' */
  real_T FIRInterpolation_OutBuff_c[34];/* '<S73>/FIR Interpolation' */
  real_T u0Hznotchfilter3_tmp;         /* '<S3>/60 Hz notch filter3' */
  real_T u100HzBandfilter3_tmp;        /* '<S3>/[1 100] Hz Band filter3' */
  real_T AlphaBandfilter_tmp;          /* '<S52>/Alpha Band filter' */
  real_T u0Hznotchfilter6_tmp;         /* '<S3>/60 Hz notch filter6' */
  real_T u100HzBandfilter6_tmp;        /* '<S3>/[1 100] Hz Band filter6' */
  real_T AlphaBandfilter_tmp_a;        /* '<S53>/Alpha Band filter' */
  real_T u0Hznotchfilter4_tmp;         /* '<S3>/60 Hz notch filter4' */
  real_T u100HzBandfilter4_tmp;        /* '<S3>/[1 100] Hz Band filter4' */
  real_T AlphaBandfilter_tmp_o;        /* '<S41>/Alpha Band filter' */
  real_T u0Hznotchfilter7_tmp;         /* '<S3>/60 Hz notch filter7' */
  real_T u100HzBandfilter7_tmp;        /* '<S3>/[1 100] Hz Band filter7' */
  real_T AlphaBandfilter_tmp_a0;       /* '<S42>/Alpha Band filter' */
  real_T BetaBandfilter_tmp;           /* '<S52>/Beta Band filter' */
  real_T BetaBandfilter_tmp_l;         /* '<S53>/Beta Band filter' */
  real_T BetaBandfilter_tmp_d;         /* '<S41>/Beta Band filter' */
  real_T BetaBandfilter_tmp_c;         /* '<S42>/Beta Band filter' */
  real_T ThetaBandfilter_tmp;          /* '<S52>/Theta Band filter' */
  real_T ThetaBandfilter_tmp_p;        /* '<S53>/Theta Band filter' */
  real_T SMRBandfilter_tmp;            /* '<S52>/SMR Band filter' */
  real_T SMRBandfilter_tmp_p;          /* '<S53>/SMR Band filter' */
  real_T GammaBandfilter_tmp;          /* '<S52>/Gamma Band filter' */
  real_T GammaBandfilter_tmp_b;        /* '<S53>/Gamma Band filter' */
  real_T ThetaBandfilter_tmp_k;        /* '<S41>/Theta Band filter' */
  real_T SMRBandfilter_tmp_g;          /* '<S41>/SMR Band filter' */
  real_T GammaBandfilter_tmp_k;        /* '<S41>/Gamma Band filter' */
  real_T ThetaBandfilter_tmp_pz;       /* '<S42>/Theta Band filter' */
  real_T SMRBandfilter_tmp_m;          /* '<S42>/SMR Band filter' */
  real_T GammaBandfilter_tmp_bp;       /* '<S42>/Gamma Band filter' */
  real_T u0Hznotchfilter2_tmp;         /* '<S3>/60 Hz notch filter2' */
  real_T u100HzBandfilter2_tmp;        /* '<S3>/[1 100] Hz Band filter2' */
  real_T ThetaBandfilter_tmp_i;        /* '<S54>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_i;        /* '<S54>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_j;          /* '<S54>/SMR Band filter' */
  real_T BetaBandfilter_tmp_n;         /* '<S54>/Beta Band filter' */
  real_T GammaBandfilter_tmp_n;        /* '<S54>/Gamma Band filter' */
  real_T u0Hznotchfilter5_tmp;         /* '<S3>/60 Hz notch filter5' */
  real_T u100HzBandfilter5_tmp;        /* '<S3>/[1 100] Hz Band filter5' */
  real_T ThetaBandfilter_tmp_o;        /* '<S55>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_l;        /* '<S55>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_h;          /* '<S55>/SMR Band filter' */
  real_T BetaBandfilter_tmp_o;         /* '<S55>/Beta Band filter' */
  real_T GammaBandfilter_tmp_i;        /* '<S55>/Gamma Band filter' */
  real_T u0Hznotchfilter1_tmp;         /* '<S3>/60 Hz notch filter1' */
  real_T u100HzBandfilter1_tmp;        /* '<S3>/[1 100] Hz Band filter1' */
  real_T ThetaBandfilter_tmp_g;        /* '<S9>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_l2;       /* '<S9>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_e;          /* '<S9>/SMR Band filter' */
  real_T BetaBandfilter_tmp_f;         /* '<S9>/Beta Band filter' */
  real_T GammaBandfilter_tmp_p;        /* '<S9>/Gamma Band filter' */
  real_T u0Hznotchfilter8_tmp;         /* '<S3>/60 Hz notch filter8' */
  real_T u100HzBandfilter8_tmp;        /* '<S3>/[1 100] Hz Band filter8' */
  real_T ThetaBandfilter_tmp_j;        /* '<S43>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_ii;       /* '<S43>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_c;          /* '<S43>/SMR Band filter' */
  real_T BetaBandfilter_tmp_j;         /* '<S43>/Beta Band filter' */
  real_T GammaBandfilter_tmp_m;        /* '<S43>/Gamma Band filter' */
  real_T u0Hznotchfilter11_tmp;        /* '<S3>/60 Hz notch filter11' */
  real_T u100HzBandfilter10_tmp;       /* '<S3>/[1 100] Hz Band filter10' */
  real_T ThetaBandfilter_tmp_d;        /* '<S44>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_m;        /* '<S44>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_d;          /* '<S44>/SMR Band filter' */
  real_T BetaBandfilter_tmp_le;        /* '<S44>/Beta Band filter' */
  real_T GammaBandfilter_tmp_bj;       /* '<S44>/Gamma Band filter' */
  real_T u0Hznotchfilter10_tmp;        /* '<S3>/60 Hz notch filter10' */
  real_T u100HzBandfilter9_tmp;        /* '<S3>/[1 100] Hz Band filter9' */
  real_T ThetaBandfilter_tmp_dw;       /* '<S45>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_i2;       /* '<S45>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_gh;         /* '<S45>/SMR Band filter' */
  real_T BetaBandfilter_tmp_a;         /* '<S45>/Beta Band filter' */
  real_T GammaBandfilter_tmp_a;        /* '<S45>/Gamma Band filter' */
  real_T u0Hznotchfilter12_tmp;        /* '<S3>/60 Hz notch filter12' */
  real_T u100HzBandfilter11_tmp;       /* '<S3>/[1 100] Hz Band filter11' */
  real_T ThetaBandfilter_tmp_a;        /* '<S46>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_am;       /* '<S46>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_hq;         /* '<S46>/SMR Band filter' */
  real_T BetaBandfilter_tmp_e;         /* '<S46>/Beta Band filter' */
  real_T GammaBandfilter_tmp_l;        /* '<S46>/Gamma Band filter' */
  real_T u0Hznotchfilter13_tmp;        /* '<S3>/60 Hz notch filter13' */
  real_T u100HzBandfilter12_tmp;       /* '<S3>/[1 100] Hz Band filter12' */
  real_T ThetaBandfilter_tmp_l;        /* '<S47>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_n;        /* '<S47>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_a;          /* '<S47>/SMR Band filter' */
  real_T BetaBandfilter_tmp_i;         /* '<S47>/Beta Band filter' */
  real_T GammaBandfilter_tmp_e;        /* '<S47>/Gamma Band filter' */
  real_T u0Hznotchfilter14_tmp;        /* '<S3>/60 Hz notch filter14' */
  real_T u100HzBandfilter13_tmp;       /* '<S3>/[1 100] Hz Band filter13' */
  real_T ThetaBandfilter_tmp_ij;       /* '<S48>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_mp;       /* '<S48>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_a4;         /* '<S48>/SMR Band filter' */
  real_T BetaBandfilter_tmp_db;        /* '<S48>/Beta Band filter' */
  real_T GammaBandfilter_tmp_g;        /* '<S48>/Gamma Band filter' */
  real_T u0Hznotchfilter15_tmp;        /* '<S3>/60 Hz notch filter15' */
  real_T u100HzBandfilter14_tmp;       /* '<S3>/[1 100] Hz Band filter14' */
  real_T ThetaBandfilter_tmp_o0;       /* '<S49>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_c;        /* '<S49>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_gm;         /* '<S49>/SMR Band filter' */
  real_T BetaBandfilter_tmp_c0;        /* '<S49>/Beta Band filter' */
  real_T GammaBandfilter_tmp_c;        /* '<S49>/Gamma Band filter' */
  real_T u0Hznotchfilter16_tmp;        /* '<S3>/60 Hz notch filter16' */
  real_T u100HzBandfilter15_tmp;       /* '<S3>/[1 100] Hz Band filter15' */
  real_T ThetaBandfilter_tmp_oh;       /* '<S50>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_nn;       /* '<S50>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_b;          /* '<S50>/SMR Band filter' */
  real_T BetaBandfilter_tmp_dy;        /* '<S50>/Beta Band filter' */
  real_T GammaBandfilter_tmp_ks;       /* '<S50>/Gamma Band filter' */
  real_T u0Hznotchfilter17_tmp;        /* '<S3>/60 Hz notch filter17' */
  real_T u100HzBandfilter16_tmp;       /* '<S3>/[1 100] Hz Band filter16' */
  real_T ThetaBandfilter_tmp_kh;       /* '<S51>/Theta Band filter' */
  real_T AlphaBandfilter_tmp_nv;       /* '<S51>/Alpha Band filter' */
  real_T SMRBandfilter_tmp_pp;         /* '<S51>/SMR Band filter' */
  real_T BetaBandfilter_tmp_ah;        /* '<S51>/Beta Band filter' */
  real_T GammaBandfilter_tmp_aq;       /* '<S51>/Gamma Band filter' */
  real_T LPF_3Hz_Butter_4_tmp_h;       /* '<S32>/LPF_3Hz_Butter_4' */
  real_T LF_006_014Hz_Cheby2_4th_tmp;  /* '<S32>/LF_0.06_0.14Hz_Cheby2_4th' */
  real_T FIRInterpolation_OutBuff_cv[34];/* '<S32>/FIR Interpolation' */
  real_T u0Hznotchfilter_tmp;          /* '<S3>/60 Hz notch filter' */
  real_T LPF_4Hz_tmp;                  /* '<S28>/LPF_4Hz' */
  real_T Bandpass_072Hz_234_Butter_6th_a;
            /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part' */
  real_T Lowpass_015Hz_Butter_4thtoext_j;
                  /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part' */
  real_T u0Hznotchfilter9_tmp;         /* '<S3>/60 Hz notch filter9' */
  real_T LPF_4Hz_tmp_j;                /* '<S28>/LPF_4Hz ' */
  real_T Bandpass_072Hz_234_Butter_6th_l;
           /* '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1' */
  real_T Lowpass_015Hz_Butter_4thtoex_ig;
                 /* '<S28>/Lowpass_0.15Hz_Butter_4th to extract the DC part1' */
  real_T FIRInterpolation_OutBuff_bo[20];/* '<S28>/FIR Interpolation ' */
  real_T BPF_003_04Hz_Cheby2_4th_tmp;  /* '<S32>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_OutBuff_bc[34];/* '<S32>/FIR Interpolation ' */
  real_T DCRemoval_tmp;                /* '<S10>/DC Removal' */
  real_T BPF_003_04Hz_Cheby2_4th_tmp_c;/* '<S68>/BPF_0.03_0.4Hz_Cheby2_4th' */
  real_T FIRInterpolation_OutBuff_d[34];/* '<S68>/FIR Interpolation  ' */
  real_T DCRemoval_tmp_d;              /* '<S11>/DC Removal' */
  int32_T Buffer_inBufPtrIdx;          /* '<S68>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<S68>/Buffer' */
  int32_T Buffer_bufferLength;         /* '<S68>/Buffer' */
  int32_T FIRDecimation_PhaseIdx;      /* '<S68>/FIR Decimation' */
  int32_T FIRDecimation_CoeffIdx;      /* '<S68>/FIR Decimation' */
  int32_T FIRDecimation_TapDelayIndex; /* '<S68>/FIR Decimation' */
  int32_T FIRInterpolation_TapDelayIndex;/* '<S68>/FIR Interpolation ' */
  int32_T FIRInterpolation_TapDelayInde_o;/* '<S68>/FIR Interpolation' */
  int32_T Buffer_inBufPtrIdx_k;        /* '<S73>/Buffer' */
  int32_T Buffer_outBufPtrIdx_e;       /* '<S73>/Buffer' */
  int32_T Buffer_bufferLength_l;       /* '<S73>/Buffer' */
  int32_T FIRDecimation_PhaseIdx_m;    /* '<S73>/FIR Decimation' */
  int32_T FIRDecimation_CoeffIdx_j;    /* '<S73>/FIR Decimation' */
  int32_T FIRDecimation_TapDelayIndex_g;/* '<S73>/FIR Decimation' */
  int32_T FIRInterpolation_TapDelayInde_j;/* '<S73>/FIR Interpolation ' */
  int32_T FIRInterpolation_TapDelayInde_n;/* '<S73>/FIR Interpolation' */
  int32_T Buffer_inBufPtrIdx_b;        /* '<S32>/Buffer' */
  int32_T Buffer_outBufPtrIdx_eb;      /* '<S32>/Buffer' */
  int32_T Buffer_bufferLength_a;       /* '<S32>/Buffer' */
  int32_T FIRDecimation_PhaseIdx_mp;   /* '<S32>/FIR Decimation' */
  int32_T FIRDecimation_CoeffIdx_h;    /* '<S32>/FIR Decimation' */
  int32_T FIRDecimation_TapDelayIndex_m;/* '<S32>/FIR Decimation' */
  int32_T FIRInterpolation_TapDelayInd_nv;/* '<S32>/FIR Interpolation' */
  int32_T Buffer_inBufPtrIdx_g;        /* '<S28>/Buffer' */
  int32_T Buffer_outBufPtrIdx_l;       /* '<S28>/Buffer' */
  int32_T Buffer_bufferLength_av;      /* '<S28>/Buffer' */
  int32_T FIRDecimation_PhaseIdx_d;    /* '<S28>/FIR Decimation' */
  int32_T FIRDecimation_CoeffIdx_i;    /* '<S28>/FIR Decimation' */
  int32_T FIRDecimation_TapDelayIndex_a;/* '<S28>/FIR Decimation' */
  int32_T Buffer1_inBufPtrIdx;         /* '<S28>/Buffer1' */
  int32_T Buffer1_outBufPtrIdx;        /* '<S28>/Buffer1' */
  int32_T Buffer1_bufferLength;        /* '<S28>/Buffer1' */
  int32_T FIRDecimation_PhaseIdx_b;    /* '<S28>/FIR Decimation ' */
  int32_T FIRDecimation_CoeffIdx_hm;   /* '<S28>/FIR Decimation ' */
  int32_T FIRDecimation_TapDelayIndex_k;/* '<S28>/FIR Decimation ' */
  int32_T FIRInterpolation_TapDelayInde_m;/* '<S28>/FIR Interpolation ' */
  int32_T FIRInterpolation_TapDelayInde_h;/* '<S32>/FIR Interpolation ' */
  int32_T BPF_2_10_Hz_circBuf;         /* '<S10>/BPF_2_10_Hz' */
  int32_T FIRInterpolation_TapDelayInd_jt;/* '<S68>/FIR Interpolation  ' */
  int32_T BPF_2_10_Hz_circBuf_m;       /* '<S11>/BPF_2_10_Hz' */
  int32_T FIRInterpolation_ReadIdx;    /* '<S68>/FIR Interpolation ' */
  int32_T FIRInterpolation_ReadIdx_m;  /* '<S68>/FIR Interpolation' */
  int32_T FIRInterpolation_ReadIdx_c;  /* '<S73>/FIR Interpolation ' */
  int32_T FIRInterpolation_ReadIdx_g;  /* '<S73>/FIR Interpolation' */
  int32_T FIRInterpolation_ReadIdx_l;  /* '<S32>/FIR Interpolation' */
  int32_T FIRInterpolation_ReadIdx_p;  /* '<S28>/FIR Interpolation ' */
  int32_T FIRInterpolation_ReadIdx_k;  /* '<S32>/FIR Interpolation ' */
  int32_T FIRInterpolation_ReadIdx_a;  /* '<S68>/FIR Interpolation  ' */
  boolean_T FIRInterpolation_wrtBufIdx;/* '<S68>/FIR Interpolation ' */
  boolean_T FIRInterpolation_wrtBufIdx_f;/* '<S68>/FIR Interpolation' */
  boolean_T FIRInterpolation_wrtBufIdx_d;/* '<S73>/FIR Interpolation ' */
  boolean_T FIRInterpolation_wrtBufIdx_i;/* '<S73>/FIR Interpolation' */
  boolean_T FIRInterpolation_wrtBufIdx_ia;/* '<S32>/FIR Interpolation' */
  boolean_T FIRInterpolation_wrtBufIdx_c;/* '<S28>/FIR Interpolation ' */
  boolean_T FIRInterpolation_wrtBufIdx_p;/* '<S32>/FIR Interpolation ' */
  boolean_T FIRInterpolation_wrtBufIdx_e;/* '<S68>/FIR Interpolation  ' */
  DW_MovingAverage_Cortex_PPG_E_T MovingAverage_p;/* '<S29>/Moving Average' */
  DW_MovingAverage_Cortex_PPG_E_T MovingAverage;/* '<S29>/Moving Average' */
  DW_MovingRMS1_Cortex_PPG_EEG_T MovingRMS3_pna;/* '<S28>/Moving RMS1' */
  DW_MovingRMS1_Cortex_PPG_EEG_T MovingRMS1;/* '<S28>/Moving RMS1' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ef;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hl;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hc;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h0;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_le;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ev;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_lb;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_j5;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dp;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_bx;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_id;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_a;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dz;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ig;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h1;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h5;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i3n;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hs5;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h2;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hz;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h3;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mw;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_df;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_fp;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_nk;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mk;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_px;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_en;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_py;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p4;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_l;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_c4;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_bn;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kf;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ep;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_go;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_gye;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ng;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_b;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_hs;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ka1;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i3;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p2;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_m3;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_po;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_j;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_mc;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_e4;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_o3;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pe;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pr;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_i;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pdn;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_m;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_gy;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_dm;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_d;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pd;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_o;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ez;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_cj;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_el;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kaa;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_ka;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_kw;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_h;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_k;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_f;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_n;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_e;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_c;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_g;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zzhe;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zzh;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5zz;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5z;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh5;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpgh;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfpg;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvfp;/* '<S33>/Moving RMS' */
  DW_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3_pn;/* '<S32>/Moving RMS3' */
  DW_MovingRMS2_Cortex_PPG_EEG_T MovingRMS2_p;/* '<S68>/Moving RMS2' */
  DW_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3_p;/* '<S32>/Moving RMS3' */
  DW_MovingRMS2_Cortex_PPG_EEG_T MovingRMS2;/* '<S68>/Moving RMS2' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevvf;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaevv;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnaev;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pnae;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pna;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_pn;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS_p;/* '<S33>/Moving RMS' */
  DW_MovingRMS_Cortex_PPG_EEG_T MovingRMS;/* '<S33>/Moving RMS' */
  DW_MovingRMS3_Cortex_PPG_EEG_T MovingRMS3;/* '<S32>/Moving RMS3' */
} DW_Cortex_PPG_EEG_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: a.h)
   * Referenced by:
   *   '<S32>/FIR Decimation'
   *   '<S68>/FIR Decimation'
   *   '<S73>/FIR Decimation'
   */
  real_T pooled6[408];

  /* Pooled Parameter (Expression: [0.009538545804899  -0.075546304826955   0.262515285742290  -0.522761131772345   0.652507210104230  -0.522761131772345 0.262515285742289  -0.075546304826955   0.009538545804899])
   * Referenced by:
   *   '<S68>/LF_0.05_0.15Hz_Cheby2_4th'
   *   '<S73>/LF_0.05_0.15Hz_Cheby2_4th'
   */
  real_T pooled7[9];

  /* Pooled Parameter (Expression: [1.000000000000000  -7.863525599081582  27.057402874318988 -53.209658848238824  65.410675443987813 -51.470774174144907 25.317852816913497  -7.117528698394869   0.875556184640536])
   * Referenced by:
   *   '<S68>/LF_0.05_0.15Hz_Cheby2_4th'
   *   '<S73>/LF_0.05_0.15Hz_Cheby2_4th'
   */
  real_T pooled8[9];

  /* Pooled Parameter (Expression: a.h)
   * Referenced by:
   *   '<S32>/FIR Interpolation'
   *   '<S32>/FIR Interpolation '
   *   '<S68>/FIR Interpolation'
   *   '<S68>/FIR Interpolation '
   *   '<S68>/FIR Interpolation  '
   *   '<S73>/FIR Interpolation'
   *   '<S73>/FIR Interpolation '
   */
  real_T pooled9[408];

  /* Pooled Parameter (Expression: [0.009438851055717  -0.073246677068182   0.250798835164990  -0.494996549169139   0.616011080212119  -0.494996549169140 0.250798835164991  -0.073246677068182   0.009438851055717])
   * Referenced by:
   *   '<S68>/HF_0.15_0.4Hz_Chebey2_4th'
   *   '<S73>/HF_0.15_0.4Hz_Chebey2_4th'
   */
  real_T pooled10[9];

  /* Pooled Parameter (Expression: [1.000000000000000  -7.739794271357281  26.255594405136261 -50.986927931763319  61.995089270751990 -48.330041129664707 23.590640871062678  -6.591881914678833   0.807320718402332])
   * Referenced by:
   *   '<S68>/HF_0.15_0.4Hz_Chebey2_4th'
   *   '<S73>/HF_0.15_0.4Hz_Chebey2_4th'
   */
  real_T pooled11[9];

  /* Pooled Parameter (Expression: [0.340681282165238  -0.060146437852853  -1.579919713319860   0.111637560623920   3.053664011421978  -0.000000000000001 -3.053664011421979  -0.111637560623918   1.579919713319861   0.060146437852853  -0.340681282165238])
   * Referenced by:
   *   '<S3>/[1 100] Hz Band filter1'
   *   '<S3>/[1 100] Hz Band filter10'
   *   '<S3>/[1 100] Hz Band filter11'
   *   '<S3>/[1 100] Hz Band filter12'
   *   '<S3>/[1 100] Hz Band filter13'
   *   '<S3>/[1 100] Hz Band filter14'
   *   '<S3>/[1 100] Hz Band filter15'
   *   '<S3>/[1 100] Hz Band filter16'
   *   '<S3>/[1 100] Hz Band filter2'
   *   '<S3>/[1 100] Hz Band filter3'
   *   '<S3>/[1 100] Hz Band filter4'
   *   '<S3>/[1 100] Hz Band filter5'
   *   '<S3>/[1 100] Hz Band filter6'
   *   '<S3>/[1 100] Hz Band filter7'
   *   '<S3>/[1 100] Hz Band filter8'
   *   '<S3>/[1 100] Hz Band filter9'
   */
  real_T pooled14[11];

  /* Pooled Parameter (Expression: [1.000000000000000  -1.964121167431278  -0.926209310709251   2.702943289360973   1.535210283570859  -2.435398384825939 -1.254256579463599   1.046226105702855   0.598727024469845  -0.187060509519150  -0.116058672924507])
   * Referenced by:
   *   '<S3>/[1 100] Hz Band filter1'
   *   '<S3>/[1 100] Hz Band filter10'
   *   '<S3>/[1 100] Hz Band filter11'
   *   '<S3>/[1 100] Hz Band filter12'
   *   '<S3>/[1 100] Hz Band filter13'
   *   '<S3>/[1 100] Hz Band filter14'
   *   '<S3>/[1 100] Hz Band filter15'
   *   '<S3>/[1 100] Hz Band filter16'
   *   '<S3>/[1 100] Hz Band filter2'
   *   '<S3>/[1 100] Hz Band filter3'
   *   '<S3>/[1 100] Hz Band filter4'
   *   '<S3>/[1 100] Hz Band filter5'
   *   '<S3>/[1 100] Hz Band filter6'
   *   '<S3>/[1 100] Hz Band filter7'
   *   '<S3>/[1 100] Hz Band filter8'
   *   '<S3>/[1 100] Hz Band filter9'
   */
  real_T pooled15[11];

  /* Pooled Parameter (Expression: [0.002898956706637  -0.032050314783481   0.164696891729185  -0.520421044282239   1.126716648015095  -1.761331990253625 2.038981705907268  -1.761331990253626   1.126716648015096  -0.520421044282240   0.164696891729186  -0.032050314783481 0.002898956706637])
   * Referenced by:
   *   '<S9>/Alpha Band filter'
   *   '<S41>/Alpha Band filter'
   *   '<S42>/Alpha Band filter'
   *   '<S43>/Alpha Band filter'
   *   '<S44>/Alpha Band filter'
   *   '<S45>/Alpha Band filter'
   *   '<S46>/Alpha Band filter'
   *   '<S47>/Alpha Band filter'
   *   '<S48>/Alpha Band filter'
   *   '<S49>/Alpha Band filter'
   *   '<S50>/Alpha Band filter'
   *   '<S51>/Alpha Band filter'
   *   '<S52>/Alpha Band filter'
   *   '<S53>/Alpha Band filter'
   *   '<S54>/Alpha Band filter'
   *   '<S55>/Alpha Band filter'
   */
  real_T pooled16[13];

  /* Pooled Parameter (Expression: 1e2*[0.010000000000000  -0.111531344442021   0.573685188678141  -1.799372277249716   3.832607512950345  -5.839893180348324 6.527231576123802  -5.391905803532534   3.267157048742953  -1.416239873517433   0.416900676996932  -0.074834804060697 0.006195280197441])
   * Referenced by:
   *   '<S9>/Alpha Band filter'
   *   '<S41>/Alpha Band filter'
   *   '<S42>/Alpha Band filter'
   *   '<S43>/Alpha Band filter'
   *   '<S44>/Alpha Band filter'
   *   '<S45>/Alpha Band filter'
   *   '<S46>/Alpha Band filter'
   *   '<S47>/Alpha Band filter'
   *   '<S48>/Alpha Band filter'
   *   '<S49>/Alpha Band filter'
   *   '<S50>/Alpha Band filter'
   *   '<S51>/Alpha Band filter'
   *   '<S52>/Alpha Band filter'
   *   '<S53>/Alpha Band filter'
   *   '<S54>/Alpha Band filter'
   *   '<S55>/Alpha Band filter'
   */
  real_T pooled17[13];

  /* Pooled Parameter (Expression: [0.005045932326505  -0.036983582567232   0.129595370618557  -0.292586961850309   0.484317802047641  -0.634541223470044 0.690305532356256  -0.634541223470045   0.484317802047642  -0.292586961850310   0.129595370618558  -0.036983582567233 0.005045932326505])
   * Referenced by:
   *   '<S9>/Beta Band filter'
   *   '<S41>/Beta Band filter'
   *   '<S42>/Beta Band filter'
   *   '<S43>/Beta Band filter'
   *   '<S44>/Beta Band filter'
   *   '<S45>/Beta Band filter'
   *   '<S46>/Beta Band filter'
   *   '<S47>/Beta Band filter'
   *   '<S48>/Beta Band filter'
   *   '<S49>/Beta Band filter'
   *   '<S50>/Beta Band filter'
   *   '<S51>/Beta Band filter'
   *   '<S52>/Beta Band filter'
   *   '<S53>/Beta Band filter'
   *   '<S54>/Beta Band filter'
   *   '<S55>/Beta Band filter'
   */
  real_T pooled18[13];

  /* Pooled Parameter (Expression: 1e2*[0.010000000000000  -0.091170183825890   0.390883606932249  -1.041021033397173   1.916716752011473  -2.568958712208152 2.569299288958812  -1.931809004385369   1.083852688989577  -0.442679767028838   0.125014166615711  -0.021939510147275 0.001812360705472])
   * Referenced by:
   *   '<S9>/Beta Band filter'
   *   '<S41>/Beta Band filter'
   *   '<S42>/Beta Band filter'
   *   '<S43>/Beta Band filter'
   *   '<S44>/Beta Band filter'
   *   '<S45>/Beta Band filter'
   *   '<S46>/Beta Band filter'
   *   '<S47>/Beta Band filter'
   *   '<S48>/Beta Band filter'
   *   '<S49>/Beta Band filter'
   *   '<S50>/Beta Band filter'
   *   '<S51>/Beta Band filter'
   *   '<S52>/Beta Band filter'
   *   '<S53>/Beta Band filter'
   *   '<S54>/Beta Band filter'
   *   '<S55>/Beta Band filter'
   */
  real_T pooled19[13];

  /* Pooled Parameter (Expression: [0.002885692894192  -0.033043228161683   0.174798780914944  -0.565067350452178   1.243592200475485  -1.963347382460388 2.280362573579343  -1.963347382460390   1.243592200475487  -0.565067350452179   0.174798780914945  -0.033043228161683 0.002885692894192])
   * Referenced by:
   *   '<S9>/Theta Band filter'
   *   '<S41>/Theta Band filter'
   *   '<S42>/Theta Band filter'
   *   '<S43>/Theta Band filter'
   *   '<S44>/Theta Band filter'
   *   '<S45>/Theta Band filter'
   *   '<S46>/Theta Band filter'
   *   '<S47>/Theta Band filter'
   *   '<S48>/Theta Band filter'
   *   '<S49>/Theta Band filter'
   *   '<S50>/Theta Band filter'
   *   '<S51>/Theta Band filter'
   *   '<S52>/Theta Band filter'
   *   '<S53>/Theta Band filter'
   *   '<S54>/Theta Band filter'
   *   '<S55>/Theta Band filter'
   */
  real_T pooled20[13];

  /* Pooled Parameter (Expression: 1e2*[0.010000000000000  -0.114812033027304   0.605230337280064  -1.937010779766359   4.191865816950841  -6.462182228042886 7.276730527879822  -6.030569169181911   3.650617087497598  -1.574244504009536   0.459033385635176  -0.081263861503038 0.006605420287811])
   * Referenced by:
   *   '<S9>/Theta Band filter'
   *   '<S41>/Theta Band filter'
   *   '<S42>/Theta Band filter'
   *   '<S43>/Theta Band filter'
   *   '<S44>/Theta Band filter'
   *   '<S45>/Theta Band filter'
   *   '<S46>/Theta Band filter'
   *   '<S47>/Theta Band filter'
   *   '<S48>/Theta Band filter'
   *   '<S49>/Theta Band filter'
   *   '<S50>/Theta Band filter'
   *   '<S51>/Theta Band filter'
   *   '<S52>/Theta Band filter'
   *   '<S53>/Theta Band filter'
   *   '<S54>/Theta Band filter'
   *   '<S55>/Theta Band filter'
   */
  real_T pooled21[13];

  /* Pooled Parameter (Expression: [0.002899197083503  -0.032031918198502   0.164745744535484  -0.521389531318210   1.130617377309414  -1.769468150993642 2.049254573076254  -1.769468150993643   1.130617377309415  -0.521389531318210   0.164745744535484  -0.032031918198502 0.002899197083503])
   * Referenced by:
   *   '<S9>/SMR Band filter'
   *   '<S41>/SMR Band filter'
   *   '<S42>/SMR Band filter'
   *   '<S43>/SMR Band filter'
   *   '<S44>/SMR Band filter'
   *   '<S45>/SMR Band filter'
   *   '<S46>/SMR Band filter'
   *   '<S47>/SMR Band filter'
   *   '<S48>/SMR Band filter'
   *   '<S49>/SMR Band filter'
   *   '<S50>/SMR Band filter'
   *   '<S51>/SMR Band filter'
   *   '<S52>/SMR Band filter'
   *   '<S53>/SMR Band filter'
   *   '<S54>/SMR Band filter'
   *   '<S55>/SMR Band filter'
   */
  real_T pooled23[13];

  /* Pooled Parameter (Expression: 1e2*[0.010000000000000  -0.109876283550737   0.560223997993573  -1.751928331759917   3.741277132571989  -5.746654553654757 6.509369453400875  -5.478401985573694   3.400146447149536  -1.517865618220003   0.462720241420885  -0.086517008703503 0.007506540271344])
   * Referenced by:
   *   '<S9>/SMR Band filter'
   *   '<S41>/SMR Band filter'
   *   '<S42>/SMR Band filter'
   *   '<S43>/SMR Band filter'
   *   '<S44>/SMR Band filter'
   *   '<S45>/SMR Band filter'
   *   '<S46>/SMR Band filter'
   *   '<S47>/SMR Band filter'
   *   '<S48>/SMR Band filter'
   *   '<S49>/SMR Band filter'
   *   '<S50>/SMR Band filter'
   *   '<S51>/SMR Band filter'
   *   '<S52>/SMR Band filter'
   *   '<S53>/SMR Band filter'
   *   '<S54>/SMR Band filter'
   *   '<S55>/SMR Band filter'
   */
  real_T pooled24[13];

  /* Pooled Parameter (Expression: [0.055358019483807  -0.002654446902009  -0.210050288500098   0.004857155593357   0.413541304897031  -0.002681610009775 -0.510320348476441  -0.002681610009780   0.413541304897031   0.004857155593360  -0.210050288500099  -0.002654446902010 0.055358019483808])
   * Referenced by:
   *   '<S9>/Gamma Band filter'
   *   '<S41>/Gamma Band filter'
   *   '<S42>/Gamma Band filter'
   *   '<S43>/Gamma Band filter'
   *   '<S44>/Gamma Band filter'
   *   '<S45>/Gamma Band filter'
   *   '<S46>/Gamma Band filter'
   *   '<S47>/Gamma Band filter'
   *   '<S48>/Gamma Band filter'
   *   '<S49>/Gamma Band filter'
   *   '<S50>/Gamma Band filter'
   *   '<S51>/Gamma Band filter'
   *   '<S52>/Gamma Band filter'
   *   '<S53>/Gamma Band filter'
   *   '<S54>/Gamma Band filter'
   *   '<S55>/Gamma Band filter'
   */
  real_T pooled25[13];

  /* Pooled Parameter (Expression: [1.000000000000000  -0.134935459194194   0.210047683396890  -0.062023717671861   0.918688403650689  -0.081679283289157 0.033463857533426  -0.017189595502760   0.174800486542792  -0.006668019474573  -0.008334172181330  -0.000387713005661 0.004374693775644])
   * Referenced by:
   *   '<S9>/Gamma Band filter'
   *   '<S41>/Gamma Band filter'
   *   '<S42>/Gamma Band filter'
   *   '<S43>/Gamma Band filter'
   *   '<S44>/Gamma Band filter'
   *   '<S45>/Gamma Band filter'
   *   '<S46>/Gamma Band filter'
   *   '<S47>/Gamma Band filter'
   *   '<S48>/Gamma Band filter'
   *   '<S49>/Gamma Band filter'
   *   '<S50>/Gamma Band filter'
   *   '<S51>/Gamma Band filter'
   *   '<S52>/Gamma Band filter'
   *   '<S53>/Gamma Band filter'
   *   '<S54>/Gamma Band filter'
   *   '<S55>/Gamma Band filter'
   */
  real_T pooled26[13];

  /* Expression: [0.009794511583416  -0.078204687023205   0.273338415258148  -0.546223662802711   0.682590845968758  -0.546223662802711   0.273338415258148  -0.078204687023205   0.009794511583416]
   * Referenced by: '<S32>/LF_0.06_0.14Hz_Cheby2_4th'
   */
  real_T LF_006_014Hz_Cheby2_4th_NumCoef[9];

  /* Expression: [1.000000000000000  -7.947706589568256  27.641334082830660 -54.945909317703332  68.279283974395696  -54.314993351616096  27.010196541128213  -7.677060706296035   0.954855366834564]
   * Referenced by: '<S32>/LF_0.06_0.14Hz_Cheby2_4th'
   */
  real_T LF_006_014Hz_Cheby2_4th_DenCoef[9];

  /* Pooled Parameter (Expression: [0.002890550446273  -0.016558556211703   0.040251973115125  -0.053167592226597   0.040251973115125  -0.016558556211703 0.002890550446273])
   * Referenced by:
   *   '<S28>/LPF_4Hz'
   *   '<S28>/LPF_4Hz '
   */
  real_T pooled27[7];

  /* Pooled Parameter (Expression: [1.000000000000000  -5.681369035459586  13.457255215680803 -17.010287194557197  12.101358838579355  -4.594017141342812  0.727059659572231])
   * Referenced by:
   *   '<S28>/LPF_4Hz'
   *   '<S28>/LPF_4Hz '
   */
  real_T pooled28[7];

  /* Pooled Parameter (Expression: a.h)
   * Referenced by:
   *   '<S28>/FIR Decimation'
   *   '<S28>/FIR Decimation '
   */
  real_T pooled29[240];

  /* Pooled Parameter (Expression: 1e-3*[0.035000317975484   0   -0.210001907852905   0   0.525004769632262  0  -0.700006359509683    0   0.525004769632262    0   -0.210001907852905   0   0.035000317975484])
   * Referenced by:
   *   '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part'
   *   '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1'
   */
  real_T pooled30[13];

  /* Pooled Parameter (Expression: 1e2*[0.010000000000000  -0.098711932204182   0.451714290991381  -1.267133589150215   2.426812686753483  -3.343041844121016  3.396516057874566  -2.564500603848505   1.428206040248261  -0.572194466395697   0.156560001549171  -0.026271889782130  0.002045254856575])
   * Referenced by:
   *   '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part'
   *   '<S28>/Bandpass_0.72Hz_2.34_Butter_6th to extract the AC part1'
   */
  real_T pooled31[13];

  /* Expression: a.h
   * Referenced by: '<S28>/FIR Interpolation '
   */
  real_T FIRInterpolation_FILTER_COEFF[240];

  /* Pooled Parameter (Expression: [0.009445133134969  -0.072526648081420   0.246390651424266  -0.483944887552543   0.601271502149695  -0.483944887552543 0.246390651424266  -0.072526648081420   0.009445133134969])
   * Referenced by:
   *   '<S32>/BPF_0.03_0.4Hz_Cheby2_4th'
   *   '<S68>/BPF_0.03_0.4Hz_Cheby2_4th'
   */
  real_T pooled34[9];

  /* Pooled Parameter (Expression: [1.000000000000000  -7.716212981393461  26.061409534880767 -50.323030128454327  60.761786025965350 -46.977568584724082 22.711620694122942  -6.277495432220533   0.759490871847284])
   * Referenced by:
   *   '<S32>/BPF_0.03_0.4Hz_Cheby2_4th'
   *   '<S68>/BPF_0.03_0.4Hz_Cheby2_4th'
   */
  real_T pooled35[9];

  /* Pooled Parameter (Expression: fir1(80,2*[2 10]/250,'bandpass'))
   * Referenced by:
   *   '<S10>/BPF_2_10_Hz'
   *   '<S11>/BPF_2_10_Hz'
   */
  real_T pooled38[81];

  /* Pooled Parameter (Expression: [-1  zeros(1,100-1) (100+1)  -100])
   * Referenced by:
   *   '<S10>/DC Removal'
   *   '<S11>/DC Removal'
   */
  real_T pooled39[102];

  /* Pooled Parameter (Expression: [100  -100  zeros(1,100)])
   * Referenced by:
   *   '<S10>/DC Removal'
   *   '<S11>/DC Removal'
   */
  real_T pooled40[102];
} ConstP_Cortex_PPG_EEG_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In[18];                       /* '<Root>/In' */
} ExtU_Cortex_PPG_EEG_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out[324];                     /* '<Root>/Out' */
} ExtY_Cortex_PPG_EEG_T;

/* Real-time Model Data Structure */
struct tag_RTM_Cortex_PPG_EEG_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_Cortex_PPG_EEG_T Cortex_PPG_EEG_B;

/* Block states (default storage) */
extern DW_Cortex_PPG_EEG_T Cortex_PPG_EEG_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Cortex_PPG_EEG_T Cortex_PPG_EEG_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Cortex_PPG_EEG_T Cortex_PPG_EEG_Y;

/* Constant parameters (default storage) */
extern const ConstP_Cortex_PPG_EEG_T Cortex_PPG_EEG_ConstP;

/* Model entry point functions */
extern void Cortex_PPG_EEG_initialize(void);
extern void Cortex_PPG_EEG_step(void);
extern void Cortex_PPG_EEG_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Cortex_PPG_EEG_T *const Cortex_PPG_EEG_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S33>/Square' : Unused code path elimination
 * Block '<S34>/Square' : Unused code path elimination
 * Block '<S37>/Square' : Unused code path elimination
 * Block '<S40>/Square' : Unused code path elimination
 * Block '<S2>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S10>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S11>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S28>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S28>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S29>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S31>/Zero-Order Hold' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('C_Simulink_V20/Cortex_PPG_EEG')    - opens subsystem C_Simulink_V20/Cortex_PPG_EEG
 * hilite_system('C_Simulink_V20/Cortex_PPG_EEG/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'C_Simulink_V20'
 * '<S1>'   : 'C_Simulink_V20/Cortex_PPG_EEG'
 * '<S2>'   : 'C_Simulink_V20/Cortex_PPG_EEG/0.1 HZ EEG extraction'
 * '<S3>'   : 'C_Simulink_V20/Cortex_PPG_EEG/60 Hz notch filter  and [1 100] Hz BPF Block'
 * '<S4>'   : 'C_Simulink_V20/Cortex_PPG_EEG/Display Brain Map'
 * '<S5>'   : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers'
 * '<S6>'   : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters'
 * '<S7>'   : 'C_Simulink_V20/Cortex_PPG_EEG/EEG HRV Coherence Calculation'
 * '<S8>'   : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2'
 * '<S9>'   : 'C_Simulink_V20/Cortex_PPG_EEG/O1 EEG Band filters'
 * '<S10>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing'
 * '<S11>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG2 Processing'
 * '<S12>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power'
 * '<S13>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power'
 * '<S14>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power'
 * '<S15>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power'
 * '<S16>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power'
 * '<S17>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power'
 * '<S18>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power'
 * '<S19>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power'
 * '<S20>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power'
 * '<S21>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power'
 * '<S22>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power'
 * '<S23>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power'
 * '<S24>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power'
 * '<S25>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power'
 * '<S26>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6'
 * '<S27>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power'
 * '<S28>'  : 'C_Simulink_V20/Cortex_PPG_EEG/SpO2 (Red and IR Caclulation)'
 * '<S29>'  : 'C_Simulink_V20/Cortex_PPG_EEG/T3 FFT Subsystem'
 * '<S30>'  : 'C_Simulink_V20/Cortex_PPG_EEG/T3-T4 Power'
 * '<S31>'  : 'C_Simulink_V20/Cortex_PPG_EEG/T4 FFT Subsystem'
 * '<S32>'  : 'C_Simulink_V20/Cortex_PPG_EEG/0.1 HZ EEG extraction/0.1 Hz Band Extraction'
 * '<S33>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples'
 * '<S34>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples1'
 * '<S35>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples2'
 * '<S36>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples3'
 * '<S37>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples4'
 * '<S38>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples5'
 * '<S39>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples6'
 * '<S40>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channel Powers/Running Power 50 samples7'
 * '<S41>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/F7 EEG Band filters'
 * '<S42>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/F8 EEG Band filters'
 * '<S43>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters'
 * '<S44>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters1'
 * '<S45>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters2'
 * '<S46>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters3'
 * '<S47>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters4'
 * '<S48>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters5'
 * '<S49>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters6'
 * '<S50>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters7'
 * '<S51>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/O2 EEG Band filters8'
 * '<S52>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/T3 EEG Band filters'
 * '<S53>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/T4 EEG Band filters'
 * '<S54>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/T5 EEG Band filters'
 * '<S55>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG Channels Band filters/T6 EEG Band filters'
 * '<S56>'  : 'C_Simulink_V20/Cortex_PPG_EEG/EEG HRV Coherence Calculation/MATLAB Function'
 * '<S57>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider'
 * '<S58>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider1'
 * '<S59>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider2'
 * '<S60>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider3'
 * '<S61>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider4'
 * '<S62>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider5'
 * '<S63>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider6'
 * '<S64>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider7'
 * '<S65>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider8'
 * '<S66>'  : 'C_Simulink_V20/Cortex_PPG_EEG/LAPT3__APA2/Divider9'
 * '<S67>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing/AGC'
 * '<S68>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing/HRV Band Extraction'
 * '<S69>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing/HRVMetrics'
 * '<S70>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing/MATLAB Function'
 * '<S71>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG1 Processing/Subsystem'
 * '<S72>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG2 Processing/AGC'
 * '<S73>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG2 Processing/HRV Band Extraction1'
 * '<S74>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG2 Processing/MATLAB Function'
 * '<S75>'  : 'C_Simulink_V20/Cortex_PPG_EEG/PPG2 Processing/Subsystem'
 * '<S76>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power/Running Power 50 samples'
 * '<S77>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power/Running Power 50 samples1'
 * '<S78>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power/Running Power 50 samples2'
 * '<S79>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power/Running Power 50 samples3'
 * '<S80>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C3 Band Power/Running Power 50 samples4'
 * '<S81>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power/Running Power 50 samples'
 * '<S82>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power/Running Power 50 samples1'
 * '<S83>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power/Running Power 50 samples2'
 * '<S84>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power/Running Power 50 samples3'
 * '<S85>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running C4 Band Power/Running Power 50 samples4'
 * '<S86>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power/Running Power 50 samples'
 * '<S87>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power/Running Power 50 samples1'
 * '<S88>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power/Running Power 50 samples2'
 * '<S89>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power/Running Power 50 samples3'
 * '<S90>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F3 Band Power/Running Power 50 samples4'
 * '<S91>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power/Running Power 50 samples'
 * '<S92>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power/Running Power 50 samples1'
 * '<S93>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power/Running Power 50 samples2'
 * '<S94>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power/Running Power 50 samples3'
 * '<S95>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F4 Band Power/Running Power 50 samples4'
 * '<S96>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power/Running Power 50 samples'
 * '<S97>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power/Running Power 50 samples1'
 * '<S98>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power/Running Power 50 samples2'
 * '<S99>'  : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power/Running Power 50 samples3'
 * '<S100>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F7 Band Power/Running Power 50 samples4'
 * '<S101>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power/Running Power 50 samples'
 * '<S102>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power/Running Power 50 samples1'
 * '<S103>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power/Running Power 50 samples2'
 * '<S104>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power/Running Power 50 samples3'
 * '<S105>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running F8 Band Power/Running Power 50 samples4'
 * '<S106>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power/Running Power 50 samples'
 * '<S107>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power/Running Power 50 samples1'
 * '<S108>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power/Running Power 50 samples2'
 * '<S109>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power/Running Power 50 samples3'
 * '<S110>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O1 Band Power/Running Power 50 samples4'
 * '<S111>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power/Running Power 50 samples'
 * '<S112>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power/Running Power 50 samples1'
 * '<S113>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power/Running Power 50 samples2'
 * '<S114>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power/Running Power 50 samples3'
 * '<S115>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running O2 Band Power/Running Power 50 samples4'
 * '<S116>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power/Running Power 50 samples'
 * '<S117>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power/Running Power 50 samples1'
 * '<S118>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power/Running Power 50 samples2'
 * '<S119>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power/Running Power 50 samples3'
 * '<S120>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P3 Band Power/Running Power 50 samples4'
 * '<S121>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power/Running Power 50 samples'
 * '<S122>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power/Running Power 50 samples1'
 * '<S123>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power/Running Power 50 samples2'
 * '<S124>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power/Running Power 50 samples3'
 * '<S125>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running P4 Band Power/Running Power 50 samples4'
 * '<S126>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power/Running Power 50 samples'
 * '<S127>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power/Running Power 50 samples1'
 * '<S128>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power/Running Power 50 samples2'
 * '<S129>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power/Running Power 50 samples3'
 * '<S130>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T3 Band Power/Running Power 50 samples4'
 * '<S131>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power/Running Power 50 samples'
 * '<S132>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power/Running Power 50 samples1'
 * '<S133>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power/Running Power 50 samples2'
 * '<S134>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power/Running Power 50 samples3'
 * '<S135>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T4 Band Power/Running Power 50 samples4'
 * '<S136>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power/Running Power 50 samples'
 * '<S137>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power/Running Power 50 samples1'
 * '<S138>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power/Running Power 50 samples2'
 * '<S139>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power/Running Power 50 samples3'
 * '<S140>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T5 Band Power/Running Power 50 samples4'
 * '<S141>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power/Running Power 50 samples'
 * '<S142>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power/Running Power 50 samples1'
 * '<S143>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power/Running Power 50 samples2'
 * '<S144>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power/Running Power 50 samples3'
 * '<S145>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running T6 Band Power/Running Power 50 samples4'
 * '<S146>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6/Running Power 50 samples'
 * '<S147>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6/Running Power 50 samples1'
 * '<S148>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6/Running Power 50 samples2'
 * '<S149>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6/Running Power 50 samples3'
 * '<S150>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X1 Band Power6/Running Power 50 samples4'
 * '<S151>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power/Running Power 50 samples'
 * '<S152>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power/Running Power 50 samples1'
 * '<S153>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power/Running Power 50 samples2'
 * '<S154>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power/Running Power 50 samples3'
 * '<S155>' : 'C_Simulink_V20/Cortex_PPG_EEG/Running X2 Band Power/Running Power 50 samples4'
 * '<S156>' : 'C_Simulink_V20/Cortex_PPG_EEG/T3 FFT Subsystem/MATLAB Function'
 * '<S157>' : 'C_Simulink_V20/Cortex_PPG_EEG/T4 FFT Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Cortex_PPG_EEG_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
