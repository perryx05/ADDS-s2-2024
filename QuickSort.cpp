#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    if (list.size() <= 1){
        return list;
    }  
    int pivot_index = 0;

    std::vector<int> left;
    std::vector<int> right;
    if (list.size() >= 3){
        int pivot = list.at(2);
        int temp = list.at(list.size()-1);
        list.at(list.size()-1) = pivot;
        list.at(2) = temp;
        for (int i = 0; i<list.size(); i++){
            if (list.at(i) < pivot){
                int temp =  list.at(i);
                list.at(i) = list.at(pivot_index);
                list.at(pivot_index) = temp;
                pivot_index++;
            }
        }
        temp = list.at(pivot_index);
        list.at(pivot_index) = list.at(list.size()-1);
        list.at(list.size()-1) = temp;
        for (int i = 0; i<pivot_index; i++){
                left.push_back(list.at(i));
        }
        for (int i = pivot_index+1; i<list.size(); i++){
                right.push_back(list.at(i));
        }

    } else {
        if (list.at(0) < list.at(1)){
            left.push_back(list.at(0));
            right.push_back(list.at(1));

        } else {
            left.push_back(list.at(1));
            right.push_back(list.at(0));
        }
            left.insert(left.end(), right.begin(), right.end());
            return left;

    }
       left = sort(left);
    right = sort(right);
    
    // Insert the pivot element
    left.push_back(list.at(pivot_index));
    
    // Merge the sorted right sublist
    left.insert(left.end(), right.begin(), right.end());
    return left;



}