#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Stwórz klasę "Person" z atrybutami: firstName, lastName i age.
// Dodaj konstruktor, który inicjalizuje wszystkie atrybuty klasy. Dodaj
// metodę, która wypisuje pełne imię i nazwisko osoby oraz jej wiek.

class Person {
    private:
        string firstName;
        string lastName;
        int age;
    public:
        Person(string fName,string lName, int age) : firstName(fName), lastName(lName), age(age) {};

        void display_info() {
            cout << firstName <<" "<<  lastName << ", ";
            cout << "Age: " <<  age << endl;
        }
};

int main() {

    Person first("Adam","Siadam",55);
    first.display_info();

    return 0;
}