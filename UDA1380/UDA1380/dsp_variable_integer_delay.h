#ifndef DSP_VARIABLE_INTEGER_DELAY_H
#define DSP_VARIABLE_INTEGER_DELAY_H

#include <stdbool.h>
#include "dsp.h"

bool dsp_variable_integer_delay_init(dsp_t* dsp);
bool dsp_variable_integer_delay_step(dsp_t* dsp, const float in[], float out[], void* other);

#endif // DSP_VARIABLE_INTEGER_DELAY_H
