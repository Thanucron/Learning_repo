#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

struct TennisPlayer {
    string racket;
    int experience_year;
    string grip;
    int years_old;
};

void displayStats(const TennisPlayer& player);

int main() {

    // TennisPlayer patryk_sarnowski;
    // patryk_sarnowski.racket = "Tecnifibre Medvedev";
    // patryk_sarnowski.experience_year = 8;
    // patryk_sarnowski.grip = "Pro's Pro";
    // patryk_sarnowski.years_old = 17;
    TennisPlayer patryk_sarnowski {
        "Tecnifibre Medvedev",
        8,
        "Pro's Pro",
        17,

    };

    displayStats(patryk_sarnowski);

    return 0;
}

void displayStats(const TennisPlayer& player) {
    cout << "Racket: " << player.racket << endl;
    cout << "Experience Years: " << player.experience_year << endl;
    cout << "Grip: " << player.grip << endl;
    cout << "Age: " << player.years_old << endl;
}