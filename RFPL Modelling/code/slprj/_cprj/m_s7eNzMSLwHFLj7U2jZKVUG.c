/* Include files */

#include "modelInterface.h"
#include "m_s7eNzMSLwHFLj7U2jZKVUG.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 182, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "FMModemBase",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\+internal\\FMModemBase.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "Helper",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\compiled\\+comm\\+internal\\Helper.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Propagates.p"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\+internal\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\+internal\\SampleTime.p"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 14,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 326, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 331, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 353, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 369, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 375, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 381, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 397, /* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 60,  /* lineNo */
  "FMDemodulator",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMDemodulator.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 1,   /* lineNo */
  "FIRFilter",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\FIRFilter.p"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 1,   /* lineNo */
  "Nondirect",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Nondirect.p"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 1,   /* lineNo */
  "BiquadFilter",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\BiquadFilter.p"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 159, /* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 1,  /* lineNo */
  "audioDeviceWriter",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\compiled\\audioDeviceWriter.p"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 35, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 40, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 660,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 661,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 662,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 663,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 668,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 695,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 468,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 509,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 574,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 580,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 472,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 576,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 116,/* lineNo */
  "FMDemodulator",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMDemodulator.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 85, /* lineNo */
  "PhaseDifferentiator",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\+private\\PhaseDifferentiator.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 138,/* lineNo */
  "FMDemodulator",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMDemodulator.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 124,/* lineNo */
  "FMDemodulator",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMDemodulator.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 115,/* lineNo */
  "PhaseDifferentiator",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\+private\\PhaseDifferentiator.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 213,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 264,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 1,  /* lineNo */
  "FIRRateConverter",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\FIRRateConverter.p"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 290,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 308,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 37, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 705,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 706,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 707,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 708,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 713,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 740,/* lineNo */
  "FMBroadcastDemodulator",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMBroadcastDemodulator.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 142,/* lineNo */
  "FMDemodulator",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\comm\\comm\\+comm\\FMDemodulator.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 300,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 187, /* lineNo */
  13,                                  /* colNo */
  "PhaseDifferentiator",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\+private\\PhaseDifferentiator.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 359, /* lineNo */
  17,                                  /* colNo */
  "SampleRateConverter",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 15,  /* lineNo */
  1,                                   /* colNo */
  "reset",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\scomp\\reset.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 264,/* lineNo */
  25,                                  /* colNo */
  "SampleRateConverter",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 43,/* lineNo */
  1,                                   /* colNo */
  "setup",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\scomp\\setup.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 51,/* lineNo */
  20,                                  /* colNo */
  "step",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\scomp\\step.m"/* pName */
};

static emlrtRSInfo kc_emlrtRSI = { 359,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 187,/* lineNo */
  "PhaseDifferentiator",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\dsp\\+dsp\\+private\\PhaseDifferentiator.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp, creal_T b_u0[5120]);
static void SystemCore_setupAndReset(const emlrtStack *sp,
  comm_FMBroadcastDemodulator *obj);
static void SystemCore_parenReference(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp, comm_FMDemodulator *obj, creal_T
  varargin_1[5120], real_T varargout_1[5120]);
static void PhaseDifferentiator_stepImpl(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, dsp_private_PhaseDifferentiator *obj, creal_T b_x[5120],
  real_T phase[5120]);
static void SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj);
static boolean_T SystemCore_detectInputSizeChange(dsp_SampleRateConverter *obj);
static void Nondirect_stepImpl(dspcodegen_FIRRateConverter *obj, real_T
  varargin_1[5120], real_T varargout_1[4864]);
static void b_Nondirect_stepImpl(dspcodegen_FIRFilter *obj, real_T varargin_1
  [4864], real_T varargout_1[4864]);
static void c_Nondirect_stepImpl(dspcodegen_BiquadFilter *obj, real_T
  varargin_1[4864], real_T varargout_1[4864]);
static void b_SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter_1 *obj);
static boolean_T b_SystemCore_detectInputSizeChange(dsp_SampleRateConverter_1
  *obj);
static void d_Nondirect_stepImpl(dspcodegen_FIRRateConverter_1 *obj, real_T
  varargin_1[4864], real_T varargout_1[1024]);
static void b_SystemCore_parenReference(const emlrtStack *sp, audioDeviceWriter *
  obj, real_T varargin_1[1024]);
