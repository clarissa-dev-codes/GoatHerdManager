#include <iostream>
#include <vector>

#include "Testing.h"
#include "Maintenance.h"
#include "Meds.h"
#include "Goat.h"

using namespace std;

//setters (void with parameters)
void Goats::setName(string name){
    goat.name = name;
}

void Goats::setDOB(string DOB){
    goat.DOB = DOB;
}

void Goats::setSex(string sex){
    goat.sex = sex;
}

void Goats::setColor(string color){
    goat.color = color;
}

void Goats::setMarkings(string markings){
    goat.markings = markings;
}

void Goats::setIsPolled(bool isPolled){
    goat.isPolled = isPolled;
}

void Goats::setTattooLeft(string tattooLeft){
    goat.tattooLeft = tattooLeft;
}

void Goats::setTattooRight(string tattooRight){
    goat.tattooRight = tattooRight;
}

void Goats::setDam(string dam){
    goat.dam = dam;
}

void Goats::setSire(string sire){
    goat.sire = sire;
}

void Goats::setBornOnFarm(bool bornOnFarm){
    goat.bornOnFarm = bornOnFarm;
}

void Goats::setPurchasedFrom(string purchasedFrom){
    goat.purchasedFrom = purchasedFrom;
}

void Goats::setBirthWeight(double birthWeight){
    goat.birthWeight = birthWeight;
}

void Goats::setIsDisbudded(bool isDisbudded){
    goat.isDisbudded = isDisbudded;
}

void Goats::setDisbuddingDate(string disbuddingDate){
    goat.disbuddingDate = disbuddingDate;
}

void Goats::setListOfChildren(vector<string> listOfChildren){
    children.listOfChildren = listOfChildren;
}

void Goats::setTesting(const Testing& testing){
    goat.test = testing;
}

void Goats::setMeds(const Meds& meds){
    goat.medsList = meds;
}

void Goats::setMaintenance(const Maintenance& maintenance){
    goat.maintain = maintenance;
}

//getters (not void, no parameters)
string Goats::getName() const{
    return goat.name;
}

string Goats::getDOB() const{
    return goat.DOB;
}

string Goats::getSex() const{
    return goat.sex;
}

string Goats::getColor() const{
    return goat.color;
}

string Goats::getMarkings() const{
    return goat.markings;
}

bool Goats::getIsPolled() const{
    return goat.isPolled;
}

string Goats::getTattooLeft() const{
    return goat.tattooLeft;
}

string Goats::getTattooRight() const{
    return goat.tattooRight;
}

string Goats::getDam() const{
    return goat.dam;
}

string Goats::getSire() const{
    return goat.sire;
}

bool Goats::getBornOnFarm() const{
    return goat.bornOnFarm;
}

string Goats::getPurchasedFrom() const{
    return goat.purchasedFrom;
}

double Goats::getBirthWeight() const{
    return goat.birthWeight;
}

bool Goats::getIsDisbudded() const{
    return goat.isDisbudded;
}

string Goats::getDisbuddingDate() const{
    return goat.disbuddingDate;
}

Testing Goats::getTesting() const{
    return goat.test;
}

Meds Goats::getMeds() const{
    return goat.medsList;
}

Maintenance Goats::getMaintenance() const{
    return goat.maintain;
}

vector<string> Goats::getListOfChildren() const{
    return children.listOfChildren;
}