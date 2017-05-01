#include <math.h>
#include "uda1380.h"
#include "arm_math.h"


// Os parametros abaixo estao nos valores tipicos para otimizar
// tempo de processamento e tolerar processamentos mais longos
#define QUEUE_LEN 2048
#define BLOCK_SIZE 64

// Os parametros abaixo estao nos valores minimos para reduzir latência e gasto de memória
//#define QUEUE_LEN 16
//#define BLOCK_SIZE 4

int16_t buf_in[QUEUE_LEN], buf_out[QUEUE_LEN];

int16_t bufL[BLOCK_SIZE],bufR[BLOCK_SIZE];

void processamento(void)
{
	while(1)
	{
		UDA1380_ReceiveSamples(bufL, bufR, BLOCK_SIZE);

		UDA1380_SendSamples(bufL, bufR, BLOCK_SIZE);
	}
}

int main(void)
{
	UDA1380_InitTypeDef UDA1380_InitStructure;

	UDA1380_StructInit(&UDA1380_InitStructure);
	UDA1380_InitStructure.UDA1380_Queue_Length = QUEUE_LEN;
	UDA1380_InitStructure.UDA1380_Buffer_In = buf_in;
	UDA1380_InitStructure.UDA1380_Buffer_Out = buf_out;
	UDA1380_InitStructure.UDA1380_Callback = processamento;
	UDA1380_Init(&UDA1380_InitStructure);

    while(1);
}
