#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // shared among all objects

    void increment() {
        count++;
    }

    void print() {
        cout << "Count is: " << count << endl;
    }
};

// Static variable must be defined outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    
    c1.increment();  // count = 1
    c2.increment();  // count = 2
    c3.increment();  // count = 3
    
    c1.print();      // All print 3
    c2.print();
    c3.print();
}
