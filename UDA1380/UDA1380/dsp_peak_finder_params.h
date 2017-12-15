#ifndef DSP_PEAK_FINDER_PARAMS_H
#define DSP_PEAK_FINDER_PARAMS_H

#include "dsp_common.h"

typedef enum
{
	DSP_PEAK_FINDER_TYPE_MAXIMA,
	DSP_PEAK_FINDER_TYPE_MINIMA,
	DSP_PEAK_FINDER_TYPE_BOTH
} dsp_peak_finder_type_t;

typedef struct
{
	dsp_peak_finder_type_t type;
	int maximum_peak_count;
	bool ignore_small_peaks;
	float peak_threshold;
} dsp_peak_finder_params_t;

#endif // DSP_PEAK_FINDER_PARAMS_H