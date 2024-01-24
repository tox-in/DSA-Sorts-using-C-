#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Assume the current index is the minimum
        int minIndex = i;

        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    // Applying Selection Sort
    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


//    The outer loop runs through each element of the array except the last one because the last element will be in its correct position after the other elements are sorted.
//    The inner loop finds the minimum element in the unsorted part of the array.
//    minIndex keeps track of the index of the minimum element found.
//    After finding the minimum element, it swaps the minimum element with the first element of the unsorted part.
//    The process continues until the entire array is sorted.
//	  This algorithm has a time complexity of O(n^2) for the worst and average cases, where 'n' is the number of elements in the array.


