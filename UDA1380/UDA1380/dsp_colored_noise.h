#ifndef DSP_COLORED_NOISE_H
#define DSP_COLORED_NOISE_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_colored_noise_init(dsp_t* dsp);
bool dsp_colored_noise_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_COLORED_NOISE_H