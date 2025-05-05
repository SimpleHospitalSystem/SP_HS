#include <iostream>
#include "structs.h"
#include <string>
using namespace std;
int loggedDocIndex = 0;
const int docCount = 3;
int loggedpatient = 1;

// Patient function definitions
int doctorcount = 0;
int patientcount = 0;

Doctor doctors[3] = {
    {
        1, "Dr. Judy", "judydoc", "1234", "Dermatology",
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {201, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, 1, "Thursday", {10, 0}, {11, 0}},
            {-1, 1, "Friday", {8, 0}, {12, 0}},
            {-1, 1, "Saturday", {14, 0}, {18, 0}}
        },
    },

    {
        2, "Dr. Sam", "samdoc", "5678", "Cardiology",
        {
            {203, 2, "Tuesday", {9, 0}, {9, 30}},
            {-1, 2, "Wednesday", {14, 0}, {18, 0}},
            {-1, 2, "Sunday", {10, 0}, {15, 0}},
            {-1, 2, "", {-1, -1}, {-1, -1}},
            {-1, 2, "", {-1, -1}, {-1, -1}}
        },
    },

    {
        3, "Dr. Lee", "leedoc", "9012", "Neurology",
        {
            {-1, 3, "", {-1, -1}, {-1, -1}},
            {-1, 3, "", {-1, -1}, {-1, -1}},
            {-1, 3, "", {-1, -1}, {-1, -1}},
            {-1, 3, "", {-1, -1}, {-1, -1}},
            {-1, 3, "", {-1, -1}, {-1, -1}}
        },
    }
};
Patient patients[3] = {
    {
        201, "Alice", "aliceuser", "1111", 22, 'F',
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {201, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    },

    {
        202, "Bob", "bobuser", "2222", 30, 'M',
        {
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    },

    {
        203, "Charlie", "charlieuser", "3333", 28, 'M',
        {
            {203, 2, "Tuesday", {9, 0}, {9, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    }
};

int realSlotIndex[maxAvailTime];
int fakeCount = 0;

int getNumTimeSlots(int loggedDocIndex) {
    int numSlots = 0;
    while (!doctors[loggedDocIndex].listAvail[numSlots].day.empty() && numSlots < maxAvailTime)
        numSlots++;
    return numSlots;
}

void display_doctortime(Doctor doctors[], int Count = doctorcount)
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
        fakeCount = 0;
        cout << doctors[DocIndex].Name << "\t" << doctors[DocIndex].specialication << "\n";
        for (int i = 0; i < numSlots; i++) {
            if (doctors[DocIndex].listAvail[i].patientID == -1) {
                cout << fakeCount + 1 << ". ";
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday")
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                else
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                cout << doctors[DocIndex].listAvail[i].startTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].startTime.minute << " - "
                    << doctors[DocIndex].listAvail[i].endTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].endTime.minute << "\n";
                realSlotIndex[fakeCount] = i; // -> realIndex = realSlotIndex[choice-1]; 
                fakeCount++; // if(choice>=1 && choice<=fakeCount+1)
            }
        }
    }
    else if (numSlots == 0) {
        cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
        return;
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

int getDocIndex(int DocID) {

    for (int i = 0; i < maxDoc; i++) {
        if (doctors[i].ID == DocID)
            return i;
    }

    return -1;
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

    return -1;

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

            displayDocListAvail(DocIndex, -2);

            if (fakeCount == 0) {
                cout << "The doctor is fully booked.\n";
                return;
            }

            cout << "Choose an appointment :\n";
            int choice;

            while (true) {
                getInput(choice);

                if (choice > fakeCount || choice < 1) {
                    cout << "Invalid choice!\n";
                    continue;
                }
                choice--;

                break;
            }

            int numSlotDoc = getNumTimeSlots(DocIndex);
            int cancelIndex = getCancelIndexToUnbook(numSlotDoc, editSlot, patientIndex, DocIndex);
            int realIndex = realSlotIndex[choice];

            // edit
            doctors[DocIndex].listAvail[realIndex].patientID = patients[patientIndex].ID; 
            patients[patientIndex].myAppt[editSlot].doctorID = doctors[DocIndex].ID;
            patients[patientIndex].myAppt[editSlot].day = doctors[DocIndex].listAvail[realIndex].day;
            patients[patientIndex].myAppt[editSlot].startTime.hour = doctors[DocIndex].listAvail[realIndex].startTime.hour;
            patients[patientIndex].myAppt[editSlot].startTime.minute = doctors[DocIndex].listAvail[realIndex].startTime.minute;
            patients[patientIndex].myAppt[editSlot].endTime.hour = doctors[DocIndex].listAvail[realIndex].endTime.hour;
            patients[patientIndex].myAppt[editSlot].endTime.minute = doctors[DocIndex].listAvail[realIndex].endTime.minute;

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

void edit_patient_profile (Patient & before)
{
    Patient after= before;
    int number;
    cout << "choose what you want to chang. (press the number,please):";
    cout << "\n1.Name \n 2.ID \n 3.User name \n 4.Password \n 5.Age\n 6.Gender\n";
    cin >> number;
    if (number == 1)
    {
        cout << "Enter your new Name, Please\t";
        cin >> after.Name;
    }
    else if (number == 2)
    {

        cout << "Enter your new ID, Please\t";
        cin >> after.ID;
    }
    else if (number == 3)
    {
         cout << "Enter your new Username, Please\t";
        int counter=1;
        bool check=true;
         string user;

         while (counter!=0)
  { 
    counter=0;
    cin>>user;
    for (int i = 0; i < 3; i++)
      {
          if(user==patients[i].User)
          {
              check=false;

              counter++;
          }

      } if(check== false){
          cout<<"This user is already exist. Choose another user, please.";
      } 
      check=true; 

}  before.User=user;}
        

    else if (number == 4)
    {
        cout << "Enter your new password, Please\t";
        cin >> after.Password;
    }
    else if(number == 5){
        cout<<"Enter your new age,Please\t";
        cin>> after.age;
    }
    else if(number==6){
        cout<<"Enter your new gender,please\t";
        cin>>after.gender;
    }
    else
    {
        cout << "undefind choice!! please; choose another...\n";

    }}

void clearApptHistory(int loggedPatient) {
    char ans;
    cout << "Do you really want to clear all appointment history? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') {
        int numApptPat = getNumOfPatientAppt(loggedPatient);
        for (int i = 0; i < numApptPat; i++) {
            Session appt = patients[loggedPatient].myAppt[i];
            int docIndex = getDocIndex(appt.doctorID);
            if (docIndex != -1) {
                for (int j = 0; j < maxAvailTime; j++) {
                    if (doctors[docIndex].listAvail[j].patientID == appt.patientID &&
                        doctors[docIndex].listAvail[j].day == appt.day &&
                        doctors[docIndex].listAvail[j].startTime.hour == appt.startTime.hour &&
                        doctors[docIndex].listAvail[j].startTime.minute == appt.startTime.minute) {
                        doctors[docIndex].listAvail[j].patientID = -1;
                        break;
                    }
                }
                for (int j = 0; j < maxDocAppt; j++) {
                    if (doctors[docIndex].docAppt[j].patientID == appt.patientID &&
                        doctors[docIndex].docAppt[j].day == appt.day &&
                        doctors[docIndex].docAppt[j].startTime.hour == appt.startTime.hour &&
                        doctors[docIndex].docAppt[j].startTime.minute == appt.startTime.minute) {
                        for (int k = j; k < maxDocAppt - 1; k++) {
                            doctors[docIndex].docAppt[k] = doctors[docIndex].docAppt[k + 1];
                        }
                        doctors[docIndex].docAppt[maxDocAppt - 1] = { -1, -1, "", {-1, -1}, {-1, -1} };
                        doctors[docIndex].numAppt--;
                        break;
                    }
                }
            }
            patients[loggedPatient].myAppt[i] = { -1, -1, "", {-1, -1}, {-1, -1} };
        }
        patients[loggedPatient].numAppt = 0;
        cout << "Appointment history cleared successfully.\n";
    }
    else {
        cout << "Operation cancelled.\n";
        return;
    }
}


