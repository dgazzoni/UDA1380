#ifndef DSP_PLL_PARAMS_H
#define DSP_PLL_PARAMS_H

#include "dsp_common.h"

typedef struct
{
	float K;
	float zeta;
	float wn;
} dsp_pll_params_t;

#endif // DSP_PLL_PARAMS_H