#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

class Move {
    public:
        virtual std::string getName() = 0;
        virtual bool beats(Move* move) = 0;
};
#endif