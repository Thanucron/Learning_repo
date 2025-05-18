#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// class TemperatureUnit {
//     private:
//     public: 
//         void convert(char unit) {
//             switch(unit) {
//                 case 'k':
//                     cout << "Celsius: " -272.15
//             }
//         }
// };

int main() {
    char unit;
    double value;
    double in_celsius;
    while(true) {   // the lower method
        cout << "Your Unit: 'k' -> \"Kelvin\"/'c' -> \"Celsius\"/'f' -> \"Fahrenheit\": ";
        cin >> unit;
        if (unit == 'k' || unit == 'c' || unit == 'f') {
            cout << "Value in ";
        }
        switch(unit) {
            case 'k':
                cout << "Kelvin: ";
                cin >> value;
                in_celsius = -272.15 + value;
                cout << "Celsius: " << in_celsius << endl;
                cout << "Fahrenheit: " << (in_celsius * 9.0/5 + 32) << endl;
                break;
            case 'c':
                cout << "Celsius: ";
                cin >> value;
                cout << "Kelvin: " << 272.15 + value << endl;
                cout << "Fahrenheit: " << (value * 9.0/5 + 32) << endl;
                break;
            case 'f':
                cout << "Fahrenheit: ";
                cin >> value;
                in_celsius = (value-32)*(5.0/9);
                cout << "Celsius: " << in_celsius << endl;
                cout << "Kelvin: " << 272.15 + in_celsius << endl;
                break;
            default:
                cout << "No such unit in this program" << endl;
                break;
        }
    }
    cout << "You good?";
    return 0;
}