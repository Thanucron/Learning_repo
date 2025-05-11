#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// 2. Licznik dni
// Napisz funkcję, która po podaniu w argumentach dzień oraz miesiąc
// będzie w stanie w konsoli napisać ile dni zostało do pewnej listy
// świąt (np. Święta Bożego Narodzenia, Nowy Rok, urodziny ucznia
// itp.).

int days(short day, short month, short year) {
    std::pair<short, short> holidays_start_date(23,6);
    std::pair<short, short> new_year_start_date(1,1);
    std::pair<short, short> xmas_start_date(24,12);
    short months_days[12];
    int total_days;
    for (int i = 0; i<12;i++) {
        if (i == 2) {
            months_days[2] = ((year % 4) ? 29 : 28);
        }
        else {
            if (i <= 6) {
            months_days[i] = ((year % 2) ? 30 : 31);
            }
            else {
                months_days[i] = ((year % 2) ? 31 : 30);
            }
        }
    }
    cout << "Days until Christmas: ";
    cout << "Days till " << ++year << ": " << endl;
    cout << "Days till holidays: ";
    
}

int main() {
    days(2,14,2025);
    

    return 0;
}