#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

struct Person {
    string name;
    int age;
};

int main() {
    // struct Person friend;  don't need it
    Person* ptr_zdzisio = new Person;
    ptr_zdzisio->name = "Zdzislaw";
    ptr_zdzisio->age = 60;
    cout << ptr_zdzisio->name << '\n';
    
    delete ptr_zdzisio;
    return 0;
}

