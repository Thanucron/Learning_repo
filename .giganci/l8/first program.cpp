#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void welcome();
char getYesNo();
void printResponse(char response);
int getAge();
char askYesOrNoQuestion();
void giveAnAnswer(char answer_from_user);

int main()
{
    welcome();

    char user_answer = askYesOrNoQuestion();
    giveAnAnswer(user_answer);

    cin.ignore();
    cin.get();
    return 0;
}

void welcome()
{
    cout << "Welcome!\n";
}

char getYesNo()
{
    cout << "Would you like to give your age? Y/N: ";

    char response;
    cin >> response;

    return response;
}

void printResponse(char response)
{
    cout << "You've typed " << response << endl;
}

int getAge()
{
    int age;
    cout << "How old are you?: ";
    cin >> age;
    return age;
}

char askYesOrNoQuestion()
{
    char response = getYesNo();
    printResponse(response);
    return response;
}

void giveAnAnswer(char response)
{
    if (response == 'y' || response == 'Y')
    {
        int user_age = getAge();
        cout << "you are " << user_age << " years old. Thanks for free money - now I will sell that data to third party websites for pennies\n";
    }
    else if (response == 'N' || response == 'n')
    {
        cout << "Ok I get that ;(, I don't have peers and I'm abandoned so I just wanted to make friends\n";
    }
    else
    {
        cout << "I don't know that response, could you pass a single letter like y or n?\n";
    }
}

// int checking_length;
// std::string message;
// checking_length = 812342389;
// std::cout << checking_length << '\n';
// message = "Pass your age";
// std::cin >> message;
// std::cout << message << '\n';
// long long check = 3124859328174884383;
// cout << check;