#include <iostream>
using namespace std;

class Room
{
    public:              //access modifier
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    // create object of Room class
    Room room1;
    cout<< "Enter the length:";
    cin>> room1.length ;
    cout<< "Enter the breadth:";
    cin>> room1.breadth ;
    cout<< "Enter the height:";
    cin>> room1.height ;
    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;
    return 0;
}

