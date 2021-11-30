#ifndef ECHO_H
#define ECHO_H
#include "Processor.h"
#include "wav.h"
using namespace std;

class Echo: public Processor
{
    private:
        int delay;
    public:
        Echo();
        Echo(int delay); 
        void createEcho(unsigned char*, int);
        void processBuffer(unsigned char* buffer, int bufferSize, wav wavfile) override;
    
};


#endif
