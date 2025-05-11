#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::string;

class Entity {
    int x,y;
    public:
        Entity(int x, int y) {
            Entity * const e = this;
            (*e).x = x;                     // e->x = x;
        }
};

int main() {
    
    return 0;
}
