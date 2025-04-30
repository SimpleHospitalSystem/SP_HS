#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define maxAvailTime 5
#define maxDocAppt 5
#define maxMyAppt 5
#define maxDoc 5
#define maxPatient 10
int loggedDocIndex = 0;
const int docCount = 3;
int loggedpatient = 1;

// Patient function definitions
int doctorcount = 0;
int patientcount = 0;
int getNumTimeSlots(int loggedDocIndex) {
    int numSlots = 0;
    while (!doctors[loggedDocIndex].listAvail[numSlots].day.empty() && numSlots < maxAvailTime)
        numSlots++;
    return numSlots;
}

void display_doctortime(Doctor doctors[], int Count = docCount)
{

    cout << "the available doctors are :" << endl;
    for (int i = 0; i < Count; i++) {
        int numSlots = getNumTimeSlots(i);
        if (numSlots == 0) {
            continue;
        }
        cout << "Doctor: " << doctors[i].Name << endl;
        cout << "ID: " << doctors[i].ID << "\t\t";
        cout << "spacializtion: " << doctors[i].specialication << endl;
        cout << "Available times:\n";

        for (int j = 0; j < numSlots; j++) {
            if (doctors[i].listAvail[i].day == "" || doctors[i].listAvail[j].startTime.hour == -1 || doctors[i].listAvail[j].endTime.minute == -1)
            {
                continue;
            }
            if (doctors[i].listAvail[j].day == "Wednesday" || doctors[i].listAvail[j].day == "Thursday" || doctors[i].listAvail[j].day == "Saturday")
            {
                cout << doctors[i].listAvail[j].day << "\t";
                cout << " from  " << doctors[i].listAvail[j].startTime.hour << ":" << doctors[i].listAvail[j].startTime.minute;
                cout << " to " << doctors[i].listAvail[j].endTime.hour << ":" << doctors[i].listAvail[j].endTime.minute << endl;
            }
            else {
                cout << doctors[i].listAvail[j].day << "\t\t";
                cout << " from  " << doctors[i].listAvail[j].startTime.hour << ":" << doctors[i].listAvail[j].startTime.minute;
                cout << " to " << doctors[i].listAvail[j].endTime.hour << ":" << doctors[i].listAvail[j].endTime.minute << endl;
            }
        }
    }
}

int getRealIndexFromChoice(Doctor doc, int choice) {
    int count = 0;
    for (int i = 0; i < maxDocAppt; i++) {
        if (doc.listAvail[i].day != "") {
            count++;
            if (count == choice)
                return i;
        }
    }
    return -1; //invild choice 
}

