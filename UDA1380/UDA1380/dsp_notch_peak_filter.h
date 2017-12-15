#ifndef DSP_NOTCH_PEAK_FILTER_H
#define DSP_NOTCH_PEAK_FILTER_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_notch_peak_filter_init(dsp_t* dsp);
bool dsp_notch_peak_filter_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_NOTCH_PEAK_FILTER_H
