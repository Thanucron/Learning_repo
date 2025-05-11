#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Stwórz klasę Printer, która będzie miała przeciążone metody print.
// Pierwsza metoda powinna drukować tekst, a druga liczbę całkowitą.
// Dodatkowo, stwórz trzecią metodę print, która będzie przyjmować
// tekst i liczbę całkowitą, a następnie drukować je razem.

class Printer {
    public:
        void print(string text) {
            cout << text << '\n';
        }
        void print(int num) {
            cout << num << '\n';
        }
        void print(string text, int num) {
            cout << text << num << '\n';
        }
};

int main() {
    Printer* inst_prin = new Printer;
    inst_prin->print("gg");
    return 0;
}