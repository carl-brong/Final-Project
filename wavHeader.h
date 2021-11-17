#ifndef WAVEHEADER_H
#define WAVEHEADER_H

//struct used to get the first 3 common attributes on all audio files//
struct wav_header 
{
	char riff_header[4];
	int wav_size; 
	char wave_header[4];
};

//struct use to gather common chunk info to read all other data//
struct chunkInfo
{
	char fmt_header[4];	
	int fmt_chunk_size;
};

//struct for the FMT data//
struct FMT 
{   
	short audio_format;
	short num_channels;
	int sample_rate;
	int byte_rate;
	short sample_alignment;
	short bit_depth;
};


//struct for subChunkInfo//
struct SubChunkInfo:public chunkInfo
{
	char *buffer;
};


#endif

