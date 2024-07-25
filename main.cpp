#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>

using namespace std;

int main(){
    cout << "Enter the number of players: ";
    int size;
    cin >> size;
    Player **players = new Player*[size];
    Player *p2 = new Computer();
    Referee *ref = new Referee();
    // type name and move of human
    for (int i = 0; i<size ; i++){
        string name;
        cout << "Enter name of player " << i+1 << ": ";
        cin >> name;
        players[i] = new Human(name);
    }
    for (int i = 0; i<size ; i++){
        Player *winners = ref -> refGame(players[i], p2);
        if (winners == nullptr){
            cout << "It's a Tie." << endl;}
        else {
            cout << winners -> getName()<<" Wins." << endl;
        }


    }

}