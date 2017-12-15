#ifndef DSP_ANALOG_FILTER_H
#define DSP_ANALOG_FILTER_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_analog_filter_init(dsp_t* dsp);
bool dsp_analog_filter_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_ANALOG_FILTER_H