static void audioDeviceWriter_stepImpl(const emlrtStack *sp, audioDeviceWriter
  *obj, real_T u[1024]);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void init_simulink_io_address(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2012b(&st, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "Signal_Blocks", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T i0;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  for (i0 = 0; i0 < 5120; i0++) {
    moduleInstance->dcv0[i0].re = (*moduleInstance->u0)[i0].re;
    moduleInstance->dcv0[i0].im = (*moduleInstance->u0)[i0].im;
  }

  mw__internal__call__step(moduleInstance, &st, moduleInstance->dcv0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance)
{
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);
  moduleInstance->gobj_1.matlabCodegenIsDeleted = true;
  moduleInstance->gobj_0.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pAudio.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pRateConv228.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pRBDSRateConv.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pAudioRateConv.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pLowPass.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pFMDemod.pPhaseDifferentiator.matlabCodegenIsDeleted =
    true;
  moduleInstance->sysobj.pFMDemod.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pDeEmphFilter.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance)
{
  emlrtStack st;
  comm_FMBroadcastDemodulator *obj;
  emlrtStack b_st;
  dspcodegen_BiquadFilter *b_obj;
  emlrtStack c_st;
  comm_FMDemodulator *c_obj;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  dsp_private_PhaseDifferentiator *d_obj;
  dspcodegen_FIRFilter *e_obj;
  emlrtStack g_st;
  dsp_SampleRateConverter_1 *f_obj;
  emlrtStack h_st;
  emlrtStack i_st;
  dsp_SampleRateConverter_2 *g_obj;
  emlrtStack j_st;
  dspcodegen_FIRRateConverter_1 *h_obj;
  emlrtStack k_st;
  dsp_SampleRateConverter *i_obj;
  audioDeviceWriter *j_obj;
  dspcodegen_FIRRateConverter *k_obj;
  audiointerface_audioDeviceWriter_2 *l_obj;
  char_T *sErr;
  st.site = &emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &bc_emlrtRSI;
        if (obj->pDeEmphFilter.isInitialized == 1) {
          obj->pDeEmphFilter.isInitialized = 2;
        }

        f_st.site = &cc_emlrtRSI;
        c_obj = &obj->pFMDemod;
        if (obj->pFMDemod.isInitialized == 1) {
          obj->pFMDemod.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (obj->pFMDemod.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            i_st.site = &hc_emlrtRSI;
            if (c_obj->pPhaseDifferentiator.isInitialized == 1) {
              c_obj->pPhaseDifferentiator.isInitialized = 2;
              j_st.site = &g_emlrtRSI;
              if (c_obj->pPhaseDifferentiator.isSetupComplete) {
                k_st.site = &g_emlrtRSI;
                c_obj->pPhaseDifferentiator.pNumChans = -1;
              }
            }
          }
        }

        f_st.site = &dc_emlrtRSI;
        if (obj->pAudioRateConv.isInitialized == 1) {
          obj->pAudioRateConv.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (obj->pAudioRateConv.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            i_st.site = &ic_emlrtRSI;
            h_obj = obj->pAudioRateConv.filt1;
            if (h_obj->isInitialized == 1) {
              h_obj->isInitialized = 2;
            }

            obj->pAudioRateConv.NumChannels = -1;
          }
        }

        f_st.site = &ec_emlrtRSI;
        if (obj->pLowPass.isInitialized == 1) {
          obj->pLowPass.isInitialized = 2;
        }

        f_st.site = &fc_emlrtRSI;
        if (obj->pRateConv228.isInitialized == 1) {
          obj->pRateConv228.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (obj->pRateConv228.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            i_st.site = &ic_emlrtRSI;
            k_obj = obj->pRateConv228.filt1;
            if (k_obj->isInitialized == 1) {
              k_obj->isInitialized = 2;
            }

            obj->pRateConv228.NumChannels = -1;
          }
        }

        f_st.site = &gc_emlrtRSI;
        j_obj = &obj->pAudio;
        if (obj->pAudio.isInitialized == 1) {
          obj->pAudio.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (obj->pAudio.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            i_st.site = &ab_emlrtRSI;
            j_st.site = NULL;

            /* System object Destructor function: audiointerface.audioDeviceWriter */
            if (j_obj->pInterface.S0_isInitialized == 1) {
              j_obj->pInterface.S0_isInitialized = 2;

              /* System object Terminate function: audiointerface.audioDeviceWriter */
              sErr = GetErrorBuffer(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
              LibTerminate(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
              if (*sErr != 0) {
                PrintError(sErr);
              }

              LibDestroy_Audio(&j_obj->pInterface.W0_AudioDeviceLib[0U], 1, 1);
              DestroyHostLibrary(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
            }
          }
        }
      }
    }
  }

  st.site = &emlrtRSI;
  b_obj = &moduleInstance->sysobj.pDeEmphFilter;
  if (!b_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    b_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (b_obj->isInitialized == 1) {
      b_obj->isInitialized = 2;
    }
  }

  st.site = &emlrtRSI;
  c_obj = &moduleInstance->sysobj.pFMDemod;
  if (!c_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    c_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (c_obj->isInitialized == 1) {
      c_obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (c_obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &hc_emlrtRSI;
        if (c_obj->pPhaseDifferentiator.isInitialized == 1) {
          c_obj->pPhaseDifferentiator.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (c_obj->pPhaseDifferentiator.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            c_obj->pPhaseDifferentiator.pNumChans = -1;
          }
        }
      }
    }
  }

  st.site = &emlrtRSI;
  d_obj = &moduleInstance->sysobj.pFMDemod.pPhaseDifferentiator;
  if (!d_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    d_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (d_obj->isInitialized == 1) {
      d_obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (d_obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        d_obj->pNumChans = -1;
      }
    }
  }

  st.site = &emlrtRSI;
  e_obj = &moduleInstance->sysobj.pLowPass;
  if (!e_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    e_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (e_obj->isInitialized == 1) {
      e_obj->isInitialized = 2;
    }
  }

  st.site = &emlrtRSI;
  f_obj = &moduleInstance->sysobj.pAudioRateConv;
  if (!f_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    f_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (f_obj->isInitialized == 1) {
      f_obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (f_obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &ic_emlrtRSI;
        h_obj = f_obj->filt1;
        if (h_obj->isInitialized == 1) {
          h_obj->isInitialized = 2;
        }

        f_obj->NumChannels = -1;
      }
    }
  }

  st.site = &emlrtRSI;
  g_obj = &moduleInstance->sysobj.pRBDSRateConv;
  if (!g_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    g_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (g_obj->isInitialized == 1) {
      g_obj->isInitialized = 2;
    }
  }

  st.site = &emlrtRSI;
  i_obj = &moduleInstance->sysobj.pRateConv228;
  if (!i_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    i_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (i_obj->isInitialized == 1) {
      i_obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (i_obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &ic_emlrtRSI;
        k_obj = i_obj->filt1;
        if (k_obj->isInitialized == 1) {
          k_obj->isInitialized = 2;
        }

        i_obj->NumChannels = -1;
      }
    }
  }

  st.site = &emlrtRSI;
  j_obj = &moduleInstance->sysobj.pAudio;
  if (!j_obj->matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    j_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (j_obj->isInitialized == 1) {
      j_obj->isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (j_obj->isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &ab_emlrtRSI;
        g_st.site = NULL;

        /* System object Destructor function: audiointerface.audioDeviceWriter */
        if (j_obj->pInterface.S0_isInitialized == 1) {
          j_obj->pInterface.S0_isInitialized = 2;

          /* System object Terminate function: audiointerface.audioDeviceWriter */
          sErr = GetErrorBuffer(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
          LibTerminate(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
          if (*sErr != 0) {
            PrintError(sErr);
          }

          LibDestroy_Audio(&j_obj->pInterface.W0_AudioDeviceLib[0U], 1, 1);
          DestroyHostLibrary(&j_obj->pInterface.W0_AudioDeviceLib[0U]);
        }
      }
    }
  }

  st.site = &emlrtRSI;
  l_obj = &moduleInstance->sysobj.pAudio.pInterface;

  /* System object Destructor function: audiointerface.audioDeviceWriter */
  if (l_obj->S0_isInitialized == 1) {
    l_obj->S0_isInitialized = 2;

    /* System object Terminate function: audiointerface.audioDeviceWriter */
    sErr = GetErrorBuffer(&l_obj->W0_AudioDeviceLib[0U]);
    LibTerminate(&l_obj->W0_AudioDeviceLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy_Audio(&l_obj->W0_AudioDeviceLib[0U], 1, 1);
    DestroyHostLibrary(&l_obj->W0_AudioDeviceLib[0U]);
  }

  st.site = &emlrtRSI;
  k_obj = &moduleInstance->gobj_0;
  if (!moduleInstance->gobj_0.matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    k_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (k_obj->isInitialized == 1) {
      k_obj->isInitialized = 2;
    }
  }

  st.site = &emlrtRSI;
  h_obj = &moduleInstance->gobj_1;
  if (!moduleInstance->gobj_1.matlabCodegenIsDeleted) {
    b_st.site = &jc_emlrtRSI;
    h_obj->matlabCodegenIsDeleted = true;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (h_obj->isInitialized == 1) {
      h_obj->isInitialized = 2;
    }
  }
}

static void mw__internal__call__setup(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  comm_FMBroadcastDemodulator *obj;
  emlrtStack c_st;
  emlrtStack d_st;
  char_T u[51];
  emlrtStack e_st;
  int32_T i;
  emlrtStack f_st;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 51 };

  emlrtStack g_st;
  emlrtStack h_st;
  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 51 };

  char_T c_u[5];
  dspcodegen_FIRFilter *b_obj;
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv4[2] = { 1, 5 };

  static real_T dv0[163] = { 0.0001, 0.0001, 0.0, -0.0001,
    -0.00030000000000000003, -0.00060000000000000006, -0.001, -0.0015, -0.0022,
    -0.0029000000000000002, -0.0035, -0.0041, -0.0043, -0.0043,
    -0.0039000000000000003, -0.0032, -0.0021000000000000003, -0.0008, 0.0005,
    0.0017000000000000001, 0.0026000000000000003, 0.003, 0.0029000000000000002,
    0.0022, 0.0011, -0.00030000000000000003, -0.0016, -0.0027,
    -0.0034000000000000002, -0.0034000000000000002, -0.0027, -0.0015, 0.0002,
    0.0019, 0.0034000000000000002, 0.0043, 0.0044, 0.0036000000000000003, 0.002,
    -0.0001, -0.0024000000000000002, -0.0045000000000000005, -0.0057, -0.0059,
    -0.0049, -0.0028, 0.0, 0.0032, 0.006, 0.0077, 0.0081, 0.0068000000000000005,
    0.004, 0.0, -0.0043, -0.0082, -0.0108, -0.0114, -0.0097, -0.0057, -0.0001,
    0.0062000000000000006, 0.012, 0.016, 0.0172, 0.0148, 0.0089, 0.0002,
    -0.010100000000000001, -0.02, -0.0274, -0.0304, -0.0273, -0.0172, -0.0002,
    0.022600000000000002, 0.0494, 0.077300000000000008, 0.1033, 0.1245, 0.1383,
    0.1431, 0.1383, 0.1245, 0.1033, 0.077300000000000008, 0.0494,
    0.022600000000000002, -0.0002, -0.0172, -0.0273, -0.0304, -0.0274, -0.02,
    -0.010100000000000001, 0.0002, 0.0089, 0.0148, 0.0172, 0.016, 0.012,
    0.0062000000000000006, -0.0001, -0.0057, -0.0097, -0.0114, -0.0108, -0.0082,
    -0.0043, 0.0, 0.004, 0.0068000000000000005, 0.0081, 0.0077, 0.006, 0.0032,
    0.0, -0.0028, -0.0049, -0.0059, -0.0057, -0.0045000000000000005,
    -0.0024000000000000002, -0.0001, 0.002, 0.0036000000000000003, 0.0044,
    0.0043, 0.0034000000000000002, 0.0019, 0.0002, -0.0015, -0.0027,
    -0.0034000000000000002, -0.0034000000000000002, -0.0027, -0.0016,
    -0.00030000000000000003, 0.0011, 0.0022, 0.0029000000000000002, 0.003,
    0.0026000000000000003, 0.0017000000000000001, 0.0005, -0.0008,
    -0.0021000000000000003, -0.0032, -0.0039000000000000003, -0.0043, -0.0043,
    -0.0041, -0.0035, -0.0029000000000000002, -0.0022, -0.0015, -0.001,
    -0.00060000000000000006, -0.00030000000000000003, -0.0001, 0.0, 0.0001,
    0.0001 };

  dspcodegen_BiquadFilter *c_obj;
  static real_T dv1[9] = { 1.7272, 0.9539, 0.182, 0.0592, -0.002, 0.0021, 0.5002,
    0.4997, 0.0 };

  static real_T dv2[6] = { 0.5459, 0.1021, -0.0275, 0.0347, -0.9432, 0.0 };

  static real_T dv3[4] = { 0.5562, 0.0, 0.0, 0.0 };

  static boolean_T bv0[4] = { true, false, false, false };

  audioDeviceWriter *d_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &k_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    f_st.site = &f_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    obj->isInitialized = 0;
    f_st.site = &g_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &j_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &l_emlrtRSI;
  obj = &moduleInstance->sysobj;
  moduleInstance->sysobj.isSetupComplete = false;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 51, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&st, 51, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 5, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  b_st.site = &g_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &d_emlrtRSI;
  g_st.site = &e_emlrtRSI;
  h_st.site = &f_emlrtRSI;
  g_st.site = &e_emlrtRSI;
  obj->pFMDemod.isInitialized = 0;
  h_st.site = &g_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &h_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &i_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &j_emlrtRSI;
  obj->pFMDemod.matlabCodegenIsDeleted = false;
  c_st.site = &n_emlrtRSI;
  b_obj = &obj->pLowPass;
  d_st.site = &u_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pLowPass.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &u_emlrtRSI;
  e_st.site = &v_emlrtRSI;
  obj->pLowPass.NoTuningBeforeLockingCodeGenError = true;
  d_st.site = &u_emlrtRSI;

  /* System object Constructor function: dsp.FIRFilter */
  b_obj->cSFunObject.P0_InitialStates = 0.0;
  d_st.site = &u_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  for (i = 0; i < 163; i++) {
    b_obj->cSFunObject.P1_Coefficients[i] = dv0[i];
  }

  obj->pLowPass.NoTuningBeforeLockingCodeGenError = false;
  obj->pLowPass.matlabCodegenIsDeleted = false;
  c_st.site = &o_emlrtRSI;
  c_obj = &obj->pDeEmphFilter;
  d_st.site = &w_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pDeEmphFilter.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;

  /* System object Constructor function: dsp.BiquadFilter */
  c_obj->cSFunObject.P0_ICRTP = 0.0;
  for (i = 0; i < 9; i++) {
    c_obj->cSFunObject.P1_RTP1COEFF[i] = dv1[i];
  }

  for (i = 0; i < 6; i++) {
    c_obj->cSFunObject.P2_RTP2COEFF[i] = dv2[i];
  }

  for (i = 0; i < 4; i++) {
    c_obj->cSFunObject.P3_RTP3COEFF[i] = dv3[i];
  }

  for (i = 0; i < 4; i++) {
    c_obj->cSFunObject.P4_RTP_COEFF3_BOOL[i] = bv0[i];
  }

  obj->pDeEmphFilter.matlabCodegenIsDeleted = false;
  c_st.site = &p_emlrtRSI;
  obj->pAudioRateConv.filt1 = NULL;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pAudioRateConv.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pAudioRateConv.NumChannels = -1;
  obj->pAudioRateConv.matlabCodegenIsDeleted = false;
  c_st.site = &q_emlrtRSI;
  obj->pRateConv228.filt1 = NULL;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pRateConv228.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pRateConv228.NumChannels = -1;
  obj->pRateConv228.matlabCodegenIsDeleted = false;
  c_st.site = &r_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pRBDSRateConv.matlabCodegenIsDeleted = false;
  c_st.site = &s_emlrtRSI;
  d_obj = &obj->pAudio;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pAudio.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &ab_emlrtRSI;

  /* System object Constructor function: audiointerface.audioDeviceWriter */
  d_obj->pInterface.S0_isInitialized = 0;
  obj->pAudio.matlabCodegenIsDeleted = false;
  obj->isSetupComplete = true;
}

static void mw__internal__call__reset(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  comm_FMBroadcastDemodulator *obj;
  char_T u[45];
  int32_T i;
  dspcodegen_BiquadFilter *b_obj;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv5[2] = { 1, 45 };

  comm_FMDemodulator *c_obj;
  static const int32_T iv6[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 45 };

  char_T c_u[5];
  static const int32_T iv8[2] = { 1, 45 };

  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *c_y;
  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRFilter *d_obj;
  dspcodegen_FIRRateConverter_1 *e_obj;
  static const int32_T iv10[2] = { 1, 5 };

  static const int32_T iv11[2] = { 1, 45 };

  static const int32_T iv12[2] = { 1, 45 };

  static const int32_T iv13[2] = { 1, 45 };

  emlrtStack g_st;
  static const int32_T iv14[2] = { 1, 5 };

  static const int32_T iv15[2] = { 1, 45 };

  static const int32_T iv16[2] = { 1, 45 };

  static const int32_T iv17[2] = { 1, 45 };

  static const int32_T iv18[2] = { 1, 45 };

  audioDeviceWriter *f_obj;
  dspcodegen_FIRRateConverter *g_obj;
  static const int32_T iv19[2] = { 1, 45 };

  static const int32_T iv20[2] = { 1, 5 };

  static const int32_T iv21[2] = { 1, 45 };

  static const int32_T iv22[2] = { 1, 45 };

  static const int32_T iv23[2] = { 1, 5 };

  static const int32_T iv24[2] = { 1, 5 };

  static const int32_T iv25[2] = { 1, 45 };

  static const int32_T iv26[2] = { 1, 45 };

  static const int32_T iv27[2] = { 1, 45 };

  static const int32_T iv28[2] = { 1, 5 };

  static const int32_T iv29[2] = { 1, 5 };

  static const int32_T iv30[2] = { 1, 45 };

  static const int32_T iv31[2] = { 1, 45 };

  static const int32_T iv32[2] = { 1, 5 };

  static const int32_T iv33[2] = { 1, 5 };

  static const int32_T iv34[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &k_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    f_st.site = &f_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    obj->isInitialized = 0;
    f_st.site = &g_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &j_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &bb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&b_y, m2);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&st, 5, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    b_st.site = &g_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    b_obj = &obj->pDeEmphFilter;
    if (obj->pDeEmphFilter.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pDeEmphFilter.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &w_emlrtRSI;

      /* System object Initialization function: dsp.BiquadFilter */
      for (i = 0; i < 6; i++) {
        b_obj->cSFunObject.W0_FILT_STATES[i] = b_obj->cSFunObject.P0_ICRTP;
      }
    }

    c_st.site = &eb_emlrtRSI;
    c_obj = &obj->pFMDemod;
    if (obj->pFMDemod.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pFMDemod.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &rb_emlrtRSI;
      if (c_obj->pPhaseDifferentiator.isInitialized == 2) {
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        y = NULL;
        m2 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&y, m2);
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        b_y = NULL;
        m2 = emlrtCreateCharArray(2, iv18);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&b_y, m2);
        for (i = 0; i < 5; i++) {
          c_u[i] = d_u[i];
        }

        c_y = NULL;
        m2 = emlrtCreateCharArray(2, iv24);
        emlrtInitCharArrayR2013a(&e_st, 5, m2, &c_u[0]);
        emlrtAssign(&c_y, m2);
        f_st.site = &g_emlrtRSI;
        error(&f_st, y, getString(&f_st, message(&f_st, b_y, c_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
      }

      if (c_obj->pPhaseDifferentiator.isInitialized == 1) {
        f_st.site = &g_emlrtRSI;
        c_obj->pPhaseDifferentiator.pLastSample.re = 1.0;
        c_obj->pPhaseDifferentiator.pLastSample.im = 0.0;
      }
    }

    c_st.site = &fb_emlrtRSI;
    if (obj->pAudioRateConv.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pAudioRateConv.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &xb_emlrtRSI;
      e_obj = obj->pAudioRateConv.filt1;
      if (e_obj->isInitialized == 2) {
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        y = NULL;
        m2 = emlrtCreateCharArray(2, iv16);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&y, m2);
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        b_y = NULL;
        m2 = emlrtCreateCharArray(2, iv22);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&b_y, m2);
        for (i = 0; i < 5; i++) {
          c_u[i] = d_u[i];
        }

        c_y = NULL;
        m2 = emlrtCreateCharArray(2, iv29);
        emlrtInitCharArrayR2013a(&e_st, 5, m2, &c_u[0]);
        emlrtAssign(&c_y, m2);
        f_st.site = &g_emlrtRSI;
        error(&f_st, y, getString(&f_st, message(&f_st, b_y, c_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
      }

      if (e_obj->isInitialized == 1) {
        f_st.site = &g_emlrtRSI;
        g_st.site = &wb_emlrtRSI;

        /* System object Initialization function: dsp.FIRRateConverter */
        e_obj->cSFunObject.W1_InBufIdx = 0;
        for (i = 0; i < 66; i++) {
          e_obj->cSFunObject.W0_InBuf[i] = 0.0;
        }
      }
    }

    c_st.site = &gb_emlrtRSI;
    d_obj = &obj->pLowPass;
    if (obj->pLowPass.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv21);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pLowPass.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &u_emlrtRSI;

      /* System object Initialization function: dsp.FIRFilter */
      for (i = 0; i < 162; i++) {
        d_obj->cSFunObject.W0_states[i] = d_obj->cSFunObject.P0_InitialStates;
      }
    }

    c_st.site = &hb_emlrtRSI;
    if (obj->pRateConv228.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv27);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv32);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pRateConv228.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &xb_emlrtRSI;
      g_obj = obj->pRateConv228.filt1;
      if (g_obj->isInitialized == 2) {
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        y = NULL;
        m2 = emlrtCreateCharArray(2, iv26);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&y, m2);
        for (i = 0; i < 45; i++) {
          u[i] = b_u[i];
        }

        b_y = NULL;
        m2 = emlrtCreateCharArray(2, iv31);
        emlrtInitCharArrayR2013a(&e_st, 45, m2, &u[0]);
        emlrtAssign(&b_y, m2);
        for (i = 0; i < 5; i++) {
          c_u[i] = d_u[i];
        }

        c_y = NULL;
        m2 = emlrtCreateCharArray(2, iv34);
        emlrtInitCharArrayR2013a(&e_st, 5, m2, &c_u[0]);
        emlrtAssign(&c_y, m2);
        f_st.site = &g_emlrtRSI;
        error(&f_st, y, getString(&f_st, message(&f_st, b_y, c_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
      }

      if (g_obj->isInitialized == 1) {
        f_st.site = &g_emlrtRSI;
        g_st.site = &wb_emlrtRSI;

        /* System object Initialization function: dsp.FIRRateConverter */
        g_obj->cSFunObject.W1_InBufIdx = 0;
        for (i = 0; i < 13; i++) {
          g_obj->cSFunObject.W0_InBuf[i] = 0.0;
        }
      }
    }

    c_st.site = &ib_emlrtRSI;
    f_obj = &obj->pAudio;
    if (obj->pAudio.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv25);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&y, m2);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv30);
      emlrtInitCharArrayR2013a(&c_st, 45, m2, &u[0]);
      emlrtAssign(&b_y, m2);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv33);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &c_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pAudio.isInitialized == 1) {
      d_st.site = &g_emlrtRSI;
      e_st.site = &ab_emlrtRSI;
      if (f_obj->pInterface.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
          "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen",
          "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
      }
    }
  }
}

