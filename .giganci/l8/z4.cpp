#include <iostream>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string caption = "United States Of America!!!";
    for (char i : caption)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}