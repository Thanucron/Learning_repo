#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

void printarr(int loc_arr[], int size) {              // fix: use genuine arr
    for (int i = 0; i < size; i++) {                  // range-based for not working for C-style arrays because 
        cout << loc_arr[i] << ' ';                    // the array decays to a pointer and compiler doesn't know the size
    }
    cout << '\n';
}

void sortarr(int arr[], int arr_size) {
    for (int i = 0; i < arr_size-1; i++) {            // no need to compare the remaining element (nothing we can to)
        for (int j = 0; j < arr_size - i -1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9,1,5,7,8,4,2,6,5,5};
    int arr_size = sizeof(arr)/sizeof(int); 
    printarr(arr, arr_size);
    sortarr(arr, arr_size);
    printarr(arr, arr_size);
    

    return 0;
}

