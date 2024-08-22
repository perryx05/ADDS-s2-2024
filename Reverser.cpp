#include "Reverser.h"

int Reverser::reverseDigit(int value ){
    if (value <0) {
        return -1;
    }
    else
    if (value <10){
        return value;
    }
    else {
        int n = log10(value);
        return (value%10)*pow(10,n)+ reverseDigit(value/10);
    }
}
std::string Reverser::reverseString(std::string characters){
    if(characters.length() == 0){
        return " ";
    }
    else {
        return reverseString(characters.substr(1, characters.length())) + characters[0];
    }

}