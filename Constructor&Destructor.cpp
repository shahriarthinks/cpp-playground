#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    int id;
    double salary;

public:
    // **1. Default Constructor (No parameters)**
    Teacher() {
        name = "Unknown";
        id = 0;
        salary = 0.0;
        cout << "Default Constructor Called!" << endl;
    }

    // **2. Parameterized Constructor**
    Teacher(string n, int i, double s) {
        name = n;
        id = i;
        // Ensuring salary is not negative
        salary = (s > 0) ? s : 0;
        cout << "Parameterized Constructor Called for " << name << endl;
    }

    // **3. Destructor (Runs when object goes out of scope)**
    ~Teacher() {
        cout << "Destructor Called for " << name << endl;
    }

    // **Setters**
    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }
    void setSalary(double s) {
        salary = (s > 0) ? s : 0; // Prevents negative salary
    }

    // **Getters**
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    double getSalary() {
        return salary;
    }

    // **Display Teacher Information**
    void show() {
        cout << "\nTeacher's Information:" << endl;
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getId() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main() {
    // **Creating Objects Using Different Constructors**
    Teacher t1;  // Default Constructor will be called
    Teacher t2("Tesla Ahmed", 16325, 88990); // Parameterized Constructor
    Teacher t3("Toyota Rahman", 98725, -35490); // Testing Negative Salary

    // **Displaying Teacher Information**
    t1.show(); // Default values
    t2.show();
    t3.show(); // Salary should be set to 0

    return 0; // Destructor will be automatically called here
}
