#ifndef DSP_DELAY_H
#define DSP_DELAY_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_delay_init(dsp_t* dsp);
bool dsp_delay_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_DELAY_H