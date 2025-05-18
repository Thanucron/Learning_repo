#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

// typedef very_long_datatype nick_for_it; -> then we can use in declaring variables
// <=> using nick_for_it = very_long_datatype;

void TypeConversion() {
    double x = (int)3.14;
    cout << x << endl;

    int correct = 8;
    int total = 10;
    int score = correct/(double)total * 100;   // it instantly discards the decimal part
    cout << score << "%" << endl;
}


int main() {
    //TypeConversion();
    string name;
    int age;
    cout << "What's your age?: ";
    cin >> age;
    cout << "What's your name?: ";
    std::getline(cin, name);
    return 0;
}

