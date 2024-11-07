#include <vector>
#include <algorithm>  // For std::swap

void insertionSort(std::vector<int>& array) {
    for (int i = 1; i < array.size(); i++) {
        for (int j = i; j > 0; j--) {
            if (array.at(j) < array.at(j - 1)) {
                // Swap array.at(j) and array.at(j-1)
                std::swap(array.at(j), array.at(j - 1));
            } else {
                break;  // Exit inner loop if elements are in order
            }
        }
    }
}
