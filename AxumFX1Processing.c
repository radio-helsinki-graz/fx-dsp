#include "AxumFX1Processing.h"

void InitializeProcessing()
{
}

void Processing(signed int *InputBuffer, signed int *OutputBuffer)
{
	int cntChannel;

	for (cntChannel=0;cntChannel<16; cntChannel++)
	{
		//FX out 1-16 <= FX in 1-16
		OutputBuffer[cntChannel] = InputBuffer[96+cntChannel];
	}
}

