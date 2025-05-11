#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Stwórz klasę "Dog" z atrybutami: name, breed i age. Dodaj
// konstruktor, który inicjalizuje wszystkie atrybuty klasy. Dodaj metodę
// "bark", która wypisuje na ekranie "Hau! Hau!".

class Dog {
    private: 
        string name;
        string breed;
        int age;
    public:
        Dog(string nick, string breed, int age) : name(nick),breed(breed),age(age) {};
        void bark() {
            cout << "woof";
        }
        
};


int main() {

    Dog speciman1("Bruh","Toshiba", 66);
    speciman1.bark();

    return 0;
}