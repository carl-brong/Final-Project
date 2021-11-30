#ifndef NORMALIZER_H
#define NORMALIZER_H

#include <iostream>
#include "Processor.h"

using namespace std;

class Limiter: public Processor{

private:
	float limitVal = 0.8;

public:
	void limitFunc(unsigned char*, int);
	void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif