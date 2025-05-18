#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

class Dog {
    private:
        string name;
    public: 
        void setName(string input) {
            this->name = input;
        }
        void speak() {
            cout << "bork bork i am " << this->name << '\n';
        }
};

void doSthWithTheDog(Dog* & ptr_dog) {
    ptr_dog->setName("Ralf");
    ptr_dog->speak();
    delete(ptr_dog);
}
int main() {
    Dog* ralf = new Dog();
    doSthWithTheDog(ralf);
    ralf->setName("Corg");
    ralf->speak();
    // cout << ralfname;
    return 0;
}

