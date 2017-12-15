#ifndef DSP_MEDIAN_FILTER_H
#define DSP_MEDIAN_FILTER_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_median_filter_init(dsp_t* dsp);
bool dsp_median_filter_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_MEDIAN_FILTER_H