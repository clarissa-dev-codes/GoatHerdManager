#ifndef FEMALES_H
#define FEMALES_H

#include <iostream>
#include "Goat.h"
#include "Breeding.h"
using namespace std;

struct Female{
    Goat fgoat;
    Breeding breed; //one object, def need it to be different for each breeding. 
                    //  it does need to save each one though. That might be a problem

                    // Well, unless I save each on to the database instantly. That might work and 
                    //  just have the one object for the current breeding or the one that I'm 
                    //  actually dealing with
};

class Females{
   Breeding getBreedingInfo();
   

   void setBreedingInfo();

   //goat viewing is virtual in the goat header
   virtual void viewGoat();

};

#endif