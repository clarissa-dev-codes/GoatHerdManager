#ifndef BREEDING_H
#define BREEDING_H

#include <iostream>
#include <vector>
using namespace std;


struct Breed{
        string dateExposed;
        string exposedTo;
        string dueDate;
        int kidsNum;
        vector<string> kidsNames; //not the same as listOfKids because that is all kids and for all
                                  //  the goats
    };

//needs to be implemented for each breeding. So that will need to be a thing
class Breeding{
    private:

    public:
    //not free functions
    //setters
    void setExposeDate(string);
    void setExposeTo(string);
    void setDueDate(string);
    void setKidsNum(int);
    void setKidsNames(vector<string>);

    //getters
    string getExposeDate();
    string getExposeTo();
    string getDueDate();
    int getKidsNum();
    void getKidsNames(); //needs to be a print function since you can't pass a vector I think
    

    string getOneName(); //returns one kids name based on list 
};

#endif