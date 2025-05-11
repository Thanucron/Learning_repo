#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    int t = 3;
    string cmd = "shutdown -s -t ";
    cmd += to_string(t);
    system(cmd.c_str());
    cout << t;
    Sleep(1000);
    t--;
    system("cls");
    cout << t;
    Sleep(1000);
    t--;
    system("cls");
    cout << t;
    Sleep(1000);
    t--;
    system("cls");
    cout << t;
}