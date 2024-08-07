#include "Computer.h"
#include "Move.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Zombie.h"
#include "Ninja.h"


#include <iostream>

int main(){
    Player* player1 = new Human("Tom");
    Player* player2 = new Computer();

    Referee* referee = new Referee();

    Player* winner = referee->refGame(player1, player2);

    // Print the result
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
}