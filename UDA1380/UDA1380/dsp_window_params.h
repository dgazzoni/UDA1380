#ifndef DSP_WINDOW_PARAMS_H
#define DSP_WINDOW_PARAMS_H

#include "dsp_common.h"

typedef enum
{
	DSP_WINDOW_FUNCTION_BLACKMAN,
	DSP_WINDOW_FUNCTION_HAMMING,
	DSP_WINDOW_FUNCTION_HANN,
	DSP_WINDOW_FUNCTION_KAISER,
	DSP_WINDOW_FUNCTION_TRIANG
} dsp_window_function_t;

typedef struct
{
	dsp_window_function_t function;
	float kaiser_beta;
} dsp_window_params_t;

#endif // DSP_WINDOW_PARAMS_H