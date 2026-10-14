#include <iostream>
#include "Meds.h"

using namespace std;


//setters 
void Meds::setDate(string date) {
    newMeds.date = date;
}

void Meds::setPrevent(bool prevent) {
    newMeds.prevent = prevent;
}

void Meds::setTreat(bool treat) {
    newMeds.treat = treat;
}

void Meds::setMedName(string medName) {
    newMeds.medName = medName;
}

void Meds::setDose(float dose) {
    newMeds.dose = dose;
}

void Meds::setNotes(string notes) {
    newMeds.notes = notes;
}

//getters
string Meds::getDate() {
    return newMeds.date;
}

bool Meds::getPrevent() {
    return newMeds.prevent;
}

bool Meds::getTreat() {
    return newMeds.treat;
}

string Meds::getMedName() {
    return newMeds.medName;
}

float Meds::getDose() {
    return newMeds.dose;
}

string Meds::getNotes() {
    return newMeds.notes;
}