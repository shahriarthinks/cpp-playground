#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;

    cout << "Enter the starting year: ";
    cin >> startYear;
    cout << "Enter the ending year: ";
    cin >> endYear;

    int leapYears[100];
    int count = 0;


    for (int year = startYear; year <= endYear; ++year) {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[count] = year;
            count++;
        }
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << leapYears[i] << " ";
    }

    return 0;
}
