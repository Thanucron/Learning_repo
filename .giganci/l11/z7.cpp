#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string cmd = "shutdown -s -t ";
    cmd += to_string(t);
    // system(cmd.c_str());
    t *= 10;
    system("cls");
    int temp = t;
    int h = temp % 36000;
    int m = temp % 600;
    int s = temp % 10;
    int r = temp / 10;
    if (h < 10)
        cout << "0" << h;
    else
        cout << h;
    cout << ":";
    if (m < 10)
        cout << "0" << m;
    else
        cout << m;
    cout << ":";
    if (s < 10)
        cout << "0" << s;
    else
        cout << s;
    cout << ",";
    if (r < 10)
        cout << "0" << r;
    else
        cout << r;
    cout << ":";
    t--;
    Sleep(1);
}