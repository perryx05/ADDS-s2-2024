#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

std::string Ninja::getName() {
    return "Ninja";
}

bool Ninja::beats(Move* move) {
    return dynamic_cast<Zombie*>(move) != nullptr || dynamic_cast<Pirate*>(move) != nullptr;
}