#include "Computer.h"

Computer::Computer() {
    name = "Computer";
    
}
char Computer :: makeMove() {
   this -> move = 'R';
    return move;
}
string Computer :: getName() {
    return name;
}