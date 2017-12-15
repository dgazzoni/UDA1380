#ifndef DSP_PLL_H
#define DSP_PLL_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_pll_init(dsp_t* dsp);
bool dsp_pll_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_PLL_H
