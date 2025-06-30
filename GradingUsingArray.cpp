#include <iostream>
using namespace std;

int main() {
    int numStudents
    cout << "Enter the number of students: ";
    cin >> numStudents;

    int scores[numStudents];
    char grades[numStudents];

    cout << "Enter the scores for " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Score of student " << (i + 1) << ": ";
        cin >> scores[i];
    }


    for (int i = 0; i < numStudents; ++i) {
        if (scores[i] >= 90)
            grades[i] = 'A';
        else if (scores[i] >= 80)
            grades[i] = 'B';
        else if (scores[i] >= 70)
            grades[i] = 'C';
        else if (scores[i] >= 60)
            grades[i] = 'D';
        else
            grades[i] = 'F';
    }

    cout << "\nResults:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << " - Score: " << scores[i] << ", Grade: " << grades[i] << endl;
    }

    return 0;
}
