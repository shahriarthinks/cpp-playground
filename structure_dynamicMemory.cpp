#include <iostream>
using namespace std;

struct Car {
    char make[50];
    char model[50];
    int year;
};

int main() {
    Car* car = new Car;

    cout << "Enter car make: ";
    cin >> car->make;
    cout << "Enter car model: ";
    cin >> car->model;
    cout << "Enter car year: ";
    cin >> car->year;

    cout << "\nCar Details:\n";
    cout << "Make: " << car->make << endl;
    cout << "Model: " << car->model << endl;
    cout << "Year: " << car->year << endl;

    delete car;

    return 0;
}

