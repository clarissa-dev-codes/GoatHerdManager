#include <iostream>
#include <vector>

#include "Breeding.h"

using namespace std;

//setters
void Breeding::setExposeDate(string date){
    breed.dateExposed = date;
} 

void Breeding::setExposeTo(string name){
    breed.exposedTo = name;
}

void Breeding::setDueDate(string date){
    breed.dueDate = date;
}

void Breeding::setKidsNum(int num){
    breed.kidsNum = num;
}

void Breeding::setKidsNames(vector<string> list){
    
}

//getters
string Breeding::getExposeDate(){
    return breed.dateExposed;
}

string Breeding::getExposeTo(){
    return breed.exposedTo;
}

string Breeding::getDueDate(){
    return breed.dueDate;
}

int Breeding::getKidsNum(){
    return breed.kidsNum;
}

void Breeding::getKidsNames(){

}

string Breeding::getOneName(){

}