#ifndef DSP_MOVING_AVERAGE_PARAMS_H
#define DSP_MOVING_AVERAGE_PARAMS_H

#include "dsp_common.h"

typedef enum
{
	DSP_MOVING_AVERAGE_METHOD_SLIDING_WINDOW,
	DSP_MOVING_AVERAGE_METHOD_EXPONENTIAL_WEIGHTING
} dsp_moving_average_method_t;

typedef struct
{
	dsp_moving_average_method_t method;
	int window_size;
	float forgetting_factor;
} dsp_moving_average_params_t;

#endif // DSP_MOVING_AVERAGE_PARAMS_H