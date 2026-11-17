#ifndef GOAT_H
#define GOAT_H

#include <iostream>
#include <vector>

#include "Testing.h"
#include "Maintenance.h"
#include "Meds.h"
#include "Breeding.h"

using namespace std;

//individual goats
struct Goat{
    string name;
    string DOB;
    string sex;
    string color;
    string markings;
    bool isPolled;
    string tattooLeft;
    string tattooRight;
    string dam;
    string sire;
    bool bornOnFarm;
    string purchasedFrom;
    double birthWeight;
    bool isDisbudded = false; //default will be false since they don't come that way
    string disbuddingDate;

    //use the functions in that class for that
    Testing test;
    Meds medsList;
    Maintenance maintain;
};

/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ Consolidated from Females and Males ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */
//for the female goats
struct Female{
    Goat fGoat;
    bool milk = false;
    Breeding Breed; //one object, def need it to be different for each breeding. 
                    //  it does need to save each one though. That might be a problem

                    // Well, unless I save each on to the database instantly. That might work and 
                    //  just have the one object for the current breeding or the one that I'm 
                    //  actually dealing with
};

//for the male goats (both bucks and wethers)
struct Male{
    Goat mGoat;
    bool isCastrated;
    string castrationDate;
};

//gives each goat a list of their children
struct Children{
    vector<string> listOfChildren;
};

class Goats{
    private:
        Goat goat;
        Children children;
        
    public:
        
        //setters (void with parameters)
        void setName(string);
        void setDOB(string);
        void setSex(string);
        void setColor(string);
        void setMarkings(string);
        void setIsPolled(bool);
        void setTattooLeft(string);
        void setTattooRight(string);
        void setDam(string);
        void setSire(string);
        void setBornOnFarm(bool);
        void setPurchasedFrom(string);
        void setBirthWeight(double);
        void setIsDisbudded(bool);
        void setDisbuddingDate(string);

        //getters (not void, no parameters)
        string getName() const;
        string getDOB() const;
        string getSex() const;
        string getColor() const;
        string getMarkings() const;
        bool getIsPolled() const;
        string getTattooLeft() const;
        string getTattooRight() const;
        string getDam() const;
        string getSire() const;
        bool getBornOnFarm() const;
        string getPurchasedFrom() const;
        double getBirthWeight() const;
        bool getIsDisbudded() const;
        string getDisbuddingDate() const;

        //getter for testing, meds, and maintenance
        Testing getTesting() const;
        Meds getMeds() const;
        Maintenance getMaintenance() const;

        //setter for testing, meds, and maintenance
        void setTesting(const Testing&);
        void setMeds(const Meds&);
        void setMaintenance(const Maintenance&);

        //setter for vector of children
        void setListOfChildren(vector<string>);

        //getter for vector of children
        vector<string> getListOfChildren() const;

        //virtual functions
        virtual void printInfo() const;
};

/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ Consolidated from Females and Males headers ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */
//female goats
class Females{
    private:
        Female fgoats;

    public:
        Breeding getBreedingInfo();
        void setBreedingInfo();

        void setMilk(bool answer);
        bool getMilk();

        //goat viewing is virtual in the goat header
        virtual void viewGoat();
};

//male goats
class Males{
    private:
        Male mgoats;

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