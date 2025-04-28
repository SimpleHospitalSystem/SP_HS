#include <iostream>
#include <iomanip>
#include "patientFunctions.h"
using namespace std;

// Patient function definitions

void Remove_Appt_By_Patient(Patient& patient, Doctor& doctor)
{

    cout << "Your appointments:\n";
    for (int i = 0; i < maxMyAppt; i++) {
        if (patient.myAppt[i].patientID != -1) {
            cout << i + 1 << ". "
                << "Doctor: " << doctor.Name << ", "
                << "Day: " << patient.myAppt[i].day << ", "
                << "Time: " << patient.myAppt[i].startTime.hour << ":"
                << patient.myAppt[i].startTime.minute << " - "
                << patient.myAppt[i].endTime.hour << ":"
                << patient.myAppt[i].endTime.minute << "\n";
        }
    }

    int timeSlotIndex;
    cout << "\nEnter the appointment index to remove: ";
    cin >> timeSlotIndex;
    timeSlotIndex--;

    if (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || patient.myAppt[timeSlotIndex].patientID == -1) {
        cout << "Error: Invalid appointment index.\n";
        return;
    }

    int patID = patient.myAppt[timeSlotIndex].patientID;
    string day = patient.myAppt[timeSlotIndex].day;
    Time start = patient.myAppt[timeSlotIndex].startTime;

    /*for (int i = timeSlotIndex; i < maxMyAppt - 1; i++) {
        patient.myAppt[i] = patient.myAppt[i + 1];
    }*/
    patient.myAppt[maxMyAppt - 1] = { -1, -1, "", {-1, -1}, {-1, -1} };

    for (int i = 0; i < maxAvailTime; i++) {
        if (doctor.docAppt[i].patientID == patID &&
            doctor.docAppt[i].day == day &&
            doctor.docAppt[i].startTime.hour == start.hour &&
            doctor.docAppt[i].startTime.minute == start.minute)
        {
            for (int j = i; j < maxDocAppt - 1; j++) {
                doctor.docAppt[j] = doctor.docAppt[j + 1];
            }
            doctor.docAppt[maxDocAppt - 1] = { -1, -1, "", {-1, -1}, {-1, -1} };
            doctor.numAppt--;
            break;
        }
    }


    for (int i = 0; i < maxAvailTime; i++) {
        if (doctor.listAvail[i].day == day &&
            doctor.listAvail[i].startTime.hour == start.hour &&
            doctor.listAvail[i].startTime.minute == start.minute)
        {
            doctor.listAvail[i].patientID = -1;
            break;
        }
    }

    cout << "\nAppointment removed successfully.\n";

    cout << "\nUpdated appointments:\n";
    viewMyAppointment(loggedDocIndex);
}