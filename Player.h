#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player {

    public: 
        Player();
        ~Player();
        Player(string name);
        void setPlayerChoose(int num);
        char getPlayerCap() const;
        string getPlayerName() const;
        int getPlayerChoose() const;

    private:
        string player_name;
        int player_choose; // init is 0, every rounds either 1 / 2 
        char player_cap;
};

#endif