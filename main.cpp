#include "Truckloads.h"
#include "Reverser.h"

#include <iostream>

int main (){
    Truckloads n;
std::cout<<n.numTrucks(14,3)<<std::endl;
Reverser r;
int reversedNumber = r.reverseDigit(12345);
std::cout<<reversedNumber;
Reverser r2;
std::string reversedString = r2.reverseString("Hello");
std::cout<<reversedString;
}