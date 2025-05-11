#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

// Stwórz klasę Vehicle z atrybutami brand (marka) i speed
// (prędkość). Następnie stwórz klasę Car, która dziedziczy po klasie
// Vehicle i dodaje atrybut fuelType (typ paliwa).

class Vehicle {
    protected:
        string brand;
        int speed;
    public:
        Vehicle(string brand, int speed) : brand(brand), speed(speed) {}
        void set_brand(string brand_i) {
            brand = brand_i;
        }
        void set_speed(int speed_i) {
            speed = speed_i;
        }
        void display_info() {
            cout << brand << speed << '\n';
        }
};

class Car : Vehicle{
    protected:
        string fuel_type;
    public:
        Car(string brand, int speed, string fuel_type) : Vehicle(brand,speed), fuel_type(fuel_type) {}
        void set_fuel_type(string fuel_type_i) {
            fuel_type = fuel_type_i;
        }
        void display_info() {
            cout << brand << " " << speed << " " << fuel_type << '\n';
        }

};

int main() {

    Vehicle one("Cheng", 15);
    Car one_car("Ford",70, "Hybrid");
    one_car.set_fuel_type("Diesel");
    one.set_speed(20);
    one_car.display_info();
    one.display_info();
    

    return 0;
}