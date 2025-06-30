#include <iostream>
using namespace std;

int main() {
    int initialSize = 5; // Initial size of the dynamic array
    int* dynamicArray = new int[initialSize]; // Allocate memory for the array

    // Populate the array with some values
    for (int i = 0; i < initialSize; ++i) {
        dynamicArray[i] = i + 1; // Assign values
    }

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < initialSize; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Resize the array
    int newSize = 10; // New size of the array
    int* resizedArray = new int[newSize]; // Allocate new memory

    // Copy data from the old array to the new array
    for (int i = 0; i < initialSize; ++i) {
        resizedArray[i] = dynamicArray[i];
    }

    // Initialize the new elements
    for (int i = initialSize; i < newSize; ++i) {
        resizedArray[i] = 0; // Assign default values
    }

    // Free the old array's memory
    delete[] dynamicArray;

    // Update the pointer to point to the new array
    dynamicArray = resizedArray;

    // Display the resized array
    cout << "Resized array: ";
    for (int i = 0; i < newSize; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Free the memory allocated for the final array
    delete[] dynamicArray;

    return 0;
}
