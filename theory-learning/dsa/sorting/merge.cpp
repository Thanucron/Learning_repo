#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

void printarr(int loc_arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << loc_arr[i] << ' ';
    }
    cout << '\n';
}

void swaparr(int * i1, int * i2) {      // must be over sortarr
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

void sortarr(int arr[], int lowIndex, int highIndex) {
    int midIndex = highIndex / 2;
    int leftIndex = lowIndex;
    int rightIndex = highIndex;
}


int main() {
    int arr[] = {9,1,5,7,8,4,2,6,5,5};
    int arr_size = sizeof(arr)/sizeof(int); 
    printarr(arr, arr_size);
    sortarr(arr, 0, arr_size-1);
    printarr(arr, arr_size);
    

    return 0;
}

