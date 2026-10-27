#ifndef WHOLEHERD_H
#define WHOLEHERD_H

#include <iostream>
#include <vector>

#include "Goat.h"

using namespace std;


struct HerdNum{
    int boughtNum;
    int soldNum;
    int tradedNum;
    int deathsNum;
    int bornNum;
};         

class WholeHerd{
    private:
        HerdNum numbers;
        vector<string> listOfBought;
        vector<string> listOfSold;
        vector<string> listOfTraded;
        vector<string> listOfDeaths;
        vector<string> listOfBorn;

        //list of the whole herd
        vector<Goat> wholeHerd;

    public:
        //getters
        int getBoughtNum() const;
        int getSoldNum() const;
        int getTradedNum() const;
        int getDeathsNum() const;
        int getBornNum() const;

        //whole list
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

        //adding to the lists
        void setListOfBought(vector<string>);
        void setListOfSold(vector<string>);
        void setListOfTraded(vector<string>);
        void setListOfDeaths(vector<string>);
        void setListOfBorn(vector<string>);

        //whole herd list
        
        void addToHerd(Goat);
        void showHerdList() const; //acts like a print function, but only shows names
        Goat searchHerd(string name); //should search for the goat by name and return the whole struct
};

#endif