#include <vector>
#include <iostream>
using std::cout, std::string, std::cin, std::vector;


int main() {
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    for (int* i = &(vector1.front()); i <= &(vector1.back()); i++) {
        cout << *i << '\n';
    }   
    vector2.push_back(100);
    vector2.push_back(200);  
    for (int* i = &(vector2.front()); i <= &(vector2.back()); i++) {
        cout << *i << '\n';
    }  
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    for (auto & element : vector_2d) {
        for (int & inner_element : element) {
            cout << inner_element << ' ';
        }
    } 
    vector1[0] = 1000; 
    for (auto & element : vector_2d) {
        for (int & inner_element : element) {
            cout << inner_element << ' ';
        }
    }
    for (int* i = &(vector1.front()); i <= &(vector1.back()); i++) {
        cout << *i << '\n';
    } 


}