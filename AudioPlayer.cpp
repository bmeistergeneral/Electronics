#include "AudioPlayer.h"
#include <string>

    AudioPlayer::AudioPlayer(std::string manuf, std::string mod, std::string ser) : ElectronicDevice(manuf, mod, ser) {
        level = 8;
        length = 0;
    }

    bool AudioPlayer::playSound(std::string sound) {
        std::cout << "I am currently playing the sound: \n" << sound;
        return true;
    }

    void AudioPlayer::stopSound() {
        std::cout << "Stopping sound... \n";
    }

    int AudioPlayer::getSoundLevel() {
        return level;
    }

    void AudioPlayer::setSoundLevel(int l) {
        level = l;
    }

    int AudioPlayer::getSoundLength() {
        return length;
    }
    
    std::string AudioPlayer::to_string() {
	    return "AudioPlayer: " + getManufacturerName() + ", " 
                + getModelName() + ", " + getSerialNumber() + ", " 
                + std::to_string(getSoundLevel()) + ", " + std::to_string(getSoundLength());
    }
