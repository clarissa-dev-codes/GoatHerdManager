#ifndef MALES_H
#define MALES_H

#include <iostream>
#include "Goat.h"
using namespace std;

//specifically male goats and wethers
struct Male{
    Goat goat;
    bool isCastrated;
    string castrationDate;
};

class Males{
    private:
        Male mgoat;
    public:
        //getters
        bool isCastrated();
        string getCastrationDate();

        //setters
        void setIsCastrated(bool);
        void setCastrationDate(string);

        //goat viewing is virtual in the goat header
        virtual void viewGoat();
};

#endif