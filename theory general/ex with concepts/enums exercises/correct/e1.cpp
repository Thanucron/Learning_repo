#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

enum Day {
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main() {
    Day days_of_week = monday;
    cout << monday << '\n';
    if (days_of_week >= friday) {
        cout << "Weekend!";
    }
    else {
        cout << "Weekday";
    }
    

    return 0;
}