#include <iostream>

int main() // what if two int mains
{
    void AddOne(int &a)
    { // how to make a nested func
        a++;
    }
    AddOne(5);
}