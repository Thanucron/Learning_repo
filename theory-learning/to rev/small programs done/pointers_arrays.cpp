#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

void printarr(int array[]);     // is this the same as int *array?


int main() {
    int n_array[4] = {1,45,2,7};        //std::array doesn't have that
    cout << &(n_array[0]) << '\n';
    cout << n_array << '\n';
    cout << *n_array << '\n';
    cout << n_array[2] << '\n';
    cout << *((n_array) + 2) << '\n';
    cout << &(n_array[3]) << '\n';
    cout << n_array+3 << '\n';
    //cout << sizeof(n_array);      // calculated in runtime
    printarr(n_array); 
    

    return 0;
}

// array <=> &(array[0])
// array[0] <=> *array
// ====================  allocates next memory addresses:
// array[3] <-> *((array) + 3)         v &(array[0]) + 2
// &(array[3]) <-> array+3


void printarr(int array[]) {
    cout << '\n' << array << '\n';
    // how can I have access to the whole array if that's the first element?? solved
    for (int * i = array; i < array+sizeof(array); i++) {
        cout << i << '\n';
    }
}