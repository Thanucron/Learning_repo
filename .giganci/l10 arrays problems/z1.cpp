#include <iostream>
#include <string>

int main()
{
    std::string name = "Tymek";
    const int num_of_char_in_name = name.length(); // why can't pass a var into the size of an array
    std::string *nameArray = new std::string();    // unknown num of elements in an array,
    // why does it have to be int, if string nothing happens

    for (int i = 0; i < num_of_char_in_name; i++) // for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {
        nameArray[i] = name[i];
    }
    std::cout << nameArray[1];
    std::cout << nameArray[3];
    std::cout << nameArray[4];
    std::cout << nameArray[0];
    // for (int element : num_of_char_in_name)
    // {
    //     std::cout << element << std::endl;
    // }

    delete[] nameArray;
    return 0;                   
}