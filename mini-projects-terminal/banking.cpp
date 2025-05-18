#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

void showBalance(double balance);
std::pair<double,double> deposit(double & balance);
double withdrawal(double & balance);

int main() {
    double balance = 0;
    char choice;
    double history {};
    // cout << "How can I make you happy today?: ";
    cout << "Options: 'q' -> \"quit\"/\"'t' -> show balance/d' -> \"deposit\"/'w' -> \"withdraw\": ";
    cin >> choice;
    switch(choice) {
        case 'q':
            break;
        case 'd':
            std::pair<double, double> result = deposit(balance); // pass to a func with <type, type>
            
    }
    

    return 0;
}

std::pair<double,double> deposit(double & balance) {
    double depo_val;
    cout << "How much?: ";
    cin >> depo_val;
    balance += depo_val;
    return std::make_pair(balance, depo_val);
}