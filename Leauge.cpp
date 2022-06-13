#pragma once
#include "Leauge.hpp"
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
using namespace ex6;
//Team Set
const vector<Team*> randteams = {
    new Team("Team1", 0.5),
    new Team("Team2", 0.6),
    new Team("Team3", 0.7),
    new Team("Team4", 0.8),
    new Team("Team5", 0.9),
    new Team("Team6", 1.0),
    new Team("Team7", 0.1),
    new Team("Team8", 0.2),
    new Team("Team9", 0.3),
    new Team("Team10", 0.4),
    new Team("Team11", 0.5),
    new Team("Team12", 0.6),
    new Team("Team13", 0.7),
    new Team("Team14", 0.8),
    new Team("Team15", 0.9),
    new Team("Team16", 1.0),
    new Team("Team17", 0.1),
    new Team("Team18", 0.2),
    new Team("Team19", 0.3),
    new Team("Team20", 0.4)
}; 

ex6::Leauge::Leauge(){
    this->teams.resize(this->MAX_SIZE);
    for(size_t i=0;i<this->MAX_SIZE;i++){
            int num=rand();
            num=(num%20)+1;
            this->teams[i]=randteams.at(num);
    }
}

ex6::Leauge::Leauge(vector<Team*>* teams){
    this->teams.resize(this->MAX_SIZE);
    if(teams->size()==this->MAX_SIZE){
          for(size_t i=0;i<teams->size();i++){
              this->teams[i]=teams->at(i);
          }
          delete teams;
    }else{
        for(size_t i =0 ;i<teams->size();i++){
            this->teams[i]=teams->at(i);
        }
        for(size_t i=teams->size()-1;i<this->MAX_SIZE;i++){
            int num=rand();
            num=(num%20)+1;
            this->teams[i]=randteams.at(num);
        }
    }
    
  
}

ex6::Leauge::~Leauge(){
    for(int i=0; i<this->teams.size(); i++){
        delete this->teams[i];
    }
    for(int i=0;i<randteams.size();++i){
        delete randteams[i];
    }
}

void ex6::Leauge::AddTeam(Team& team){
    if(this->teams.size()<this->MAX_SIZE){
        this->teams.push_back(&team);
    }
}

Team* ex6::Leauge::at(size_t indx){
    return this->teams.at(indx);
}