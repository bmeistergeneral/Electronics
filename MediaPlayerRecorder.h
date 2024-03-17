#include <iostream>
#pragma once
#ifndef MEDIAPLAYERRECORDER_H
#define MEDIAPLAYERRECORDER_H

#include "MediaPlayer.h"

class MediaPlayerRecorder : public MediaPlayer {

private:
    bool recording;

public:
    MediaPlayerRecorder(int pixLen, int pixWid, int frRate, std::string manuf, std::string mod, std::string ser);

    bool isRecording();
    void startRecording();
    void stopRecording();
    
   std::string to_string();
};

#endif