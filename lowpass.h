#ifndef LOWPASS_H
#define LOWPASS_H
#include "processor.h"
#include "wav.h"
using namespace std;

class LPFilter : public Processor
{
    private:
        int cutoff;
    public:
        LPFilter();
        LPFilter(int cutoff);
        void addCutoff(unsigned char*, int);
        void processBuffer(unsigned char* buffer, int bufferSize, wav wavfile) override;
};
#endif