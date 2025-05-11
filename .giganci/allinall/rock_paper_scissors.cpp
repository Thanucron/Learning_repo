#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    srand(time(NULL));
    int PCchoice = rand() % 3 + 1;
    int choice;
    cout << "1 - Papier\n2 - Kamien\n3 - Nozyce\n";
    cin >> choice;
    if (choice == PCchoice)
    {
        cout << "Draw";
    }
    else
    {
        if ((choice == 1 && PCchoice == 2) || (choice == 3 && PCchoice == 1) || (choice == 2 && PCchoice == 3))
        {
            cout << "Komputer wybral " << PCchoice << endl;
            cout << "Wygrales 🦍🦍🦍🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿";
        }
        else
        {
            cout << "Komputer wybral " << PCchoice << endl;
            cout << "Przegrales 😆😆😆☝☝☝☝☝☝☝☝☝☝☝☝☝";
        }
    }
    return 0;
}