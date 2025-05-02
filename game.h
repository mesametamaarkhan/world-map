#ifndef GAME_H
#define GAME_H

#include "worldmap.h"
#include "sfmlutilities.h"
#include "soundmanager.h"

//game class controls the flow of the game
//it is basically the center of the game
class Game {
private:
    WorldMap worldMap;

public:
    Game() {

    }

    //this function is executed to set up the whole world
    //it basically creates the necessary objects for the game to run smooth
    //it creates countries,continents and the worldmap
    void setWorld() {
        //asia
        ContinentMap* asia = new ContinentMap("Asia", "img/asia.png");

        Country* country = new Country("Israel", 9000000, 20770.0, 2, "img/asia/1.png");
        asia->addCountry(country);

        country = new Country("Saudi Arabia", 34000000, 2149690.0, 4, "img/asia/2.png");
        asia->addCountry(country);

        country = new Country("Qatar", 2900000, 11586.0, 2, "img/asia/3.png");
        asia->addCountry(country);

        country = new Country("UAE", 9300000, 83600.0, 3, "img/asia/4.png");
        asia->addCountry(country);

        country = new Country("Iran", 84000000, 1648195.0, 157, "img/asia/5.png");
        asia->addCountry(country);

        country = new Country("Kazakhstan", 18000000, 2724900.0, 226, "img/asia/6.png");
        asia->addCountry(country);

        country = new Country("Pakistan", 225000000, 881913.0, 10, "img/asia/7.png");
        asia->addCountry(country);

        country = new Country("India", 1300000000, 3287260.0, 74, "img/asia/8.png");
        asia->addCountry(country);

        country = new Country("China", 1400000000, 9596960.0, 546, "img/asia/9.png");
        asia->addCountry(country);

        country = new Country("Vietnam", 97000000, 331212.0, 6, "img/asia/10.png");
        asia->addCountry(country);

        country = new Country("Taiwan", 23000000, 36190.0, 0, "img/asia/11.png");
        asia->addCountry(country);

        country = new Country("Philippines", 113000000, 300000.0, 23, "img/asia/12.png");
        asia->addCountry(country);

        country = new Country("South Korea", 51000000, 100210.0, 323, "img/asia/13.png");
        asia->addCountry(country);

        country = new Country("Japan", 126000000, 377975.0, 439, "img/asia/14.png");
        asia->addCountry(country);

        worldMap.addContinent(asia);

        //europe
        ContinentMap* europe = new ContinentMap("Europe", "img/europe.png");

        country = new Country("Portugal", 10300000, 92090.0, 24, "img/europe/1.png");
        europe->addCountry(country);

        country = new Country("Ireland", 4900000, 70280.0, 31, "img/europe/2.png");
        europe->addCountry(country);

        country = new Country("Spain", 47000000, 505990.0, 150, "img/europe/3.png");
        europe->addCountry(country);

        country = new Country("United Kingdom", 56000000, 130395.0, 916, "img/europe/4.png");
        europe->addCountry(country);

        country = new Country("France", 67000000, 551695.0, 840, "img/europe/5.png");
        europe->addCountry(country);

        country = new Country("Netherlands", 17500000, 41850.0, 287, "img/europe/6.png");
        europe->addCountry(country);

        country = new Country("Belgium", 11500000, 30280.0, 148, "img/europe/7.png");
        europe->addCountry(country);

        country = new Country("Switzerland", 8700000, 41290.0, 192, "img/europe/8.png");
        europe->addCountry(country);

        country = new Country("Germany", 83000000, 357022.0, 1346, "img/europe/9.png");
        europe->addCountry(country);

        country = new Country("Denmark", 5800000, 42930.0, 194, "img/europe/10.png");
        europe->addCountry(country);

        country = new Country("Norway", 5400000, 148729.0, 472, "img/europe/11.png");
        europe->addCountry(country);

        country = new Country("Austria", 8900000, 83879.0, 234, "img/europe/12.png");
        europe->addCountry(country);

        country = new Country("Italy", 60000000, 301340.0, 696, "img/europe/13.png");
        europe->addCountry(country);

        country = new Country("Slovenia", 2100000, 20270.0, 30, "img/europe/14.png");
        europe->addCountry(country);

        country = new Country("Czech Republic", 10700000, 78870.0, 62, "img/europe/15.png");
        europe->addCountry(country);

        country = new Country("Croatia", 4000000, 56960.0, 33, "img/europe/16.png");
        europe->addCountry(country);

        country = new Country("Bosnia", 3300000, 51129.0, 0, "img/europe/17.png");
        europe->addCountry(country);

        country = new Country("Slovakia", 5400000, 49035.0, 4, "img/europe/18.png");
        europe->addCountry(country);

        country = new Country("Serbia", 6700000, 77474.0, 9, "img/europe/19.png");
        europe->addCountry(country);

        country = new Country("Hungary", 9700000, 93030.0, 175, "img/europe/20.png");
        europe->addCountry(country);

        country = new Country("Poland", 38000000, 312696.0, 70, "img/europe/21.png");
        europe->addCountry(country);

        country = new Country("Romania", 19000000, 238397.0, 89, "img/europe/22.png");
        europe->addCountry(country);

        country = new Country("Ukraine", 41000000, 603500.0, 36, "img/europe/23.png");
        europe->addCountry(country);

        country = new Country("Bulgaria", 6900000, 110879.0, 52, "img/europe/24.png");
        europe->addCountry(country);

        country = new Country("Greece", 10400000, 131957.0, 33, "img/europe/25.png");
        europe->addCountry(country);

        country = new Country("Turkey", 83000000, 783356.0, 41, "img/europe/26.png");
        europe->addCountry(country);

        country = new Country("Lithuania", 2800000, 65300.0, 6, "img/europe/27.png");
        europe->addCountry(country);

        country = new Country("Estonia", 1300000, 45227.0, 2, "img/europe/28.png");
        europe->addCountry(country);

        country = new Country("Finland", 5500000, 338424.0, 101, "img/europe/29.png");
        europe->addCountry(country);

        country = new Country("Sweden", 10400000, 450295.0, 206, "img/europe/30.png");
        europe->addCountry(country);

        worldMap.addContinent(europe);

        //africa
        ContinentMap* africa = new ContinentMap("Africa", "img/africa.png");

        country = new Country("Gambia", 2400000, 10689.0, 0, "img/africa/1.png");
        africa->addCountry(country);

        country = new Country("Senegal", 17000000, 196722.0, 0, "img/africa/2.png");
        africa->addCountry(country);

        country = new Country("Morocco", 36000000, 446550.0, 6, "img/africa/3.png");
        africa->addCountry(country);

        country = new Country("Burkina Faso", 21000000, 274200.0, 0, "img/africa/4.png");
        africa->addCountry(country);

        country = new Country("Algeria", 43000000, 2381741.0, 17, "img/africa/5.png");
        africa->addCountry(country);

        country = new Country("Nigeria", 206000000, 923768.0, 3, "img/africa/6.png");
        africa->addCountry(country);

        country = new Country("Tunisia", 11800000, 163610.0, 4, "img/africa/7.png");
        africa->addCountry(country);

        country = new Country("Cameroon", 27000000, 475442.0, 3, "img/africa/8.png");
        africa->addCountry(country);

        country = new Country("South Africa", 60000000, 1219090.0, 26, "img/africa/9.png");
        africa->addCountry(country);

        country = new Country("Zimbabwe", 15000000, 390757.0, 8, "img/africa/10.png");
        africa->addCountry(country);

        country = new Country("Egypt", 100000000, 1001450.0, 7, "img/africa/11.png");
        africa->addCountry(country);

        country = new Country("Uganda", 45000000, 241038.0, 2, "img/africa/12.png");
        africa->addCountry(country);

        country = new Country("Tanzania", 60000000, 947303.0, 0, "img/africa/13.png");
        africa->addCountry(country);

        country = new Country("Kenya", 54000000, 580367.0, 103, "img/africa/14.png");
        africa->addCountry(country);

        country = new Country("Ethiopia", 117000000, 1104300.0, 45, "img/africa/15.png");
        africa->addCountry(country);

        country = new Country("Djibouti", 1000000, 23180.0, 0, "img/africa/16.png");
        africa->addCountry(country);

        worldMap.addContinent(africa);

        //north america
        ContinentMap* northAmerica = new ContinentMap("North America", "img/north-america.png");

        country = new Country("Canada", 38000000, 9984670.0, 73, "img/north-america/1.png");
        northAmerica->addCountry(country);

        country = new Country("USA", 331000000, 9631418.0, 1127, "img/north-america/2.png");
        northAmerica->addCountry(country);

        country = new Country("Mexico", 126000000, 1964375.0, 13, "img/north-america/3.png");
        northAmerica->addCountry(country);

        country = new Country("Guatemala", 18000000, 108889.0, 0, "img/north-america/4.png");
        northAmerica->addCountry(country);

        country = new Country("Costa Rica", 5000000, 51100.0, 1, "img/north-america/5.png");
        northAmerica->addCountry(country);

        country = new Country("Cuba", 11000000, 109884.0, 78, "img/north-america/6.png");
        northAmerica->addCountry(country);

        country = new Country("Jamaica", 2900000, 10991.0, 20, "img/north-america/7.png");
        northAmerica->addCountry(country);

        country = new Country("Dominican Republic", 10800000, 48670.0, 9, "img/north-america/8.png");
        northAmerica->addCountry(country);

        worldMap.addContinent(northAmerica);

        //south america
        ContinentMap* southAmerica = new ContinentMap("South America", "img/south-america.png");

        country = new Country("Colombia", 51000000, 1138910.0, 5, "img/south-america/1.png");
        southAmerica->addCountry(country);

        country = new Country("Ecuador", 17000000, 276841.0, 2, "img/south-america/2.png");
        southAmerica->addCountry(country);

        country = new Country("Peru", 33000000, 1285220.0, 1, "img/south-america/3.png");
        southAmerica->addCountry(country);

        country = new Country("Suriname", 600000, 163820.0, 1, "img/south-america/4.png");
        southAmerica->addCountry(country);

        country = new Country("Brazil", 213000000, 8515770.0, 30, "img/south-america/5.png");
        southAmerica->addCountry(country);

        country = new Country("Bolivia", 11000000, 1098580.0, 0, "img/south-america/6.png");
        southAmerica->addCountry(country);

        country = new Country("Uruguay", 3500000, 176220.0, 2, "img/south-america/7.png");
        southAmerica->addCountry(country);

        country = new Country("Argentina", 45000000, 2780400.0, 21, "img/south-america/8.png");
        southAmerica->addCountry(country);

        worldMap.addContinent(southAmerica);

        //oceania
        ContinentMap* oceania = new ContinentMap("Oceania", "img/oceania.png");

        country = new Country("Australia", 25000000, 7692024.0, 147, "img/oceania/1.png");
        oceania->addCountry(country);

        country = new Country("Fiji", 900000, 18274.0, 1, "img/oceania/2.png");
        oceania->addCountry(country);

        country = new Country("New Zealand", 5000000, 268021.0, 46, "img/oceania/3.png");
        oceania->addCountry(country);

        worldMap.addContinent(oceania);

    }

    void run(SFMLUtilities& sfmlUtilities, SoundManager& bgMusic) {
        setWorld();
        int mouseclick = 0;
        int continentIndex = -1;
        int countryIndex = -1;
        bool continent = false;

        bgMusic.setVolume(50);
        bgMusic.setLoop();
        bgMusic.playSound();

        //game rendering loop
        while (sfmlUtilities.getWindow().isOpen()) {
            sfmlUtilities.handleInput(mouseclick, continentIndex, continent, countryIndex);
            sfmlUtilities.clear();
            if (mouseclick > 2) {
                return;
            }
            else if (mouseclick == 2) {
                continent = false;
                worldMap.displaySelectedCountries(sfmlUtilities, 200.0f, 400.0f, continentIndex, countryIndex);
            }
            else if (mouseclick == 1) {
                worldMap.displaySelected(sfmlUtilities, 10.0f, 10.0f, continentIndex);
                continent = true;
            }
            else {
                worldMap.display(sfmlUtilities, 10.0f, 10.0f);
            }

            sfmlUtilities.display();
        }
    }

    ~Game() = default;
};

#endif
