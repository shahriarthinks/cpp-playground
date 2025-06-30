#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;  // Car company (e.g., Toyota, Ford)
    int model;       // Car model number (e.g., 2023)
    int year;        // Manufacturing year of the car (e.g., 2021)

public:
    // Set methods (Mutators) for encapsulation
    void setCompany(const string& c) {  // 'const' here ensures the passed argument cannot be modified inside the method
        company = c;
    }

    void setModel(int m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Get methods (Accessors) for encapsulation
    string getCompany() const {  // 'const' at the end indicates this function will not modify any member variables
        return company;  // Can be safely called on a const object
    }

    int getModel() const {  // 'const' ensures this function doesn't modify the object
        return model;  // Can be safely called on a const object
    }

    int getYear() const {  // 'const' ensures this function doesn't modify the object
        return year;  // Can be safely called on a const object
    }

    // Constant member function: This function will not modify the object's state
    void displayInfo() const {  // 'const' ensures this function does not modify the object
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    // Constant reference parameter: This ensures the passed object cannot be modified
    void compareCars(const Car& other) const {  // 'const' ensures the 'other' object is not modified inside this function
        if (company == other.getCompany() && model == other.getModel() && year == other.getYear()) {
            cout << "The cars are identical." << endl;
        } else if (company == other.getCompany()) {
            cout << "The cars are from the same company." << endl;
        } else {
            cout << "The cars are from different companies." << endl;
        }
    }

    // Constant pointer: A pointer to a constant value
    void setModelUsingPointer(const int* modelPtr) {  // 'const' means the data being pointed to cannot be modified
        cout << "Model ID passed by pointer is: " << *modelPtr << endl;  // Cannot modify the value of *modelPtr
    }

    // Constant variable: A variable whose value cannot be changed
    void constantExample() const {  // 'const' ensures the method does not change any member variables
        const int MAX_YEAR = 2025;  // 'const' ensures MAX_YEAR cannot be changed
        cout << "The maximum allowable year is: " << MAX_YEAR << endl;
        // MAX_YEAR = 2026;  // ERROR: Cannot assign to constant variable 'MAX_YEAR'
    }

    // This method modifies the car's internal state, demonstrating non-const methods
    void modifyCar() {
        company = "Updated Company";  // This is allowed because modifyCar() is not const
    }
};

int main() {
    // Create a const Car object; its properties cannot be modified
    const Car car1;  // 'const' ensures that car1 cannot be modified after initialization

    // The following line would result in a compile-time error because car1 is a const object
    // car1.setCompany("Toyota");  // ERROR: cannot modify a const object

    // Using only const methods with the const object
    car1.displayInfo();  // Allowed: displayInfo() is a const function
    // car1.modifyCar();  // ERROR: Cannot call non-const method modifyCar() on a const object

    // Displaying information
    Car car2;
    car2.setCompany("Ford");
    car2.setModel(2021);
    car2.setYear(2021);

    car2.displayInfo();  // Allowed: displayInfo() is a const function

    // Compare two cars (using constant reference)
    car1.compareCars(car2);  // Allowed: compareCars() accepts const Car& (constant reference) as argument

    // Using constant pointer to set the model of the car
    int modelValue = 2024;
    car2.setModelUsingPointer(&modelValue);  // Allowed: we pass a pointer, and data at that pointer is constant

    // Constant variable example (MAX_YEAR cannot be changed)
    car2.constantExample();  // Allowed: constantExample() is a const function

    return 0;
}
