#include <vector>
#include <algorithm>  // For std::swap

void selectionSort(std::vector<int>& array) {
    for (int i = 0; i < array.size() - 1; i++) {
        int minIndex = i;
        // Find the index of the minimum element from i+1 to the end of the array
        for (int j = i + 1; j < array.size(); j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the minimum element found with the element at index i
        if (minIndex != i) {
            std::swap(array[i], array[minIndex]);
        }
    }
}
