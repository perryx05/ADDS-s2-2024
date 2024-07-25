#include "Human.h"

Human::Human() {
    this -> name = "Human";
    cout << "Enter move: ";
    cin >> move;
}
Human::Human(string name) {
    this -> name = name;
    cout << "Enter move: ";
    cin >> move;
}
char Human :: makeMove() {
    
    return move;
}
string Human :: getName() {
    return name;
}