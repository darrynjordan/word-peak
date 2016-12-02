#include "recorder.hpp"


Recorder::Recorder(void)
{
	if (!sf::SoundBufferRecorder::isAvailable())
	{
		cout << "error: audio capture is not available on this system" << endl;
	}
}

void Recorder::start(void)
{
	recordingBuffer.start();
	cout << "Recording started." << endl;
}


void Recorder::stop(void)
{
	recordingBuffer.stop();
	cout << "Recording stopped." << endl;
	
	buffer = recordingBuffer.getBuffer();
	n_samples = buffer.getSampleCount();
	b_samples = (int16_t*)buffer.getSamples();
	buffer.saveToFile("received_signal.ogg");	
}


int Recorder::getNumSamples(void)
{
	return n_samples;
}


int16_t* Recorder::getBuffer(void)
{
	return b_samples;
}



