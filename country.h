#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include "sfmlutilities.h"
using namespace std;

//country class to store country information
//used in continent class 
class Country {
private:
    string name;
    int population;
    float area;
    int olympicMedalsWon;
    sf::Texture flagTexture;
    sf::Sprite flagSprite;

public:
    Country(const string& countryName, int countryPopulation, float countryArea, int medalsWon, string path) {
        name = countryName;
        population = countryPopulation;
        area = countryArea;
        olympicMedalsWon = medalsWon;
        flagTexture.loadFromFile(path);
        flagSprite.setTexture(flagTexture);
        flagSprite.setScale(2, 2);
        flagSprite.setPosition(490, 215);
    }

    //getter functions
    string getName() const {
        return name;
    }

    int getPopulation() const {
        return population;
    }

    float getArea() const {
        return area;
    }

    //display information about the country
    void draw(SFMLUtilities& sfmlUtilities, float x, float y) {
        sfmlUtilities.drawInfoBackground();
        sfmlUtilities.drawFlagSprite(flagSprite);
        sfmlUtilities.drawText("\t\t\t\t\t\t\t\t\tCountry: " + name + "\n\t\t\t\t\t\t\t\t\tPopulation: " + std::to_string(population) +
            "\n\t\t\t\t\tArea: " + std::to_string(area) + " square kilometers" + "\n\t\t\t\t\t\t\t\tOlympic Medals Won: " + std::to_string(olympicMedalsWon), x, y);
    }

    ~Country() = default;
};

#endif