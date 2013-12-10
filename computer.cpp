#include <iostream> // allows program to output data to th
#include "grid.h"
#include "computer.h"
#include <ctime>

using namespace std;
          
          void computer::AI(grid& G)
          { // generates random position for the computer. gives computer its turn
            srand ( time (NULL) ); //seeding rand()
            do
            {
             pos = (rand() % 9)+1;
            
            }while(G.get(pos) != '_'); 
            G.update(pos);
          }
