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
    public:
        Team();
        Team(string name, double Talent);
        string getName();
        double getTalent();
        void setScore();
        int getScore();
    };
}
