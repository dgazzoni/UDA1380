#ifndef DSP_FRACTIONAL_DELAY_PARAMS_H
#define DSP_FRACTIONAL_DELAY_PARAMS_H

#include "dsp_common.h"

typedef struct
{
	float* buffer;
	int length;
} dsp_fractional_delay_params_t;

#endif // DSP_FRACTIONAL_DELAY_PARAMS_H