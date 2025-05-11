#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {
    const int size = 5;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 11) + 1;
    }   
    int*arr_p = arr;                  // if set to void, why can't arr_p++ in the for loop?? -> I was sure we can modify the address it stores regardless of the type
    //void* does not have a defined size, so the compiler doesn’t know how much to increment when doing arr_p++.
    for (int i = 0; i < size; i++) {        
        cout << *(arr_p++) << '\n';
    } 
    return 0;
}

