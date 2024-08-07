#include "Rock.h"
#include "Scissors.h"

std::string Rock::getName() {
    return "Rock";
}

bool Rock::beats(Move* move){
     return dynamic_cast<Scissors*>(move) != nullptr;
}