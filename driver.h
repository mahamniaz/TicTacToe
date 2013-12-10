    #ifndef DRIVER_H
    #define DRIVER_H
    #include <iostream> // allows program to output data to th
    #include "grid.h"
    #include "computer.h"
    //#include "driver.h"
    using namespace std;
    class driver{
                               
              private:
              int pos;
              int player;
              grid G;
               computer C;
              public:
                    void Human_turn();
                    void AI_turn();
                    void Game_play();
                    string m1;
                    string p1;
                    };
             
    #endif
