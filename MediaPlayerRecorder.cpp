#include "MediaPlayerRecorder.h"

   MediaPlayerRecorder::MediaPlayerRecorder(int pixLen, int pixWid, int frRate, std::string manuf, std::string mod, std::string ser) : MediaPlayer(pixLen, pixWid, frRate, manuf, mod, ser) {
        recording = false;
    }
    
    bool MediaPlayerRecorder::isRecording() {
        return recording;
    }

    void MediaPlayerRecorder::startRecording() {
        recording = true;
        std::cout << "This recorder is currently recording. \n";
    }

    void MediaPlayerRecorder::stopRecording() {
        recording = false;
        std::cout << "This recorder has stopped recording. \n";
    }