#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"

std::string Zombie::getName() {
    return "Zombie";
}

bool Zombie::beats(Move* move) {
    return dynamic_cast<Pirate*>(move) != nullptr || dynamic_cast<Monkey*>(move) != nullptr;
}