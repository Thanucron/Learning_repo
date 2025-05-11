#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void swap_nums(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int tab[], int n);
void selection_sort(int tab[], int n);
void insertion_sort(int tab[], int n);

int main()
{
    int tablica[] = {5, 3, 5, 1, 4}; // int definition - all int elements
    int size = sizeof(tablica) / sizeof(*tablica);
    bubble_sort(tablica, size);
    // for (int e : tablica)
    // {
    //     cout << e << " ";
    // }
    cout << tablica;
    return 0;
}

void bubble_sort(int tab[], int n)
{
    for (int i = 0; i < n - 1 - i; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                swap_nums(tab[j], tab[j + 1]);
            }
        }
    }
}

void selection_sort(int tab[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int idxMinimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (tab[j] < tab[idxMinimum])
            {
                idxMinimum = j;
            }
        }
        swap_nums(tab[i], tab[idxMinimum]);
    }
}