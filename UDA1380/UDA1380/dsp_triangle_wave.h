#ifndef DSP_TRIANGLE_WAVE_H
#define DSP_TRIANGLE_WAVE_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_triangle_wave_init(dsp_t* dsp);
bool dsp_triangle_wave_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_TRIANGLE_WAVE_H
