#pragma once
#include <iostream>
#include <vector>

using namespace std;
namespace ex6{
    class Team {
    private:
        string name;
        double Talent;
        int score;
        int dunkdon;
        vector<int> gameswon;
        vector<int> gamesloss;
    public:
        Team();
        Team(string name, double Talent);
        string getName();
        double getTalent();
        void setWin(int win);
        void setLoss(int loss);
        int getScore();
    };
}
