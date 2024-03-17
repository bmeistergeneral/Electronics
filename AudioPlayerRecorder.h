#include <iostream>
#pragma once
#ifndef AUDIOPLAYERRECORDER_H
#define AUDIOPLAYERRECORDER_H

#include "AudioPlayer.h"

class AudioPlayerRecorder : public AudioPlayer {

private:
    bool recording;


public:
    AudioPlayerRecorder(std::string manuf, std::string mod, std::string ser);

    bool isRecording();
    void startRecording();
    void stopRecording();
    
    std::string to_string();
};

#endif