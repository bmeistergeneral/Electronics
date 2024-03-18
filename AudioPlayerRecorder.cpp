#include "AudioPlayerRecorder.h"

    AudioPlayerRecorder::AudioPlayerRecorder(std::string manuf, std::string mod, std::string ser) : AudioPlayer(manuf, mod, ser) {
        recording = false;
    }

    bool AudioPlayerRecorder::isRecording() {
        return recording;
    }

    void AudioPlayerRecorder::startRecording() {
        recording = true;
        std::cout << "This recorder is currently recording. \n";
    }

    void AudioPlayerRecorder::stopRecording() {
        recording = false;
        std::cout << "This recorder has stopped recording. \n";
    }
    std::string AudioPlayerRecorder::to_string() {
	    return "AudioPlayerRecorder: " + getManufacturerName() + ", " 
                + getModelName() + ", " + getSerialNumber() + ", ";
    }
    