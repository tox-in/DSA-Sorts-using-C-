#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

// Place the pivot in its correct position
    swap(arr[i + 1], arr[high]); 
    return i + 1;
}

// Quicksort algorithm
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the subarrays
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // Example usage
    int array[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    quicksort(array, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
