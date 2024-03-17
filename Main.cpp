#include <iostream>
#include <string>
#include "AudioPlayer.h"

int main() {
    AudioPlayer earbuds("Apple", "Airpods", "6346782yehdby7374");
    std::cout << "Serial number: " << earbuds.getSerialNumber() << "\n";
}