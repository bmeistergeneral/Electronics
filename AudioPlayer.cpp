#include <iostream>
#include "AudioPlayer.h"

// using namespace std;

class Player: public ElectronicDevice {
    
    private:
        int level;
        int length;
        int storage;

    bool playSound(std::string sound) {
        // cout << "I am currently playing the sound: \n" << sound;
        return true;
    }

    void stopSound() {
        std::cout << "Stopping sound... \n";
    }

    int getSoundLevel() {
        return level;
    }

    void setSoundLevel(int l) {
        level = l;
    }

    int getSoundLength() {
        return length;
    }

    int getMemoryStorage() {
        return storage;
    }

    void setMemoryStorage(int s) {
        storage = s;
    }
    
    // std::string to_string() 
};