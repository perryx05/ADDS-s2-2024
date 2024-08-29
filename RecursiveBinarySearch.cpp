#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch :: binarySearch (std::vector<int> list, int number, int start, int end){
    if (start >= end){
        return false;
    }
    int middlePoint = start + (end-start) /2;
    int middle = list.at(middlePoint);
    if (middle == number){
        return true;
    }
    else if (number < middle){
        return binarySearch(list, number, start, middlePoint-1);
    } else {
        return binarySearch(list, number, middlePoint+1, end);
    }
}

bool RecursiveBinarySearch :: search (std::vector<int> list, int number){
    int start = 0;
    int end = list.size();
    return binarySearch(list, number, start, end);
    

}