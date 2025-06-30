#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Patient management System by Shahriar Sadib Jisan...........

class Doctor {
public:
    string name;
    string specialization;
    bool isAvailable;

    Doctor(string n, string s) {
        name = n;
        specialization = s;
        isAvailable = true;
    }

    void setAvailability(bool availability) {
        isAvailable = availability;
    }
};

class Appointment {
public:
    string doctorName;
    string date;
    string time;

    Appointment(string doc = "", string dt = "", string tm = "") {
        doctorName = doc;
        date = dt;
        time = tm;
    }
};

class Patient {
public:
    string name;
    int id;
    Appointment appointments[10];

    Patient(string n, int i) {
        name = n;
        id = i;
        for (int j = 0; j < 10; j++) {
            appointments[j] = Appointment("", "", "");
        }
    }

    void bookAppointment(Doctor &doc, string dt, string tm) {
        if (doc.isAvailable) {
            for (int i = 0; i < 10; i++) {
                if (appointments[i].doctorName == "") {
                    appointments[i] = Appointment(doc.name, dt, tm);
                    doc.setAvailability(false);
                    cout << "Appointment booked with Dr. " << doc.name << " on " << dt << " at " << tm << endl;
                    return;
                }
            }
            cout << "No available slots. Maximum limit reached for appointments." << endl;
        } else {
            cout << "Dr. " << doc.name << " is not available at the moment." << endl;
        }
    }

    void viewAppointments() {
        cout << "Appointments for " << name << ":\n";
        bool found = false;
        for (int i = 0; i < 10; i++) {
            if (appointments[i].doctorName != "") {
                cout << "Doctor: " << appointments[i].doctorName << ", Date: " << appointments[i].date << ", Time: " << appointments[i].time << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No appointments booked yet." << endl;
        }
    }

    void cancelAppointment(int index) {
        if (index >= 0 && index < 10 && appointments[index].doctorName != "") {
            cout << "Appointment with Dr. " << appointments[index].doctorName << " on " << appointments[index].date << " at " << appointments[index].time << " has been canceled.\n";
            appointments[index] = Appointment("", "", "");
        } else {
            cout << "Invalid appointment index or no appointment at this index." << endl;
        }
    }

    void saveData() {
        ofstream outFile("patient_data.txt", ios::app);
        outFile << "Patient Name: " << name << ", Patient ID: " << id << "\n";
        for (int i = 0; i < 10; i++) {
            if (appointments[i].doctorName != "") {
                outFile << "Doctor: " << appointments[i].doctorName << ", Date: " << appointments[i].date << ", Time: " << appointments[i].time << "\n";
            }
        }
        outFile.close();
    }

    void readData() {
        ifstream inFile("patient_data.txt");
        string line;
        if (!inFile) {
            cout << "Error opening file." << endl;
            return;
        }

        cout << "Reading saved patient data:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
};

int main() {
    Doctor doctor1("Dr. Shahriar", "Dermatologist");
    Doctor doctor2("Dr. Jisan", "Cardiologist");

    Patient patient("Sadib Rahman", 12345);

    int choice;
    while (true) {
        cout << "\n--- Doctor Appointment System ---\n";
        cout << "1. Book Appointment\n";
        cout << "2. View Appointments\n";
        cout << "3. Cancel Appointment\n";
        cout << "4. Save Data\n";
        cout << "5. Read Data\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number between 1 and 6.\n";
            continue;
        }

        switch(choice) {
            case 1: {
                int docChoice;
                string date, time;
                cout << "Select Doctor:\n";
                cout << "1. Dr. Shahriar (Dermatologist)\n";
                cout << "2. Dr. Jisan (Cardiologist)\n";
                cout << "Enter doctor number (1 or 2): ";
                cin >> docChoice;

                if (docChoice == 1) {
                    cout << "Enter Appointment Date (YYYY-MM-DD): ";
                    cin >> date;
                    cout << "Enter Appointment Time (HH:MM): ";
                    cin >> time;
                    patient.bookAppointment(doctor1, date, time);
                } else if (docChoice == 2) {
                    cout << "Enter Appointment Date (YYYY-MM-DD): ";
                    cin >> date;
                    cout << "Enter Appointment Time (HH:MM): ";
                    cin >> time;
                    patient.bookAppointment(doctor2, date, time);
                } else {
                    cout << "Invalid doctor choice.\n";
                }
                break;
            }
            case 2:
                patient.viewAppointments();
                break;

            case 3: {
                int index;
                cout << "Enter appointment index to cancel (0-9): ";
                cin >> index;
                patient.cancelAppointment(index);
                break;
            }

            case 4:
                patient.saveData();
                cout << "Data saved successfully.\n";
                break;

            case 5:
                patient.readData();
                break;

            case 6:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}
