#include <iostream>
using namespace std;

int main() {
    float mark1, mark2, mark3, mark4, mark5;
    float gpa1, gpa2, gpa3, gpa4, gpa5, CGPA;
    string grade1, grade2, grade3, grade4, grade5;

    // Input marks for 5 courses
    cout << "Enter marks for Course 1: ";
    cin >> mark1;
    cout << "Enter marks for Course 2: ";
    cin >> mark2;
    cout << "Enter marks for Course 3: ";
    cin >> mark3;
    cout << "Enter marks for Course 4: ";
    cin >> mark4;
    cout << "Enter marks for Course 5: ";
    cin >> mark5;

    // Determine grade and GPA for Course 1
    if (mark1 >= 90 && mark1 <= 100) {
        grade1 = "A+";
        gpa1 = 4.00;
    } else if (mark1 >= 85) {
        grade1 = "A";
        gpa1 = 3.75;
    } else if (mark1 >= 80) {
        grade1 = "B+";
        gpa1 = 3.50;
    } else if (mark1 >= 75) {
        grade1 = "B";
        gpa1 = 3.25;
    } else if (mark1 >= 70) {
        grade1 = "C+";
        gpa1 = 3.00;
    } else if (mark1 >= 65) {
        grade1 = "C";
        gpa1 = 2.75;
    } else if (mark1 >= 60) {
        grade1 = "D+";
        gpa1 = 2.50;
    } else if (mark1 >= 50) {
        grade1 = "D";
        gpa1 = 2.25;
    } else {
        grade1 = "F";
        gpa1 = 0.00;
    }

    // Repeat for Course 2
    if (mark2 >= 90 && mark2 <= 100) {
        grade2 = "A+";
        gpa2 = 4.00;
    } else if (mark2 >= 85) {
        grade2 = "A";
        gpa2 = 3.75;
    } else if (mark2 >= 80) {
        grade2 = "B+";
        gpa2 = 3.50;
    } else if (mark2 >= 75) {
        grade2 = "B";
        gpa2 = 3.25;
    } else if (mark2 >= 70) {
        grade2 = "C+";
        gpa2 = 3.00;
    } else if (mark2 >= 65) {
        grade2 = "C";
        gpa2 = 2.75;
    } else if (mark2 >= 60) {
        grade2 = "D+";
        gpa2 = 2.50;
    } else if (mark2 >= 50) {
        grade2 = "D";
        gpa2 = 2.25;
    } else {
        grade2 = "F";
        gpa2 = 0.00;
    }

    // Repeat for Course 3
    if (mark3 >= 90 && mark3 <= 100) {
        grade3 = "A+";
        gpa3 = 4.00;
    } else if (mark3 >= 85) {
        grade3 = "A";
        gpa3 = 3.75;
    } else if (mark3 >= 80) {
        grade3 = "B+";
        gpa3 = 3.50;
    } else if (mark3 >= 75) {
        grade3 = "B";
        gpa3 = 3.25;
    } else if (mark3 >= 70) {
        grade3 = "C+";
        gpa3 = 3.00;
    } else if (mark3 >= 65) {
        grade3 = "C";
        gpa3 = 2.75;
    } else if (mark3 >= 60) {
        grade3 = "D+";
        gpa3 = 2.50;
    } else if (mark3 >= 50) {
        grade3 = "D";
        gpa3 = 2.25;
    } else {
        grade3 = "F";
        gpa3 = 0.00;
    }

    // Repeat for Course 4
    if (mark4 >= 90 && mark4 <= 100) {
        grade4 = "A+";
        gpa4 = 4.00;
    } else if (mark4 >= 85) {
        grade4 = "A";
        gpa4 = 3.75;
    } else if (mark4 >= 80) {
        grade4 = "B+";
        gpa4 = 3.50;
    } else if (mark4 >= 75) {
        grade4 = "B";
        gpa4 = 3.25;
    } else if (mark4 >= 70) {
        grade4 = "C+";
        gpa4 = 3.00;
    } else if (mark4 >= 65) {
        grade4 = "C";
        gpa4 = 2.75;
    } else if (mark4 >= 60) {
        grade4 = "D+";
        gpa4 = 2.50;
    } else if (mark4 >= 50) {
        grade4 = "D";
        gpa4 = 2.25;
    } else {
        grade4 = "F";
        gpa4 = 0.00;
    }

    // Repeat for Course 5
    if (mark5 >= 90 && mark5 <= 100) {
        grade5 = "A+";
        gpa5 = 4.00;
    } else if (mark5 >= 85) {
        grade5 = "A";
        gpa5 = 3.75;
    } else if (mark5 >= 80) {
        grade5 = "B+";
        gpa5 = 3.50;
    } else if (mark5 >= 75) {
        grade5 = "B";
        gpa5 = 3.25;
    } else if (mark5 >= 70) {
        grade5 = "C+";
        gpa5 = 3.00;
    } else if (mark5 >= 65) {
        grade5 = "C";
        gpa5 = 2.75;
    } else if (mark5 >= 60) {
        grade5 = "D+";
        gpa5 = 2.50;
    } else if (mark5 >= 50) {
        grade5 = "D";
        gpa5 = 2.25;
    } else {
        grade5 = "F";
        gpa5 = 0.00;
    }

    // Calculate CGPA
    CGPA = (gpa1 + gpa2 + gpa3 + gpa4 + gpa5) / 5;

    // Display results
    cout << "\nResults:\n";
    cout << "Course 1: Marks = " << mark1 << ", Grade = " << grade1 << ", GPA = " << gpa1 << endl;
    cout << "Course 2: Marks = " << mark2 << ", Grade = " << grade2 << ", GPA = " << gpa2 << endl;
    cout << "Course 3: Marks = " << mark3 << ", Grade = " << grade3 << ", GPA = " << gpa3 << endl;
    cout << "Course 4: Marks = " << mark4 << ", Grade = " << grade4 << ", GPA = " << gpa4 << endl;
    cout << "Course 5: Marks = " << mark5 << ", Grade = " << grade5 << ", GPA = " << gpa5 << endl;

    cout << "\nYour CGPA is: " << CGPA << endl;

    return 0;
}
