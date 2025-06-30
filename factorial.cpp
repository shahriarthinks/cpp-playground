#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }


    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;
    cout << "val of i "<< " is: " << i << endl;

    return 0;
}
