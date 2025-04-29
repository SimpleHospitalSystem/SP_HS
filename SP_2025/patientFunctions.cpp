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
//zahraa 
void display_doctortime(doctor doctors[], int Count) {
    cout << "the available doctors are :" << endl;
    for (int i = 0; i < Count; i++) {
        cout << "Doctor: " << doctors[i].name << endl;
        cout << "ID: " << doctors[i].ID << "\t\t";
        cout << "specialiction: " << doctors[i].specialication << endl;
        cout << "Thier Schedual:\n";
        for (int j = 0; j < maxDocAppt; j++) {
            if (doctors[i].availtimes[j].day == "Wednesday" || doctors[i].availtimes[j].day == "Thursday" || doctors[i].availtimes[j].day == "Saturday")
            {
                cout << doctors[i].availtimes[j].day << "\t";
                cout << " from  " << doctors[i].availtimes[j].startTime.hour << ":" << doctors[i].availtimes[j].startTime.minute;
                cout << " to " << doctors[i].availtimes[j].endTime.hour << ":" << doctors[i].availtimes[j].endTime.minute << endl;
            }
            else {
                cout << doctors[i].availtimes[j].day << "\t\t";
                cout << " from  " << doctors[i].availtimes[j].startTime.hour << ":" << doctors[i].availtimes[j].startTime.minute;
                cout << " to " << doctors[i].availtimes[j].endTime.hour << ":" << doctors[i].availtimes[j].endTime.minute << endl;
            }
        }
    }
}

int getRealIndexFromChoice(doctor doc, int choice) {
    int count = 0;
    for (int i = 0; i < maxDocAppt; i++) {
        if (doc.availtimes[i].day != "") {
            count++;
            if (count == choice)
                return i;
        }
    }
    return -1; //invild choice 
}

