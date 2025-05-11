// Żywa komórka, która ma mniej niż dwóch sąsiadów, w kolejnym kroku umiera.
// Żywa komórka, która ma więcej niż trzech sąsiadów, w kolejnym kroku umiera.
// Żywa komórka, która ma dwóch lub trzech sąsiadów – przeżywa.
// Martwa komórka, która ma trzech żywych sąsiadów – w kolejnym kroku ożywa.
// array <=> pointer

#include <iostream>
#include <math.h>
#include <string>

void display(int tab[20][20])
{
    for (int i; i < 20; i++)
    {
        for (int j; j < 20; j++)
        {
            if (tab[i][j] == 0)
            {
                std::cout << (char)176 << (char)176; // making wider
            }
            else
            {
                std::cout << (char)219 << (char)219;
            }
        }
        std::cout << std::endl; // can't be without cout
    }
}

int find_neighbors(int tab[20][20], int i, int j)
{
    if ()

        else
        {
        }
}

int main()
{
    int plansza[20][20] = {};
    plansza[9][8] = 1;
    plansza[9][10] = 1;
    plansza[10][10] = 1;
    plansza[10][9] = 1;
    plansza[11][9] = 1;
    display(plansza);
}