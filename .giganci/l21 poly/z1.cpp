#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// 1. Polimorfizm dynamiczny (przesłanianie)
// Stwórz klasę bazową Fruit z metodą wirtualną color(), która wypisuje
// kolor owocu. Następnie stwórz dwie klasy pochodne: Apple i
// Banana, które przesłaniają metodę color() i wypisują odpowiednio
// "czerwony" dla jabłka i "żółty" dla banana.

class Fruit {
    protected:
    string color;
    public:
    // Fruit(string color="default") : color(color) {};
    virtual void color() {
        cout << color << '\n';
    }
};
class Apple : Fruit{
    private:
        string color = "red";
    public:
        void color() override{
            cout << color << '\n';
        }
};
class Banana : Fruit{
    private:
        string color = "yellow";
    public:
        void color() override{
            cout << color << '\n';
        }
};

int main() {
    Fruit* object = new Fruit;
    object->color();

    // Fruit inst("blue");
    // inst.color();



    return 0;
}