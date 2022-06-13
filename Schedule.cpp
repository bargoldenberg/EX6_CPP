#pragma once
#include <iostream>
#include "Leauge.hpp"
#include "Schedule.hpp"
#include "Game.hpp"
using namespace std;
using namespace ex6;
#define MAX_LENGTH 20
ex6::Schedule::Schedule(){
    this->leauge = new Leauge();
}

ex6::Schedule::Schedule(Leauge& leauge){
    this->leauge = &leauge;
}

ex6::Schedule::~Schedule(){
    delete this->leauge;
}

void ex6::Schedule::tournament(){
    int numOfPlayers = MAX_LENGTH;
    int numOfGames = MAX_LENGTH-1;
    vector<Team*> Home;
    vector<Team*> Away;
    Home.resize(MAX_LENGTH/2);
    Away.resize(MAX_LENGTH/2);
    for(int i=0;i<MAX_LENGTH/2;i++){
        Home[i] = leauge->at(i);
        Away[i] = leauge->at(i+MAX_LENGTH/2);
    }
    for(int i=0;i<numOfGames;i++){
        Game game(*Home[i],*Away[i]);
        game.play();
    }

}

string ex6::Schedule::winner(){
    int maxScore = 0;
    int maxScoreIndex = 0;
    for(size_t i=0;i<MAX_LENGTH;i++){
        if(leauge->at(i)->getScore()>maxScore){
            maxScore = leauge->at(i)->getScore();
            maxScoreIndex = i;
        }
    }
    return leauge->at(maxScoreIndex)->getName();
}
