#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

int interpolation_search(int arr[], int value, int size) {
    // calc bounds
    int high = size-1;
    int low = 0;
    //probing
    while(value >= arr[low] && value <= arr[high] && low <= high) {
        int probe = low + (high - low) * (value - arr[low]) / (arr[high] - arr[low]);
        if (arr[probe] == value) {
            return probe;
        }
        else if (arr[probe] < value) {
            low = probe + 1;
        }
        else {
            high = probe - 1;
        }
    }
    return -1;
}

int main() {
    int sorted_arr[] = {1,2,5,7,9,15,18,56,78,89};
    int size = sizeof(sorted_arr)/sizeof(int); 
    int index = interpolation_search(sorted_arr, 5, size);
    cout << "Index: " << index << '\n';
    return 0;
}

