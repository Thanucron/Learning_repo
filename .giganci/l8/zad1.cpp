// Napisz program działający w nieskończoność proszący użytkownika o wpisanie liczby.
// Jeżeli liczba jest parzysta program wypisze liczbę o połowę mniejszą, natomiast jeśli jest nieparzysta liczbę dwa razy większą.

#include <iostream>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    while (true)
    {
        int num = 0;
        cout << "Wpisz liczbe: ";
        cin >> num;
        if (num % 2 == 0)
        {
            cout << num / 2 << endl;
        }
        else
        {
            cout << num * 2 << endl;
        }
    }
}