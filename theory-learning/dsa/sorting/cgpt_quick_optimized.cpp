#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

// Function to print the array
void printarr(int loc_arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << loc_arr[i] << ' ';
    }
    cout << '\n';
}

// Function to swap two elements
void swaparr(int *i1, int *i2) {
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

// Median-of-Three function: returns the index of the pivot (median of the first, middle, and last elements)
int medianOfThree(int arr[], int lowIndex, int highIndex) {
    int mid = lowIndex + (highIndex - lowIndex) / 2;

    // Order the first, middle, and last elements
    if (arr[lowIndex] > arr[mid]) swaparr(&arr[lowIndex], &arr[mid]);
    if (arr[lowIndex] > arr[highIndex]) swaparr(&arr[lowIndex], &arr[highIndex]);
    if (arr[mid] > arr[highIndex]) swaparr(&arr[mid], &arr[highIndex]);

    // Return the middle element index
    return mid;
}

// Partition function using the pivot
void sortarr(int arr[], int start, int end) {
    if (start >= end) return;

    // Get the pivot index using Median-of-Three
    int pivotIndex = medianOfThree(arr, start, end);
    
    // Move pivot to the end for partitioning
    swaparr(&arr[pivotIndex], &arr[end]);

    int pivot = arr[end];  // The pivot value
    int i = start - 1;     // i points to the last element smaller than the pivot

    // Partitioning step
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) { // If current element is smaller or equal to pivot
            i++;
            swaparr(&arr[i], &arr[j]);
        }
    }

    // Place the pivot in the correct position
    swaparr(&arr[i + 1], &arr[end]);

    // Recursively sort the two subarrays
    sortarr(arr, start, i);     // Sort the left subarray
    sortarr(arr, i + 2, end);   // Sort the right subarray (i+1 is where pivot is placed)
}

int main() {
    int arr[] = {9, 1, 5, 7, 8, 4, 2, 6, 5, 5};
    int arr_size = sizeof(arr) / sizeof(int);

    printarr(arr, arr_size);  // Print original array
    sortarr(arr, 0, arr_size - 1);  // Sort the array
    printarr(arr, arr_size);  // Print sorted array

    return 0;
}
