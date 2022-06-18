
#include "Game.hpp"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <vector>
using namespace std;
using namespace ex6;

ex6::Game::Game(Team& team1, Team& team2){
    this->Home = new Team(team1.getName(), team1.getTalent());
    this->Away = new Team(team2.getName(), team2.getTalent());
}

ex6::Game::Game(){

}

ex6::Game::~Game(){
    delete this->Home;
    delete this->Away;
}

int ex6::Game::play() {
    normal_distribution<int> Homedistribution((55+100)/2,10);
    random_device generator{};
    normal_distribution<int> Awaydistribution((50+100)/2,10);
    int HomeScore = Homedistribution(generator);
    int AwayScore = Awaydistribution(generator);
    if(HomeScore==AwayScore){
        if(Home->getTalent()>Away->getTalent()){
            Home->setWin(HomeScore);
            Away->setLoss(HomeScore);
        }else{
            Away->setWin(AwayScore);
            Home->setLoss(AwayScore);
        }
    }else if(HomeScore>AwayScore){
        Home->setWin(HomeScore);
        Away->setLoss(HomeScore);
    }else{
        Away->setWin(AwayScore);
        Home->setLoss(AwayScore);
    }

}

