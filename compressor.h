#ifndef COMPRESSOR_H
#define COMPRESSOR_H
#include "processor.h"
#include "wav.h"
using namespace std;

class Compressor : public Processor
{
    int threshold;
    public:
        Compressor(int threshold);
        Compressor();
        void processBuffer(unsigned char* buffer, int bufferSize, wav wavfile) override;
};
#endif