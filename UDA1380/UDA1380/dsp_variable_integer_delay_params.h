#ifndef DSP_VARIABLE_INTEGER_DELAY_PARAMS_H
#define DSP_VARIABLE_INTEGER_DELAY_PARAMS_H

#include "dsp_common.h"

typedef struct
{
	float* buffer;
	int max_delay_samples;
} dsp_variable_integer_delay_params_t;

#endif // DSP_VARIABLE_INTEGER_DELAY_PARAMS_H