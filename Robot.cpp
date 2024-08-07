#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"

std::string Robot::getName() {
    return "Robot";
}  

bool Robot::beats(Move* move){
    return dynamic_cast<Ninja*>(move) != nullptr || dynamic_cast<Zombie*>(move) != nullptr;
}