#ifndef DSP_BIQUAD_FILTER_H
#define DSP_BIQUAD_FILTER_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_biquad_filter_init(dsp_t* dsp);
bool dsp_biquad_filter_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_BIQUAD_FILTER_H
