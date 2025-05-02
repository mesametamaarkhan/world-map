#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SFML/Audio.hpp>
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

//to manage sound effects and music
class SoundManager {
private:
    sf::SoundBuffer buffer;
    sf::Sound sound;

public:
    SoundManager(string filePath) {
        buffer.loadFromFile("music/jazz.wav");
        sound.setBuffer(buffer);
    }

    //play a loaded sound
    void playSound() {
        sound.play();
    }

    void setLoop() {
        sound.setLoop(1);
    }

    void setVolume(float volume) {
        sound.setVolume(volume);
    }

    ~SoundManager() = default;

};

#endif
