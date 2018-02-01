#include <stdbool.h>
#include "dsp_notch_peak_filter.h"
#include "math.h"

bool dsp_notch_peak_filter_init(dsp_t* dsp)
{



	int flag;
	float omega_zero = 0;
	float delta_omega = 0;
	float b = 0;

	flag = dsp->function_params.notch_peak_filter.flag;

	/* Calcular o parametro faltando */

	if (dsp->function_params.notch_peak_filter.specification == DSP_NOTCH_PEAK_FILTER_SPECIFICATION_BW_CENTER_FREQ	)   { 

		dsp->function_params.notch_peak_filter.quality_factor = dsp->function_params.notch_peak_filter.center_frequency / dsp->function_params.notch_peak_filter.bandwidht;




	} else if ( dsp->function_params.notch_peak_filter.specification == DSP_NOTCH_PEAK_FILTER_SPECTIFICATION_Q_CENTER_FREQ ) { 


		dsp->function_params.notch_peak_filter.bandwidht = dsp->function_params.notch_peak_filter.center_frequency / dsp->function_params.notch_peak_filter.quality_factor;


	}
	/*Coeficientes são passados à estrutura -- funcionamento igual ao de um filtro biquad de um estágio*/
	else if (dsp->function_params.notch_peak_filter.specification == DSP_NOTCH_PEAK_FILTER_SPECIFICATION_COEFFICIENTS) { 
		
		arm_biquad_cascade_df1_initf32( &(dsp->function_params.notch_peak_filter.S) , 1 , dsp->function_params.notch_peak_filter.coeffs , dsp->function_params.notch_peak_filter.state);
		return true;
		
	}


	/*  Calcular os parametros do filtro */


	omega_zero = (2*3.14*dsp->function_params.notch_peak_filter.center_frequency) / dsp->common_params.sample_rate;
	delta_omega = (2*3.14*dsp->function_params.notch_peak_filter.bandwidht) / dsp->common_params.sample_rate;

	b = 1 / (1 + tan(delta_omega / 2 ) );

	if (flag == PEAK ) { 

		dsp->function_params.notch_peak_filter.coeffs[0] = 1- b;
		dsp->function_params.notch_peak_filter.coeffs[1] = 0;
		dsp->function_params.notch_peak_filter.coeffs[2] = -(1 - b);
		dsp->function_params.notch_peak_filter.coeffs[3] = -2*b*cos(omega_zero);
		dsp->function_params.notch_peak_filter.coeffs[4] = -(2*b - 1);


			} else if(flag == NOTCH) {



		dsp->function_params.notch_peak_filter.coeffs[0] = b;
		dsp->function_params.notch_peak_filter.coeffs[1] = -2*b*cos(omega_zero);
		dsp->function_params.notch_peak_filter.coeffs[2] = b;
		dsp->function_params.notch_peak_filter.coeffs[3] = -2*b*cos(omega_zero);
		dsp->function_params.notch_peak_filter.coeffs[4] = -(2*b - 1);


			}


	/* Inicalizar Estrutura */


		arm_biquad_cascade_df1_initf32(&(dsp->function_params.notch_peak_filter.S) , 1 , dsp->function_params.notch_peak_filter.coeffs , dsp->function_params.notch_peak_filter.state);


}

bool dsp_notch_peak_filter_step(dsp_t* dsp, const float in[], float out[], void* other)
{


	arm_biquad_cascade_fd1_f32(&(dsp->function_params.notch_peak_filter.S) , in , out , dsp->common_params.block_size);
	
}
