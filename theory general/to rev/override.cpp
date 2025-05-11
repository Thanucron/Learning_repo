#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

class Example {
    public:
        virtual int get_value() {
            int x = 4;
            return x;
        }
    };
    
class Inherit : public Example {
    public: 
        int get_value() {
            return 3;
        }
};

int main() {
    // Example instance_ex;
    Inherit * ex_ptr = new Inherit;     // point to the parent
    cout << ex_ptr->get_value();
    
    delete ex_ptr;
    return 0;
}