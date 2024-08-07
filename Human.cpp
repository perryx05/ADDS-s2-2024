#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Human::Human() {
    this -> name = "Human";
    
}
Human::Human(std::string name) {
    this -> name = name;
}
Move* Human::makeMove(){
    std::string move;
    std::cout << "Enter Move: ";
    std::cin >> move;
    if (move == "Rock") {
        return new Rock();
    } else if (move == "Paper") {
        return new Paper();
    } else if (move == "Scissors") {
        return new Scissors();
    } else if (move == "Monkey") {
        return new Monkey();
    } else if (move == "Robot") {
        return new Robot();
    } else if (move == "Pirate") {
        return new Pirate();
    } else if (move == "Ninja") {
        return new Ninja();
    } else if (move == "Zombie") {
        return new Zombie();
    }
    
}

std::string Human::getName() {
    return name;
}