void Bookappointment(Patient& patient, doctor doctors[], int doctorCount)
{
    int doctorID;
    cout << "Please enter the doctor ID to book with:\n";
    cin >> doctorID;

    int docindex = -1;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].ID == doctorID) {
            docindex = i;
            break;
        }
    }
    if (docindex == -1) {
        cout << "Doctor is not found \n";
    }
    doctor& doc = doctors[docindex];
    cout << "Available times for doctor " << doc.name << ":\n";
    for (int i = 0; i < maxDocAppt; i++) {
        if (doc.availtimes[i].day != " ") {
            cout << i + 1 << " " << doc.availtimes[i].day << "\t\t" <<
                "  from " << doc.availtimes[i].startTime.hour << ":" << doc.availtimes[i].startTime.minute <<
                " to " << doc.availtimes[i].endTime.hour << ":" << doc.availtimes[i].endTime.minute << endl;

        }
    }
    int choice;
    cout << "Enter the number of the slot you want to book:";
    cin >> choice;
    int realIndex = getRealIndexFromChoice(doc, choice);
    if (realIndex == -1)
    {
        cout << "Invild choice \n";
        return;
    }

    // ??????? ???? ?????? ???? ???? ?? ????? ?? ?????
    else
    {
        for (int j = 0; j < maxMyAppt; j++) {
            if (patient.myAppt[j].day == "") {
                // booking
                patient.myAppt[j].patientID = patient.ID;
                patient.myAppt[j].doctorID = doc.ID;
                patient.myAppt[j].day = doc.availtimes[realIndex].day;
                patient.myAppt[j].startTime.hour = doc.availtimes[realIndex].startTime.hour;
                patient.myAppt[j].endTime.hour = doc.availtimes[realIndex].endTime.hour;
                // ??? ?????? ?? ???? ???????
                doc.availtimes[realIndex].day = "";

                cout << "Appointment booked successfully!\n";
                break;
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------------------*/
//jana 
void viewMyAppointment(int patientIndex) {
    bool hasAppointments = false;

    cout << "current appointment for the patient: " << patients[patientIndex].Name << "\n";

    for (int i = 0; i < maxMyAppt; i++) {
        if (patients[patientIndex].myAppt[i].doctorID != -1) {
            hasAppointments = true;

            cout << "Appointment " << i + 1 << ":\n";
            cout << "Doctor ID: " << patients[patientIndex].myAppt[i].doctorID << "\n";

            for (int j = 0; j < maxdoctors; j++) {
                if (patients[patientIndex].myAppt[i].doctorID == doctors[j].ID) {
                    cout << doctors[j].Name << ", "
                        << patients[patientIndex].myAppt[i].day
                        << ", From: "
                        << patients[patientIndex].myAppt[i].startTime.hour << ":"
                        << patients[patientIndex].myAppt[i].startTime.minute
                        << " To: "
                        << patients[patientIndex].myAppt[i].endTime.hour << ":"
                        << patients[patientIndex].myAppt[i].endTime.minute << "\n";
                    break;
                }
            }
            cout << "---\n";
        }
    }

    if (!hasAppointments) {
        cout << "No appointments found for this patient.\n";
    }
}
/*--------------------------------------------------------------------------------------------------------------------------*/
//alaa
int getNumOfPatientAppt(int patientIndex) {
    int numAppt = 0;

    for (int i = 0; i < maxMyAppt; i++) {
        if (patients[patientIndex].myAppt[i].doctorID != -1)
            numAppt++;
    }

    return numAppt;
}

int getUnbookedAppt(int DocIndex) {

    int cnt = 0;
    int numSlots = getNumTimeSlots(DocIndex);

    for (int i = 0; i < numSlots; i++) {
        if (doctors[DocIndex].listAvail[i].patientID == -1) {
            cnt++;

        }
    }

    return cnt;
}

int getDocIndex(int DocID) {

    for (int i = 0; i < maxDoc; i++) {
        if (doctors[i].ID == DocID)
            return i;
    }
}

int getCancelIndexToUnbook(int numSlotDoc, int editSlot, int patientIndex, int DocIndex) {

    int cancelIndex;

    for (int i = 0; i < numSlotDoc; i++) {  // for cancelling
        if (doctors[DocIndex].listAvail[i].patientID == patients[patientIndex].ID &&
            patients[patientIndex].myAppt[editSlot].day == doctors[DocIndex].listAvail[i].day &&
            patients[patientIndex].myAppt[editSlot].startTime.hour == doctors[DocIndex].listAvail[i].startTime.hour &&
            patients[patientIndex].myAppt[editSlot].startTime.minute == doctors[DocIndex].listAvail[i].startTime.minute &&
            patients[patientIndex].myAppt[editSlot].endTime.hour == doctors[DocIndex].listAvail[i].endTime.hour &&
            patients[patientIndex].myAppt[editSlot].endTime.minute == doctors[DocIndex].listAvail[i].endTime.minute) {

            cancelIndex = i;
            return cancelIndex;

        }
    }

}

void editMyAppointmentPatient(int patientIndex) {

    char ans;
    int numApptPat = getNumOfPatientAppt(patientIndex);
    if (numApptPat == 0) {
        cout << "No appointments found.\n";
        return;
    }

    do {

        viewMyAppointment(patientIndex);
        cout << "Which appointment do you wish to change/edit ?\n";

        while (true) {

            int editSlot;
            getInput(editSlot);

            if (editSlot > numApptPat || editSlot < 1)
            {
                cout << "Invalid choice!\n";
                continue;
            }
            editSlot--;

            int DocIndex = getDocIndex(patients[patientIndex].myAppt[editSlot].doctorID);
            int numUnbooked = getUnbookedAppt(DocIndex);
            if (numUnbooked == 0) {
                cout << "The doctor is fully booked.\n";
                return;
            }

            displayDocListAvail(DocIndex, -2);

            cout << "Choose an appointment :\n";
            int choice;

            while (true) {
                getInput(choice);

                if (choice > numUnbooked || choice < 1) {
                    cout << "Invalid choice!\n";
                    continue;
                }
                choice--;

                break;
            }

            int numSlotDoc = getNumTimeSlots(DocIndex);
            int cancelIndex = getCancelIndexToUnbook(numSlotDoc, editSlot, patientIndex, DocIndex);
            int index = -1;

            for (int i = 0; i < numSlotDoc; i++) {  // for editting
                if (doctors[DocIndex].listAvail[i].patientID == -1) {
                    index++;
                    if (index == choice) {
                        doctors[DocIndex].listAvail[i].patientID = patients[patientIndex].ID;

                        patients[patientIndex].myAppt[editSlot].doctorID = doctors[DocIndex].ID;
                        patients[patientIndex].myAppt[editSlot].day = doctors[DocIndex].listAvail[i].day;
                        patients[patientIndex].myAppt[editSlot].startTime.hour = doctors[DocIndex].listAvail[i].startTime.hour;
                        patients[patientIndex].myAppt[editSlot].startTime.minute = doctors[DocIndex].listAvail[i].startTime.minute;
                        patients[patientIndex].myAppt[editSlot].endTime.hour = doctors[DocIndex].listAvail[i].endTime.hour;
                        patients[patientIndex].myAppt[editSlot].endTime.minute = doctors[DocIndex].listAvail[i].endTime.minute;

                        break;
                    }
                }
            }

            doctors[DocIndex].listAvail[cancelIndex].patientID = -1; // unbook

            break;
        }

        cout << "Operation was successful.\nDO you want to edit another appointment ? ( Y / N )";
        cin >> ans;

    } while (ans == 'Y' || ans == 'y');

};