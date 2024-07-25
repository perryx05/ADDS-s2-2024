#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

#include <iostream>
using namespace std;

class Computer : public Player{
    private:
    string name;
    char move;
    public:
    Computer();
    char makeMove();
    string getName();
    
};
#endif