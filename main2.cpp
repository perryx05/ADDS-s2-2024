#include "BigNumCalc.h"
#include <iostream>

int main (){
    BigNumCalc calc;
    std::list<int> num1 = calc.buildBigNum("123456789");
    std::list<int> num2 = calc.buildBigNum("987654321");
    std::list<int> num3 = calc.buildBigNum("3");
    std::list<int> num4 = calc.buildBigNum("135");
    std::list<int> res1 = calc.add(num1, num2);
    std::list<int> res2 = calc.sub(num1, num2);
    std::list<int> res3 = calc.mul(num3, num4);
    std::cout<<"Addition: ";
    for (std::list<int>::iterator it = res1.begin(); it != res1.end(); it++){
        std::cout<<*it;
    }
    std::cout<<std::endl;
    std::cout<<"Subtraction: ";
    for (std::list<int>::iterator it = res2.begin(); it != res2.end(); it++){
        std::cout<<*it;
    }
    std::cout<<std::endl;
    std::cout<<"Multiplication: ";
    for (std::list<int>::iterator it = res3.begin(); it != res3.end(); it++){
        std::cout<<*it;
    }
    std::cout<<std::endl;

    return 0;

}