#ifndef WAV_H
#define WAV_H

#include "wavHeader.h"
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Wav{

private:
	vector <SubChunkInfo> metadata;
	unsigned char* buffer = NULL;
	int data_bufferSize;
	wav_header waveHeader;
	chunkInfo chunkinfo;
	FMT fmt;	

public:
	//used to get class with values from the wav_header class//
	wav_header getwavHeader();
	//used to get class with values from the chunkInfo class//
	chunkInfo getchunkInfo();
	//used to get class with values from FMT class//
	FMT getFMT();
	//vector function to get metadata//
	vector<SubChunkInfo> getMetaData();
    //function to get buffer//
	unsigned char *getBuffer();
    //function to get buffer size//
	int getBufferSize();
	//take file's name to read in values and pass them to wav_header//
	void readFile(const std::string &fileName);
	//take edited file's name to create new .wav file//
	void writeFile(const std::string &outFileName);

public:
	//virtual used to delete allocated memory of the buffer//
	virtual ~Wav();
};
#endif
