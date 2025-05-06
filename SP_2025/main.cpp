#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#define maxAvailTime 5
#define maxDocAppt 5
#define maxMyAppt 5
#define maxDoc 5
#define maxPatient 10
int doctorcount = 0;
int patientcount = 0;
int loggedDocIndex = -1;
int loggedPatient = -1;

struct Time {
    int hour;
    int minute;
};

struct Session {
    int patientID;
    int doctorID;
    string day;
    Time startTime;
    Time endTime;
};

struct Doctor {
    int ID;
    string Name;
    string User;
    string Password;
    string specialication;
    Session listAvail[maxAvailTime];
    Session docAppt[maxDocAppt];
    int numAppt;
    int totalRating; 
    int ratingCount;
    double averageRating;
};

struct Patient {
    int ID;
    string Name;
    string User;
    string Password;
    int age;
    char gender;
    Session myAppt[maxMyAppt];
    int numAppt;
};

Doctor doctors[maxDoc] = {
    {
        1, "Dr. Judy", "judydoc", "1234", "Dermatology",
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {203, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, 1, "Thursday", {10, 0}, {11, 0}},
            {-1, 1, "Friday", {11, 0}, {12, 0}},
            {-1, 1, "Saturday", {14, 0}, {15, 0}}
        },
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {203, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    },

    {
        2, "Dr. Sam", "samdoc", "5678", "Cardiology",
        {
            {203, 2, "Tuesday", {9, 0}, {9, 30}},
            {-1, 2, "Sunday", {10, 0}, {11, 0}},
            {201, 2, "Wednesday", {15, 0}, {16, 0}},
            {-1, 2, "", {-1, -1}, {-1, -1}},
            {-1, 2, "", {-1, -1}, {-1, -1}}
        },
        {
            {203, 2, "Tuesday", {9, 0}, {9, 30}},
            {201, 2, "Wednesday", {15, 0}, {16, 0}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
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
        {
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    }
};

Patient patients[maxPatient] = {
    {
        201, "Alice", "aliceuser", "1111", 22, 'F',
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {201, 2, "Wednesday", {15, 0}, {16, 0}},
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
            {203, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
    }
};

int realSlotIndex[maxAvailTime];
int fakeCount = 0;

// Doctor Function Decelerations
int getNumTimeSlots(int loggedDocIndex);
void displayDocListAvail(int DocIndex, int slot);
void validateAvailTime(int loggedDoc, int Index);
void editTime(int loggedDocIndex);
int getNumApptSlot(int loggedDoc);
void viewDocAppt(int loggedDoc);
void addAvailableTimeDoc(int loggedDocIndex);
bool existAvailableTimeSlot(int loggedDocIndex, int& newTimeIndex);
void getInput(int& time);
void RemoveTime(Doctor& doctor);
void edit_doctor_profile(Doctor& before);
// Patient Function Deceleration
void Bookappointment(Patient& patient, Doctor doctors[], int doctorCount);
void display_doctortime(Doctor doctors[], int Count = maxDoc);
void viewMyAppointment(int patientIndex);
int getNumOfPatientAppt(int patientIndex);
int getDocIndex(int DocID);
int getCancelIndexToUnbook(int numSlotDoc, int editSlot, int patientIndex, int DocIndex);
void editMyAppointmentPatient(int patientIndex);
void Remove_Appt_By_Patient(Patient& patient);
void edit_patient_profile(Patient& before);
// Menus or Other functions related
int calcdoccount();
int calcpatcount();
void docregisterfun(int&doctorcount,int patientcount);
void patregisterfun(int& patientcount,int doctorcount);
int loginfundoctor(string username, string password);
int loginfunpatient(string username, string password);
void loggeduser();
void mainMenu();
void menupatient();
void menudoctor();

int main() {
    mainMenu();
    return 0;
}

int getNumTimeSlots(int loggedDocIndex) {
    int numSlots = 0;
    while (!doctors[loggedDocIndex].listAvail[numSlots].day.empty() && numSlots < maxAvailTime)
        numSlots++;
    return numSlots;
}

int getNumApptSlot(int loggedDoc) {
    int numSlots = 0;
    while (doctors[loggedDoc].docAppt[numSlots].patientID != -1 && numSlots < maxDocAppt)
        numSlots++;
    return numSlots;
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

// Doctor Function defintions

void displayDocListAvail(int DocIndex, int slot) {
    int numSlots = getNumTimeSlots(DocIndex);
    if (slot == -1) { // editTime and removeTime
        if (numSlots == 0) {
            cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
            return;
        }
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
}

void validateAvailTime(int loggedDoc, int Index) { // to make sure that the available time isn't repeated whether it's booked or unbooked
    string day;
    int numSlots = getNumTimeSlots(loggedDoc);
    int startHour, startMin, endHour, endMin;

    while (true) {
        string Day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
        cout << "Please choose a day : \n";
        for (int i = 0; i < 7; i++)
        {
            cout << i + 1 << ". " << Day[i] << '\n';
        }
        int choice;
        getInput(choice);
        if (choice > 7 || choice < 1)
        {
            cout << "Invalid Choice!\n";
            continue;
        }
        choice--;
        day = Day[choice];
        cout << "Enter new start time (24-Hour Format: hour minute): ";
        getInput(startHour), getInput(startMin);
        cout << "Enter new end time (24-Hour Format: hour minute): ";
        getInput(endHour), getInput(endMin);
        if (startHour < 0 || startHour > 23 || startMin < 0 || startMin > 59 || endHour < 0 || endHour > 23 || endMin < 0 || endMin > 59) {
            cout << "Please re-enter valid times in 24-hour format.\n";
            continue;
        }
        int startTotalMins = startHour * 60 + startMin;
        int endTotalMins = endHour * 60 + endMin;
        int duration = endTotalMins - startTotalMins;
        if (startTotalMins >= endTotalMins) {
            cout << "Set a proper start and end time for your session.\n";
            continue;
        }
        else if (duration < 30 || duration > 60) {
            cout << "Duration must range between 30 mins and 1 hour.\n";
            continue;
        }
        bool repeated = false;
        for (int i = 0; i < numSlots; i++) {
            if (i == Index)
                continue;
            if (doctors[loggedDoc].listAvail[i].day == day && doctors[loggedDoc].listAvail[i].startTime.hour == startHour && doctors[loggedDoc].listAvail[i].startTime.minute == startMin
                && doctors[loggedDoc].listAvail[i].endTime.hour == endHour && doctors[loggedDoc].listAvail[i].endTime.minute == endMin)
                repeated = true;
        }
        if (repeated) {
            cout << "You have set this time before. Please enter a new one.\n";
            continue;
        }
        bool timeOverlab = false;
        for (int i = 0; i < numSlots; i++) {
            if (doctors[loggedDoc].listAvail[i].day == day) {
                int existingStartTotalMins = doctors[loggedDoc].listAvail[i].startTime.hour * 60 + doctors[loggedDoc].listAvail[i].startTime.minute;
                int existingEndTotalMins = doctors[loggedDoc].listAvail[i].endTime.hour * 60 + doctors[loggedDoc].listAvail[i].endTime.minute;

                // case 1 : existingStartTotalMins < startTotalMins < existingEndTotalMins
                // case 2 : startTotalMins < existingStartTotalMins && existingStartTotalMins < endTotalMins < existingEndTotalMins
                // case 3 : startTotalMins < existingStartTotalMins && endTotalMins > existEndTotalMins

                if (startTotalMins > existingStartTotalMins && startTotalMins < existingEndTotalMins ||
                    startTotalMins < existingStartTotalMins && (endTotalMins > existingStartTotalMins && endTotalMins < existingEndTotalMins) || (endTotalMins > existingEndTotalMins)) {
                    cout << "You have set an available time in this duration before.\n";
                    timeOverlab = true;
                    break;
                }
            }
        }

        if (timeOverlab) {
            continue;
        }
        else {
            doctors[loggedDoc].listAvail[Index].day = day;
            doctors[loggedDoc].listAvail[Index].startTime.hour = startHour;
            doctors[loggedDoc].listAvail[Index].startTime.minute = startMin;
            doctors[loggedDoc].listAvail[Index].endTime.hour = endHour;
            doctors[loggedDoc].listAvail[Index].endTime.minute = endMin;
            break;
        }
    }
}

void editTime(int loggedDocIndex) {
    int timeSlot;
    char ans;
    do {
        int numSlots = getNumTimeSlots(loggedDocIndex);
        displayDocListAvail(loggedDocIndex, -1);
        if (numSlots == 0) {
            return;
        }
        while (true) {
            cout << "Which time slot do you want to change/edit? ";
            getInput(timeSlot);
            timeSlot--;
            if (timeSlot >= 0 && timeSlot < numSlots) {
                if (doctors[loggedDocIndex].listAvail[timeSlot].patientID != -1) {
                    cout << "WARNING!! You cannot edit a time slot that has already been booked.\n";
                    continue;
                }
                validateAvailTime(loggedDocIndex, timeSlot);
                displayDocListAvail(loggedDocIndex, -1);
                cout << "Your schedule has been successfully updated.\n";
                break;
            }
            else
                cout << "Invalid time slot. Please enter a valid option from the list.\n";
        }
        cout << "Do you want to edit another time slot? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
}

void viewDocAppt(int loggedDoc) {
    int numSlots = getNumApptSlot(loggedDoc);
    if (numSlots == 0) {
        cout << "No appointments have been booked yet.";
        return;
    }
    cout << "Name\tAge\tGender\tDay\t\tStart\tEnd\n";
    for (int i = 0; i < numSlots; i++) {
        for (int j = 0; j < maxPatient; j++) {
            if (doctors[loggedDoc].docAppt[i].patientID == patients[j].ID) {
                cout << patients[j].Name << "\t" << patients[j].age << "\t" << patients[j].gender << "\t";
                if (doctors[loggedDoc].docAppt[i].day == "Wednesday" || doctors[loggedDoc].docAppt[i].day == "Thursday" || doctors[loggedDoc].docAppt[i].day == "Saturday") {
                    cout << doctors[loggedDoc].docAppt[i].day << "\t"
                        << doctors[loggedDoc].docAppt[i].startTime.hour << ":" << doctors[loggedDoc].docAppt[i].startTime.minute << "\t"
                        << doctors[loggedDoc].docAppt[i].endTime.hour << ":" << doctors[loggedDoc].docAppt[i].endTime.minute << endl;
                }
                else {
                    cout << doctors[loggedDoc].docAppt[i].day << "\t\t"
                        << doctors[loggedDoc].docAppt[i].startTime.hour << ":" << doctors[loggedDoc].docAppt[i].startTime.minute << "\t"
                        << doctors[loggedDoc].docAppt[i].endTime.hour << ":" << doctors[loggedDoc].docAppt[i].endTime.minute << endl;
                }
                break;
            }
        }
    }
}

bool existAvailableTimeSlot(int loggedDocIndex, int& newTimeIndex)
{

    for (int i = 0; i < maxAvailTime; i++)
    {
        if (doctors[loggedDocIndex].listAvail[i].day == "\0")
        {
            newTimeIndex = i;
            return 1;
        }
    }

    cout << "You have already added the maximum number of available times.\n";
    return 0;
}

void addAvailableTimeDoc(int loggedDocIndex)
{
    char ans;

    do
    {

        int newTimeIndex; // used to know which index to put new time in

        if (!existAvailableTimeSlot(loggedDocIndex, newTimeIndex))
            return;

        validateAvailTime(loggedDocIndex, newTimeIndex);
        cout << "Operation was successful.\nDO you want to add another time slot ? ( Y / N )";
        cin >> ans;

    } while (ans == 'Y' || ans == 'y');
}

void RemoveTime(Doctor& doctor) {
    displayDocListAvail(loggedDocIndex, -1);
    int numSlots = getNumTimeSlots(loggedDocIndex);
    if (numSlots == 0) {
        return;
    }

    int timeSlotIndex;
    cout << "Enter the time slot index to remove: ";
            do{
    getInput(timeSlotIndex);
    timeSlotIndex--; // Convert to 0-based index
    if (timeSlotIndex < 0 || timeSlotIndex >= maxAvailTime || doctors[loggedDocIndex].listAvail[timeSlotIndex].day == "") {
        cout << "Invalid time slot index.\n";
         cout << "Enter valid index\n";

        return;
    }
            } while (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || doctor.myAppt[timeSlotIndex].patientID == -1);
    // Check if the slot is already booked
    if (doctors[loggedDocIndex].listAvail[timeSlotIndex].patientID != -1) {
        cout << "Error: This time slot is already booked by a patient.\n";
        return;
    }
    // Shift elements to remove the time slot
    for (int i = timeSlotIndex; i < maxAvailTime - 1; i++) {
        doctors[loggedDocIndex].listAvail[i] = doctors[loggedDocIndex].listAvail[i + 1];
    }
    doctors[loggedDocIndex].listAvail[maxAvailTime - 1] = { -1, doctor.ID, "", {-1, -1}, {-1, -1} };

    cout << "\nThe availability slot has been removed successfully.\n \n";

    displayDocListAvail(loggedDocIndex, -1);

};

void edit_doctor_profile(Doctor& before)
{
    int number;
    cout << "choose what you want to chang. (press the number,please):";
    cout << "\n1.Name \n 2.User name \n 3.Password \n ";
    getInput(number);

    if (number == 1)
    {
        cout << "Enter your new Name, Please\t";
        cin >> before.Name;
    }
    else if (number == 2)
    {
        cout << "Enter your new Username, Please\t";
        int counter = 1;
        string user;
        while (counter != 0)
        {
            counter = 0;
            cin >> user;
            for (int i = 0; i < maxDoc; i++)
            {
                if (user == doctors[i].User)
                {

                    counter++;
                }

            } if (counter > 0) {
                cout << "This user is already exist. Choose another user, please.";
            }

        }  before.User = user;
    }

    else if (number == 3)
    {
        cout << "Enter your new password, Please\t";
        cin >> before.Password;
    }
    else
    {
        cout << "undefind choice!! please; choose another...\n";

    }
}

// Patient Function Defintions

void display_doctortime(Doctor doctors[], int Count)
{

    cout << "the available doctors are :" << endl;
    for (int i = 0; i < Count; i++) {
        //what is this why ?
        int numSlots = getNumTimeSlots(i);
        if (numSlots == 0) {
            continue;
        }
        cout << "Doctor: " << doctors[i].Name << endl;
        cout << "ID: " << doctors[i].ID << "\t\t";
        cout << "spacializtion: " << doctors[i].specialication << endl;
        if (doctors[i].ratingCount > 0) {
            cout << "Average Rating(" << doctors[i].averageRating <<")\n";
        }
        else {
            cout << "Average Rating:  No ratings yet!\n\n";
        }

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
        return;
    }
    Doctor& doc = doctors[docindex];
    cout << "Available times for doctor " << doc.Name << ":\n";

    displayDocListAvail(docindex, -2);


    int choice;
    cout << "Enter the number of the slot you want to book:";
    cin >> choice;

    if (choice < 1 || choice > fakeCount) {
        cout << "Invild choice \n";
        return;
    }

    int realIndex = realSlotIndex[choice - 1];
    if (patient.numAppt >= maxMyAppt) {
        cout << "You have reached the maximum number of allowed appointments.\n ";
        return;
    }
    for (int j = 0; j < maxMyAppt; j++)
    {
        if (doctors[docindex].listAvail[realIndex].day == "" || doctors[docindex].listAvail[realIndex].startTime.hour == -1 || doctors[docindex].listAvail[realIndex].endTime.minute == -1)
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
            patient.myAppt[j].startTime.minute = doc.listAvail[realIndex].startTime.minute;
            patient.myAppt[j].endTime.minute = doc.listAvail[realIndex].endTime.minute;

            doc.listAvail[realIndex].day = "";

            cout << "Appointment booked successfully!\n";
            break;
        }
    }
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
    int num = getNumOfPatientAppt(loggedPatient);
    viewMyAppointment(loggedPatient);
    if (num == 0) {

        return;
    }
    cout << "\nEnter the appointment index to remove:" << endl;
    int timeSlotIndex;
    do {
            getInput(timeSlotIndex);
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
    viewMyAppointment(loggedPatient);
}

void edit_patient_profile(Patient& before)
{
    Patient after = before;
    int number;
    cout << "choose what you want to chang. (press the number,please):";
    cout << "\n1.Name \n 2.User name \n 3.Password \n 4.Age\n 5.Gender\n";
               getInput(number);

            if (number == 1)
    {
        cout << "Enter your new Name, Please\t";
        cin >> after.Name;
    }
    else if (number == 2)
    {
        cout << "Enter your new Username, Please\t";
        int counter = 1;
        bool check = true;
        string user;

        while (counter != 0)
        {
            counter = 0;
            cin >> user;
            for (int i = 0; i < maxPatient; i++)
            {
                if (user == patients[i].User)
                {

                    counter++;
                }

            } if (counter > 0) {
                cout << "This user is already exist. Choose another user, please.";
            }

        }  before.User = user;
    }

    else if (number == 3)
    {
        cout << "Enter your new password, Please\t";
        cin >> after.Password;
    }
    else if (number == 4) {
        cout << "Enter your new age,Please\t";
        cin >> after.age;
    }
    else if (number == 5) {
        cout << "Enter your new gender,please\t";
        cin >> after.gender;
    }
    else
    {
        cout << "undefind choice!! please; choose another...\n";

    }
}

void clearApptHistory(int loggedPatient) {
    int numApptPat = getNumOfPatientAppt(loggedPatient);
    if (numApptPat == 0) {
        cout << "No appointments found.\n";
        return;
    }
    char ans;
    cout << "Do you really want to clear all appointment history? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') {
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
        return;
    }
    else {
        cout << "Operation cancelled.\n";
        return;
    }
}

// Menus or Other functions related

 void rateDoctor() {

     doctorcount = calcdoccount();

   if (doctorcount == 0) { 
        cout << "No doctors available to rate\n";
       
        return;
    }

    cout << "Available Doctors To Rate:\n";
    for (int i = 0; i < doctorcount; i++) {  
        cout << i + 1 << " - " << doctors[i].Name << "  ID: " << doctors[i].ID << "\n";
    }

    int doctorChoice;
    while (true) {
        cout << "Select a doctor to rate (Enter the doctor's number):\n ";
        getInput(doctorChoice);

        if (doctorChoice < 1 || doctorChoice > doctorcount) {
            cout << "Invalid choice! Please try again\n";
            continue;
        }
        else {
            break;
        }
    }
    int i = doctorChoice - 1;

    int rating;
    while (true) {
        cout << "Enter your rating for " << doctors[i].Name << " (from 1 to 5)\nNote: 1 is the lowest value , 5 is the highest value:\n";
        getInput(rating);
       
       if (rating < 1||rating > 5) {
            cout << "Invalid rating! Please enter a number between 1 and 5:\n\n ";
            continue;
        }
       else {
           break;
       }
    }
    doctors[i].totalRating += rating;
    doctors[i].ratingCount++;
    doctors[i].averageRating =  (double)  (doctors[i].totalRating) / doctors[i].ratingCount;
    cout << "Thank you for rating " << doctors[i].Name << "\n";

    return;
}
  
 void viewMyRate(int loggedDocIndex) {
     
     if (doctors[loggedDocIndex].ratingCount == 0) {
         cout << "You have not received any ratings yet.\n";
     }
     else {
       
         cout << "Average Rating: " << doctors[loggedDocIndex].averageRating << "\n\n";
         
     }
 }






int calcdoccount() {
    for (int i = 0; i < maxDoc; i++)
    {
        if (doctors[i].ID == 0)
            return i;
    }
    return maxDoc;
}

int calcpatcount() {
    for (int i = 0; i < maxDoc; i++)
    {
        if (patients[i].ID == 0)
            return i;
    }
    return maxPatient;
}

void docregisterfun(int&doctorcount,int patientcount) {
    string docusername, patusername, password;
    bool check;
    doctorcount = calcdoccount();
    if (doctorcount >= maxDoc)
        cout << "maximum registration reached\n";
    else {
        cout << "enter doctor's name \n";
        cin >> doctors[doctorcount].Name;
        cout << "enter doctor ID\n";
        while (true) {
            cin >> doctors[doctorcount].ID;
            if (doctors[doctorcount].ID <= 0) {
                cout << "invalid ID try again" << endl;
                continue;
            }
            else {
                break;
            }

        }
        for (int i = 0; i < maxDocAppt; i++)
        {
            doctors[doctorcount].docAppt[i].day = "";
            doctors[doctorcount].docAppt[i].doctorID = -1;
            doctors[doctorcount].docAppt[i].patientID = -1;
            doctors[doctorcount].docAppt[i].endTime.hour = -1;
            doctors[doctorcount].docAppt[i].endTime.minute = -1;
            doctors[doctorcount].docAppt[i].startTime.hour = -1;
            doctors[doctorcount].docAppt[i].startTime.minute = -1;
        }
        for (int i = 0; i < maxAvailTime; i++)
        {
            doctors[doctorcount].listAvail[i].day = "";
            doctors[doctorcount].listAvail[i].doctorID = doctors[doctorcount].ID;
            doctors[doctorcount].listAvail[i].patientID = -1;
            doctors[doctorcount].listAvail[i].endTime.hour = -1;
            doctors[doctorcount].listAvail[i].endTime.minute = -1;
            doctors[doctorcount].listAvail[i].startTime.hour = -1;
            doctors[doctorcount].listAvail[i].startTime.minute = -1;
        }
        cout << "enter doctor's specialization\n";
        cin >> doctors[doctorcount].specialication;
        while (true) {
            string username;
            cout << "enter doctor's username\n";
            cin >> username;
            check = false;

            for (int i = 0; i < doctorcount; i++) {
                if (doctors[i].User == username) {
                    check = true;
                    break;
                }
            }
            if (!check) {
                for (int i = 0; i < patientcount; i++) {
                    if (patients[i].User == username) {
                        check = true;
                        break;
                    }
                }
            }
            if (!check) {
                doctors[doctorcount].User = username;
                break;
            }
            else {
                cout << "this username is already used\n";
            }
        }

        cout << "enter doctor's password\n";
        cin >> doctors[doctorcount].Password;
        doctorcount++;
        cout << "registeration is done\n";
    }
}

void patregisterfun(int& patientcount, int doctorcount) {
    string docusername, patusername, password;
    bool check;
    patientcount = calcpatcount();
    if (patientcount >= maxPatient)
        cout << "maximum registration reached\n";
    else {
        cout << "enter patient's name \n";
        cin >> patients[patientcount].Name;
        while (true) {
            cout << "enter patient ID\n";
            cin >> patients[patientcount].ID;
            if (doctors[doctorcount].ID <= 0) {
                cout << "invalid ID try again" << endl;
                continue;
            }
            else {
                break;
            }
        }

        cout << "enter patient gender\n";
        cin >> patients[patientcount].gender;

        cout << "enter patient age\n";
        cin >> patients[patientcount].age;
        for (int i = 0; i < maxMyAppt; i++)
        {
            patients[patientcount].myAppt[i].day = "";
            patients[patientcount].myAppt[i].doctorID = -1;
            patients[patientcount].myAppt[i].patientID = -1;
            patients[patientcount].myAppt[i].endTime.hour = -1;
            patients[patientcount].myAppt[i].endTime.minute = -1;
            patients[patientcount].myAppt[i].startTime.hour = -1;
            patients[patientcount].myAppt[i].startTime.minute = -1;
        }
        while (true) {
            string username;
            cout << "enter patient's username\n";
            cin >> username;
            check = false;

            for (int i = 0; i < doctorcount; i++) {
                if (doctors[i].User == username) {
                    check = true;
                    break;
                }
            }
            if (!check) {
                for (int i = 0; i < patientcount; i++) {
                    if (patients[i].User == username) {
                        check = true;
                        break;
                    }
                }
            }
            if (!check) {
                patients[patientcount].User = username;
                break;
            }
            else {
                cout << "this username is already used\n";
            }
        }

        cout << "enter patient's password\n";
        cin >> patients[patientcount].Password;

        patientcount++;
        cout << "registeration is done\n";
    }
}

int loginfundoctor(string username, string password) {

    for (int i = 0; i < maxDoc; i++)
    {
        if (username == doctors[i].User && password == doctors[i].Password)
            return i;
    }
    return -1;
}

int loginfunpatient(string username, string password) {
    for (int i = 0; i < maxPatient; i++) {

        if (username == patients[i].User && password == patients[i].Password)
            return i;
    }
    return -1;
}

void loggeduser() {
    string username, password;
    while (true) {
        cout << "Enter username : " << endl;
        cin >> username;

        while (true) {
            password.clear();
            cout << "Enter password (spaces are ignored) " << endl;

            char ch;
            while (true) {
                ch = _getch();
                if (ch == '\r') {
                    break;
                }
                if (ch == '\b' && !password.empty()) {
                    password.pop_back();
                    cout << "\b \b";
                }
                else if (ch == '\b' && password.empty()) {
                    continue;
                }
                else if (ch == ' ') {
                    continue;
                }
                else if (ch != '\b') {
                    password.push_back(ch);
                    cout << '*';
                }
            }

            if (password.empty()) {
                cout << "\nPassword cannot be empty! Please try again\n" << endl;
            }
            else {
                break;
            }
        }

        loggedDocIndex = loginfundoctor(username, password);
        if (loggedDocIndex != -1) {
            cout << "\nLogin successful as Doctor!" << endl;
            break;
        }

        if (loggedDocIndex == -1) {
            loggedPatient = loginfunpatient(username, password);
            if (loggedPatient != -1) {
                cout << "\nLogin successful as Patient!" << endl;
                break;
            }
            else {
                cout << "\nInvalid user. Please try again.\n";

            }
        }
    }
}

void menupatient() {
    int choice_menu_patient;
    
    while (true) {
        cout << "\n*operation for patient*\n";
        cout << "1. Display doctors' available times\n2. Book appointment\n3. Edit appointment\n4. Cancel appointment\n5. View my appointment\n6. Edit my profile\n7. Clear appointment history\n8. Rate Doctor\n9. logout\n\n";
        cout << "Enter your choice:";

        cin >> choice_menu_patient;

        if (choice_menu_patient == 1) {

            display_doctortime(doctors, maxDoc);
            continue;
        }
        else if (choice_menu_patient == 2) {
            Bookappointment(patients[loggedPatient], doctors, maxDoc);
            continue;
        }
        else if (choice_menu_patient == 3) {
            editMyAppointmentPatient(loggedPatient);
            continue;
        }
        else if (choice_menu_patient == 4) {
            Remove_Appt_By_Patient(patients[loggedPatient]);
            continue;
        }
        else if (choice_menu_patient == 5) {
            viewMyAppointment(loggedPatient);
            continue;
        }
        else if (choice_menu_patient == 6) {
            edit_patient_profile(patients[loggedPatient]);
            continue;
        }
        else if (choice_menu_patient == 7) {
            clearApptHistory(loggedPatient);
            continue;
        }
             else if (choice_menu_patient == 8) {
              rateDoctor();
            continue;
        }
        else if (choice_menu_patient == 9) {
            break;
        }
        else {
            cout << "Invalid choice:( Please try again)\n\n";
            continue;
        }

    }
}
void menudoctor() {
    int choice_menu_doctor;
    while (true) {
        cout << "\n*operation for doctor*\n";
        cout << "1. Display available time\n2. Add available time \n3. Edit available time\n4. Remove available time\n5. View booked appointments \n6. Edit my profile\n7. view my ratings\n8. logout\n\n";
        cout << "Enter your choice :";
        cin >> choice_menu_doctor;

        if (choice_menu_doctor == 1) {
            displayDocListAvail(loggedDocIndex, -1);
            continue;
        }
        else if (choice_menu_doctor == 2) {
            addAvailableTimeDoc(loggedDocIndex);
            continue;
        }
        else if (choice_menu_doctor == 3) {
            editTime(loggedDocIndex);
            continue;
        }
        else if (choice_menu_doctor == 4) {
            RemoveTime(doctors[loggedDocIndex]);
            continue;
        }
        else if (choice_menu_doctor == 5) {
            viewDocAppt(loggedDocIndex);
            continue;
        }
        else if (choice_menu_doctor == 6) {
            edit_doctor_profile(doctors[loggedDocIndex]);
            continue;
        }

 else if (choice_menu_doctor ==7 ) {
           viewMyRate(loggedDocIndex);
            continue;
        }
        else if (choice_menu_doctor == 8) {
            break;
        }
        else {
            cout << "Invalid choice :( Please try again\n\n";

            continue;
        }
    }
}

void mainMenu() {
 int choice;
 patientcount = calcpatcount();
 doctorcount = calcdoccount();
            
    do {
        cout << "\nHospital Management System\n";
        cout << "1. Register as Doctor\n";
        cout << "2. Register as Patient\n";
        cout << "3. Login as Doctor\n";
        cout << "4. Login as Patient\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            docregisterfun(doctorcount,patientcount);
            continue;
        }
        else if (choice == 2) {
            patregisterfun(patientcount,doctorcount);
            continue;
        }
        else if (choice == 3) {
            loggeduser();
            menudoctor();
            continue;
        }
        else if (choice == 4) {
            loggeduser();
            menupatient();
            continue;
        }
        else if (choice == 5) {
            // saveDoctors(doctors, numDoctors);
            // savePatients(patients, numPatients);
            cout << "Data saved. Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice!= 5);
}
