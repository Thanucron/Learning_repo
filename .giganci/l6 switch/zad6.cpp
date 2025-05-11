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

    long long int amount;
    cout << "Pass an amount of money and I will write it in words: ";
    cin >> amount;

    list<string> ones = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    list<string> tens_01 = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    list<string> tens_02up = {"twenty", "thirty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    list<string> prefixes = {"thousand", "milion", "billion", "trillion"};

    int digits_in_amount = (int)std::to_string(amount).length();
    if (digits_in_amount < 2)
    {
        switch (amount)
        {
            int amount_temp = const amount;
        case amount_temp:
            cout << "Zero";
            break;
        case 1:
        }
    }

    switch (digits_in_amount)
    {
    case (amount == 0):
        cout << "Zero";
    }

    // if (> 900 trillion) -> there is less money in the entire world than this value

    return 0;
}
