#include <iostream>
#include "ElectronicDevice.h"

// using namespace std;

class AudioPlayer: public ElectronicDevice {

public:
    int getSoundLevel();
    void setSoundLevel(int l);
    int getSoundLength();
    bool playSound(std::string sound);
    void stopSound();

    std::string to_string();

private:
    int getMemoryStorage();
    void setMemoryStorage(int s);
};
