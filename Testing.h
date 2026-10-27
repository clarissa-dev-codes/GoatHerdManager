#ifndef TESTING_H
#define TESTING_H

#include <iostream>

using namespace std;


//all testing
struct Tests{
    string date;
    string test;
    string results;
    string notes;
};

class Testing{
    public:
        //getting
        string getDate();
        string getTest();
        string getResults();
        string getNotes();


        //setting
        void setDate(string);
        void setTest(string);
        void setResults(string);
        void setNotes(string);
};

#endif