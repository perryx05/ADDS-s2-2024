#include "Pirate.h"
#include "Robot.h"
#include "Monkey.h"

std::string Pirate::getName() {
    return "Pirate";
}

bool Pirate::beats(Move* move){
    return dynamic_cast<Robot*>(move) != nullptr || dynamic_cast<Monkey*>(move) != nullptr;
}