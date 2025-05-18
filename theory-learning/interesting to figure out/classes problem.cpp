#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <array>
using std::cout, std::cin, std::endl, std::string;

// 1.Stwórz tablicę zawierającą 10 liczb naturalnych, a następnie wypisz sumę
// najmniejszej i największej z liczb.

void generate_nums(std::array<int> arr[]) {

}

class Dog : public Animal {
    public:
        Dog(string _name) {
            Animal(_name);  // Incorrect - This does NOT call the base constructor!
        }
    
        void bark() {
            cout << "Woof! Woof!\n";
        }
};
    


int main() {
    array<int> some_array;
    generate_nums(some_array);


    return 0;
}