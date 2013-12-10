    #ifndef GRID_H
    #define GRID_H
    #include <iostream> // allows program to output data to th
    
    using namespace std;
         class grid{
           private:  
            char grid_array[9];
               
           public:
            // memeber function
              void initialize(); 
            void add(int pos,int player);
             void display();
             void update(int pos);
             char get(int pos);
             int check_win();
             };
    #endif
