#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {
    const int n = 48;
    int *arr = new int[n];
    cout << sizeof(arr) << '\n';
    for (int i = 0; i < n; i++) {         // why not: for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {  -> solved
        arr[i] = i+1;
    }
    // cout << arr[n-1] << '\n';

    // std::fill(arr, )         possible to do with that? no -> solved: it's smart - fill(vec.first(), vec.end(), 4);
    // for (auto& element : &(arr[0])) {
    //     cout << element;                     how doesn't it work?? -> solved: needs to know the size of an array at compile-time
    // }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }

    // for (int* ptr = arr; ptr < arr + n; ptr++) {
    //     cout << *ptr << '\n';
    // }
    

    delete[] arr;
    return 0;
}

