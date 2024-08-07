#include "Scissors.h"
#include "Paper.h"

std::string Scissors::getName() {
    return "Scissors";
}

bool Scissors::beats(Move* move){
    return dynamic_cast<Paper*>(move) != nullptr;
}