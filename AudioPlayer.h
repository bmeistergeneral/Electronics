#include <iostream>
#pragma once
#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include "ElectronicDevice.h"

class AudioPlayer: public ElectronicDevice {

private:
    int level;
    int length;
    
public:
    
    AudioPlayer(std::string manuf, std::string mod, std::string ser);
    
    int getSoundLevel();
    void setSoundLevel(int l);
    int getSoundLength();
    bool playSound(std::string sound);
    void stopSound();

    std::string to_string();
};

#endif
