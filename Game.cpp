#pragma once
#include "Game.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
using namespace ex6;

ex6::Game::Game(Team& team1, Team& team2){
    this->team1 = new Team(team1.getName(), team1.getTalent());
    this->team2 = new Team(team2.getName(), team2.getTalent());
}

ex6::Game::~Game(){
    delete this->team1;
    delete this->team2;
}

void ex6::Game::play() {
    int num=rand();
    num =num%2+1;
    if(num==1){
        this->team1->setScore();
    }
    else{
        this->team2->setScore();
    }
}
