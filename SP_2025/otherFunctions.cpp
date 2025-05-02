#include <iostream>
#include <iomanip>
#include "otherFunctions.h"
using namespace std;

void mainMenu() {
    int choice;
    do {
        cout << "\nHospital Management System\n";
        cout << "1. Register as Doctor\n";
        cout << "2. Register as Patient\n";
        cout << "3. Login as Doctor\n";
        cout << "4. Login as Patient\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            // registerDoctor(doctors, numDoctors);
            break;
        case 2:
            // registerPatient(patients, numPatients);
            break;
        case 3:
            // loginDoctor(doctors, numDoctors);
            break;
        case 4:
            // loginPatient(patients, numPatients);
            break;
        case 5:
            // saveDoctors(doctors, numDoctors);
            // savePatients(patients, numPatients);
            cout << "Data saved. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);
}