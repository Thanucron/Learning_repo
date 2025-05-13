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
    if (lowIndex >= highIndex) {
        return;
    }
    int pivot = arr[highIndex];
    int leftPointer = lowIndex;
    int rightPointer = highIndex-1;
    
    while (leftPointer < rightPointer) {
        
        while (arr[leftPointer] <= pivot && leftPointer < rightPointer) {
            leftPointer++;       // lower <-> keep walking 
        }
        while (arr[rightPointer] >= pivot && leftPointer < rightPointer) {
            rightPointer--;
        }
        swaparr(&arr[leftPointer], &arr[rightPointer]);
    }
    swaparr(&arr[leftPointer],&arr[highIndex]);
    
    sortarr(arr,lowIndex,leftPointer-1);
    sortarr(arr,leftPointer+1,highIndex);
}


int main() {
    int arr[] = {9,1,5,7,8,4,2,6,5,5};
    int arr_size = sizeof(arr)/sizeof(int); 
    printarr(arr, arr_size);
    sortarr(arr, 0, arr_size-1);
    printarr(arr, arr_size);
    

    return 0;
}

