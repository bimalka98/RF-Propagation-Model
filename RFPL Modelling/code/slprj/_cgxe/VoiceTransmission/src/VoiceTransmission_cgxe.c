/* Include files */

#include "VoiceTransmission_cgxe.h"
#include "m_s7eNzMSLwHFLj7U2jZKVUG.h"

unsigned int cgxe_VoiceTransmission_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 2998608397 &&
      ssGetChecksum1(S) == 2760678322 &&
      ssGetChecksum2(S) == 554674664 &&
      ssGetChecksum3(S) == 3512523802) {
    method_dispatcher_s7eNzMSLwHFLj7U2jZKVUG(S, method, data);
    return 1;
  }

  return 0;
}