static void mw__internal__call__step(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp, creal_T b_u0[5120])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  comm_FMBroadcastDemodulator *obj;
  dspcodegen_FIRRateConverter *iobj_0;
  dspcodegen_FIRRateConverter_1 *iobj_1;
  char_T u[45];
  int32_T i;
  real_T yDemod[5120];
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv35[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv36[2] = { 1, 45 };

  boolean_T anyInputSizeChanged;
  static const int32_T iv37[2] = { 1, 45 };

  char_T c_u[51];
  char_T d_u[4];
  cell_wrap varSizes[1];
  static char_T e_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv38[2] = { 1, 51 };

  static const int32_T iv39[2] = { 1, 4 };

  static int16_T iv40[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  static const int32_T iv41[2] = { 1, 45 };

  real_T b_y1[4864];
  static const int32_T iv42[2] = { 1, 45 };

  char_T g_u[29];
  dspcodegen_FIRFilter *b_obj;
  static const int32_T iv43[2] = { 1, 51 };

  static char_T h_u[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  static const int32_T iv44[2] = { 1, 29 };

  static const int32_T iv45[2] = { 1, 4 };

  static const int32_T iv46[2] = { 1, 51 };

  emlrtStack j_st;
  char_T i_u[5];
  emlrtStack k_st;
  real_T leftPlusRight[4864];
  static const int32_T iv47[2] = { 1, 45 };

  emlrtStack l_st;
  static const int32_T iv48[2] = { 1, 45 };

  static char_T j_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv49[2] = { 1, 5 };

  dspcodegen_BiquadFilter *c_obj;
  static const int32_T iv50[2] = { 1, 29 };

  static const int32_T iv51[2] = { 1, 51 };

  static const int32_T iv52[2] = { 1, 51 };

  static const int32_T iv53[2] = { 1, 4 };

  static const int32_T iv54[2] = { 1, 45 };

  static real_T dv4[247] = { -9.44223689096581E-5, 0.001668913608098563,
    -0.0069922982338890055, 0.017617782989300532, -0.031969749869389955,
    0.044808424798506635, 0.95000000000000007, 0.044808424798506635,
    -0.031969749869389955, 0.017617782989300532, -0.0069922982338890055,
    0.001668913608098563, -9.44223689096581E-5, -0.00013689746795880333,
    0.002116451070588333, -0.0090247737246236491, 0.02410120297734113,
    -0.049358154481584114, 0.09445281785301804, 0.94582340829181555, 0.0,
    -0.015400605393417206, 0.011343031031827282, -0.00502812448175525,
    0.0012481266691963917, 0.0, -0.00018651195189561899, 0.0025769164195905444,
    -0.011065851967693621, 0.030618868671976735, -0.067159739729950971,
    0.14844510434694907, 0.933365242171969, -0.039596560763198445, 0.0,
    0.0054283581626852432, -0.0031826507486815733, 0.00086474418913000525, 0.0,
    -0.00024160011921670784, 0.0030333917462062772, -0.013047483327872776,
    0.036976449052423435, -0.084917425720433315, 0.20619088751072795,
    0.91283876250243334, -0.073720688047719307, 0.013943602235762988, 0.0,
    -0.0014964288700043476, 0.00052630864522853094, 0.0, -0.00029967413599400305,
    0.0034660829814372176, -0.014894632090807804, 0.042963729870795976,
    -0.10213066720990516, 0.26699795160976075, 0.884594223124118,
    -0.10222758329974209, 0.026204780618322623, -0.0048422227088022671, 0.0,
    0.00023742061404952183, 0.0, -0.00035739644687960158, 0.0038526953022670583,
    -0.016527051536204634, 0.048359515750607547, -0.1182646205912004,
    0.33008727607719784, 0.8491112368793986, -0.12508603667615409,
    0.036621649107162153, -0.0090252591404456767, 0.0012859216602856577, 0.0,
    0.0, -0.00041059549871877004, 0.0041689700844952356, -0.017861450105175987,
    0.052937331157268515, -0.13276078842609815, 0.39460635723691323,
    0.80698835892361187, -0.14237375926983056, 0.045094703717480505,
    -0.01250236302472111, 0.00234995932649611, -0.00018638293114320482, 0.0,
    -0.00045433104217087062, 0.0043893824554887984, -0.018814013127019285,
    0.056471811286258229, -0.14504893781272943, 0.45964456936006359,
    0.75893014910510037, -0.15427043040888613, 0.0515841592778778,
    -0.015251890724979324, 0.0031893268207789194, -0.00032412880491092244, 0.0,
    -0.00048301361723451661, 0.0044879916357522818, -0.019303228252103,
    0.058745644051919815, -0.15456004325789269, 0.52425023811747706,
    0.70573203729597256, -0.16104871310379831, 0.056105942795064534,
    -0.017275462513929776, 0.0038088771314995964, -0.00041720408317421839, 0.0,
    -0.00049058071921042527, 0.0044394289476720975, -0.019252946807884554,
    0.059556896895592813, -0.16073996433862786, 0.58744904861107561,
    0.64826336866908962, -0.16306353469932652, 0.05872653811084242,
    -0.018595598367122376, 0.004220000871324894, -0.00047072963229207441, 0.0,
    -0.00047072963229207441, 0.004220000871324894, -0.018595598367122376,
    0.05872653811084242, -0.16306353469932652, 0.64826336866908962,
    0.58744904861107561, -0.16073996433862786, 0.059556896895592813,
    -0.019252946807884554, 0.0044394289476720975, -0.00049058071921042527, 0.0,
    -0.00041720408317421839, 0.0038088771314995964, -0.017275462513929776,
    0.056105942795064534, -0.16104871310379831, 0.70573203729597256,
    0.52425023811747706, -0.15456004325789269, 0.058745644051919815,
    -0.019303228252103, 0.0044879916357522818, -0.00048301361723451661, 0.0,
    -0.00032412880491092244, 0.0031893268207789194, -0.015251890724979324,
    0.0515841592778778, -0.15427043040888613, 0.75893014910510037,
    0.45964456936006359, -0.14504893781272943, 0.056471811286258229,
    -0.018814013127019285, 0.0043893824554887984, -0.00045433104217087062, 0.0,
    -0.00018638293114320482, 0.00234995932649611, -0.01250236302472111,
    0.045094703717480505, -0.14237375926983056, 0.80698835892361187,
    0.39460635723691323, -0.13276078842609815, 0.052937331157268515,
    -0.017861450105175987, 0.0041689700844952356, -0.00041059549871877004, 0.0,
    0.0, 0.0012859216602856577, -0.0090252591404456767, 0.036621649107162153,
    -0.12508603667615409, 0.8491112368793986, 0.33008727607719784,
    -0.1182646205912004, 0.048359515750607547, -0.016527051536204634,
    0.0038526953022670583, -0.00035739644687960158, 0.0, 0.00023742061404952183,
    0.0, -0.0048422227088022671, 0.026204780618322623, -0.10222758329974209,
    0.884594223124118, 0.26699795160976075, -0.10213066720990516,
    0.042963729870795976, -0.014894632090807804, 0.0034660829814372176,
    -0.00029967413599400305, 0.0, 0.00052630864522853094, -0.0014964288700043476,
    0.0, 0.013943602235762988, -0.073720688047719307, 0.91283876250243334,
    0.20619088751072795, -0.084917425720433315, 0.036976449052423435,
    -0.013047483327872776, 0.0030333917462062772, -0.00024160011921670784, 0.0,
    0.00086474418913000525, -0.0031826507486815733, 0.0054283581626852432, 0.0,
    -0.039596560763198445, 0.933365242171969, 0.14844510434694907,
    -0.067159739729950971, 0.030618868671976735, -0.011065851967693621,
    0.0025769164195905444, -0.00018651195189561899, 0.0, 0.0012481266691963917,
    -0.00502812448175525, 0.011343031031827282, -0.015400605393417206, 0.0,
    0.94582340829181555, 0.09445281785301804, -0.049358154481584114,
    0.02410120297734113, -0.0090247737246236491, 0.002116451070588333,
    -0.00013689746795880333, 0.0 };

  static const int32_T iv55[2] = { 1, 45 };

  static const int32_T iv56[2] = { 1, 5 };

  static const int32_T iv57[2] = { 1, 51 };

  static const int32_T iv58[2] = { 1, 51 };

  static const int32_T iv59[2] = { 1, 4 };

  static const int32_T iv60[2] = { 1, 45 };

  static int8_T iv61[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 19 };

  static const int32_T iv62[2] = { 1, 45 };

  static const int32_T iv63[2] = { 1, 5 };

  static const int32_T iv64[2] = { 1, 51 };

  static const int32_T iv65[2] = { 1, 51 };

  static const int32_T iv66[2] = { 1, 4 };

  static int16_T iv67[8] = { 4864, 1, 1, 1, 1, 1, 1, 1 };

  static const int32_T iv68[2] = { 1, 45 };

  real_T c_y1[1024];
  static const int32_T iv69[2] = { 1, 45 };

  static const int32_T iv70[2] = { 1, 45 };

  static const int32_T iv71[2] = { 1, 5 };

  static const int32_T iv72[2] = { 1, 51 };

  static const int32_T iv73[2] = { 1, 29 };

  static const int32_T iv74[2] = { 1, 4 };

  static const int32_T iv75[2] = { 1, 51 };

  static const int32_T iv76[2] = { 1, 45 };

  static const int32_T iv77[2] = { 1, 45 };

  static const int32_T iv78[2] = { 1, 5 };

  static const int32_T iv79[2] = { 1, 29 };

  static const int32_T iv80[2] = { 1, 51 };

  static const int32_T iv81[2] = { 1, 4 };

  static char_T k_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv82[2] = { 1, 5 };

  static real_T dv5[264] = { 1.053870335781479E-5, 4.6972514720433874E-5,
    9.3265897967129157E-5, 9.9336153111635145E-5, 0.0, -0.00023225052088264087,
    -0.000526422172547315, -0.0006929782698474415, -0.00048957765501547973,
    0.00022539297116344416, 0.0013174420942779778, 0.0022976263518425986,
    0.0024514370612438467, 0.0011932560183853592, -0.0014817860482723704,
    -0.0047002270949412037, -0.0068276868112646955, -0.0061072950562772142,
    -0.0016455500664503673, 0.0057026627279653692, 0.013100752291998622,
    0.016516818173700293, 0.012451712235011132, 0.0, -0.017711116664886228,
    -0.033592940340261855, -0.038530448392772768, -0.0247158830354239,
    0.010829631622126778, 0.064048914788522926, 0.12409399594352657,
    0.17623465614000841, 0.206526256718771, 0.206526256718771,
    0.17623465614000841, 0.12409399594352657, 0.064048914788522926,
    0.010829631622126778, -0.0247158830354239, -0.038530448392772768,
    -0.033592940340261855, -0.017711116664886228, 0.0, 0.012451712235011132,
    0.016516818173700293, 0.013100752291998622, 0.0057026627279653692,
    -0.0016455500664503673, -0.0061072950562772142, -0.0068276868112646955,
    -0.0047002270949412037, -0.0014817860482723704, 0.0011932560183853592,
    0.0024514370612438467, 0.0022976263518425986, 0.0013174420942779778,
    0.00022539297116344416, -0.00048957765501547973, -0.0006929782698474415,
    -0.000526422172547315, -0.00023225052088264087, 0.0, 9.9336153111635145E-5,
    9.3265897967129157E-5, 4.6972514720433874E-5, 1.053870335781479E-5,
    1.7312601241327036E-5, 5.9006134476650109E-5, 0.00010114856587746018,
    8.6609698178452752E-5, -4.6303323495941935E-5, -0.00030551918072876938,
    -0.00058951316090163095, -0.00068550544266801421, -0.00035942112136818559,
    0.00047622679065634015, 0.001599051138319594, 0.0024421056098029659,
    0.002282690022394986, 0.00063912950586698892, -0.0022894077990554995,
    -0.0054078199450293633, -0.0069723091369375051, -0.0053440430971056635, 0.0,
    0.0076951550742028188, 0.014489967206267345, 0.016296538224600428,
    0.010077707803241298, -0.0041523120150999526, -0.022196717999369842,
    -0.036209557743908875, -0.037057697061433435, -0.017836507788864996,
    0.022798862627443774, 0.078961399827546658, 0.13846763419090968,
    0.18631126401652029, 0.20952173068168153, 0.20159432082936188,
    0.16476440519774072, 0.10922254010815965, 0.049583216075186606, 0.0,
    -0.030201044283510926, -0.038806735194593607, -0.03028607462602188,
    -0.01312205864173481, 0.0038029704395861766, 0.014280837294416645,
    0.016256456001301066, 0.011460312974688325, 0.0037197872908034052,
    -0.0031003169968834656, -0.0066277387239739869, -0.0065008063434772879,
    -0.0039253001337196036, -0.00071220720470010373, 0.0016542575269826447,
    0.0025290020562345225, 0.0021009463266814217, 0.0010301039699641252, 0.0,
    -0.00058635031770054667, -0.00067685734535619915, -0.00045567705727776677,
    -0.0001634903797656501, 3.7488949479610438E-5, 0.00010529882060823674,
    8.2967482139029757E-5, 3.5745675624685474E-5, 0.0, 2.5763561846352968E-5,
    7.1252907734564152E-5, 0.00010553338767801379, 6.6223043171342714E-5,
    -0.00010107075913029589, -0.0003809442079489155, -0.00064101587437246244,
    -0.00065093927450427262, -0.0001958186887947211, 0.000746846871235928,
    0.0018640853583709836, 0.0025227934922748912, 0.0020177130935258719, 0.0,
    -0.0031124216365327763, -0.0060179734682439083, -0.0069117884994822241,
    -0.0043388151825443271, 0.0018024341454826764, 0.0096360541937305175,
    0.015562389764905062, 0.015559195115305197, 0.0071814452148523684,
    -0.00856210650305024, -0.026437445808523169, -0.03799239861268433,
    -0.034302344877097719, -0.0095816508172645309, 0.035771033261524796,
    0.0940976108555848, 0.15210213599340894, 0.19481525490743318,
    0.21052631578947367, 0.19481525490743318, 0.15210213599340894,
    0.0940976108555848, 0.035771033261524796, -0.0095816508172645309,
    -0.034302344877097719, -0.03799239861268433, -0.026437445808523169,
    -0.00856210650305024, 0.0071814452148523684, 0.015559195115305197,
    0.015562389764905062, 0.0096360541937305175, 0.0018024341454826764,
    -0.0043388151825443271, -0.0069117884994822241, -0.0060179734682439083,
    -0.0031124216365327763, 0.0, 0.0020177130935258719, 0.0025227934922748912,
    0.0018640853583709836, 0.000746846871235928, -0.0001958186887947211,
    -0.00065093927450427262, -0.00064101587437246244, -0.0003809442079489155,
    -0.00010107075913029589, 6.6223043171342714E-5, 0.00010553338767801379,
    7.1252907734564152E-5, 2.5763561846352968E-5, 0.0, 3.5745675624685474E-5,
    8.2967482139029757E-5, 0.00010529882060823674, 3.7488949479610438E-5,
    -0.0001634903797656501, -0.00045567705727776677, -0.00067685734535619915,
    -0.00058635031770054667, 0.0, 0.0010301039699641252, 0.0021009463266814217,
    0.0025290020562345225, 0.0016542575269826447, -0.00071220720470010373,
    -0.0039253001337196036, -0.0065008063434772879, -0.0066277387239739869,
    -0.0031003169968834656, 0.0037197872908034052, 0.011460312974688325,
    0.016256456001301066, 0.014280837294416645, 0.0038029704395861766,
    -0.01312205864173481, -0.03028607462602188, -0.038806735194593607,
    -0.030201044283510926, 0.0, 0.049583216075186606, 0.10922254010815965,
    0.16476440519774072, 0.20159432082936188, 0.20952173068168153,
    0.18631126401652029, 0.13846763419090968, 0.078961399827546658,
    0.022798862627443774, -0.017836507788864996, -0.037057697061433435,
    -0.036209557743908875, -0.022196717999369842, -0.0041523120150999526,
    0.010077707803241298, 0.016296538224600428, 0.014489967206267345,
    0.0076951550742028188, 0.0, -0.0053440430971056635, -0.0069723091369375051,
    -0.0054078199450293633, -0.0022894077990554995, 0.00063912950586698892,
    0.002282690022394986, 0.0024421056098029659, 0.001599051138319594,
    0.00047622679065634015, -0.00035942112136818559, -0.00068550544266801421,
    -0.00058951316090163095, -0.00030551918072876938, -4.6303323495941935E-5,
    8.6609698178452752E-5, 0.00010114856587746018, 5.9006134476650109E-5,
    1.7312601241327036E-5, 0.0 };

  static const int32_T iv83[2] = { 1, 5 };

  static int8_T iv84[4] = { 0, 3, 2, 1 };

  static int8_T iv85[19] = { 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4,
    4, 4 };

  static int8_T iv86[19] = { 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4,
    4, 4 };

  static const int32_T iv87[2] = { 1, 45 };

  static const int32_T iv88[2] = { 1, 45 };

  static const int32_T iv89[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &k_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    f_st.site = &f_emlrtRSI;
    e_st.site = &e_emlrtRSI;
    obj->isInitialized = 0;
    f_st.site = &g_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &j_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &cb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  iobj_0 = &moduleInstance->gobj_0;
  iobj_1 = &moduleInstance->gobj_1;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv35);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv36);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv39);
    emlrtInitCharArrayR2013a(&st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    SystemCore_setupAndReset(&b_st, obj);
  }

  b_st.site = &g_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  SystemCore_parenReference(moduleInstance, &c_st, &obj->pFMDemod, b_u0, yDemod);
  c_st.site = &nb_emlrtRSI;
  d_st.site = &g_emlrtRSI;
  if (obj->pRateConv228.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv37);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv41);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv45);
    emlrtInitCharArrayR2013a(&d_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    e_st.site = &g_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pRateConv228.isInitialized != 1) {
    e_st.site = &g_emlrtRSI;
    f_st.site = &g_emlrtRSI;
    obj->pRateConv228.isSetupComplete = false;
    if (obj->pRateConv228.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv38);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv43);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv49);
      emlrtInitCharArrayR2013a(&f_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      g_st.site = &g_emlrtRSI;
      error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->pRateConv228.isInitialized = 1;
    g_st.site = &g_emlrtRSI;
    for (i = 0; i < 8; i++) {
      varSizes[0].f1[i] = (uint32_T)iv40[i];
    }

    obj->pRateConv228.inputVarSize[0] = varSizes[0];
    g_st.site = &g_emlrtRSI;
    if ((obj->pRateConv228.NumChannels != -1) && (1 !=
         obj->pRateConv228.NumChannels)) {
      for (i = 0; i < 29; i++) {
        g_u[i] = h_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv44);
      emlrtInitCharArrayR2013a(&g_st, 29, m3, &g_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 29; i++) {
        g_u[i] = h_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv50);
      emlrtInitCharArrayR2013a(&g_st, 29, m3, &g_u[0]);
      emlrtAssign(&b_y, m3);
      h_st.site = &kc_emlrtRSI;
      error(&h_st, y, getString(&h_st, b_message(&h_st, b_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
    }

    g_st.site = &g_emlrtRSI;
    h_st.site = &ub_emlrtRSI;
    if (!(obj->pRateConv228.filt1 == NULL)) {
      emlrtErrorWithMessageIdR2018a(&h_st, &b_emlrtRTEI,
        "EMLRT:runTime:NontunableHandleProp",
        "EMLRT:runTime:NontunableHandleProp", 0);
    }

    i_st.site = &vb_emlrtRSI;
    j_st.site = &wb_emlrtRSI;
    k_st.site = &e_emlrtRSI;
    l_st.site = &f_emlrtRSI;
    k_st.site = &e_emlrtRSI;
    iobj_0->isInitialized = 0;
    l_st.site = &g_emlrtRSI;
    j_st.site = &wb_emlrtRSI;
    k_st.site = &v_emlrtRSI;
    j_st.site = &wb_emlrtRSI;

    /* System object Constructor function: dsp.FIRRateConverter */
    for (i = 0; i < 247; i++) {
      iobj_0->cSFunObject.P0_FILTER[i] = dv4[i];
    }

    for (i = 0; i < 19; i++) {
      iobj_0->cSFunObject.P1_PolyphaseSelector[i] = i;
    }

    for (i = 0; i < 20; i++) {
      iobj_0->cSFunObject.P2_StartIdx[i] = i;
    }

    for (i = 0; i < 20; i++) {
      iobj_0->cSFunObject.P3_StopIdx[i] = iv61[i];
    }

    iobj_0->matlabCodegenIsDeleted = false;
    obj->pRateConv228.filt1 = iobj_0;
    obj->pRateConv228.NumChannels = 1;
    obj->pRateConv228.isSetupComplete = true;
    f_st.site = &g_emlrtRSI;
    g_st.site = &xb_emlrtRSI;
    iobj_0 = obj->pRateConv228.filt1;
    if (iobj_0->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv70);
      emlrtInitCharArrayR2013a(&g_st, 45, m3, &u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv77);
      emlrtInitCharArrayR2013a(&g_st, 45, m3, &u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = k_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv82);
      emlrtInitCharArrayR2013a(&g_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      h_st.site = &g_emlrtRSI;
      error(&h_st, y, getString(&h_st, message(&h_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (iobj_0->isInitialized == 1) {
      h_st.site = &g_emlrtRSI;
      i_st.site = &wb_emlrtRSI;

      /* System object Initialization function: dsp.FIRRateConverter */
      iobj_0->cSFunObject.W1_InBufIdx = 0;
      for (i = 0; i < 13; i++) {
        iobj_0->cSFunObject.W0_InBuf[i] = 0.0;
      }
    }
  }

  e_st.site = &g_emlrtRSI;
  anyInputSizeChanged = SystemCore_detectInputSizeChange(&obj->pRateConv228);
  if (anyInputSizeChanged) {
    e_st.site = &g_emlrtRSI;
    SampleRateConverter_validateInputsImpl(&e_st, &obj->pRateConv228);
  }

  e_st.site = &g_emlrtRSI;
  f_st.site = &yb_emlrtRSI;
  iobj_0 = obj->pRateConv228.filt1;
  if (iobj_0->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv42);
    emlrtInitCharArrayR2013a(&f_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv47);
    emlrtInitCharArrayR2013a(&f_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv53);
    emlrtInitCharArrayR2013a(&f_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    g_st.site = &g_emlrtRSI;
    error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (iobj_0->isInitialized != 1) {
    g_st.site = &g_emlrtRSI;
    h_st.site = &g_emlrtRSI;
    iobj_0->isSetupComplete = false;
    if (iobj_0->isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv46);
      emlrtInitCharArrayR2013a(&h_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv51);
      emlrtInitCharArrayR2013a(&h_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv56);
      emlrtInitCharArrayR2013a(&h_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      i_st.site = &g_emlrtRSI;
      error(&i_st, y, getString(&i_st, message(&i_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    iobj_0->isInitialized = 1;
    iobj_0->isSetupComplete = true;
    h_st.site = &g_emlrtRSI;
    i_st.site = &wb_emlrtRSI;

    /* System object Initialization function: dsp.FIRRateConverter */
    iobj_0->cSFunObject.W1_InBufIdx = 0;
    for (i = 0; i < 13; i++) {
      iobj_0->cSFunObject.W0_InBuf[i] = 0.0;
    }
  }

  g_st.site = &g_emlrtRSI;
  Nondirect_stepImpl(iobj_0, yDemod, b_y1);
  c_st.site = &kb_emlrtRSI;
  b_obj = &obj->pLowPass;
  d_st.site = &g_emlrtRSI;
  if (obj->pLowPass.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv48);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv54);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv59);
    emlrtInitCharArrayR2013a(&d_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    e_st.site = &g_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pLowPass.isInitialized != 1) {
    e_st.site = &g_emlrtRSI;
    f_st.site = &g_emlrtRSI;
    obj->pLowPass.isSetupComplete = false;
    if (obj->pLowPass.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv52);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv57);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv63);
      emlrtInitCharArrayR2013a(&f_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      g_st.site = &g_emlrtRSI;
      error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->pLowPass.isInitialized = 1;
    g_st.site = &g_emlrtRSI;
    obj->pLowPass.NoTuningBeforeLockingCodeGenError = true;
    obj->pLowPass.isSetupComplete = true;
    f_st.site = &g_emlrtRSI;
    g_st.site = &u_emlrtRSI;

    /* System object Initialization function: dsp.FIRFilter */
    for (i = 0; i < 162; i++) {
      b_obj->cSFunObject.W0_states[i] = b_obj->cSFunObject.P0_InitialStates;
    }
  }

  e_st.site = &g_emlrtRSI;
  b_Nondirect_stepImpl(&obj->pLowPass, b_y1, leftPlusRight);
  c_st.site = &lb_emlrtRSI;
  c_obj = &obj->pDeEmphFilter;
  d_st.site = &g_emlrtRSI;
  if (obj->pDeEmphFilter.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv55);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv60);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv66);
    emlrtInitCharArrayR2013a(&d_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    e_st.site = &g_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pDeEmphFilter.isInitialized != 1) {
    e_st.site = &g_emlrtRSI;
    f_st.site = &g_emlrtRSI;
    obj->pDeEmphFilter.isSetupComplete = false;
    if (obj->pDeEmphFilter.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv58);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv64);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv71);
      emlrtInitCharArrayR2013a(&f_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      g_st.site = &g_emlrtRSI;
      error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->pDeEmphFilter.isInitialized = 1;
    obj->pDeEmphFilter.isSetupComplete = true;
    f_st.site = &g_emlrtRSI;
    g_st.site = &w_emlrtRSI;

    /* System object Initialization function: dsp.BiquadFilter */
    for (i = 0; i < 6; i++) {
      c_obj->cSFunObject.W0_FILT_STATES[i] = c_obj->cSFunObject.P0_ICRTP;
    }
  }

  e_st.site = &g_emlrtRSI;
  c_Nondirect_stepImpl(&obj->pDeEmphFilter, leftPlusRight, b_y1);
  c_st.site = &ob_emlrtRSI;
  d_st.site = &g_emlrtRSI;
  if (obj->pAudioRateConv.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv62);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv68);
    emlrtInitCharArrayR2013a(&d_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv74);
    emlrtInitCharArrayR2013a(&d_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    e_st.site = &g_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pAudioRateConv.isInitialized != 1) {
    e_st.site = &g_emlrtRSI;
    f_st.site = &g_emlrtRSI;
    obj->pAudioRateConv.isSetupComplete = false;
    if (obj->pAudioRateConv.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv65);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv72);
      emlrtInitCharArrayR2013a(&f_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv78);
      emlrtInitCharArrayR2013a(&f_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      g_st.site = &g_emlrtRSI;
      error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->pAudioRateConv.isInitialized = 1;
    g_st.site = &g_emlrtRSI;
    for (i = 0; i < 8; i++) {
      varSizes[0].f1[i] = (uint32_T)iv67[i];
    }

    obj->pAudioRateConv.inputVarSize[0] = varSizes[0];
    g_st.site = &g_emlrtRSI;
    if ((obj->pAudioRateConv.NumChannels != -1) && (1 !=
         obj->pAudioRateConv.NumChannels)) {
      for (i = 0; i < 29; i++) {
        g_u[i] = h_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv73);
      emlrtInitCharArrayR2013a(&g_st, 29, m3, &g_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 29; i++) {
        g_u[i] = h_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv79);
      emlrtInitCharArrayR2013a(&g_st, 29, m3, &g_u[0]);
      emlrtAssign(&b_y, m3);
      h_st.site = &kc_emlrtRSI;
      error(&h_st, y, getString(&h_st, b_message(&h_st, b_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
    }

    g_st.site = &g_emlrtRSI;
    h_st.site = &ub_emlrtRSI;
    if (!(obj->pAudioRateConv.filt1 == NULL)) {
      emlrtErrorWithMessageIdR2018a(&h_st, &b_emlrtRTEI,
        "EMLRT:runTime:NontunableHandleProp",
        "EMLRT:runTime:NontunableHandleProp", 0);
    }

    i_st.site = &vb_emlrtRSI;
    j_st.site = &wb_emlrtRSI;
    k_st.site = &e_emlrtRSI;
    l_st.site = &f_emlrtRSI;
    k_st.site = &e_emlrtRSI;
    iobj_1->isInitialized = 0;
    l_st.site = &g_emlrtRSI;
    j_st.site = &wb_emlrtRSI;
    k_st.site = &v_emlrtRSI;
    j_st.site = &wb_emlrtRSI;

    /* System object Constructor function: dsp.FIRRateConverter */
    for (i = 0; i < 264; i++) {
      iobj_1->cSFunObject.P0_FILTER[i] = dv5[i];
    }

    for (i = 0; i < 4; i++) {
      iobj_1->cSFunObject.P1_PolyphaseSelector[i] = iv84[i];
    }

    for (i = 0; i < 19; i++) {
      iobj_1->cSFunObject.P2_StartIdx[i] = iv85[i];
    }

    for (i = 0; i < 19; i++) {
      iobj_1->cSFunObject.P3_StopIdx[i] = iv86[i];
    }

    iobj_1->matlabCodegenIsDeleted = false;
    obj->pAudioRateConv.filt1 = iobj_1;
    obj->pAudioRateConv.NumChannels = 1;
    obj->pAudioRateConv.isSetupComplete = true;
    f_st.site = &g_emlrtRSI;
    g_st.site = &xb_emlrtRSI;
    iobj_1 = obj->pAudioRateConv.filt1;
    if (iobj_1->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv87);
      emlrtInitCharArrayR2013a(&g_st, 45, m3, &u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv88);
      emlrtInitCharArrayR2013a(&g_st, 45, m3, &u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = k_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv89);
      emlrtInitCharArrayR2013a(&g_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      h_st.site = &g_emlrtRSI;
      error(&h_st, y, getString(&h_st, message(&h_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (iobj_1->isInitialized == 1) {
      h_st.site = &g_emlrtRSI;
      i_st.site = &wb_emlrtRSI;

      /* System object Initialization function: dsp.FIRRateConverter */
      iobj_1->cSFunObject.W1_InBufIdx = 0;
      for (i = 0; i < 66; i++) {
        iobj_1->cSFunObject.W0_InBuf[i] = 0.0;
      }
    }
  }

  e_st.site = &g_emlrtRSI;
  anyInputSizeChanged = b_SystemCore_detectInputSizeChange(&obj->pAudioRateConv);
  if (anyInputSizeChanged) {
    e_st.site = &g_emlrtRSI;
    b_SampleRateConverter_validateInputsImpl(&e_st, &obj->pAudioRateConv);
  }

  e_st.site = &g_emlrtRSI;
  f_st.site = &yb_emlrtRSI;
  iobj_1 = obj->pAudioRateConv.filt1;
  if (iobj_1->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv69);
    emlrtInitCharArrayR2013a(&f_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv76);
    emlrtInitCharArrayR2013a(&f_st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i = 0; i < 4; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv81);
    emlrtInitCharArrayR2013a(&f_st, 4, m3, &d_u[0]);
    emlrtAssign(&c_y, m3);
    g_st.site = &g_emlrtRSI;
    error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (iobj_1->isInitialized != 1) {
    g_st.site = &g_emlrtRSI;
    h_st.site = &g_emlrtRSI;
    iobj_1->isSetupComplete = false;
    if (iobj_1->isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m3 = emlrtCreateCharArray(2, iv75);
      emlrtInitCharArrayR2013a(&h_st, 51, m3, &c_u[0]);
      emlrtAssign(&y, m3);
      for (i = 0; i < 51; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv80);
      emlrtInitCharArrayR2013a(&h_st, 51, m3, &c_u[0]);
      emlrtAssign(&b_y, m3);
      for (i = 0; i < 5; i++) {
        i_u[i] = j_u[i];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv83);
      emlrtInitCharArrayR2013a(&h_st, 5, m3, &i_u[0]);
      emlrtAssign(&c_y, m3);
      i_st.site = &g_emlrtRSI;
      error(&i_st, y, getString(&i_st, message(&i_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    iobj_1->isInitialized = 1;
    iobj_1->isSetupComplete = true;
    h_st.site = &g_emlrtRSI;
    i_st.site = &wb_emlrtRSI;

    /* System object Initialization function: dsp.FIRRateConverter */
    iobj_1->cSFunObject.W1_InBufIdx = 0;
    for (i = 0; i < 66; i++) {
      iobj_1->cSFunObject.W0_InBuf[i] = 0.0;
    }
  }

  g_st.site = &g_emlrtRSI;
  d_Nondirect_stepImpl(iobj_1, b_y1, c_y1);
  c_st.site = &mb_emlrtRSI;
  b_SystemCore_parenReference(&c_st, &obj->pAudio, c_y1);
}

static void SystemCore_setupAndReset(const emlrtStack *sp,
  comm_FMBroadcastDemodulator *obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  char_T u[51];
  int32_T i;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m4;
  static const int32_T iv90[2] = { 1, 51 };

  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  const mxArray *b_y;
  static const int32_T iv91[2] = { 1, 51 };

  char_T c_u[5];
  dspcodegen_FIRFilter *b_obj;
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv92[2] = { 1, 5 };

  static real_T dv6[163] = { 0.0001, 0.0001, 0.0, -0.0001,
    -0.00030000000000000003, -0.00060000000000000006, -0.001, -0.0015, -0.0022,
    -0.0029000000000000002, -0.0035, -0.0041, -0.0043, -0.0043,
    -0.0039000000000000003, -0.0032, -0.0021000000000000003, -0.0008, 0.0005,
    0.0017000000000000001, 0.0026000000000000003, 0.003, 0.0029000000000000002,
    0.0022, 0.0011, -0.00030000000000000003, -0.0016, -0.0027,
    -0.0034000000000000002, -0.0034000000000000002, -0.0027, -0.0015, 0.0002,
    0.0019, 0.0034000000000000002, 0.0043, 0.0044, 0.0036000000000000003, 0.002,
    -0.0001, -0.0024000000000000002, -0.0045000000000000005, -0.0057, -0.0059,
    -0.0049, -0.0028, 0.0, 0.0032, 0.006, 0.0077, 0.0081, 0.0068000000000000005,
    0.004, 0.0, -0.0043, -0.0082, -0.0108, -0.0114, -0.0097, -0.0057, -0.0001,
    0.0062000000000000006, 0.012, 0.016, 0.0172, 0.0148, 0.0089, 0.0002,
    -0.010100000000000001, -0.02, -0.0274, -0.0304, -0.0273, -0.0172, -0.0002,
    0.022600000000000002, 0.0494, 0.077300000000000008, 0.1033, 0.1245, 0.1383,
    0.1431, 0.1383, 0.1245, 0.1033, 0.077300000000000008, 0.0494,
    0.022600000000000002, -0.0002, -0.0172, -0.0273, -0.0304, -0.0274, -0.02,
    -0.010100000000000001, 0.0002, 0.0089, 0.0148, 0.0172, 0.016, 0.012,
    0.0062000000000000006, -0.0001, -0.0057, -0.0097, -0.0114, -0.0108, -0.0082,
    -0.0043, 0.0, 0.004, 0.0068000000000000005, 0.0081, 0.0077, 0.006, 0.0032,
    0.0, -0.0028, -0.0049, -0.0059, -0.0057, -0.0045000000000000005,
    -0.0024000000000000002, -0.0001, 0.002, 0.0036000000000000003, 0.0044,
    0.0043, 0.0034000000000000002, 0.0019, 0.0002, -0.0015, -0.0027,
    -0.0034000000000000002, -0.0034000000000000002, -0.0027, -0.0016,
    -0.00030000000000000003, 0.0011, 0.0022, 0.0029000000000000002, 0.003,
    0.0026000000000000003, 0.0017000000000000001, 0.0005, -0.0008,
    -0.0021000000000000003, -0.0032, -0.0039000000000000003, -0.0043, -0.0043,
    -0.0041, -0.0035, -0.0029000000000000002, -0.0022, -0.0015, -0.001,
    -0.00060000000000000006, -0.00030000000000000003, -0.0001, 0.0, 0.0001,
    0.0001 };

  dspcodegen_BiquadFilter *c_obj;
  static real_T dv7[9] = { 1.7272, 0.9539, 0.182, 0.0592, -0.002, 0.0021, 0.5002,
    0.4997, 0.0 };

  static real_T dv8[6] = { 0.5459, 0.1021, -0.0275, 0.0347, -0.9432, 0.0 };

  static real_T dv9[4] = { 0.5562, 0.0, 0.0, 0.0 };

  static boolean_T bv1[4] = { true, false, false, false };

  audioDeviceWriter *d_obj;
  char_T e_u[45];
  comm_FMDemodulator *e_obj;
  static char_T f_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv93[2] = { 1, 45 };

  static const int32_T iv94[2] = { 1, 45 };

  static const int32_T iv95[2] = { 1, 45 };

  dspcodegen_FIRRateConverter_1 *f_obj;
  static const int32_T iv96[2] = { 1, 45 };

  static const int32_T iv97[2] = { 1, 45 };

  static const int32_T iv98[2] = { 1, 45 };

  static char_T g_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv99[2] = { 1, 5 };

  static const int32_T iv100[2] = { 1, 45 };

  static const int32_T iv101[2] = { 1, 45 };

  static const int32_T iv102[2] = { 1, 45 };

  static const int32_T iv103[2] = { 1, 45 };

  dspcodegen_FIRRateConverter *g_obj;
  static const int32_T iv104[2] = { 1, 45 };

  static const int32_T iv105[2] = { 1, 5 };

  static const int32_T iv106[2] = { 1, 45 };

  static const int32_T iv107[2] = { 1, 45 };

  static const int32_T iv108[2] = { 1, 5 };

  static const int32_T iv109[2] = { 1, 5 };

  static const int32_T iv110[2] = { 1, 45 };

  static const int32_T iv111[2] = { 1, 45 };

  static const int32_T iv112[2] = { 1, 45 };

  static const int32_T iv113[2] = { 1, 5 };

  static const int32_T iv114[2] = { 1, 5 };

  static const int32_T iv115[2] = { 1, 45 };

  static const int32_T iv116[2] = { 1, 45 };

  static const int32_T iv117[2] = { 1, 5 };

  static const int32_T iv118[2] = { 1, 5 };

  static const int32_T iv119[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  obj->isSetupComplete = false;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv90);
    emlrtInitCharArrayR2013a(&st, 51, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv91);
    emlrtInitCharArrayR2013a(&st, 51, m4, &u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv92);
    emlrtInitCharArrayR2013a(&st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  b_st.site = &g_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &d_emlrtRSI;
  g_st.site = &e_emlrtRSI;
  h_st.site = &f_emlrtRSI;
  g_st.site = &e_emlrtRSI;
  obj->pFMDemod.isInitialized = 0;
  h_st.site = &g_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &h_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &i_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &j_emlrtRSI;
  obj->pFMDemod.matlabCodegenIsDeleted = false;
  c_st.site = &n_emlrtRSI;
  b_obj = &obj->pLowPass;
  d_st.site = &u_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pLowPass.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &u_emlrtRSI;
  e_st.site = &v_emlrtRSI;
  obj->pLowPass.NoTuningBeforeLockingCodeGenError = true;
  d_st.site = &u_emlrtRSI;

  /* System object Constructor function: dsp.FIRFilter */
  b_obj->cSFunObject.P0_InitialStates = 0.0;
  d_st.site = &u_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  for (i = 0; i < 163; i++) {
    b_obj->cSFunObject.P1_Coefficients[i] = dv6[i];
  }

  obj->pLowPass.NoTuningBeforeLockingCodeGenError = false;
  obj->pLowPass.matlabCodegenIsDeleted = false;
  c_st.site = &o_emlrtRSI;
  c_obj = &obj->pDeEmphFilter;
  d_st.site = &w_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pDeEmphFilter.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;

  /* System object Constructor function: dsp.BiquadFilter */
  c_obj->cSFunObject.P0_ICRTP = 0.0;
  for (i = 0; i < 9; i++) {
    c_obj->cSFunObject.P1_RTP1COEFF[i] = dv7[i];
  }

  for (i = 0; i < 6; i++) {
    c_obj->cSFunObject.P2_RTP2COEFF[i] = dv8[i];
  }

  for (i = 0; i < 4; i++) {
    c_obj->cSFunObject.P3_RTP3COEFF[i] = dv9[i];
  }

  for (i = 0; i < 4; i++) {
    c_obj->cSFunObject.P4_RTP_COEFF3_BOOL[i] = bv1[i];
  }

  obj->pDeEmphFilter.matlabCodegenIsDeleted = false;
  c_st.site = &p_emlrtRSI;
  obj->pAudioRateConv.filt1 = NULL;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pAudioRateConv.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pAudioRateConv.NumChannels = -1;
  obj->pAudioRateConv.matlabCodegenIsDeleted = false;
  c_st.site = &q_emlrtRSI;
  obj->pRateConv228.filt1 = NULL;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pRateConv228.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pRateConv228.NumChannels = -1;
  obj->pRateConv228.matlabCodegenIsDeleted = false;
  c_st.site = &r_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &g_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  obj->pRBDSRateConv.matlabCodegenIsDeleted = false;
  c_st.site = &s_emlrtRSI;
  d_obj = &obj->pAudio;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  f_st.site = &f_emlrtRSI;
  e_st.site = &e_emlrtRSI;
  obj->pAudio.isInitialized = 0;
  f_st.site = &g_emlrtRSI;
  d_st.site = &ab_emlrtRSI;

  /* System object Constructor function: audiointerface.audioDeviceWriter */
  d_obj->pInterface.S0_isInitialized = 0;
  obj->pAudio.matlabCodegenIsDeleted = false;
  obj->isSetupComplete = true;
  st.site = &g_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_obj = &obj->pDeEmphFilter;
  if (obj->pDeEmphFilter.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv93);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv95);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv99);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pDeEmphFilter.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &w_emlrtRSI;

    /* System object Initialization function: dsp.BiquadFilter */
    for (i = 0; i < 6; i++) {
      c_obj->cSFunObject.W0_FILT_STATES[i] = c_obj->cSFunObject.P0_ICRTP;
    }
  }

  b_st.site = &eb_emlrtRSI;
  e_obj = &obj->pFMDemod;
  if (obj->pFMDemod.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv94);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv98);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv105);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pFMDemod.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &rb_emlrtRSI;
    if (e_obj->pPhaseDifferentiator.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      y = NULL;
      m4 = emlrtCreateCharArray(2, iv97);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&y, m4);
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv103);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&b_y, m4);
      for (i = 0; i < 5; i++) {
        c_u[i] = g_u[i];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv109);
      emlrtInitCharArrayR2013a(&d_st, 5, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      e_st.site = &g_emlrtRSI;
      error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (e_obj->pPhaseDifferentiator.isInitialized == 1) {
      e_st.site = &g_emlrtRSI;
      e_obj->pPhaseDifferentiator.pLastSample.re = 1.0;
      e_obj->pPhaseDifferentiator.pLastSample.im = 0.0;
    }
  }

  b_st.site = &fb_emlrtRSI;
  if (obj->pAudioRateConv.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv96);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv102);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv108);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pAudioRateConv.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &xb_emlrtRSI;
    f_obj = obj->pAudioRateConv.filt1;
    if (f_obj->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      y = NULL;
      m4 = emlrtCreateCharArray(2, iv101);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&y, m4);
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv107);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&b_y, m4);
      for (i = 0; i < 5; i++) {
        c_u[i] = g_u[i];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv114);
      emlrtInitCharArrayR2013a(&d_st, 5, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      e_st.site = &g_emlrtRSI;
      error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (f_obj->isInitialized == 1) {
      e_st.site = &g_emlrtRSI;
      f_st.site = &wb_emlrtRSI;

      /* System object Initialization function: dsp.FIRRateConverter */
      f_obj->cSFunObject.W1_InBufIdx = 0;
      for (i = 0; i < 66; i++) {
        f_obj->cSFunObject.W0_InBuf[i] = 0.0;
      }
    }
  }

  b_st.site = &gb_emlrtRSI;
  b_obj = &obj->pLowPass;
  if (obj->pLowPass.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv100);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv106);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv113);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pLowPass.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &u_emlrtRSI;

    /* System object Initialization function: dsp.FIRFilter */
    for (i = 0; i < 162; i++) {
      b_obj->cSFunObject.W0_states[i] = b_obj->cSFunObject.P0_InitialStates;
    }
  }

  b_st.site = &hb_emlrtRSI;
  if (obj->pRateConv228.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv104);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv112);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv117);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pRateConv228.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &xb_emlrtRSI;
    g_obj = obj->pRateConv228.filt1;
    if (g_obj->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      y = NULL;
      m4 = emlrtCreateCharArray(2, iv111);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&y, m4);
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv116);
      emlrtInitCharArrayR2013a(&d_st, 45, m4, &e_u[0]);
      emlrtAssign(&b_y, m4);
      for (i = 0; i < 5; i++) {
        c_u[i] = g_u[i];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv119);
      emlrtInitCharArrayR2013a(&d_st, 5, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      e_st.site = &g_emlrtRSI;
      error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (g_obj->isInitialized == 1) {
      e_st.site = &g_emlrtRSI;
      f_st.site = &wb_emlrtRSI;

      /* System object Initialization function: dsp.FIRRateConverter */
      g_obj->cSFunObject.W1_InBufIdx = 0;
      for (i = 0; i < 13; i++) {
        g_obj->cSFunObject.W0_InBuf[i] = 0.0;
      }
    }
  }

  b_st.site = &ib_emlrtRSI;
  d_obj = &obj->pAudio;
  if (obj->pAudio.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv110);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    for (i = 0; i < 45; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv115);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &e_u[0]);
    emlrtAssign(&b_y, m4);
    for (i = 0; i < 5; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv118);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    c_st.site = &g_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pAudio.isInitialized == 1) {
    c_st.site = &g_emlrtRSI;
    d_st.site = &ab_emlrtRSI;
    if (d_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen",
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }
  }
}

