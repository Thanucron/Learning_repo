#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Napisz program, który wczyta trzy liczby rzeczywiste, a na końcu programu je wszystkie wypisze. 
// Zadbaj o to, by bufor strumienia wejściowego był za każdym razem czyszczony. 
// Wynik końcowy powinien również zawierać informacje czy wczytanie danej liczby się powiodło.

int main() {
    int liczba;
    std::string tekst;
   
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    cin.clear();
    cin.ignore(1000,'\n');

    std::cout << "Podaj tekst: ";
    std::getline( std::cin, tekst );
   
    std::cout << "liczba = " << liczba << "; tekst = \"" << tekst << "\"\n";




    // int l1,l2,l3;
    // cin >> l1;
    // bool ifMistake = cin.fail();
    // cin.clear();
    // cin.ignore(1000,'\n');
        
    // cin >> l2;
    // ifMistake = cin.fail();
    // cin.clear();
    // cin.ignore(1000,'\n');
    
    // cin >> l3;
    // ifMistake = cin.fail();
    // cin.clear();
    // cin.ignore(1000,'\n');

    // cout << l1 << l2 << l3;
    

    return 0;
}