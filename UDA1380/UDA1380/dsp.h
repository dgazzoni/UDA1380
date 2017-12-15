#ifndef DSP_H
#define DSP_H

#include <stdbool.h>
#include "dsp_sine_wave_params.h"
#include "dsp_triangle_wave_params.h"
#include "dsp_signal_source_params.h"
#include "dsp_colored_noise_params.h"
#include "dsp_peak_finder_params.h"
#include "dsp_window_params.h"
#include "dsp_pll_params.h"
#include "dsp_delay_params.h"
#include "dsp_variable_integer_delay_params.h"
#include "dsp_fractional_delay_params.h"
#include "dsp_nco_params.h"
#include "dsp_moving_average_params.h"
#include "dsp_notch_peak_filter_params.h"
#include "dsp_analog_filter_params.h"
#include "dsp_biquad_filter_params.h"
#include "dsp_median_filter_params.h"

typedef enum
{
	DSP_SINE_WAVE,
	DSP_TRIANGLE_WAVE,
	DSP_SIGNAL_SOURCE,
	DSP_COLORED_NOISE,
	DSP_PEAK_FINDER,
	DSP_WINDOW,
	DSP_PLL,
	DSP_DELAY,
	DSP_VARIABLE_INTEGER_DELAY,
	DSP_FRACTIONAL_DELAY,
	DSP_NCO,
	DSP_MOVING_AVERAGE,
	DSP_NOTCH_PEAK_FILTER,
	DSP_ANALOG_FILTER,
	DSP_BIQUAD_FILTER,
	DSP_MEDIAN_FILTER,
} dsp_functions_t;

typedef union
{
	dsp_sine_wave_params_t sine_wave;
	dsp_triangle_wave_params_t triangle_wave;
	dsp_signal_source_params_t signal_source;
	dsp_colored_noise_params_t colored_noise;
	dsp_peak_finder_params_t peak_finder;
	dsp_window_params_t window;
	dsp_pll_params_t pll;
	dsp_delay_params_t delay;
	dsp_variable_integer_delay_params_t variable_integer_delay;
	dsp_fractional_delay_params_t fractional_delay;
	dsp_nco_params_t nco;
	dsp_moving_average_params_t moving_average;
	dsp_notch_peak_filter_params_t notch_peak_filter;
	dsp_analog_filter_params_t analog_filter;
	dsp_biquad_filter_params_t biquad_filter;
	dsp_median_filter_params_t median_filter;
} dsp_function_params_t;

typedef struct dsp_t dsp_t;

typedef bool(*dsp_init_function_ptr_t)(dsp_t* dsp);
typedef bool(*dsp_step_function_ptr_t)(dsp_t* dsp, const float in[], float out[], void* other);

typedef struct
{
	int sample_rate;
	int block_size;
} dsp_common_params_t;

struct dsp_t
{
	dsp_functions_t function;
	dsp_common_params_t common_params;
	dsp_function_params_t function_params;
};

bool dsp_function_init(dsp_t* dsp);
bool dsp_function_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_H