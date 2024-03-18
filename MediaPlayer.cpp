#include "MediaPlayer.h"

    MediaPlayer::MediaPlayer(int pixLen, int pixWid, int frRate, std::string manuf, std::string mod, std::string ser) : AudioPlayer(manuf, mod, ser) {
    
        lengthInPixels = pixLen;
        widthInPixels = pixWid;
        frameRate = frRate;
    }

    int MediaPlayer::getPixelLength() {
        return lengthInPixels;
    }
 
    int MediaPlayer::getPixelWidth() {
        return widthInPixels;
    }
 
    bool MediaPlayer::hasColorDisplay() {
        return true;
    }
 
    int MediaPlayer::getFrameRate() {
        return frameRate;
    }

    bool MediaPlayer::playVideo(std::string video) {
        std::cout << "I am currently playing the video: \n" << video;
        return true;
    }

    std::string MediaPlayer::to_string() {
	    return "MediaPlayer: " + getManufacturerName() + ", " 
                + getModelName() + ", " + getSerialNumber() + ", " 
                + std::to_string(getPixelLength()) + ", " + std::to_string(getPixelWidth());
    }
