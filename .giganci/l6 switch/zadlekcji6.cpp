#include <iostream>
#include <cstdint>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int sprawdzenie()
{
    int month_user;
    cout << "Wpisz miesiac: ";
    cin >> month_user;

    switch (month_user)
    {
    case 1:

        cout << "Styczen";
        break;

    case 2:

        cout << "Luty";
        break;
    case 3:

        cout << "Marzec";
        break;
    case 4:

        cout << "Kwiecien";
        break;
    case 5:

        cout << "Maj";
        break;
    case 6:

        cout << "Czerwiec";
        break;
    case 7:

        cout << "Lipiec";
        break;
    case 8:

        cout << "Sierpien";
        break;
    case 9:

        cout << "Wrzesien";
        break;
    case 10:

        cout << "Pazdziernik";
        break;
    case 11:

        cout << "Listopad";
        break;
    case 12:

        cout << "Grudzien";
        break;

    default:
        cout << "Nie poznaje takiego numeru miesiaca\n";
        return 1;
    }
    return 0;
}

int main()
{
    int month_user;
    bool quit_value = 1;
    while (quit_value != 0) // getline
    {
        cout << "Wpisz miesiac: ";
        cin >> month_user;
        quit_value = sprawdzenie();
    }

    return 0;
}

// case nie musza byc po kolei
// jak dasz || to zwraca 0 v 1