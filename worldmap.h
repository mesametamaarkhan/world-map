#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <vector>
#include "continentmap.h"
#include "sfmlutilities.h"

//worldmap class stores the whole game world
class WorldMap {
private:
    std::vector<ContinentMap*> continents;
    sf::Texture worldMapTexture;
    sf::Sprite worldMapSprite;

public:
    WorldMap() {
        SFMLUtilities sfmlUtilities;
        continents = {};
        sfmlUtilities.loadTexture(worldMapTexture, "img/worldmap.png");
        worldMapSprite.setTexture(worldMapTexture);
    }


    //display the entire world map
    void display(SFMLUtilities& sfmlUtilities, float x, float y) const {
        sfmlUtilities.drawContinentRectangles();
        sfmlUtilities.drawSprite(worldMapSprite);
    }

    //adding continents
    void addContinent(ContinentMap* continent) {
        continents.push_back(continent);
    }

    //display selected continent
    void displaySelected(SFMLUtilities& sfmlUtilities, float x, float y, int z) {
        if (continents.size() != 0) {
            continents[z]->display(sfmlUtilities, x, y);
        }
    }

    //displays selected countries through continents
    void displaySelectedCountries(SFMLUtilities& sfmlUtilities, float x, float y, int z1, int z2) {
        if (continents.size() != 0) {
            continents[z1]->draw(sfmlUtilities, x, y, z2);
        }
    }

    ~WorldMap() = default;
};

#endif