#include "Flags.h"


Flags::Flags(){
    temp_flags = 0;
    for(int i = 0; i <= 11 ; i++){
        flags[i] = 0;
    }
}

Flags::~Flags(){
    
}


int Flags::getFlag(int i) const {
    return flags[i];
}

void Flags::update_player_flags (int player_choose) {
    do{
        flags[temp_flags] = 1;
        player_choose--;
        temp_flags++;
    } while(player_choose > 0);
}

void Flags::update_comp_flags (int comp_choose) {
    do{
        flags[temp_flags] = 2;
        comp_choose--;
        temp_flags++;
    } while(comp_choose > 0);
}
void Flags::print_flags (char player_cap) {
    for (int i = 0; i < 11; i++) {
        if (flags[i] == 1) {
            cout << "|"<< player_cap <<"    ";
        } else if (flags[i] == 2) {
            cout << "|@    ";
        } else {
            cout << "|+    ";
        }
    }
    cout << "\n";
    for (int i = 0; i < 11; i++) { cout << "|     ";}
    cout << "\n";
}

int Flags::get_temp_flags() const {
    return temp_flags;
}