#include <iostream>
#include <string>
#include "AudioPlayer.h"
#include "MediaPlayer.h"
#include "AudioPlayerRecorder.h"
#include "MediaPlayerRecorder.h"

int main() {
    AudioPlayer earbuds("Apple", "Airpods", "6346782yehdby7374");
    std::cout << "Serial number: " << earbuds.getSerialNumber() << "\n";
    MediaPlayer television(1920, 1080, 240, "Vizio", "E220VA", "LTTXGEUN0501415");
    std::cout << "Model number: " << television.getModelName() << "\n";
    AudioPlayerRecorder headset("Sony", "DT 770 PRO", "isutf7w983y7rh");
    std::cout << "Manufacturer: " << headset.getManufacturerName() << "\n";
    MediaPlayerRecorder computer(2560, 1600, 60, "Apple", "Macbook Pro", "C02V13VWHV2M");
    std::cout << "Frame rate: " << computer.getFrameRate() << "\n";
    MediaPlayerRecorder ipad(2732, 2048, 60, "Apple", "iPad Pro 12.9 inch", "2H7aBGd4a6STl");
    std::cout << "Serial number: " << ipad.getSerialNumber() << "\n";
    MediaPlayerRecorder camera(4096, 2160, 7, "Canon", "EOS 5D Mark IV Body", "023010096");
    std::cout << "Pixel width: " << camera.getPixelWidth() << "\n";
}