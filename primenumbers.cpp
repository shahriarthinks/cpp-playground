#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input a number to check prime or not: ";
    cin >> num;

    if (num <= 1) {
        cout << "The entered number is not a prime number." << endl;
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "The entered number is not a prime number." << endl;
            return 0;
        }
    }

    cout << "The entered number is a prime number." << endl;

    return 0;
}
