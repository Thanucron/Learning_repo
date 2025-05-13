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

void sortarr(int arr[], int arr_size) {
    int temp;
    for(int i=1; i<arr_size; i++) {
        
        while()
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

