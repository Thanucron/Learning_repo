#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

class Book {
    public:
        string title;
        string author;
        int issuance_year;
        int pages_number;
        bool interesting;

        void open() {
            cout << "You've opened the " << title;
        }
        void flip() {
            cout << "You flipped the page";
        }
        void close() {
            cout << "You've closed the " << title;
        }
};

void printBook(Book object) {
    cout << object.author;
    cout << object.title;

}

int main() {
    // object -> a collection of attributes & methods, ex. Book: attributes: author => JK Rowling, num of pages => 223, color => purple; methods: open, close, flip page
    // class -> blueprint to create objects
    // assigning values in the class -> cloning objects or some attributes/methods in them
    // constructor -> assigns values to attributes
    // you can return private value with methods (getter func, setter func)
    // inheritance -> child classes, don't need to rewrite attributes and methods
    Book harry_potter;
    
    harry_potter.author = "JK Rowling";
    // harry_potter.title = "Harry Potter";

    harry_potter.close();

    return 0;
}