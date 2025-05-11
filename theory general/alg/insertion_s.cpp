#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;


int main() {
    
    int arr[] = {9,1,5,7,8,4,2,6,5,5};
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        int temp = arr[i];
        while (i > 0 && temp < arr[i-1]) {
            arr[i] = arr[i-1];
            // arr[i-1] = temp;
            i--;
        }
        arr[i] = temp;

    }
    for (int & element : arr) {
        cout << element << ' ';
    }


    return 0;
}

