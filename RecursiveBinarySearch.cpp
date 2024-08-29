#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch :: binarySearch (std::vector<int> list, int number, int start, int end){
    if (start > end){
        return 0;
    }
    int middlePoint = start + (end-start) /2;
    int middle = list.at(middlePoint);
    if (middle == number){
        return 1;
    } 
    
    if (number < middle){
        return binarySearch(list, number, start, middlePoint-1);
    } else {
        return binarySearch(list, number, middlePoint+1, end);
    }
}

bool RecursiveBinarySearch :: search (std::vector<int> list, int number){
    int start = 0;
    int end = list.size();
    int flag = binarySearch(list, number, start, end);
    if (flag == 1){
        return true;
    } else {
        return false;
    }

}