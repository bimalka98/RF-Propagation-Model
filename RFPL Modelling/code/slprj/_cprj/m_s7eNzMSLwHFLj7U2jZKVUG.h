#ifndef __s7eNzMSLwHFLj7U2jZKVUG_h__
#define __s7eNzMSLwHFLj7U2jZKVUG_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"

/* Type Definitions */
#ifndef typedef_dsp_SampleRateConverter_2
#define typedef_dsp_SampleRateConverter_2

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
} dsp_SampleRateConverter_2;

#endif                                 /*typedef_dsp_SampleRateConverter_2*/

#ifndef struct_mdd6ab34054856a798928edb27d258120e
#define struct_mdd6ab34054856a798928edb27d258120e

struct mdd6ab34054856a798928edb27d258120e
{
  int32_T S0_isInitialized;
  real_T W0_InBuf[13];
  int32_T W1_InBufIdx;
  real_T P0_FILTER[247];
  int32_T P1_PolyphaseSelector[19];
  int32_T P2_StartIdx[20];
  int32_T P3_StopIdx[20];
};

#endif                                 /*struct_mdd6ab34054856a798928edb27d258120e*/

#ifndef typedef_dsp_FIRRateConverter_6
#define typedef_dsp_FIRRateConverter_6

typedef struct mdd6ab34054856a798928edb27d258120e dsp_FIRRateConverter_6;

#endif                                 /*typedef_dsp_FIRRateConverter_6*/

#ifndef struct_mda54d76b1acd46054958d787c794d1e6e
#define struct_mda54d76b1acd46054958d787c794d1e6e

struct mda54d76b1acd46054958d787c794d1e6e
{
  int32_T S0_isInitialized;
  real_T W0_states[162];
  real_T P0_InitialStates;
  real_T P1_Coefficients[163];
};

#endif                                 /*struct_mda54d76b1acd46054958d787c794d1e6e*/

#ifndef typedef_dsp_FIRFilter_0
#define typedef_dsp_FIRFilter_0

typedef struct mda54d76b1acd46054958d787c794d1e6e dsp_FIRFilter_0;

#endif                                 /*typedef_dsp_FIRFilter_0*/

#ifndef struct_md93e716137ee20a84ab53614783645d6e
#define struct_md93e716137ee20a84ab53614783645d6e

struct md93e716137ee20a84ab53614783645d6e
{
  int32_T S0_isInitialized;
  real_T W0_FILT_STATES[6];
  int32_T W1_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[9];
  real_T P2_RTP2COEFF[6];
  real_T P3_RTP3COEFF[4];
  boolean_T P4_RTP_COEFF3_BOOL[4];
};

#endif                                 /*struct_md93e716137ee20a84ab53614783645d6e*/

#ifndef typedef_dsp_BiquadFilter_1
#define typedef_dsp_BiquadFilter_1

typedef struct md93e716137ee20a84ab53614783645d6e dsp_BiquadFilter_1;

#endif                                 /*typedef_dsp_BiquadFilter_1*/

#ifndef struct_md789f52e8bdb2e4fe71246199de249f54
#define struct_md789f52e8bdb2e4fe71246199de249f54

struct md789f52e8bdb2e4fe71246199de249f54
{
  int32_T S0_isInitialized;
  real_T W0_InBuf[66];
  int32_T W1_InBufIdx;
  real_T P0_FILTER[264];
  int32_T P1_PolyphaseSelector[4];
  int32_T P2_StartIdx[19];
  int32_T P3_StopIdx[19];
};

#endif                                 /*struct_md789f52e8bdb2e4fe71246199de249f54*/

#ifndef typedef_dsp_FIRRateConverter_7
#define typedef_dsp_FIRRateConverter_7

typedef struct md789f52e8bdb2e4fe71246199de249f54 dsp_FIRRateConverter_7;

#endif                                 /*typedef_dsp_FIRRateConverter_7*/

#ifndef struct_md5abd5a10e2c732f1dc9d18d4396260a6
#define struct_md5abd5a10e2c732f1dc9d18d4396260a6

struct md5abd5a10e2c732f1dc9d18d4396260a6
{
  int32_T S0_isInitialized;
  uint8_T W0_AudioDeviceLib[1096];
  uint32_T O0_Y0;
};

#endif                                 /*struct_md5abd5a10e2c732f1dc9d18d4396260a6*/

#ifndef typedef_audiointerface_audioDeviceWriter_2
#define typedef_audiointerface_audioDeviceWriter_2

