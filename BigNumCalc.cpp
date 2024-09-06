#include "BigNumCalc.h"

std::list<int> BigNumCalc :: buildBigNum(std::string numString){
    std::list<int> numList;
    for (int i = 0; i< (int) numString.length(); i++){
        numList.push_back(numString[i]- 48);
    }
    return numList;
}

std::list<int> BigNumCalc :: add (std::list<int> num1, std::list<int> num2){
    std::list<int> result;
    int carry = 0;
    std::list<int>::reverse_iterator i1 = num1.rbegin();
    std::list<int>::reverse_iterator i2 = num2.rbegin();
    while (i1 != num1.rend() || i2 != num2.rend()){
        int sum = carry;
        if (i1 != num1.rend()){
            sum = sum + *i1;
            i1++;
        }
        if (i2 != num2.rend()){
            sum = sum + *i2;
            i2++;
        }

        carry = sum / 10;
        result.push_front(sum % 10);
       
    }
     if (carry == 1 && i1 == num1.rend() && i2 == num2.rend()){
            result.push_front(1);
        }
    return result;

}
std::list<int> BigNumCalc :: sub (std::list<int> num1, std::list<int> num2){
    std ::list <int> result;
    int borrow = 0;
    std::list<int>::reverse_iterator i1 = num1.rbegin();
    std::list<int>::reverse_iterator i2 = num2.rbegin();
    while (i1 != num1.rend() || i2 != num2.rend()){
        int diff = borrow;
       if (i1 != num1.rend()){
            diff = diff + *i1;
            i1++;
        }
        if (i2 != num2.rend()){
            diff = diff - *i2;
            i2++;
        }
        if (diff < 0){
            diff = diff + 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        result.push_front(diff%10);
        if (*result.end() ==0 ){
            result.pop_back();
        }
        

    }
    return result; 
}

std::list<int> BigNumCalc :: mul(std::list<int> num1, std::list<int> num2){
    std::list<int> result;
    int carry = 0;
    std::list<int>::reverse_iterator i1 = num1.rbegin();
    std::list<int>::reverse_iterator i2 = num2.rbegin();
    if (*i2 == 0 ){
        result.push_front(0);
        return result;
    }
    while (i1 != num1.rend()){
        int product = carry + (*i1 * *i2);
        i1++;
        carry = product / 10;
        result.push_front(product % 10);
    }
    if (carry != 0){
        result.push_front(carry);
    }
    return result;
}