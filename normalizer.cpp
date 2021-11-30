#include <iostream>
#include "normalizer.h"


void Limiter::limitFunc(unsigned char* buffer, int bufferSize)
{

	for(int i = 0; i < bufferSize; i++)
    {
		if(buffer[i] > 255 * limitVal)
        {
			buffer[i] = 255 * limitVal;
		}
	}
}

void Limiter::processBuffer(unsigned char* buffer, int bufferSize)
{
	limitFunc(buffer, bufferSize);
}

