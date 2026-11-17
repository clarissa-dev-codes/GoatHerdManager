#include "Maintenance.h"

/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ Getters ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */
string Maintenance::getHoovesNotes(){
    return stuff.hoovesNotes;
}

int Maintenance::getFamancha(){
    return stuff.famancha;
}

string Maintenance::getSkin(){
    return stuff.skin;
}

string Maintenance::getFur(){
    return stuff.fur;
}

string Maintenance::getNotes(){
    return stuff.notes;
}

/* ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ♥ Setters ♥ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ */
void Maintenance::setHoovesNotes(string hoofNotes){
    stuff.hoovesNotes = hoofNotes;
}

void Maintenance::setFamancha(int score){
    stuff.famancha = score;
}

void Maintenance::setSkin(string skinNotes){
    stuff.skin = skinNotes;
}

void Maintenance::setFur(string furNotes){
    stuff.fur = furNotes;
}

void Maintenance::setNotes(string notes){
    stuff.notes = notes;
}