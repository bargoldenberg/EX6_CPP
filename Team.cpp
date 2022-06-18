#pragma once
#include "Team.hpp"
#include <iostream>
#include <vector>

using namespace std;
using namespace ex6;

ex6::Team::Team(string name, double Talent) {
    this->name = name;
    if(Talent<0||Talent>1){
        throw invalid_argument("Talent must be a number between 0 and 1");
    }
    this->Talent = Talent;
    this->score=0;
    this->dunkdon=0;
}

ex6::Team::Team() {
    this->name = "";
    this->Talent = 0;
    this->score=0;
}

string ex6::Team::getName(){
    return this->name;
}

double ex6::Team::getTalent(){
    return this->Talent;
}

void ex6::Team::setWin(int win){
    this->gameswon.push_back(win);
    this->score+=win;
}

void ex6::Team::setLoss(int loss){
    this->gamesloss.push_back(loss);
    this->dunkdon+=loss;
}

int ex6::Team::getScore(){
    return this->score;
}