#ifndef DSP_NOTCH_PEAK_FILTER_PARAMS_H
#define DSP_NOTCH_PEAK_FILTER_PARAMS_H

#include "arm_math.h"
#include "dsp_common.h"


#define PEAK 0
#define NOTCH 1

typedef enum
{
	DSP_NOTCH_PEAK_FILTER_SPECIFICATION_BW_CENTER_FREQ,
	DSP_NOTCH_PEAK_FILTER_SPECIFICATION_Q_CENTER_FREQ,
	DSP_NOTCH_PEAK_FILTER_SPECIFICATION_COEFFICIENTS
} dsp_notch_peak_filter_specification_t;



typedef struct
{
	arm_biquad_casd_df1_inst_f32 S;
	float coeffs[5];
	float state[4];
	dsp_notch_peak_filter_specification_t specification;
	float bandwidth; 
	float center_frequency;
	float quality_factor; 
	int flag;
} dsp_notch_peak_filter_params_t;

#endif // DSP_NOTCH_PEAK_FILTER_PARAMS_H
