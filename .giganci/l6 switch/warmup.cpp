#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

void printRomanNum()
{
    int liczba_user;
    cout << "Podaj liczbe od 1 do 10: ";
    cin >> liczba_user;

    switch (liczba_user)
    {
    case 1:
        cout << "I";
        break;
    case 2:
        cout << "II";
        break;
    case 3:
        cout << "III";
        break;
    case 4:
        cout << "IV";
        break;
    case 5:
        cout << "V";
        break;
    case 6:
        cout << "VI";
        break;
    case 7:
        cout << "VII";
        break;
    case 8:
        cout << "VIII";
        break;
    case 9:
        cout << "IX";
        break;
    case 10:
        cout << "X";
        break;
    default:
        cout << "Wprowadzono zle wejscie";
    }
}

int main()
{
    printRomanNum();
    return 0;
}