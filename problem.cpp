    #include <cstdlib>
    #include <iostream>
    #include "grid.h"
    #include "computer.h"
    #include "driver.h"
    
    using namespace std;
    
    int main()
    {
        int ans;
        driver D;// d is a variable of type driver
        cout<<"Welcome:"<<endl<<"1) New Game"<<endl<<"2) Load Game"<<endl;
        
        cin>>ans;
        
        switch (ans)
        {
               case 1:
                    D.Game_play();
                    break;
               case 2:
                    break;
        }
       // to prevent disappearing windows
             char c; // declaring a char variable  
             cout<<"enter a character to exit...";
             cin>>c; // capturing the input 
            
             return 0; // imdicate that program ended successfully
    } //end function main 
