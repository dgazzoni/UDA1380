#ifndef DSP_SINE_WAVE_H
#define DSP_SINE_WAVE_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_sine_wave_init(dsp_t* dsp);
bool dsp_sine_wave_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_SINE_WAVE_H
