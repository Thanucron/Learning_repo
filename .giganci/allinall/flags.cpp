#include <iostream> // access to functions with input and output operations
#include <stdio.h>

// groove();

int main()
{
    printf("Mam %d lat\n", 16);
    printf("Liczba pi: %f\n", 3.141592653589793238462643383279502884197);
    printf("Ulubiona litera: %c\n", 'k');
    const int WIDTH = 1920; // compiler knows it's not gonna change
    const int HEIGHT = 1080;
    const int gravity = 10;
    std::string acceleration_unit = "m/s^2\n";
    std::cout << gravity << acceleration_unit;
    std::cout << "k"; // "ąćęłóśź"
    // std::cout << "Hello World\n";
    // std::cout << checkin << '\n';
    return 0;
}