static void SystemCore_parenReference(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, const emlrtStack *sp, comm_FMDemodulator *obj, creal_T
  varargin_1[5120], real_T varargout_1[5120])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  char_T u[45];
  int32_T k;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  boolean_T exitg1;
  const mxArray *m5;
  static const int32_T iv120[2] = { 1, 45 };

  char_T c_u[51];
  static int16_T inSize[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  cell_wrap varSizes[1];
  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  dsp_private_PhaseDifferentiator *b_obj;
  static const int32_T iv121[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv122[2] = { 1, 45 };

  char_T e_u[4];
  boolean_T anyInputSizeChanged;
  static const int32_T iv123[2] = { 1, 45 };

  emlrtStack h_st;
  static const int32_T iv124[2] = { 1, 51 };

  const mxArray *c_y;
  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv125[2] = { 1, 4 };

  char_T g_u[5];
  static const int32_T iv126[2] = { 1, 51 };

  char_T h_u[38];
  static const int32_T iv127[2] = { 1, 45 };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv128[2] = { 1, 5 };

  static char_T j_u[38] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'v', 'a', 'r', 'S', 'i', 'z', 'e', 'C', 'h', 'a', 'n', 'n', 'e', 'l',
    's', 'N', 'o', 't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static const int32_T iv129[2] = { 1, 38 };

  static const int32_T iv130[2] = { 1, 51 };

  static const int32_T iv131[2] = { 1, 38 };

  static const int32_T iv132[2] = { 1, 4 };

  static const int32_T iv133[2] = { 1, 45 };

  static const int32_T iv134[2] = { 1, 38 };

  static const int32_T iv135[2] = { 1, 5 };

  static const int32_T iv136[2] = { 1, 38 };

  static const int32_T iv137[2] = { 1, 45 };

  static char_T k_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv138[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (obj->isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv120);
    emlrtInitCharArrayR2013a(&st, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv122);
    emlrtInitCharArrayR2013a(&st, 45, m5, &u[0]);
    emlrtAssign(&b_y, m5);
    for (k = 0; k < 4; k++) {
      e_u[k] = f_u[k];
    }

    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv125);
    emlrtInitCharArrayR2013a(&st, 4, m5, &e_u[0]);
    emlrtAssign(&c_y, m5);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv121);
      emlrtInitCharArrayR2013a(&c_st, 51, m5, &c_u[0]);
      emlrtAssign(&y, m5);
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv124);
      emlrtInitCharArrayR2013a(&c_st, 51, m5, &c_u[0]);
      emlrtAssign(&b_y, m5);
      for (k = 0; k < 5; k++) {
        g_u[k] = i_u[k];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv128);
      emlrtInitCharArrayR2013a(&c_st, 5, m5, &g_u[0]);
      emlrtAssign(&c_y, m5);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    d_st.site = &g_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = (uint32_T)inSize[k];
    }

    obj->inputVarSize[0] = varSizes[0];
    d_st.site = &g_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    f_st.site = &qb_emlrtRSI;
    g_st.site = &e_emlrtRSI;
    h_st.site = &f_emlrtRSI;
    g_st.site = &e_emlrtRSI;
    obj->pPhaseDifferentiator.isInitialized = 0;
    h_st.site = &g_emlrtRSI;
    f_st.site = &qb_emlrtRSI;
    g_st.site = &y_emlrtRSI;
    f_st.site = &qb_emlrtRSI;
    g_st.site = &h_emlrtRSI;
    obj->pPhaseDifferentiator.pNumChans = -1;
    obj->pPhaseDifferentiator.matlabCodegenIsDeleted = false;
    obj->isSetupComplete = true;
    c_st.site = &g_emlrtRSI;
    d_st.site = &rb_emlrtRSI;
    if (obj->pPhaseDifferentiator.isInitialized == 2) {
      for (k = 0; k < 45; k++) {
        u[k] = b_u[k];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv133);
      emlrtInitCharArrayR2013a(&d_st, 45, m5, &u[0]);
      emlrtAssign(&y, m5);
      for (k = 0; k < 45; k++) {
        u[k] = b_u[k];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv137);
      emlrtInitCharArrayR2013a(&d_st, 45, m5, &u[0]);
      emlrtAssign(&b_y, m5);
      for (k = 0; k < 5; k++) {
        g_u[k] = k_u[k];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv138);
      emlrtInitCharArrayR2013a(&d_st, 5, m5, &g_u[0]);
      emlrtAssign(&c_y, m5);
      e_st.site = &g_emlrtRSI;
      error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (obj->pPhaseDifferentiator.isInitialized == 1) {
      e_st.site = &g_emlrtRSI;
      obj->pPhaseDifferentiator.pLastSample.re = 1.0;
      obj->pPhaseDifferentiator.pLastSample.im = 0.0;
    }
  }

  b_st.site = &g_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  b_st.site = &g_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  b_obj = &obj->pPhaseDifferentiator;
  if (obj->pPhaseDifferentiator.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv123);
    emlrtInitCharArrayR2013a(&c_st, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv127);
    emlrtInitCharArrayR2013a(&c_st, 45, m5, &u[0]);
    emlrtAssign(&b_y, m5);
    for (k = 0; k < 4; k++) {
      e_u[k] = f_u[k];
    }

    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv132);
    emlrtInitCharArrayR2013a(&c_st, 4, m5, &e_u[0]);
    emlrtAssign(&c_y, m5);
    d_st.site = &g_emlrtRSI;
    error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->pPhaseDifferentiator.isInitialized != 1) {
    d_st.site = &g_emlrtRSI;
    e_st.site = &g_emlrtRSI;
    obj->pPhaseDifferentiator.isSetupComplete = false;
    if (obj->pPhaseDifferentiator.isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv126);
      emlrtInitCharArrayR2013a(&e_st, 51, m5, &c_u[0]);
      emlrtAssign(&y, m5);
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv130);
      emlrtInitCharArrayR2013a(&e_st, 51, m5, &c_u[0]);
      emlrtAssign(&b_y, m5);
      for (k = 0; k < 5; k++) {
        g_u[k] = i_u[k];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv135);
      emlrtInitCharArrayR2013a(&e_st, 5, m5, &g_u[0]);
      emlrtAssign(&c_y, m5);
      f_st.site = &g_emlrtRSI;
      error(&f_st, y, getString(&f_st, message(&f_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->pPhaseDifferentiator.isInitialized = 1;
    f_st.site = &g_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = (uint32_T)inSize[k];
    }

    obj->pPhaseDifferentiator.inputVarSize[0] = varSizes[0];
    f_st.site = &g_emlrtRSI;
    if ((obj->pPhaseDifferentiator.pNumChans != -1) &&
        (obj->pPhaseDifferentiator.pNumChans != 1)) {
      for (k = 0; k < 38; k++) {
        h_u[k] = j_u[k];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv131);
      emlrtInitCharArrayR2013a(&f_st, 38, m5, &h_u[0]);
      emlrtAssign(&y, m5);
      for (k = 0; k < 38; k++) {
        h_u[k] = j_u[k];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv136);
      emlrtInitCharArrayR2013a(&f_st, 38, m5, &h_u[0]);
      emlrtAssign(&b_y, m5);
      g_st.site = &lc_emlrtRSI;
      error(&g_st, y, getString(&g_st, b_message(&g_st, b_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
    }

    f_st.site = &g_emlrtRSI;
    obj->pPhaseDifferentiator.pNumChans = 1;
    obj->pPhaseDifferentiator.pLastSample.re = 1.0;
    obj->pPhaseDifferentiator.pLastSample.im = 0.0;
    obj->pPhaseDifferentiator.isSetupComplete = true;
    e_st.site = &g_emlrtRSI;
    obj->pPhaseDifferentiator.pLastSample.re = 1.0;
    obj->pPhaseDifferentiator.pLastSample.im = 0.0;
  }

  d_st.site = &g_emlrtRSI;
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    d_st.site = &g_emlrtRSI;
    if ((obj->pPhaseDifferentiator.pNumChans != -1) &&
        (obj->pPhaseDifferentiator.pNumChans != 1)) {
      for (k = 0; k < 38; k++) {
        h_u[k] = j_u[k];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv129);
      emlrtInitCharArrayR2013a(&d_st, 38, m5, &h_u[0]);
      emlrtAssign(&y, m5);
      for (k = 0; k < 38; k++) {
        h_u[k] = j_u[k];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv134);
      emlrtInitCharArrayR2013a(&d_st, 38, m5, &h_u[0]);
      emlrtAssign(&b_y, m5);
      e_st.site = &lc_emlrtRSI;
      error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
    }
  }

  d_st.site = &g_emlrtRSI;
  PhaseDifferentiator_stepImpl(moduleInstance, &obj->pPhaseDifferentiator,
    varargin_1, varargout_1);
  for (k = 0; k < 5120; k++) {
    varargout_1[k] *= 0.50929581789406508;
  }
}

static void PhaseDifferentiator_stepImpl(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance, dsp_private_PhaseDifferentiator *obj, creal_T b_x[5120],
  real_T phase[5120])
{
  emlrtStack st;
  real_T varargin_1_re;
  real_T varargin_1_im;
  int32_T i;
  st.site = &tb_emlrtRSI;
  varargin_1_re = obj->pLastSample.re;
  varargin_1_im = obj->pLastSample.im;
  moduleInstance->x[0].re = b_x[0].re * varargin_1_re - b_x[0].im *
    -varargin_1_im;
  moduleInstance->x[0].im = b_x[0].re * -varargin_1_im + b_x[0].im *
    varargin_1_re;
  for (i = 0; i < 5119; i++) {
    moduleInstance->x[i + 1].re = b_x[i + 1].re * b_x[i].re - b_x[i + 1].im *
      -b_x[i].im;
    moduleInstance->x[i + 1].im = b_x[i + 1].re * -b_x[i].im + b_x[i + 1].im *
      b_x[i].re;
  }

  for (i = 0; i < 5120; i++) {
    phase[i] = muDoubleScalarAtan2(moduleInstance->x[i].im, moduleInstance->x[i]
      .re);
  }

  obj->pLastSample.re = b_x[5119].re;
  obj->pLastSample.im = b_x[5119].im;
}

static void SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj)
{
  emlrtStack st;
  char_T u[29];
  int32_T i1;
  const mxArray *y;
  static char_T b_u[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  const mxArray *m6;
  static const int32_T iv139[2] = { 1, 29 };

  const mxArray *b_y;
  static const int32_T iv140[2] = { 1, 29 };

  st.prev = sp;
  st.tls = sp->tls;
  if ((obj->NumChannels != -1) && (1 != obj->NumChannels)) {
    for (i1 = 0; i1 < 29; i1++) {
      u[i1] = b_u[i1];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv139);
    emlrtInitCharArrayR2013a(sp, 29, m6, &u[0]);
    emlrtAssign(&y, m6);
    for (i1 = 0; i1 < 29; i1++) {
      u[i1] = b_u[i1];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv140);
    emlrtInitCharArrayR2013a(sp, 29, m6, &u[0]);
    emlrtAssign(&b_y, m6);
    st.site = &kc_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &c_emlrtMCI), &c_emlrtMCI),
          &c_emlrtMCI);
  }
}

