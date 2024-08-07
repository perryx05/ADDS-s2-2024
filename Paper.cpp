#include "Paper.h"
#include "Rock.h"

std::string Paper::getName() {
    return "Paper";
}

bool Paper::beats(Move* move){
    return dynamic_cast<Rock*>(move) != nullptr;
}