#ifndef WHOLEHERD_H
#define WHOLEHERD_H

#include <iostream>
#include <vector>

#include "Goat.h"

using namespace std;



class WholeHerd{
    private:

        struct HerdNum{
            int boughtNum;
            int soldNum;
            int tradedNum;
            int deathsNum;
            int bornNum;
        };

        struct bought{
            vector<string> listOfBought;
        };

        struct sold{
            vector<string> listOfSold;
        };

        struct traded{
            vector<string> listOfTraded;
        };

        struct deaths{
            vector<string> listOfDeaths;
        };

        struct born{
            vector<string> listOfBorn;
        };

        //list of the whole herd
        vector<Goat> wholeHerd;

    public:
        //getters
        int getBoughtNum() const;
        int getSoldNum() const;
        int getTradedNum() const;
        int getDeathsNum() const;
        int getBornNum() const;

        vector<string> getListOfBought() const;
        vector<string> getListOfSold() const;
        vector<string> getListOfTraded() const;
        vector<string> getListOfDeaths() const;
        vector<string> getListOfBorn() const;
        
        //setters
        void setBoughtNum(int);
        void setSoldNum(int);
        void setTradedNum(int);
        void setDeathsNum(int);
        void setBornNum(int);

        void setListOfBought(vector<string>);
        void setListOfSold(vector<string>);
        void setListOfTraded(vector<string>);
        void setListOfDeaths(vector<string>);
        void setListOfBorn(vector<string>);

        //whole herd list
        void addToHerd(Goat);
        void showHerdList() const; //acts like a print function, but only shows names
        Goat search(string name); //should search for the goat by name and return the whole struct
};

#endif