static boolean_T SystemCore_detectInputSizeChange(dsp_SampleRateConverter *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static int16_T inSize[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

static void Nondirect_stepImpl(dspcodegen_FIRRateConverter *obj, real_T
  varargin_1[5120], real_T varargout_1[4864])
{
  emlrtStack st;
  emlrtStack b_st;
  dsp_FIRRateConverter_6 *b_obj;
  int32_T outIdx;
  int32_T inIdx;
  int32_T inBufIdx;
  int32_T n;
  int32_T nModDFactor;
  int32_T outputStartIdx;
  real_T acc;
  int32_T coefPolyphaseOffset;
  int32_T i;
  real_T prod;
  st.site = &v_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;

  /* Update inBufIdx and inputChannelOffset for current channel */
  inBufIdx = obj->cSFunObject.W1_InBufIdx;
  for (n = 0; n < 5120; n++) {
    nModDFactor = n % 20;
    outputStartIdx = b_obj->P2_StartIdx[nModDFactor];
    nModDFactor = b_obj->P3_StopIdx[nModDFactor];

    /* Read input into inBufArray */
    b_obj->W0_InBuf[inBufIdx] = varargin_1[inIdx];
    inIdx++;

    /* Generate outputs (if any) for current input n */
    while (outputStartIdx < nModDFactor) {
      acc = 0.0;
      coefPolyphaseOffset = b_obj->P1_PolyphaseSelector[outputStartIdx] * 13;
      for (i = inBufIdx; i < 13; i++) {
        prod = b_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          b_obj->W0_InBuf[i];
        acc += prod;
      }

      for (i = 0; i < inBufIdx; i++) {
        prod = b_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 13] *
          b_obj->W0_InBuf[i];
        acc += prod;
      }

      varargout_1[outIdx] = acc;
      outIdx++;
      outputStartIdx++;
    }

    /* Decrement inBufIdx, wrap if necessary */
    if (inBufIdx == 0) {
      inBufIdx = 12;
    } else {
      inBufIdx--;
    }
  }

  /* Update inBufIdx */
  obj->cSFunObject.W1_InBufIdx = inBufIdx;
}

static void b_Nondirect_stepImpl(dspcodegen_FIRFilter *obj, real_T varargin_1
  [4864], real_T varargout_1[4864])
{
  emlrtStack st;
  emlrtStack b_st;
  dsp_FIRFilter_0 *b_obj;
  int32_T i;
  real_T acc1;
  int32_T j;
  real_T acc2;
  st.site = &v_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: dsp.FIRFilter */
  /* Consume delay line and beginning of input samples */
  for (i = 0; i < 162; i++) {
    acc1 = 0.0;
    for (j = 0; j < i + 1; j++) {
      acc2 = varargin_1[i - j] * b_obj->P1_Coefficients[j];
      acc1 += acc2;
    }

    for (j = 0; j < 162 - i; j++) {
      acc2 = b_obj->W0_states[j] * b_obj->P1_Coefficients[(i + j) + 1];
      acc1 += acc2;
    }

    varargout_1[i] = acc1;
  }

  /* Consume remaining input samples */
  for (i = 0; i < 4702; i++) {
    acc1 = 0.0;
    for (j = 0; j < 163; j++) {
      acc2 = varargin_1[(i - j) + 162] * b_obj->P1_Coefficients[j];
      acc1 += acc2;
    }

    varargout_1[i + 162] = acc1;
  }

  /* Update delay line for next frame */
  for (i = 0; i < 162; i++) {
    b_obj->W0_states[161 - i] = varargin_1[i + 4702];
  }
}

static void c_Nondirect_stepImpl(dspcodegen_BiquadFilter *obj, real_T
  varargin_1[4864], real_T varargout_1[4864])
{
  emlrtStack st;
  emlrtStack b_st;
  dsp_BiquadFilter_1 *b_obj;
  int32_T ioIdx;
  int32_T i;
  real_T stageIn;
  real_T numAccum;
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: dsp.BiquadFilter */
  ioIdx = 0;
  for (i = 0; i < 4864; i++) {
    stageIn = b_obj->P3_RTP3COEFF[0U] * varargin_1[ioIdx];
    stageIn -= b_obj->P2_RTP2COEFF[0] * b_obj->W0_FILT_STATES[0];
    stageIn -= b_obj->P2_RTP2COEFF[1] * b_obj->W0_FILT_STATES[1];
    numAccum = b_obj->P1_RTP1COEFF[0] * stageIn;
    numAccum += b_obj->P1_RTP1COEFF[1] * b_obj->W0_FILT_STATES[0];
    numAccum += b_obj->P1_RTP1COEFF[2] * b_obj->W0_FILT_STATES[1];
    b_obj->W0_FILT_STATES[1] = b_obj->W0_FILT_STATES[0];
    b_obj->W0_FILT_STATES[0] = stageIn;
    stageIn = numAccum - b_obj->P2_RTP2COEFF[2] * b_obj->W0_FILT_STATES[2];
    stageIn -= b_obj->P2_RTP2COEFF[3] * b_obj->W0_FILT_STATES[3];
    numAccum = b_obj->P1_RTP1COEFF[3] * stageIn;
    numAccum += b_obj->P1_RTP1COEFF[4] * b_obj->W0_FILT_STATES[2];
    numAccum += b_obj->P1_RTP1COEFF[5] * b_obj->W0_FILT_STATES[3];
    b_obj->W0_FILT_STATES[3] = b_obj->W0_FILT_STATES[2];
    b_obj->W0_FILT_STATES[2] = stageIn;
    stageIn = numAccum - b_obj->P2_RTP2COEFF[4] * b_obj->W0_FILT_STATES[4];
    stageIn -= b_obj->P2_RTP2COEFF[5] * b_obj->W0_FILT_STATES[5];
    numAccum = b_obj->P1_RTP1COEFF[6] * stageIn;
    numAccum += b_obj->P1_RTP1COEFF[7] * b_obj->W0_FILT_STATES[4];
    numAccum += b_obj->P1_RTP1COEFF[8] * b_obj->W0_FILT_STATES[5];
    b_obj->W0_FILT_STATES[5] = b_obj->W0_FILT_STATES[4];
    b_obj->W0_FILT_STATES[4] = stageIn;
    varargout_1[ioIdx] = numAccum;
    ioIdx++;
  }
}

static void b_SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter_1 *obj)
{
  emlrtStack st;
  char_T u[29];
  int32_T i2;
  const mxArray *y;
  static char_T b_u[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  const mxArray *m7;
  static const int32_T iv141[2] = { 1, 29 };

  const mxArray *b_y;
  static const int32_T iv142[2] = { 1, 29 };

  st.prev = sp;
  st.tls = sp->tls;
  if ((obj->NumChannels != -1) && (1 != obj->NumChannels)) {
    for (i2 = 0; i2 < 29; i2++) {
      u[i2] = b_u[i2];
    }

    y = NULL;
    m7 = emlrtCreateCharArray(2, iv141);
    emlrtInitCharArrayR2013a(sp, 29, m7, &u[0]);
    emlrtAssign(&y, m7);
    for (i2 = 0; i2 < 29; i2++) {
      u[i2] = b_u[i2];
    }

    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv142);
    emlrtInitCharArrayR2013a(sp, 29, m7, &u[0]);
    emlrtAssign(&b_y, m7);
    st.site = &kc_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &c_emlrtMCI), &c_emlrtMCI),
          &c_emlrtMCI);
  }
}

