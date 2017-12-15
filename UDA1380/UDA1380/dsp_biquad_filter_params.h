#ifndef DSP_BIQUAD_FILTER_PARAMS_H
#define DSP_BIQUAD_FILTER_PARAMS_H

#include "arm_math.h"
#include "dsp_common.h"

typedef struct
{
	arm_biquad_casd_df1_inst_f32 S;
	float coefs[5];
	float state[4];
} dsp_biquad_filter_params_t;

#endif // DSP_BIQUAD_FILTER_PARAMS_H