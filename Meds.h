#ifndef MEDS_H
#define MEDS_H

#include <iostream>
using namespace std;


class Meds{
    private:
    //meds for individual goats
        struct Med{
            string date;
            bool prevent;
            bool treat;
            string medName;
            float dose;
            string notes;
        } newMeds;

    public:
        //getters
        string getDate();
        bool getPrevent();
        bool getTreat();
        string getMedName();
        float getDose();
        string getNotes();

        //setters
        void setDate(string);
        void setPrevent(bool);
        void setTreat(bool);
        void setMedName(string);
        void setDose(float);
        void setNotes(string);
};

#endif