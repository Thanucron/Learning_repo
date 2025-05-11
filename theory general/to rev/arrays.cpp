#include <iostream>
#include <windows.h> // revise random numbers

int main()
{
    int firstArray[4] = {1, 411, 32, 4}; // vs {{1}, {411}, {32}, {4}}
    std::cout << firstArray[1] << std::endl;
    int someArray[3]; // could be someArray[] = {1,1,2,3}, uneffective
    for (int i = 0; i < 3; i++)
    {
        someArray[i] = i;
    }
    // std::cout << someArray << std::endl;
    for (auto &element : someArray) // what auto keyword does?
    {
        std::cout << "Element: " << element << std::endl;
    }
    for (int element : someArray)
    {
        std::cout << "Element: " << element << std::endl; // same output
    }
    for (int i = 0; i < sizeof(firstArray) / sizeof(int); i++)
    {
        std::cout << i << ": " << firstArray[i] << std::endl;
    }

    std::cout <<"Array has this many elements" << sizeof(firstArray) / sizeof(int) << std::endl;

    const int size = 5;         // dynamic array -> we can change this size in before using, not const
    std::string arr[size] = {"asdf", "fasd", "fa", "faa", "bs"};    
    int size_z = 5;
    int *dynamicArray = new int(size_z);

    delete[] dynamicArray;  // array with different data types;  -> class,array,enum altogether
    // declare int array[]; -> of unknown length and unfixed length;
    // you can modify and change the values, but the size is stated and fixed at the declaration 
}