typedef struct md5abd5a10e2c732f1dc9d18d4396260a6
  audiointerface_audioDeviceWriter_2;

#endif                                 /*typedef_audiointerface_audioDeviceWriter_2*/

#ifndef struct_mdbHLmg7bEWSUF8qe0NRDdXG
#define struct_mdbHLmg7bEWSUF8qe0NRDdXG

struct mdbHLmg7bEWSUF8qe0NRDdXG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_FIRRateConverter_7 cSFunObject;
};

#endif                                 /*struct_mdbHLmg7bEWSUF8qe0NRDdXG*/

#ifndef typedef_dspcodegen_FIRRateConverter_1
#define typedef_dspcodegen_FIRRateConverter_1

typedef struct mdbHLmg7bEWSUF8qe0NRDdXG dspcodegen_FIRRateConverter_1;

#endif                                 /*typedef_dspcodegen_FIRRateConverter_1*/

#ifndef struct_mdwvM1Xfm8nrCYLAi7vRoupG
#define struct_mdwvM1Xfm8nrCYLAi7vRoupG

struct mdwvM1Xfm8nrCYLAi7vRoupG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_FIRRateConverter_6 cSFunObject;
};

#endif                                 /*struct_mdwvM1Xfm8nrCYLAi7vRoupG*/

#ifndef typedef_dspcodegen_FIRRateConverter
#define typedef_dspcodegen_FIRRateConverter

typedef struct mdwvM1Xfm8nrCYLAi7vRoupG dspcodegen_FIRRateConverter;

#endif                                 /*typedef_dspcodegen_FIRRateConverter*/

#ifndef struct_md0yFYwgMdnl0dRBC9PWXv1G
#define struct_md0yFYwgMdnl0dRBC9PWXv1G

struct md0yFYwgMdnl0dRBC9PWXv1G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_BiquadFilter_1 cSFunObject;
};

#endif                                 /*struct_md0yFYwgMdnl0dRBC9PWXv1G*/

#ifndef typedef_dspcodegen_BiquadFilter
#define typedef_dspcodegen_BiquadFilter

typedef struct md0yFYwgMdnl0dRBC9PWXv1G dspcodegen_BiquadFilter;

#endif                                 /*typedef_dspcodegen_BiquadFilter*/

#ifndef struct_mdk2urUHJ7mwrRnDRHW3irXC
#define struct_mdk2urUHJ7mwrRnDRHW3irXC

struct mdk2urUHJ7mwrRnDRHW3irXC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_FIRFilter_0 cSFunObject;
  boolean_T NoTuningBeforeLockingCodeGenError;
};

#endif                                 /*struct_mdk2urUHJ7mwrRnDRHW3irXC*/

#ifndef typedef_dspcodegen_FIRFilter
#define typedef_dspcodegen_FIRFilter

typedef struct mdk2urUHJ7mwrRnDRHW3irXC dspcodegen_FIRFilter;

#endif                                 /*typedef_dspcodegen_FIRFilter*/

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 /*typedef_cell_wrap*/

#ifndef struct_mdXwzhwmSoKBJZuXaqKoQCg
#define struct_mdXwzhwmSoKBJZuXaqKoQCg

struct mdXwzhwmSoKBJZuXaqKoQCg
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  int32_T NumChannels;
  dspcodegen_FIRRateConverter *filt1;
};

#endif                                 /*struct_mdXwzhwmSoKBJZuXaqKoQCg*/

#ifndef typedef_dsp_SampleRateConverter
#define typedef_dsp_SampleRateConverter

typedef struct mdXwzhwmSoKBJZuXaqKoQCg dsp_SampleRateConverter;

#endif                                 /*typedef_dsp_SampleRateConverter*/

#ifndef struct_mdaAH9CfHzJtfAd0idzjDp8C
#define struct_mdaAH9CfHzJtfAd0idzjDp8C

struct mdaAH9CfHzJtfAd0idzjDp8C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  int32_T NumChannels;
  dspcodegen_FIRRateConverter_1 *filt1;
};

#endif                                 /*struct_mdaAH9CfHzJtfAd0idzjDp8C*/

#ifndef typedef_dsp_SampleRateConverter_1
#define typedef_dsp_SampleRateConverter_1

typedef struct mdaAH9CfHzJtfAd0idzjDp8C dsp_SampleRateConverter_1;

#endif                                 /*typedef_dsp_SampleRateConverter_1*/

#ifndef struct_mdBqn3mzJ6n2MIUiWa9enBzC
#define struct_mdBqn3mzJ6n2MIUiWa9enBzC

