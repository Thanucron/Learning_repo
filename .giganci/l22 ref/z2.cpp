#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;



void update_score(std::unique_ptr<short> score, short & value) {
    *score += value;
}

int main() {
    short score{1};
    short value{2};
    std::unique_ptr<short> ptr_score = std::make_unique<short>(score);
    update_score(ptr_score, value);
    cout << *ptr_score;

    return 0;
}




























