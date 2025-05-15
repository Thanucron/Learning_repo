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

void sortarr(int arr[], int start, int end) {
    if (start >= end) return;
    int pivot = arr[end];
    int i = start-1;

    for(int j = start; j < end; j++) {
        if (arr[j] <= pivot) {                      // less than
            i++;
            swaparr(&arr[i], &arr[j]);
        }
    }
    swaparr(&arr[i+1], &arr[end]);

    sortarr(arr,start, i-1);
    sortarr(arr,i+1,end);
}


int main() {
    int arr[] = {9,1,5,7,8,4,2,6,5,5};
    int arr_size = sizeof(arr)/sizeof(int); 
    printarr(arr, arr_size);
    sortarr(arr, 0, arr_size-1);
    printarr(arr, arr_size);
    

    return 0;
}

