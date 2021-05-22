#include "Player.h"

Player::Player(){}

Player::Player(string name) {
    player_name = name;
    player_choose = 0;
    char c = name.at(0);
    if (islower(c)) c = toupper(c);
    player_cap = c;
}

Player::~Player(){}

void Player::setPlayerChoose(int num) { player_choose = num; }

char Player::getPlayerCap() const{ return player_cap; }

string Player::getPlayerName() const{ return player_name; }

int Player::getPlayerChoose() const { return player_choose; }