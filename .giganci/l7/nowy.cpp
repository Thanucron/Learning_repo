#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "bimbam " << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "bam ";
        }
        else if (i % 3 == 0)
        {
            cout << "bim ";
        }
        else
        {
            cout << i << " ";
        }
    }
}
// Korzystając z dowolnej pętli napisz program wypisujący liczby od 1 do 100, oraz
// słowo bim jeżeli dana liczba jest podzielna przez 3, bam jeżeli jest podzielna przez 5
// i bimbam jeżeli jest podzielna przez obie. Natomiast w innym wypadku wypisuje się
// po prostu liczba
