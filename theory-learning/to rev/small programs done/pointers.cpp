#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <algorithm>
using std::cout, std::cin, std::endl, std::string;

void pointers();
void nullptrs();
void pointers_v2();

int main() {
    // pointers();      //fill array
    // nullptrs();
    pointers_v2();
    return 0;
}
void pointers_v2() {
    int x = 4;
    int* address = &x;
    *address = 7;
    cout << (*address) << '\n';
    cout << x;
}
void pointers() {
    // 47
    string llama = "blud";
    int num = 5;
    string *bro = &llama;        // pointers allow to store addresses within the variables; add p- as renaming a var
    cout << bro << endl;
    cout << &num << endl;
    cout << &llama;
    int s_array[5];
    std::fill(s_array,s_array+5,7);
    int *ps_array = s_array;        // application
    cout << *ps_array << endl;
}

void nullptrs() { 
    //48 -> null pointers => check if the pointer has an address
    int *some_pointer = nullptr;
    int x = 123;
    some_pointer = &x;
    if (!some_pointer) {    //is zero
        cout << "Pointer " << *some_pointer << " is empty." << endl;
    }
    cout << some_pointer;  
}