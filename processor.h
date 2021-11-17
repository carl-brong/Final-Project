#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "wavHeader.h"
#include "wav.h"
#include <cmath>
#include <cstdint>

using namespace std;

class Processor{
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize, wav wavfile) = 0;
};
#endif