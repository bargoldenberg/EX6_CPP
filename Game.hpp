#pragma once
#include "Team.hpp"
#include <iostream>
#include <vector>
namespace ex6{
    class Game{
    private:
        Team* Home;
        Team* Away;
    public:
        Game(Team& team1, Team& team2);
        Game();
        ~Game();
        int play();
    };
}