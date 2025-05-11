#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int* 


int main() {
    const int size = 10;
    // const int arr_size = std::round(size/2);
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 || i == 0) {
            // cout << i << "e" << '\n';
            arr[i] = i;
        }
    }
    for (int* i = arr; i < &(arr[size-1]); i++) {        // can't do a for each loop?? -> solved: vector stores the size
        cout << arr[i] << '\n';
    }
    delete[] arr;       // I got no idea why these random values get assigned
    return 0;
}

