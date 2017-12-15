#ifndef DSP_NCO_H
#define DSP_NCO_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_nco_init(dsp_t* dsp);
bool dsp_nco_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_NCO_H
