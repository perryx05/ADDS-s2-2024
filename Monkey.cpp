#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"

std::string Monkey::getName(){
    return "Monkey";
}

bool Monkey::beats(Move* move){
    return dynamic_cast<Robot*>(move) != nullptr || dynamic_cast<Ninja*>(move) != nullptr;
}