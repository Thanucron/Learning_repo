#include <iostream>
// #include <format>
#include <windows.h>
using std::cin;
using std::cout;
using std::endl;
// using std::format;
using std::string;

void sayHi();
string getTheName();
void welcomeAndIntro(string name);
int getStartingNum();
void letsGoUser(string username);
void countdown(int starting_num);

int main()
{
    sayHi();
    string username = getTheName();
    welcomeAndIntro(username);
    letsGoUser(username);
    countdown(getStartingNum());
    return 0;
}

void sayHi()
{
    cout << "Hello!" << endl;
}

string getTheName()
{
    string name;
    cout << "What's your name?: ";
    cin >> name; // endl
    return name;
}

void welcomeAndIntro(string name)
{
    string message = "Welcome " + name + "! This is a countdown program.";
    cout << message << endl;
}

int getStartingNum()
{
    int starting_num;
    cout << "Pick a number from which number do you want to start. (Make it smaller than 10 digits): ";
    cin >> starting_num;
    return starting_num;
}

void letsGoUser(string username)
{
    string name = getTheName();
    cout << "Let's go " << name << "!" << endl;
}

void countdown(int starting_num)
{
    while (starting_num > 0)
    {
        cout << starting_num-- << "\r";
        cout.flush();
        Sleep(1000);
    }
    cout << "finish!";
}