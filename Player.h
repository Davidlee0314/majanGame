//
// Created by User on 2018/12/21.
//
#include "Deck.h"

#ifndef MAJANGAME_PLAYER_H
#define MAJANGAME_PLAYER_H

class Player{
public:
    bool win;
    bool host;
    bool listen;
    int multiHost;
    Deck* ownedDeck;
    Player();

    //for AI
    int threeCount; //0 ~5
    int eyeCount;  // 0 or 1
    int howManyTurn;

    //vector<Majan> threeDeck[5]; //先不准槓
    vector<Majan> throwAble;
    vector<Majan> eye;
    vector<Majan> left; //記得改摸進牌，吃，槓的時候

    void firstTime(); // 開局用這個
    void refresh(); // 開局後每次摸牌
    Majan* throwAway();  //打什麼牌，每次摸牌或吃碰槓都要用這個
//    bool searchMajan(int, int);
    bool searchMajan(int, int, int);
    bool searchMajanFriend(int, int, int);
};

#endif //MAJANGAME_PLAYER_H
