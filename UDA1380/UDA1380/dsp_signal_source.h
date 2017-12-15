#ifndef DSP_SIGNAL_SOURCE_H
#define DSP_SIGNAL_SOURCE_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_signal_source_init(dsp_t* dsp);
bool dsp_signal_source_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_SIGNAL_SOURCE_H

