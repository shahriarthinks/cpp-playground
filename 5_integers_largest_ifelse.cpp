#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    // Input 5 integers
    cout << "Enter 5 integers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Step 1: Find the largest number
    int largest;
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
        largest = num1;
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
        largest = num2;
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5)
        largest = num3;
    else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5)
        largest = num4;
    else
        largest = num5;

    // Step 2: Find the second largest number
    int secondLargest;
    if (num1 != largest && (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5))
        secondLargest = num1;
    else if (num2 != largest && (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5))
        secondLargest = num2;
    else if (num3 != largest && (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5))
        secondLargest = num3;
    else if (num4 != largest && (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5))
        secondLargest = num4;
    else
        secondLargest = num5;

    // Step 3: Find the third largest number
    int thirdLargest;
    if (num1 != largest && num1 != secondLargest && (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5))
        thirdLargest = num1;
    else if (num2 != largest && num2 != secondLargest && (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5))
        thirdLargest = num2;
    else if (num3 != largest && num3 != secondLargest && (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5))
        thirdLargest = num3;
    else if (num4 != largest && num4 != secondLargest && (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5))
        thirdLargest = num4;
    else
        thirdLargest = num5;

    // Display the result
    cout << "The 3rd largest number is: " << thirdLargest << endl;

    return 0;
}
