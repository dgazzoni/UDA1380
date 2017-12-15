#ifndef DSP_PEAK_FINDER_H
#define DSP_PEAK_FINDER_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_peak_finder_init(dsp_t* dsp);
bool dsp_peak_finder_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_PEAK_FINDER_H