#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void sortArray(int numArray[], int size, int temp);

void printArray(int numArray[], int size);

int main() {

    int num_array[] = {5,1,6,3,2,9,7,4,8};
    int size = sizeof(num_array)/sizeof(int);
    int temp;
    sortArray(num_array,size,temp);
    printArray(num_array, size);

    return 0;
}

void sortArray(int narray[], int size, int temp) {
    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            if (narray[i] <= narray[j]) {
                std::swap(narray[i],narray[j]);
            }
        }
        for (int i = 0; i < size; i++) {
            cout << narray[i];
        }
        cout << endl;
    }
}

void printArray(int numArray[], int size) {           // array is passed as a pointer 
    for (int i = 0; i < size; i++) {
        cout << numArray[i];
    }
}
