#include <stdbool.h>
#include "dsp.h"
#include "dsp_sine_wave.h"
#include "dsp_triangle_wave.h"
#include "dsp_signal_source.h"
#include "dsp_colored_noise.h"
#include "dsp_peak_finder.h"
#include "dsp_window.h"
#include "dsp_pll.h"
#include "dsp_delay.h"
#include "dsp_variable_integer_delay.h"
#include "dsp_fractional_delay.h"
#include "dsp_nco.h"
#include "dsp_moving_average.h"
#include "dsp_notch_peak_filter.h"
#include "dsp_analog_filter.h"
#include "dsp_biquad_filter.h"
#include "dsp_median_filter.h"

dsp_init_function_ptr_t init_functions[] =
{
	dsp_sine_wave_init,
	dsp_triangle_wave_init,
	dsp_signal_source_init,
	dsp_colored_noise_init,
	dsp_peak_finder_init,
	dsp_window_init,
	dsp_pll_init,
	dsp_delay_init,
	dsp_variable_integer_delay_init,
	dsp_fractional_delay_init,
	dsp_nco_init,
	dsp_moving_average_init,
	dsp_notch_peak_filter_init,
	dsp_analog_filter_init,
	dsp_biquad_filter_init,
	dsp_median_filter_init
};

dsp_step_function_ptr_t step_functions[] =
{ 
	dsp_sine_wave_step,
	dsp_triangle_wave_step,
	dsp_signal_source_step,
	dsp_colored_noise_step,
	dsp_peak_finder_step,
	dsp_window_step,
	dsp_pll_step,
	dsp_delay_step,
	dsp_variable_integer_delay_step,
	dsp_fractional_delay_step,
	dsp_nco_step,
	dsp_moving_average_step,
	dsp_notch_peak_filter_step,
	dsp_analog_filter_step,
	dsp_biquad_filter_step,
	dsp_median_filter_step
};

bool dsp_function_init(dsp_t* dsp)
{
	init_functions[dsp->function](dsp);
}

bool dsp_function_step(dsp_t* dsp, const float in[], float out[], void* other)
{
	step_functions[dsp->function](dsp, in, out, other);
}