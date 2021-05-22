#include "Comp.h"

Comp::Comp(){
    comp_choose = 1;
}

Comp::~Comp(){}

int Comp::setCompChoose(int temp_flags) {
    // if ( temp_flags == 1) {             // 100% win
    //     comp_choose = 1;               
    // }else if ( temp_flags == 2) {       // 75% win
    //     comp_choose = 1;
    // }else if ( temp_flags == 3) {       // 100% win
    //     comp_choose = 2;
    // }else if ( temp_flags == 4) {       // 100% win
    //     comp_choose = 1;
    // } else if ( temp_flags == 5) {      // win / lose  50 % / 50 %
    //     comp_choose = 1;
    // } else if ( temp_flags == 6) {      // 100% win
    //     comp_choose = 2;   
    // } else if ( temp_flags == 7) {      // 100% win
    //     comp_choose = 1;
    // } else if ( temp_flags == 8) {      // 100% loss
    //     comp_choose = 1;                
    // } else if ( temp_flags == 9) {      // 100% win
    //     comp_choose =  2;
    // }   else {                          // 100% win
    //     comp_choose =  1;
    // }
    
    if (temp_flags % 3 == 1 ) {
        comp_choose = 1;
    } else if (temp_flags % 3 == 2 ) {
        comp_choose = 1;
    } else {
        comp_choose = 2;
    }
    
    return comp_choose;
}

int Comp::getCompChoose() const {
    return comp_choose;
}
