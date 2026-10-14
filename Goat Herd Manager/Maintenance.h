#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <iostream>

using namespace std;

//maintence for individual stuff
struct Maint {
    string hoovesNotes;
    int famancha;
    string skin;
    string fur;
    string notes;
};

class Maintenance{
    public:
        //getters
        string getHoovesNotes();
        int getFamancha();
        string getSkin();
        string getFur();
        string getNotes();

        //setters
        void setHoovesNotes(string);
        void setFamancha(int);
        void setSkin(string);
        void setFur(string);
        void setNotes(string);
};
#endif