#include <iostream>
using namespace std;

int main() {
    char gender;
    cout << "Enter a character (M/m for Male, F/f for Female): ";
    cin >> gender;

    if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f') {
        switch (gender) {
            case 'M':
            case 'm':
                cout << "Gender: Male" << endl;
                break;
            case 'F':
            case 'f':
                cout << "Gender: Female" << endl;
                break;
        }
    } else {
        cout << "Gender: Undefined" << endl;
    }

    return 0;
}