void Bookappointment(Patient& patient, Doctor doctors[], int doctorCount)
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
    Doctor& doc = doctors[docindex];
    cout << "Available times for doctor " << doc.Name << ":\n";
    for (int i = 0; i < maxDocAppt; i++) {

        if (doc.listAvail[i].day != "") {
            cout << i + 1 << " " << doc.listAvail[i].day << "\t\t" <<
                "  from " << doc.listAvail[i].startTime.hour << ":" << doc.listAvail[i].startTime.minute <<
                " to " << doc.listAvail[i].endTime.hour << ":" << doc.listAvail[i].endTime.minute << endl;

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

    // المفروض اخلي المريض يحجز تاني لو الحجز مش موجود
    else
    {
        for (int j = 0; j < maxMyAppt; j++) {
            if (doctors[j].listAvail[j].day == "" || doctors[j].listAvail[j].startTime.hour == -1 || doctors[j].listAvail[j].endTime.minute == -1)
            {
                continue;
            }
            if (patient.myAppt[j].day == "") {
                // booking
                patient.myAppt[j].patientID = patient.ID;
                patient.myAppt[j].doctorID = doc.ID;
                patient.myAppt[j].day = doc.listAvail[realIndex].day;
                patient.myAppt[j].startTime.hour = doc.listAvail[realIndex].startTime.hour;
                patient.myAppt[j].endTime.hour = doc.listAvail[realIndex].endTime.hour;
                // حذف المعاد من جدول الدكتور
                doc.listAvail[realIndex].day = "";

                cout << "Appointment booked successfully!\n";
                break;
            }
        }
    }
    display_doctortime(doctors, choice);
}

void viewMyAppointment(int patientIndex) {
    bool hasAppointments = false;

    cout << "current appointment for the patient: " << patients[patientIndex].Name << "\n";

    for (int i = 0; i < maxMyAppt; i++) {
        if (patients[patientIndex].myAppt[i].doctorID != -1) {
            hasAppointments = true;

            cout << "Appointment " << i + 1 << ":\n";
            cout << "Doctor ID: " << patients[patientIndex].myAppt[i].doctorID << "\n";

            for (int j = 0; j < maxDoc; j++) {
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

void getInput(int& time)
{
    // makes sure there was no characters used in input
    while (true)
    {
        bool isValid = true;
        string currInput;
        cin >> currInput;

        for (int i = 0; i < currInput.size(); i++)
        {
            if (currInput[i] >= 'A' && currInput[i] <= 'z')
            {
                cout << "Invalid input! Please enter numbers.\n";
                isValid = false;
                break;
            }
        }

        if (!isValid)
            continue;

        time = 0;

        for (int i = 0; i < currInput.size(); i++)
        {
            int digit = currInput[i] - '0';
            time = 10 * time + digit;
        }

        break;
    };
}

void displayDocListAvail(int DocIndex, int slot) {
    int count;
    int numSlots = getNumTimeSlots(DocIndex);
    if (slot == -1) { // editTime and removeTime
        for (int i = 0; i < numSlots; i++) {
            if (doctors[DocIndex].listAvail[i].patientID == -1) {
                cout << i + 1 << ". ";
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday") {
                    cout << doctors[DocIndex].listAvail[i].day << "\t"
                        << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                        << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute << "\t";
                }
                else {
                    cout << doctors[DocIndex].listAvail[i].day << "\t"
                        << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                        << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute << "\t";
                }
                cout << "Unbooked\n";
            }
            else {
                cout << i + 1 << ". ";
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday") {
                    cout << doctors[DocIndex].listAvail[i].day << "\t"
                        << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                        << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute << "\t";
                }
                else {
                    cout << doctors[DocIndex].listAvail[i].day << "\t"
                        << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                        << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute << "\t";
                }
                cout << "Booked\n";
            }
        }
    }
    else if (slot == -2) { // bookAppt and editAppt
        count = 0;
        cout << doctors[DocIndex].Name << "\t" << doctors[DocIndex].specialication << "\n";
        for (int i = 0; i < numSlots; i++) {
            if (doctors[DocIndex].listAvail[i].patientID == -1) {
                cout << count + 1 << ". ";
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday")
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                else
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                cout << doctors[DocIndex].listAvail[i].startTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].startTime.minute << " - "
                    << doctors[DocIndex].listAvail[i].endTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].endTime.minute << "\n";
                count++;
            }
        }
    }
    else if (numSlots == 0) {
        cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
        return;
    }
}

void editMyAppointmentPatient(int patientIndex)
{

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
void Remove_Appt_By_Patient(Patient& patient)
{
    int docIdx;
    int num = getNumOfPatientAppt(loggedpatient);
    viewMyAppointment(loggedpatient);
    if (num == 0) {

        return;
    }
    cout << "\nEnter the appointment index to remove:" << endl;
    int timeSlotIndex;
    do {
        cin >> timeSlotIndex;
        timeSlotIndex--;//convert to 0_based index 
        if (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || patient.myAppt[timeSlotIndex].patientID == -1) {
            cout << "Error: Invalid appointment index.\n";
            cout << "Enter valid index\n";

        }
    } while (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || patient.myAppt[timeSlotIndex].patientID == -1);

    for (int i = 0; i < maxDoc; i++)
    {
        if (patients[patientcount].myAppt[timeSlotIndex].doctorID == doctors[i].ID)
        {
            docIdx = i;
        }
    }

    int patID = patient.myAppt[timeSlotIndex].patientID;
    string day = patient.myAppt[timeSlotIndex].day;
    Time start = patient.myAppt[timeSlotIndex].startTime;

    for (int i = timeSlotIndex; i < maxMyAppt - 1; i++) {
        patient.myAppt[i] = patient.myAppt[i + 1];
    }

    patient.myAppt[maxMyAppt - 1] = { -1, -1, "", {-1, -1}, {-1, -1} };

    for (int i = 0; i < maxAvailTime; i++) {
        if (doctors[docIdx].docAppt[i].patientID == patID &&
            doctors[docIdx].docAppt[i].day == day &&
            doctors[docIdx].docAppt[i].startTime.hour == start.hour &&
            doctors[docIdx].docAppt[i].startTime.minute == start.minute)
        {
            for (int j = i; j < maxDocAppt - 1; j++) {
                doctors[docIdx].docAppt[j] = doctors[docIdx].docAppt[j + 1];
            }
            doctors[docIdx].docAppt[maxDocAppt - 1] = { -1, -1, "", {-1, -1}, {-1, -1} };
            doctors[docIdx].numAppt--;
            break;
        }
    }


    for (int i = 0; i < maxAvailTime; i++) {
        if (doctors[docIdx].listAvail[i].day == day &&
            doctors[docIdx].listAvail[i].startTime.hour == start.hour &&
            doctors[docIdx].listAvail[i].startTime.minute == start.minute)
        {
            doctors[docIdx].listAvail[i].patientID = -1;
            break;
        }
    }

    cout << "\nAppointment removed successfully.\n";

    cout << "\nUpdated appointments:\n";
    viewMyAppointment(loggedpatient);
}
int main()
{

    return 0;
}

