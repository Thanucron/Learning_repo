#include <iostream>
#include <string>
#include <cmath>
#include <utility>
using std::cout, std::cin, std::endl, std::string;

void welcome();
double FirstNum();
char getOperationType();
std::pair<bool,double> performOperation(double & total, char op_symbol, char & clear);
void bye();

int main() {
    welcome();
    char clear = '0';
    while (clear != 'q') {
        bool again = true;
        double num1 = FirstNum();   // make clear scheme work for numbers too
        while (again) {
            char op_symbol = getOperationType();
            clear = op_symbol;
            if (clear == 'c'|| clear == 'q') {
                break;
            }
            auto result = performOperation(num1,op_symbol,clear);
            again = result.first;
            num1 = result.second;
        }
    }
    bye();
    return 0;
}// make relative to operation sequence

void welcome() {
    cout << "Simple Calculator program" << endl;
}

void bye() {
    cout << "See you later, have a good one!";
}

double FirstNum() {
    double n;
    cout << "1 number: ";
    cin >> n;
    return n;
}

char getOperationType() {
    char operation_type = '0';
    char possible_symbols[] = {'+','-','*','/','^','r'};
    bool in_array = false;
    while (true){
        cout << "Type: " << "'c' -> clear; 'q' -> quit; or" << endl;
        cout << "Pick one of the following: +,-,*,/,^,r (r->radical): "; // exceptions, different letters
        cin >> operation_type;
        for (auto element : possible_symbols) {
            if (element == operation_type) {
                in_array = true;
            }
        }
        if (in_array || operation_type != 'c' || operation_type != 'q') {
            break;
        }
        cout<<"There is no such operation" << endl;
    }
    return operation_type;

    // string operation_difficulty;
    // cout << "Which operation do you want to make?" << endl;
    // cout << "Basic or complicated functions?: ";
    // cin >> operation_difficulty; // to lower
    // if (operation_difficulty == "basic" || operation_difficulty == "Basic" || operation_difficulty == "BASIC") {    // if in list
    // }
    // else Root, Power, Sin, Cos, Tan, Arcsin, Arccos, ArcTan, Abs, Log:"
}

// void getNumbers() {
    // int number_count;

    // if (operation == "Addition" || operation == "Subtraction" || operation == "Multiplication" || operation == "Division") {
    //     cout << "How many numbers should be involved?: ";
    //     cin >> number_count;
    // }
    // if (number_count == 1) {
    //     double number; 
    //     cout << "Put the number you'd like to " << operation;
    //     cin >> number;
    // }
    // else {
    //     double numbers[number_count];
    //     for(int i = 0; i < number_count;i++) {
    //         cout << "Put a number " << ++i;
    //         cin >> numbers[i];
    //     }
    // }


std::pair<bool,double> performOperation(double & total, char op_symbol, char & clear) {
    double second_num;          // pass a number until the user passes sth else to clear
    if (op_symbol == 'r') {
        cout << "Degree of the root (pass fractions as decimals): ";
        cin >> second_num;
        cout << "(" << total << ")^(1/("<< second_num<< "))" << " = ";
        if (second_num==0) {
            total = 1;
        }
        else {
            total = pow(total,(1.0/second_num));
        }
    }
    else if (op_symbol == '^') {
        cout << "Exponent: ";
        cin >> second_num;
        cout << "(" << total << ")^("<< second_num<< ")" << " = ";
        total = pow(total,second_num);
    }
    else {
        cout << "Second number: ";
        cin >> second_num;
        cout << total << " " << op_symbol << " " << second_num << " = ";
        switch(op_symbol) {
            case '+':
                total += second_num;
                break;
            case '-':
                total -= second_num;
                break;
            case '*':
                total *= second_num;
                break;
            case '/': {                                      // look for braces -> declaring a variable => necessary
                double denominator = second_num;
                if (denominator != 0) {
                    total /= denominator;
                }
                else {
                    cout << "Division by 0 cannot be computed" << endl;
                    clear = 'c';
                }
                break;
            }
            default:
                cout << "You've put the wrong symbol, try coping & pasting" << endl;
                clear = 'c';
                break;
            }   
        }
    if (clear != 'c') {
        cout << total << endl;
    }
    return std::make_pair((clear != 'c'),total);

        // if (clear) {
        //     break;
        // }
        // else {
        //     cout << "Type c if you want to clear, if not type sth else: ";       // look for braces 
        //     cin >> if_clears;
        //     if (if_clears == 'c') {
        //         break;
        //     }
        // }
}

