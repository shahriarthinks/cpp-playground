#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

    void show(){
    cout<< "I am Jubayer."<<endl;
    }

   public:
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
        show();
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
