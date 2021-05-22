#include <iostream>
#ifndef FLAGS_H
#define FLAGS_H

using namespace std;

class Flags {
    public:
        Flags();
        ~Flags();
        int getFlag(int i) const;
        void update_player_flags (int player_choose);
        void update_comp_flags (int comp_choose);
        void print_flags (char c);
        int get_temp_flags() const;


    private:
        int flags[11];
        int temp_flags;
};

#endif