//
// Created by User on 2018/12/21.
//
#include "Player.h"

Player::Player() {
    win = false;
    host = false;
    listen = false;
    multiHost = 0;
    ownedDeck = new Deck();
}
