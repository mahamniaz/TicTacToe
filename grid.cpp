    #include <iostream> // allows program to output data to the screen
    #include "grid.h"
    
    using namespace std;
              void grid::initialize()
                { 
                     //initaializes the array to blanks  
                     for (int i(0); i < 9; i++)
                    {grid_array[i] = '_';}
       
              } 
            void grid::add(int pos,int player)
            {
              //  adds a  'o' for player one and a 'x' for 
              // player two at the position pos for player = player (pos and player 
              // arguments of this function.
              
              if (grid_array[pos-1] != '_')
              {                    
               cout<<"Error: position already filled. enter another position."<<endl;
              }
    
              else 
              {
                if (player==1)
                 {grid_array[pos - 1] = 'o';}
                else if (player==2)
                 {grid_array[pos - 1] = 'x';}
              }
            
             }
             void grid::update(int pos)
             //updates the position for the computer
             {
                  grid_array[pos-1] = 'x';
             }
             void grid::display()
             {
                 // displayes the grid on the screen 
                cout<<grid_array[0]<<" " <<grid_array[1]<<" "<<grid_array[2]<<endl;
                cout<<grid_array[3]<<" " <<grid_array[4]<<" "<<grid_array[5]<<endl;
                cout<<grid_array[6]<<" " <<grid_array[7]<<" "<<grid_array[8]<<endl; 
             }
             char grid::get(int pos)
             // gets the character of grid at position pos
             {   
                 return(grid_array[pos-1]);
             }
             int grid::check_win()
             {  // checks wether one of the players has won or
               // if it is a draw.
                int count(0);
                  //char x;
                 if((grid_array[0]=='o' && grid_array[1]== 'o' && grid_array[2] == 'o')||(grid_array[3]=='o' && grid_array[4]== 'o' && grid_array[5] == 'o')||(grid_array[6]=='o' && grid_array[7]== 'o' && grid_array[8] == 'o')||(grid_array[0]=='o' && grid_array[4]== 'o' && grid_array[8] == 'o')||(grid_array[2]=='o' && grid_array[4]== 'o' && grid_array[6] == 'o')||(grid_array[0]=='o' && grid_array[3]== 'o' && grid_array[6] == 'o')||(grid_array[1]=='o' && grid_array[4]== 'o' && grid_array[7] == 'o')||(grid_array[2]=='o' && grid_array[5]== 'o' && grid_array[8] == 'o'))
                 {cout<<"Player 1 wins ";
                 return(1);}
                if((grid_array[0]=='x' && grid_array[1]== 'x' && grid_array[2] == 'x')||(grid_array[3]=='x' && grid_array[4]== 'x' && grid_array[5] == 'x')||(grid_array[6]=='x' && grid_array[7]== 'x' && grid_array[8] == 'x')||(grid_array[0]=='x' && grid_array[4]== 'x' && grid_array[8] == 'x')||(grid_array[2]=='x' && grid_array[4]== 'x' && grid_array[6] == 'x')||(grid_array[0]=='x' && grid_array[3]== 'x' && grid_array[6] == 'x')||(grid_array[1]=='x' && grid_array[4]== 'x' && grid_array[7] == 'x')||(grid_array[2]=='x' && grid_array[5]== 'x' && grid_array[8] == 'x')) 
                 {cout<<"player 2 wins ";   
                  return(1);} 
                for (int i(0); i < 9; i++)        
                  {if( grid_array[i] != '_')
                   count++;}
                 if(count == 9)
                  {cout<<"DRAW";
                  return(1);}  
             }
