#include <iostream>

int zrob_herbate(int osoby)
{
    std::cout << "1. Zagotuj wode" << std::endl;
    std::cout << "2. Wsadz woreczek herbaty do kubka" << std::endl;
    std::cout << "3. Zalej herbate" << std::endl;
    return 0;
}

int main()
{
    float ileHerbat = zrob_herbate(5);
    std::cout << "Liczba przyghotowanych herbat: " << ileHerbat << std::endl;
    return 0;
}