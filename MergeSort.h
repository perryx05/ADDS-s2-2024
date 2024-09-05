#ifndef MERGESORT_H
#define MERGESORT_H
#include "Sort.h"

class MergeSort : public Sort {
    public:
    std::vector<int> sort(std::vector<int> list);
};
#endif