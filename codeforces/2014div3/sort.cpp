#include <iostream>
#include <algorithm>  // Include the algorithm library for std::sort

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};  // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    std::sort(arr, arr + size);  // Sort the array in ascending order

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
