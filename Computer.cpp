#include "Computer.h"

Computer::Computer() {
    name = "Computer";
    this -> move = 'R';
}
char Computer :: makeMove() {
   
    return move;
}
string Computer :: getName() {
    return name;
}