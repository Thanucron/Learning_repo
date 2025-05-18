#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using std::cout, std::cin, std::string;


int main() {
    char* buffer = new char[8];         // allocate 8 bytes and return a pointer to the beginning of that block of memory
    memset(buffer, 6, 8);               // fills a pointer with a value
    char** ptr = &buffer;
    cout << ptr << buffer << '\n';
    cout << *buffer << '\n';
    int size_alloc = sizeof(buffer)/sizeof(char);
    for (int i = 0; i < size_alloc; i++) {
        cout << buffer[i] << ' ';
    }
    delete[] buffer;                    // 32 bit application - address is 32 bits (4bytes)
    return 0;
}

