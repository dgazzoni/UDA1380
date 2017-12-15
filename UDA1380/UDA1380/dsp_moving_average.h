#ifndef DSP_MOVING_AVERAGE_H
#define DSP_MOVING_AVERAGE_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_moving_average_init(dsp_t* dsp);
bool dsp_moving_average_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_MOVING_AVERAGE_H
