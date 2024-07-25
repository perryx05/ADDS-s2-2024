#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

#include <iostream>

class Human : public Player{
    private:
    string name;
    char move;
    public:
    Human(string name = "Human");
    char makeMove();
    string getName();
    
};
#endif