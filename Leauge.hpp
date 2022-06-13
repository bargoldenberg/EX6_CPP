#pragma once
#include "Team.hpp"
#include <vector>
using namespace std;
namespace ex6{
    class Leauge{
        private:
            vector<Team*> teams;
            const int MAX_SIZE =20;

        public:
            Leauge();
            Leauge(vector<Team*>* teams);
            ~Leauge();
            void AddTeam(Team& team);
            Team* at(size_t indx);

    };
}