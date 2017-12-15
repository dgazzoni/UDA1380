#ifndef DSP_DELAY_PARAMS_H
#define DSP_DELAY_PARAMS_H

#include "dsp_common.h"

typedef struct
{
	float* buffer;
	int num_delay_samples;
} dsp_delay_params_t;

#endif // DSP_DELAY_PARAMS_H