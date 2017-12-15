#ifndef DSP_COLORED_NOISE_PARAMS_H
#define DSP_COLORED_NOISE_PARAMS_H

#include "dsp_common.h"

typedef enum
{
	DSP_COLORED_NOISE_PINK,
	DSP_COLORED_NOISE_WHITE,
	DSP_COLORED_NOISE_BROWN,
	DSP_COLORED_NOISE_BLUE,
	DSP_COLORED_NOISE_PURPLE,
	DSP_COLORED_NOISE_CUSTOM
} dsp_colored_noise_type_t;

typedef struct
{
	dsp_colored_noise_type_t type;
} dsp_colored_noise_params_t;

#endif // DSP_COLORED_NOISE_PARAMS_H