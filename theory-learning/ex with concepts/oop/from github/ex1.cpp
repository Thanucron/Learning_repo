#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::string;

class Point {
    int x, y;
    public:
        Point(int n1, int n2) : x(n1), y(n2) {}
        int getDistance(int x1, int y1) {
            return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        }
};
int main() {
    Point coord1(4,3);
    cout << coord1.getDistance(5,7);
    return 0;
}

