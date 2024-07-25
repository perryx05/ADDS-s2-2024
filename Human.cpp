#include "Human.h"

Human::Human() {
    this -> name = "Human";
    
}
Human::Human(string name) {
    this -> name = name;
}

char Human :: makeMove() {
    cout << "Enter move: ";
    cin >> move;
    return move;
}

string Human :: getName() {
    return name;
}