struct mdBqn3mzJ6n2MIUiWa9enBzC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize[1];
  audiointerface_audioDeviceWriter_2 pInterface;
};

#endif                                 /*struct_mdBqn3mzJ6n2MIUiWa9enBzC*/

#ifndef typedef_audioDeviceWriter
#define typedef_audioDeviceWriter

typedef struct mdBqn3mzJ6n2MIUiWa9enBzC audioDeviceWriter;

#endif                                 /*typedef_audioDeviceWriter*/

#ifndef struct_tag_sGCWrbtWIJwcGAcjocZ19XD
#define struct_tag_sGCWrbtWIJwcGAcjocZ19XD

struct tag_sGCWrbtWIJwcGAcjocZ19XD
{
  real_T coeffs1[229];
  real_T rcf1[2];
};

#endif                                 /*struct_tag_sGCWrbtWIJwcGAcjocZ19XD*/

#ifndef typedef_sGCWrbtWIJwcGAcjocZ19XD
#define typedef_sGCWrbtWIJwcGAcjocZ19XD

typedef struct tag_sGCWrbtWIJwcGAcjocZ19XD sGCWrbtWIJwcGAcjocZ19XD;

#endif                                 /*typedef_sGCWrbtWIJwcGAcjocZ19XD*/

#ifndef struct_tag_sBf1ZYC6zCuDnT89dJDVkxD
#define struct_tag_sBf1ZYC6zCuDnT89dJDVkxD

struct tag_sBf1ZYC6zCuDnT89dJDVkxD
{
  real_T coeffs1[261];
  real_T rcf1[2];
};

#endif                                 /*struct_tag_sBf1ZYC6zCuDnT89dJDVkxD*/

#ifndef typedef_sBf1ZYC6zCuDnT89dJDVkxD
#define typedef_sBf1ZYC6zCuDnT89dJDVkxD

typedef struct tag_sBf1ZYC6zCuDnT89dJDVkxD sBf1ZYC6zCuDnT89dJDVkxD;

#endif                                 /*typedef_sBf1ZYC6zCuDnT89dJDVkxD*/

#ifndef typedef_dsp_private_PhaseDifferentiator
#define typedef_dsp_private_PhaseDifferentiator

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  creal_T pLastSample;
  int32_T pNumChans;
} dsp_private_PhaseDifferentiator;

#endif                                 /*typedef_dsp_private_PhaseDifferentiator*/

#ifndef typedef_comm_FMDemodulator
#define typedef_comm_FMDemodulator

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  dsp_private_PhaseDifferentiator pPhaseDifferentiator;
} comm_FMDemodulator;

#endif                                 /*typedef_comm_FMDemodulator*/

#ifndef struct_mdWcWkMqY58ufLi9Zvu18LCH
#define struct_mdWcWkMqY58ufLi9Zvu18LCH

struct mdWcWkMqY58ufLi9Zvu18LCH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  comm_FMDemodulator pFMDemod;
  dspcodegen_BiquadFilter pDeEmphFilter;
  dsp_SampleRateConverter pRateConv228;
  dsp_SampleRateConverter_1 pAudioRateConv;
  dsp_SampleRateConverter_2 pRBDSRateConv;
  dspcodegen_FIRFilter pLowPass;
  audioDeviceWriter pAudio;
};

#endif                                 /*struct_mdWcWkMqY58ufLi9Zvu18LCH*/

#ifndef typedef_comm_FMBroadcastDemodulator
#define typedef_comm_FMBroadcastDemodulator

typedef struct mdWcWkMqY58ufLi9Zvu18LCH comm_FMBroadcastDemodulator;

#endif                                 /*typedef_comm_FMBroadcastDemodulator*/

#ifndef typedef_InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG
#define typedef_InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG

typedef struct {
  dspcodegen_FIRRateConverter_1 gobj_1;
  dspcodegen_FIRRateConverter gobj_0;
  SimStruct *S;
  comm_FMBroadcastDemodulator sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  boolean_T c_isInitialized;
  boolean_T d_isInitialized;
  boolean_T e_isInitialized;
  creal_T dcv0[5120];
  creal_T x[5120];
  void *emlrtRootTLSGlobal;
  creal_T (*u0)[5120];
} InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG;

#endif                                 /*typedef_InstanceStruct_s7eNzMSLwHFLj7U2jZKVUG*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_s7eNzMSLwHFLj7U2jZKVUG(SimStruct *S, int_T method,
  void* data);

#endif
