#ifndef MENU_H
#define MENU_H

#include "sfmlutilities.h"
#include "game.h"
#include "soundmanager.h"
//menu class handles the menu of the game and the initial screens
//once the game is started complete control is transferred over to game
class Menu {
private:
    sf::Sprite menuSprite;
    sf::Texture tex;

public:
    Menu(sf::String filePath) {
        tex.loadFromFile(filePath);
        menuSprite.setTexture(tex);
    }

    void run(SFMLUtilities& sfmlUtilities) {
        int mouseClick = 0;
        SoundManager bgMusic("music/jazz.wav");
        bgMusic.setVolume(50);
        bgMusic.setLoop();
        bgMusic.playSound();

        //menu rendering loop
        while (sfmlUtilities.getWindow().isOpen()) {
            sfmlUtilities.handleMenuInput(mouseClick);
            sfmlUtilities.clear();
            if (mouseClick == 1) {
                Game g;
                g.run(sfmlUtilities, bgMusic);
                mouseClick = 0;
            }
            sfmlUtilities.drawSprite(menuSprite);

            sfmlUtilities.display();
        }
    }

    ~Menu() = default;
};

#endif
