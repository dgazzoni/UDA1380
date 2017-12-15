#ifndef DSP_WINDOW_H
#define DSP_WINDOW_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_window_init(dsp_t* dsp);
bool dsp_window_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_WINDOW_H