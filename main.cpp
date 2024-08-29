#include <iostream>
#include <vector>
#include <sstream>
#include "Sort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> list;
    int number;
    
    while (iss >> number) {
        list.push_back(number);
    }

    QuickSort quickSort;
    list = quickSort.sort(list);

    RecursiveBinarySearch recursiveBinarySearch;
    bool flag = recursiveBinarySearch.search(list, 1);

    if (flag) {
        std::cout << "true ";
    } else {
        std::cout << "false ";
    }

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << " ";
    }

    return 0;
}
