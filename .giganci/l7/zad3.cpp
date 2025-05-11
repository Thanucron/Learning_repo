// wybierz liczbę od 1 do 10, a następnie napisz program który będzie pytał
// użytkownika o liczbę dopóki nie zgadnie prawidłowej. Po każdej próbie program
// powinien informować czy podana liczba jest za mała, czy za duża.

#include <iostream>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    srand(time(NULL));
    int user_num = 0;
    int correct = rand() % 10 + 1;
    while (correct != user_num)
    {
        cout << "Give a num: ";
        cin >> user_num;
        if (user_num > correct)
        {
            cout << "your num is too big" << endl;
        }
        else if (user_num < correct)
        {
            cout << "your num is too small" << endl;
        }
        else
        {
            cout << "You won";
            break;
        }
    }
}