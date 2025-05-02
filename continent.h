#ifndef CONTINENT_H
#define CONTINENT_H

#include <vector>
#include "country.h"
#include "sfmlutilities.h"
using namespace std;

//abstract class inherited by continent map class
//stores continent basic information
class Continent {
private:
    string name;
    vector<Country*> countries;

public:
    Continent(const string& name) : name(name) {

    }

    //getter functions
    vector<Country*>& getCountries() {
        return countries;
    }

    string getName() const {
        return name;
    }

    //adding country
    void addCountry(Country* country) {
        countries.push_back(country);
    }

    //virtual functions
    virtual void display(SFMLUtilities& sfmlUtilities, float x, float y) = 0;

    virtual void draw(SFMLUtilities& sfmlUtilities, float x, float y, int z) = 0;

    ~Continent() = default;
};

#endif