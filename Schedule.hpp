#pragma once
#include <iostream>
#include "Leauge.hpp"
using namespace std;
namespace ex6{
    class Schedule{
        private:
            Leauge* leauge;
        public:
            Schedule();
            Schedule(Leauge& leauge);
            ~Schedule();
            void tournament();
            string winner();
    };
}
