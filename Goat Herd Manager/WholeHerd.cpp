#include <iostream>
#include "WholeHerd.h"

using namespace std;

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

//whole lists to print


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