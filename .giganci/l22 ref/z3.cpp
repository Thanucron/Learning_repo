#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;


class Tourist {
    private:
        string name;
        short age;
        string destination;
    public:
        Tourist(string name, short age, string destination) {
            this->name = name, this->age = age, this->destination=destination;
        }
        ~Tourist() { // string name = name, short age = age, string destination = destination
            cout << "Object deleted";
        }
};

int main() {
    Tourist lad("Bart", 22, "Cyprus");

    return 0;
}

