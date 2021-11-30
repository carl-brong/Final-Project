#ifndef ECHO_H
#define ECHO_H
#include "Processor.h"
#include "wav.h"
using namespace std;

class Echo: public Processor
{
    public:
        int delay;
        Echo(int delay); 
        void processBuffer(unsigned char* buffer, int bufferSize, wav wavfile) override;
    
};


#endif
