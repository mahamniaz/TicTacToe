    #include <iostream> // allows program to output data to th
    #include "grid.h"
    #include "computer.h"
    #include "driver.h"
    
    using namespace std;
    
                    
                    void driver::Human_turn()
                    {
                       // adds o or x to the position given bu human  
                       G.add(pos, player);   
                    }
                    void driver::AI_turn()
                    {
                         //gives turn to computer
                        C.AI(G);
                    }
                    void driver:: Game_play()
                    {
                         //turns are taken by humans or computer(as chosen)
                         int selection;
                         cout<<"1: HUMAN VS HUMAN "<<endl<<"2. HUMAN VS COMPUTER"<<endl;
                         cout<<"Select an option( 1 / 2 ): ";
                         cin>>selection;
                         G.initialize();
                         switch (selection)
                         {
                            case 1:
                                  
                                 cout<<"player1 name: "; cin>>p1;
                                 cout.flush();
                                 cout<<"player2 name: "; cin>>m1;
                                 cout<<" o is for player 1 and x is for player 2"<<endl;
                                 while (G.check_win() != 1)
                               {
                                  // for player one     
                                 cout<<p1<<" enter position: "<<endl;
                                 cin>>pos;      
                                 player = 1;
                                 Human_turn();
                                 G.display();
                                 G.check_win();
                                 
                                 
                                 if (G.check_win() != 1) 
                                 {
                                  //for player two                 
                                 cout<<m1<<" enter position: "<<endl;
                                 cin>>pos;                  
                                 player = 2;
                                 Human_turn();
                                  G.display();
                                 G.check_win(); 
                                 }
                                }
                                break;
                           case 2:
                                //for player 1 against the computer
                                cout<<"player1 name: "; cin>>p1;
                                cout<<" o is for player 1 and x is for player 2 which is the computer"<<endl;
                                 while (G.check_win() != 1)
                               {
                                 cout<<p1<<" enter position: "<<endl;
                                 cin>>pos;       
                                 player = 1;
                                 Human_turn();
                                 G.display();
                                 G.check_win();
                                 if ( G.check_win() == 1)
                                 cout<<"you are smarter than the computer"<<endl;
                               
                                 
                                 if (G.check_win() != 1)
                                  {
                                   cout<<"computer: "<<endl;                 
                                   AI_turn();
                                   G.display();
                                   G.check_win();
                                   if ( G.check_win() == 1)
                                   cout<<"computer is smarter than you"<<endl;
                                 
                                  }
                                 }    
                               }
                                          
                           }
