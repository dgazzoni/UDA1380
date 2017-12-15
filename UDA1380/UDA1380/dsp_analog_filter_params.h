#ifndef DSP_ANALOG_FILTER_PARAMS_H
#define DSP_ANALOG_FILTER_PARAMS_H

#include "dsp_common.h"

typedef enum
{
	DSP_FILTER_RESPONSE_BUTTERWORTH
} dsp_analog_filter_response_t;

typedef enum
{
	DSP_FILTER_TYPE_LOW_PASS,
	DSP_FILTER_TYPE_HIGH_PASS,
	DSP_FILTER_TYPE_BAND_PASS,
	DSP_FILTER_TYPE_BAND_STOP
} dsp_analog_filter_type_t;

typedef struct
{
	dsp_analog_filter_response_t response;
	dsp_analog_filter_type_t type;
	int order;
	float cutoff_frequency;
} dsp_analog_filter_params_t;

#endif // DSP_ANALOG_FILTER_PARAMS_H