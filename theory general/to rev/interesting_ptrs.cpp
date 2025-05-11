#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {

    int arr[] = {1,2,3,4};
    int *ptr = arr;
    cout << *(ptr++) << endl; // saves ptr as index 1
    cout << *(ptr + 2) << endl; // doesn't savee
    cout << *(++ptr) << endl;
    cout << *(ptr--);

    return 0;
}