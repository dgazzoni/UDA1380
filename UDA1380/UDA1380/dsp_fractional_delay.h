#ifndef DSP_FRACTIONAL_DELAY_H
#define DSP_FRACTIONAL_DELAY_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_fractional_delay_init(dsp_t* dsp);
bool dsp_fractional_delay_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_FRACTIONAL_DELAY_H