#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void welcome();
void passYear();
void checkIfLeap();
void getCurrentYear();

int main()
{
    welcome();
    getCurrentYear();
}

void welcome()
{
    cout << "";
}

void checkIfLeap()
{
}

void getCurrentYear()
{
    cout << std::time(0); // s since Unix Epoch
    long long int
}