static boolean_T b_SystemCore_detectInputSizeChange(dsp_SampleRateConverter_1
  *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static int16_T inSize[8] = { 4864, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

static void d_Nondirect_stepImpl(dspcodegen_FIRRateConverter_1 *obj, real_T
  varargin_1[4864], real_T varargout_1[1024])
{
  emlrtStack st;
  emlrtStack b_st;
  dsp_FIRRateConverter_7 *b_obj;
  int32_T outIdx;
  int32_T inIdx;
  int32_T inBufIdx;
  int32_T n;
  int32_T nModDFactor;
  int32_T outputStartIdx;
  real_T acc;
  int32_T coefPolyphaseOffset;
  int32_T i;
  real_T prod;
  st.site = &v_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;

  /* Update inBufIdx and inputChannelOffset for current channel */
  inBufIdx = obj->cSFunObject.W1_InBufIdx;
  for (n = 0; n < 4864; n++) {
    nModDFactor = n % 19;
    outputStartIdx = b_obj->P2_StartIdx[nModDFactor];
    nModDFactor = b_obj->P3_StopIdx[nModDFactor];

    /* Read input into inBufArray */
    b_obj->W0_InBuf[inBufIdx] = varargin_1[inIdx];
    inIdx++;

    /* Generate outputs (if any) for current input n */
    while (outputStartIdx < nModDFactor) {
      acc = 0.0;
      coefPolyphaseOffset = b_obj->P1_PolyphaseSelector[outputStartIdx] * 66;
      for (i = inBufIdx; i < 66; i++) {
        prod = b_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          b_obj->W0_InBuf[i];
        acc += prod;
      }

      for (i = 0; i < inBufIdx; i++) {
        prod = b_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 66] *
          b_obj->W0_InBuf[i];
        acc += prod;
      }

      varargout_1[outIdx] = acc;
      outIdx++;
      outputStartIdx++;
    }

    /* Decrement inBufIdx, wrap if necessary */
    if (inBufIdx == 0) {
      inBufIdx = 65;
    } else {
      inBufIdx--;
    }
  }

  /* Update inBufIdx */
  obj->cSFunObject.W1_InBufIdx = inBufIdx;
}

static void b_SystemCore_parenReference(const emlrtStack *sp, audioDeviceWriter *
  obj, real_T varargin_1[1024])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  char_T u[45];
  int32_T k;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m8;
  static const int32_T iv143[2] = { 1, 45 };

  char_T c_u[51];
  boolean_T exitg1;
  cell_wrap varSizes[1];
  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static int16_T inSize[8] = { 1024, 1, 1, 1, 1, 1, 1, 1 };

  static const int32_T iv144[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv145[2] = { 1, 45 };

  char_T e_u[4];
  static const int32_T iv146[2] = { 1, 51 };

  const mxArray *c_y;
  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  char_T *sErr;
  static const int32_T iv147[2] = { 1, 4 };

  char_T g_u[5];
  static char_T h_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv148[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (obj->isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m8 = emlrtCreateCharArray(2, iv143);
    emlrtInitCharArrayR2013a(&st, 45, m8, &u[0]);
    emlrtAssign(&y, m8);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m8 = emlrtCreateCharArray(2, iv145);
    emlrtInitCharArrayR2013a(&st, 45, m8, &u[0]);
    emlrtAssign(&b_y, m8);
    for (k = 0; k < 4; k++) {
      e_u[k] = f_u[k];
    }

    c_y = NULL;
    m8 = emlrtCreateCharArray(2, iv147);
    emlrtInitCharArrayR2013a(&st, 4, m8, &e_u[0]);
    emlrtAssign(&c_y, m8);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      y = NULL;
      m8 = emlrtCreateCharArray(2, iv144);
      emlrtInitCharArrayR2013a(&c_st, 51, m8, &c_u[0]);
      emlrtAssign(&y, m8);
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv146);
      emlrtInitCharArrayR2013a(&c_st, 51, m8, &c_u[0]);
      emlrtAssign(&b_y, m8);
      for (k = 0; k < 5; k++) {
        g_u[k] = h_u[k];
      }

      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv148);
      emlrtInitCharArrayR2013a(&c_st, 5, m8, &g_u[0]);
      emlrtAssign(&c_y, m8);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    d_st.site = &g_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = (uint32_T)inSize[k];
    }

    obj->inputVarSize[0] = varSizes[0];
    d_st.site = &g_emlrtRSI;
    e_st.site = &ab_emlrtRSI;
    if (obj->pInterface.S0_isInitialized != 1) {
      if (obj->pInterface.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2018a(&e_st, &c_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen",
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      obj->pInterface.S0_isInitialized = 1;

      /* System object Start function: audiointerface.audioDeviceWriter */
      sErr = GetErrorBuffer(&obj->pInterface.W0_AudioDeviceLib[0U]);
      CreateHostLibrary("hostlibaudio.dll", &obj->pInterface.W0_AudioDeviceLib
                        [0U]);
      if (*sErr == 0) {
        LibCreate_Audio(&obj->pInterface.W0_AudioDeviceLib[0U], 0, "Default", 1,
                        1, 1, 48000.0, 3, 4096, 40960, 1024, 0, NULL);
      }

      if (*sErr != 0) {
        DestroyHostLibrary(&obj->pInterface.W0_AudioDeviceLib[0U]);
        if (*sErr != 0) {
          PrintError(sErr);
        }
      }
    } else {
      emlrtErrorWithMessageIdR2018a(&e_st, &c_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen",
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    obj->isSetupComplete = true;
    obj->TunablePropsChanged = false;
    c_st.site = &g_emlrtRSI;
    d_st.site = &ab_emlrtRSI;
    if (obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen",
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }
  }

  b_st.site = &g_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &g_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  b_st.site = &g_emlrtRSI;
  audioDeviceWriter_stepImpl(&b_st, obj, varargin_1);
}

static void audioDeviceWriter_stepImpl(const emlrtStack *sp, audioDeviceWriter
  *obj, real_T u[1024])
{
  emlrtStack st;
  int32_T i;
  real_T U0[1024];
  char_T *sErr;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  if (obj->pInterface.S0_isInitialized != 1) {
    if (obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen",
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    obj->pInterface.S0_isInitialized = 1;

    /* System object Start function: audiointerface.audioDeviceWriter */
    sErr = GetErrorBuffer(&obj->pInterface.W0_AudioDeviceLib[0U]);
    CreateHostLibrary("hostlibaudio.dll", &obj->pInterface.W0_AudioDeviceLib[0U]);
    if (*sErr == 0) {
      LibCreate_Audio(&obj->pInterface.W0_AudioDeviceLib[0U], 0, "Default", 1, 1,
                      1, 48000.0, 3, 4096, 40960, 1024, 0, NULL);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }
    }
  }

  for (i = 0; i < 1024; i++) {
    U0[i] = u[i];
  }

  /* System object Outputs function: audiointerface.audioDeviceWriter */
  sErr = GetErrorBuffer(&obj->pInterface.W0_AudioDeviceLib[0U]);
  LibUpdate_Audio(&obj->pInterface.W0_AudioDeviceLib[0U], &U0[0U], 0, 1024,
                  &obj->pInterface.O0_Y0);
  if (*sErr != 0) {
    PrintError(sErr);
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m10;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m11;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 1, &pArray, "message", true,
    location);
}

static void init_simulink_io_address(InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (creal_T (*)[5120])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S, int_T tid)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S, int_T tid)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
  InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *moduleInstance =
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG *)calloc(1, sizeof
    (InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_s7eNzMSLwHFLj7U2jZKVUG);
  ssSetmdlInitializeConditions(S, mdlInitialize_s7eNzMSLwHFLj7U2jZKVUG);
  ssSetmdlUpdate(S, mdlUpdate_s7eNzMSLwHFLj7U2jZKVUG);
  ssSetmdlTerminate(S, mdlTerminate_s7eNzMSLwHFLj7U2jZKVUG);
  ssSetmdlEnable(S, mdlEnable_s7eNzMSLwHFLj7U2jZKVUG);
  ssSetmdlDisable(S, mdlDisable_s7eNzMSLwHFLj7U2jZKVUG);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S)
{
}

void method_dispatcher_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_s7eNzMSLwHFLj7U2jZKVUG(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_s7eNzMSLwHFLj7U2jZKVUG(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: s7eNzMSLwHFLj7U2jZKVUG.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_s7eNzMSLwHFLj7U2jZKVUG_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxArray * elem_30;
  mxArray * elem_31;
  mxArray * elem_32;
  mxArray * elem_33;
  mxArray * elem_34;
  mxArray * elem_35;
  mxArray * elem_36;
  mxArray * elem_37;
  mxArray * elem_38;
  mxArray * elem_39;
  mxArray * elem_40;
  mxArray * elem_41;
  mxArray * elem_42;
  mxArray * elem_43;
  mxArray * elem_44;
  mxArray * elem_45;
  mxArray * elem_46;
  mxArray * elem_47;
  mxArray * elem_48;
  mxArray * elem_49;
  mxArray * elem_50;
  mxArray * elem_51;
  mxArray * elem_52;
  mxArray * elem_53;
  mxArray * elem_54;
  mxArray * elem_55;
  mxArray * elem_56;
  mxArray * elem_57;
  mxArray * elem_58;
  mxArray * elem_59;
  mxArray * elem_60;
  mxArray * elem_61;
  mxArray * elem_62;
  mxArray * elem_63;
  mxArray * elem_64;
  mxArray * elem_65;
  mxArray * elem_66;
  mxArray * elem_67;
  mxArray * elem_68;
  mxArray * elem_69;
  mxArray * elem_70;
  mxArray * elem_71;
  mxArray * elem_72;
  mxArray * elem_73;
  mxArray * elem_74;
  mxArray * elem_75;
  mxArray * elem_76;
  mxArray * elem_77;
  mxArray * elem_78;
  mxArray * elem_79;
  mxArray * elem_80;
  mxArray * elem_81;
  mxArray * elem_82;
  mxArray * elem_83;
  mxArray * elem_84;
  mxArray * elem_85;
  mxArray * elem_86;
  mxArray * elem_87;
  mxArray * elem_88;
  mxArray * elem_89;
  mxArray * elem_90;
  mxArray * elem_91;
  mxArray * elem_92;
  mxArray * elem_93;
  mxArray * elem_94;
  mxArray * elem_95;
  mxArray * elem_96;
  mxArray * elem_97;
  mxArray * elem_98;
  mxArray * elem_99;
  mxArray * elem_100;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(1,4);
  elem_3 = mxCreateString("addSourceFiles");
  mxSetCell(elem_2,0,elem_3);
  elem_4 = mxCreateCellMatrix(1,2);
  elem_5 = mxCreateString("DAHostLib_rtw.c");
  mxSetCell(elem_4,0,elem_5);
  elem_6 = mxCreateString("HostLib_Audio.c");
  mxSetCell(elem_4,1,elem_6);
  mxSetCell(elem_2,1,elem_4);
  elem_7 = mxCreateCellMatrix(1,2);
  elem_8 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\spc\\src_ml\\extern\\src");
  mxSetCell(elem_7,0,elem_8);
  elem_9 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\include");
  mxSetCell(elem_7,1,elem_9);
  mxSetCell(elem_2,2,elem_7);
  elem_10 = mxCreateCellMatrix(1,2);
  elem_11 = mxCreateString("BlockModules");
  mxSetCell(elem_10,0,elem_11);
  elem_12 = mxCreateString("BlockModules");
  mxSetCell(elem_10,1,elem_12);
  mxSetCell(elem_2,3,elem_10);
  mxSetCell(elem_1,0,elem_2);
  elem_13 = mxCreateCellMatrix(1,4);
  elem_14 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateCellMatrix(1,2);
  elem_16 = mxCreateString("DAHostLib_rtw.h");
  mxSetCell(elem_15,0,elem_16);
  elem_17 = mxCreateString("HostLib_Audio.h");
  mxSetCell(elem_15,1,elem_17);
  mxSetCell(elem_13,1,elem_15);
  elem_18 = mxCreateCellMatrix(1,2);
  elem_19 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\spc\\src_ml\\extern\\include");
  mxSetCell(elem_18,0,elem_19);
  elem_20 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\include");
  mxSetCell(elem_18,1,elem_20);
  mxSetCell(elem_13,2,elem_18);
  elem_21 = mxCreateCellMatrix(1,2);
  elem_22 = mxCreateString("BlockModules");
  mxSetCell(elem_21,0,elem_22);
  elem_23 = mxCreateString("BlockModules");
  mxSetCell(elem_21,1,elem_23);
  mxSetCell(elem_13,3,elem_21);
  mxSetCell(elem_1,1,elem_13);
  elem_24 = mxCreateCellMatrix(1,3);
  elem_25 = mxCreateString("addIncludePaths");
  mxSetCell(elem_24,0,elem_25);
  elem_26 = mxCreateCellMatrix(1,2);
  elem_27 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\dsp\\include");
  mxSetCell(elem_26,0,elem_27);
  elem_28 = mxCreateString(
    "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\spc\\src_ml\\extern\\include");
  mxSetCell(elem_26,1,elem_28);
  mxSetCell(elem_24,1,elem_26);
  elem_29 = mxCreateCellMatrix(1,2);
  elem_30 = mxCreateString("BlockModules");
  mxSetCell(elem_29,0,elem_30);
  elem_31 = mxCreateString("BlockModules");
  mxSetCell(elem_29,1,elem_31);
  mxSetCell(elem_24,2,elem_29);
  mxSetCell(elem_1,2,elem_24);
  elem_32 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_32);
  elem_33 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_33);
  elem_34 = mxCreateCellMatrix(1,4);
  elem_35 = mxCreateString("addNonBuildFiles");
  mxSetCell(elem_34,0,elem_35);
  elem_36 = mxCreateCellMatrix(1,20);
  elem_37 = mxCreateString("hostlibaudio.dll");
  mxSetCell(elem_36,0,elem_37);
  elem_38 = mxCreateString("icudt59.dll");
  mxSetCell(elem_36,1,elem_38);
  elem_39 = mxCreateString("icuin59.dll");
  mxSetCell(elem_36,2,elem_39);
  elem_40 = mxCreateString("icuio59.dll");
  mxSetCell(elem_36,3,elem_40);
  elem_41 = mxCreateString("icuuc59.dll");
  mxSetCell(elem_36,4,elem_41);
  elem_42 = mxCreateString("libaudiodevice.dll");
  mxSetCell(elem_36,5,elem_42);
  elem_43 = mxCreateString("libexpat.dll");
  mxSetCell(elem_36,6,elem_43);
  elem_44 = mxCreateString("libmwcpp11compat.dll");
  mxSetCell(elem_36,7,elem_44);
  elem_45 = mxCreateString("libmwi18n.dll");
  mxSetCell(elem_36,8,elem_45);
  elem_46 = mxCreateString("libmwresource_core.dll");
  mxSetCell(elem_36,9,elem_46);
  elem_47 = mxCreateString("libportaudio.dll");
  mxSetCell(elem_36,10,elem_47);
  elem_48 = mxCreateString("multimedia.dll");
  mxSetCell(elem_36,11,elem_48);
  elem_49 = mxCreateString("multimediacommonavbuffer.dll");
  mxSetCell(elem_36,12,elem_49);
  elem_50 = mxCreateString("mwboost_chrono-vc140-mt-1_56.dll");
  mxSetCell(elem_36,13,elem_50);
  elem_51 = mxCreateString("mwboost_date_time-vc140-mt-1_56.dll");
  mxSetCell(elem_36,14,elem_51);
  elem_52 = mxCreateString("mwboost_filesystem-vc140-mt-1_56.dll");
  mxSetCell(elem_36,15,elem_52);
  elem_53 = mxCreateString("mwboost_system-vc140-mt-1_56.dll");
  mxSetCell(elem_36,16,elem_53);
  elem_54 = mxCreateString("mwboost_thread-vc140-mt-1_56.dll");
  mxSetCell(elem_36,17,elem_54);
  elem_55 = mxCreateString("tbb.dll");
  mxSetCell(elem_36,18,elem_55);
  elem_56 = mxCreateString("tbbmalloc.dll");
  mxSetCell(elem_36,19,elem_56);
  mxSetCell(elem_34,1,elem_36);
  elem_57 = mxCreateCellMatrix(1,20);
  elem_58 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,0,elem_58);
  elem_59 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,1,elem_59);
  elem_60 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,2,elem_60);
  elem_61 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,3,elem_61);
  elem_62 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,4,elem_62);
  elem_63 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,5,elem_63);
  elem_64 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,6,elem_64);
  elem_65 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,7,elem_65);
  elem_66 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,8,elem_66);
  elem_67 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,9,elem_67);
  elem_68 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,10,elem_68);
  elem_69 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,11,elem_69);
  elem_70 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,12,elem_70);
  elem_71 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,13,elem_71);
  elem_72 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,14,elem_72);
  elem_73 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,15,elem_73);
  elem_74 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,16,elem_74);
  elem_75 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,17,elem_75);
  elem_76 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,18,elem_76);
  elem_77 = mxCreateString("C:\\Program Files\\MATLAB\\R2018a\\bin\\win64");
  mxSetCell(elem_57,19,elem_77);
  mxSetCell(elem_34,2,elem_57);
  elem_78 = mxCreateCellMatrix(1,20);
  elem_79 = mxCreateString("BlockModules");
  mxSetCell(elem_78,0,elem_79);
  elem_80 = mxCreateString("BlockModules");
  mxSetCell(elem_78,1,elem_80);
  elem_81 = mxCreateString("BlockModules");
  mxSetCell(elem_78,2,elem_81);
  elem_82 = mxCreateString("BlockModules");
  mxSetCell(elem_78,3,elem_82);
  elem_83 = mxCreateString("BlockModules");
  mxSetCell(elem_78,4,elem_83);
  elem_84 = mxCreateString("BlockModules");
  mxSetCell(elem_78,5,elem_84);
  elem_85 = mxCreateString("BlockModules");
  mxSetCell(elem_78,6,elem_85);
  elem_86 = mxCreateString("BlockModules");
  mxSetCell(elem_78,7,elem_86);
  elem_87 = mxCreateString("BlockModules");
  mxSetCell(elem_78,8,elem_87);
  elem_88 = mxCreateString("BlockModules");
  mxSetCell(elem_78,9,elem_88);
  elem_89 = mxCreateString("BlockModules");
  mxSetCell(elem_78,10,elem_89);
  elem_90 = mxCreateString("BlockModules");
  mxSetCell(elem_78,11,elem_90);
  elem_91 = mxCreateString("BlockModules");
  mxSetCell(elem_78,12,elem_91);
  elem_92 = mxCreateString("BlockModules");
  mxSetCell(elem_78,13,elem_92);
  elem_93 = mxCreateString("BlockModules");
  mxSetCell(elem_78,14,elem_93);
  elem_94 = mxCreateString("BlockModules");
  mxSetCell(elem_78,15,elem_94);
  elem_95 = mxCreateString("BlockModules");
  mxSetCell(elem_78,16,elem_95);
  elem_96 = mxCreateString("BlockModules");
  mxSetCell(elem_78,17,elem_96);
  elem_97 = mxCreateString("BlockModules");
  mxSetCell(elem_78,18,elem_97);
  elem_98 = mxCreateString("BlockModules");
  mxSetCell(elem_78,19,elem_98);
  mxSetCell(elem_34,3,elem_78);
  mxSetCell(elem_1,5,elem_34);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_99 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_99);
  mxSetCell(mxBIArgs,1,elem_99);
  elem_100 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_100);
  return mxBIArgs;
}

mxArray *cgxe_s7eNzMSLwHFLj7U2jZKVUG_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("DAHostLib_rtw.c");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
