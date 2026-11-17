#include "Testing.h"


/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ getters ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */

string Testing::getDate(){
    return test.date;
}

string Testing::getTest(){
    return test.test;
}

string Testing::getResults(){
    return test.results;
}

string Testing::getNotes(){
    return test.notes;
}

/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ setters ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */
void Testing::setDate(string date){
    test.date = date;
}

void Testing::setTest(string testName){
    test.test = testName;
}

void Testing::setResults(string results){
    test.results = results;
}

void Testing::setNotes(string notes){
    test.notes = notes;
}