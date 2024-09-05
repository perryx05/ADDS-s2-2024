#include "MergeSort.h"

std::vector<int> MergeSort::sort(std::vector<int> list) {
    if (list.size() <= 1){
        return list;
    }
    int mid = list.size() / 2;
    std::vector<int> left(list.begin(), list.begin() + mid);
    std::vector<int> right(list.begin() + mid, list.end());
    std::vector<int> sortedLeft = sort(left);
    std::vector<int> sortedRight = sort(right);

    std::vector<int> result;
    int l = 0, r = 0;
    while (l < sortedLeft.size() && r < sortedRight.size()){
        if (sortedLeft[l] < sortedRight[r]){
            result.push_back(sortedLeft[l]);
            l++;
        } else {
            result.push_back(sortedRight[r]);
            r++;
        }
    }
    while (l < sortedLeft.size()){
        result.push_back(sortedLeft[l]);
        l++;
    }
    while (r < sortedRight.size()){
        result.push_back(sortedRight[r]);
        r++;
    }
    return result;
}
