#include <iostream>
#pragma once
#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include "AudioPlayer.h"

class MediaPlayer: public AudioPlayer {

private:
        int lengthInPixels;
        int widthInPixels;
        int frameRate;

public:
    MediaPlayer(int pixLen, int pixWid, int frRate, std::string manuf, std::string mod, std::string ser);

    int getFrameRate();
    bool hasColorDisplay();
    int getPixelLength();
    int getPixelWidth();

    bool playVideo(std::string video);

    std::string to_string();
};

#endif