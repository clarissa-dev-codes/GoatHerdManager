#include <iostream>
#include "Males.h"

using namespace std;

bool Males::isCastrated(){
    return mgoat.isCastrated;
}

string Males::getCastrationDate(){
    return mgoat.castrationDate;
}

void Males::setIsCastrated(bool answer){
    mgoat.isCastrated = answer;
}

void Males::setCastrationDate(string date){
    mgoat.castrationDate = date;
}

//gets the info for just one goat
void Males::viewGoat(){

}