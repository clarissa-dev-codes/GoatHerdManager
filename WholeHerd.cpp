#include <iostream>
#include <vector> //feels like I need it
#include <algorithm> //for the find function for searching vectors
#include "WholeHerd.h"

using namespace std;

//getters
int WholeHerd::getBoughtNum() const{
    return numbers.boughtNum;
}

int WholeHerd::getSoldNum() const{
    return numbers.soldNum;
}

int WholeHerd::getTradedNum() const{
    return numbers.tradedNum;
}

int WholeHerd::getDeathsNum() const{
    return numbers.deathsNum;
    
}

int WholeHerd::getBornNum() const{
    return numbers.deathsNum;
}

//whole list
vector<string> WholeHerd::getListOfBought() const{

}

vector<string> WholeHerd::getListOfSold() const{

}

vector<string> WholeHerd::getListOfTraded() const{

}

vector<string> WholeHerd::getListOfDeaths() const{

}

vector<string> WholeHerd::getListOfBorn() const{

}


//setters
void WholeHerd::setBoughtNum(int num){
    numbers.boughtNum = numbers.boughtNum + num;
}

void WholeHerd::setSoldNum(int num){
    numbers.soldNum = numbers.soldNum + num;
}

void WholeHerd::setTradedNum(int num){
    numbers.tradedNum = numbers.tradedNum + num;
}

void WholeHerd::setDeathsNum(int num){
    numbers.deathsNum = numbers.deathsNum + num;
}

void WholeHerd::setBornNum(int num){
    numbers.bornNum = numbers.bornNum + num;
}

//adding to the lists
void WholeHerd::setListOfBought(vector<string>){

}

void WholeHerd::setListOfSold(vector<string>){

}

void WholeHerd::setListOfTraded(vector<string>){

}

void WholeHerd::setListOfDeaths(vector<string>){

}

void WholeHerd::setListOfBorn(vector<string>){

}

//whole herd list
void WholeHerd::addToHerd(Goat){

}

//print function that only shows names
void WholeHerd::showHerdList() const{

}

//searches for the goat by name and returns the whole struct on the goat found
Goat WholeHerd::searchHerd(string name){
    auto goatName = find(wholeHerd.begin(), wholeHerd.end(), name);

    //if the goat is found
    if(goatName != wholeHerd.end()){
        //needs to print info of the whole goat struct for found goat
        //needs to look if it's male or female first and then use that print funtion
    }
    //if the goat is NOT found
    else{
        //need an error class to make it look professional
    }
}