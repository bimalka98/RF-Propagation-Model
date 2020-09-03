#ifndef __VoiceTransmission_cgxe_h__
#define __VoiceTransmission_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#include "cgxert.h"
#include "DAHostLib_rtw.h"
#include "HostLib_Audio.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

extern unsigned int cgxe_VoiceTransmission_method_dispatcher(SimStruct* S, int_T
  method, void* data);

#endif
