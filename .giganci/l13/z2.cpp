// Utwórz 3 zmienne kasa, poziom i ranga. Następnie napisz program sprawdzający
// czy stać cię na zakup Railguna. Wymagania railguna: kasa >=1000, poziom >=100,
// ranga >= 10. Jeżeli spełniasz 1 lub 2 wymagania program powinien poinformować
// Cię że jeszcze nie możesz kupić Railguna, ale niewiele Ci brakuje, natomiast jeżeli
// nie spełniasz żadnego wymagania to powinna się pojawić informacja że daleka
// droga przed tobą.

#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int kasa = 1000;
    int ranga = 112;
    int level = 1;
    if (kasa >= 1000 && level >= 100 && ranga >= 10)
    {
        cout << "Masz railguna" << endl;
    }
    else if (kasa >= 1000 || level >= 100 || ranga < 10)
    {
        cout << "Niewiele ci brakuje" << endl;
    }
    else
    {
        cout << "daleka droga przed tobą." << endl;
    }

    return 0;
}