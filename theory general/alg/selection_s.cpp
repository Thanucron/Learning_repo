#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;


int main() {
    
    int arr[] = {9,1,5,7,8,4,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j = 1+i; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        


    }
    for (int & element : arr) {
        cout << element << ' ';
    }

    return 0;
}

