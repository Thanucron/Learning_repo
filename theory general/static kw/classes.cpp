#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

class Entity {
    static int x,y;
    public:
        void Print() {
            cout << x << y << '\n';
        }
};


int main() {
    // Entity::x = 5;
    // Enitiy::y = 4;
    Entity * e;
    // (*e).Print();    
    cout << "tomato";
    return 0;
}

