#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Stwórz klasę "Book" z atrybutami: title, author i numberOfPages.
// ○ Dodaj konstruktor, który inicjalizuje wszystkie atrybuty klasy.
// ○ Dodaj metodę, która wypisuje informacje o książce.

class Book {
    string title;
    string author;
    int num_of_pages;
    public: 
        Book(string title, string author, int pages_num) : title(title), author(author), num_of_pages(pages_num) {};
        void display_info() {
            cout << title << "'s details: " << '\n';
            cout << "Author: " << author << '\n';
            cout << "number of pages: ".capitalize() << num_of_pages << '\n';
        }
};

int main() {
    Book One("Harry Potter", "JK Rowling", 300);
    One.display_info();
    return 0;
}