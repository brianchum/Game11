#include <iostream> 
#include "Player.h"
#include "Flags.h"
#include "Comp.h"

using namespace std;

int main () {
    Player player;
    string name;
    Flags flags;
    Comp comp;
    int input_player_choose;

     // introduction of the game  
    cout << "" << '\n';    
    cout << "                                   Wellcome to the game 11                             " << '\n';    
    cout << "" << '\n'; 
    cout << "   *   This is a game that you will never win " << '\n';    
    cout << "   *   Who take the last flag win the game " << '\n';    
    cout << "   *   During your round, you can either take one flag or two flag" << '\n';   
    cout << "" << '\n';
    cout << "----------------------------------------------------------------------------------------" << '\n';  
    cout << " What is your name? ";
    cin >> name;
    player = Player(name);
    cout << " Hi, " << player.getPlayerName() <<'\n';
    cout << "" << '\n';
    cout << "   *  Your flag is going to look like this |" << player.getPlayerCap()<< '\n';
    cout << "                                           |" << '\n';
    cout << "" << '\n';
    cout << "   *  My flag is going to be look like this |@" <<'\n';
    cout << "                                            |" << '\n';
    cout << "----------------------------------------------------------------------------------------" << '\n';  
    cout << "                                     LET GET START IT                                " << '\n'; 
    cout << "" << '\n';
    cout << "----------------------------------------------------------------------------------------" << '\n';  
    cout << "" << '\n';
    cout << "|+    |+    |+    |+    |+    |+    |+    |+    |+    |+    |+    " << '\n';
    cout << "|     |     |     |     |     |     |     |     |     |     |     " << '\n';
    cout << "" << '\n';

    
    
    for (int round = 1; flags.getFlag(10) == 0 ; round++ ) {
        cout << "                       Round  " << round <<'\n'; 
        cout << "" << '\n';
        cout << "How many flags do you want to take in this round ? (1/2)" <<'\n';
        cin >> input_player_choose; 

        // if user input is neither 1 or 2 do it again
        while (input_player_choose != 1 && input_player_choose != 2) {
            cout << "Please try again, put in either (1) or (2)"<<'\n';
            cout << "How many flags do you want to take in this round ? (1/2)" <<'\n';
            cin >> input_player_choose; 
        }
        player.setPlayerChoose(input_player_choose);
        flags.update_player_flags(player.getPlayerChoose());
        flags.print_flags(player.getPlayerCap());
        if (flags.getFlag(10)!=0) break;

        cout << "" << '\n';
        cout << "----------------------------------------------------------------------------------------" << '\n';  
        cout << "Alright it is my turn" << '\n';
        cout << "" << '\n';
        cout << "I am going to take " << comp.setCompChoose(flags.get_temp_flags()) << " flags "<<'\n';  
        cout << "" << '\n';
        flags.update_comp_flags(comp.getCompChoose());
        flags.print_flags(player.getPlayerCap());
        if (flags.getFlag(10) != 0) break;
         cout << "----------------------------------------------------------------------------------------" << '\n';  
    }

    if (flags.getFlag(10) == 1) {
       cout << "You win" << '\n'; 
    } else if (flags.getFlag(10) == 2){
       cout << "I told you, you can't win" << '\n'; 
    }
    return 0;
}
