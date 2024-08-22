#include <iostream>

using namespace std;

int main (){
    double *array = new double[10]{};
    delete [] array;
    return 0;
}