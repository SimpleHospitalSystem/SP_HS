#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <sstream>
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

Doctor doctors[maxDoc];
Patient patients[maxPatient];

int realSlotIndex[maxAvailTime];
int fakeCount = 0;

// Function Declarations
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
void Bookappointment(Patient& patient, Doctor doctors[], int doctorCount);
void display_doctortime(Doctor doctors[], int Count = maxDoc);
void viewMyAppointment(int patientIndex);
int getNumOfPatientAppt(int patientIndex);
int getDocIndex(int DocID);
int getCancelIndexToUnbook(int numSlotDoc, int editSlot, int patientIndex, int DocIndex);
void editMyAppointmentPatient(int patientIndex);
void Remove_Appt_By_Patient(Patient& patient);
void edit_patient_profile(Patient& before);
int calcdoccount();
int calcpatcount();
void docregisterfun(int& doctorcount, int patientcount);
void patregisterfun(int& patientcount, int doctorcount);
int loginfundoctor(string username, string password);
int loginfunpatient(string username, string password);
void loggeduser();
void mainMenu();
void menupatient();
void menudoctor();
void viewMyRate(int loggedDocIndex);
void rateDoctor(int doctorcount);
void loadData();
void saveData();

int main() {
    loadData();
    mainMenu();
    saveData();
    return 0;
}

void saveData() {
    ofstream docFile("doctors.txt");
    if (docFile.is_open()) {
        docFile << doctorcount << "\n";
        for (int i = 0; i < doctorcount; ++i) {
            docFile << doctors[i].ID << "," << doctors[i].Name << "," << doctors[i].User << ","
                << doctors[i].Password << "," << doctors[i].specialication << ","
                << doctors[i].numAppt << "," << doctors[i].totalRating << ","
                << doctors[i].ratingCount << "," << doctors[i].averageRating << ",";
            docFile << "{";
            for (int j = 0; j < maxAvailTime; ++j) {
                docFile << doctors[i].listAvail[j].patientID << ";"
                    << doctors[i].listAvail[j].doctorID << ";"
                    << doctors[i].listAvail[j].day << ";"
                    << doctors[i].listAvail[j].startTime.hour << ";"
                    << doctors[i].listAvail[j].startTime.minute << ";"
                    << doctors[i].listAvail[j].endTime.hour << ";"
                    << doctors[i].listAvail[j].endTime.minute
                    << (j < maxAvailTime - 1 ? "|" : "");
            }
            docFile << "},{";
            for (int j = 0; j < maxDocAppt; ++j) {
                docFile << doctors[i].docAppt[j].patientID << ";"
                    << doctors[i].docAppt[j].doctorID << ";"
                    << doctors[i].docAppt[j].day << ";"
                    << doctors[i].docAppt[j].startTime.hour << ";"
                    << doctors[i].docAppt[j].startTime.minute << ";"
                    << doctors[i].docAppt[j].endTime.hour << ";"
                    << doctors[i].docAppt[j].endTime.minute
                    << (j < maxDocAppt - 1 ? "|" : "");
            }
            docFile << "}\n";
        }
        docFile.close();
    }

    ofstream patFile("patients.txt");
    if (patFile.is_open()) {
        patFile << patientcount << "\n";
        for (int i = 0; i < patientcount; ++i) {
            patFile << patients[i].ID << "," << patients[i].Name << "," << patients[i].User << ","
                << patients[i].Password << "," << patients[i].age << ","
                << patients[i].gender << "," << patients[i].numAppt << ",";
            patFile << "{";
            for (int j = 0; j < maxMyAppt; ++j) {
                patFile << patients[i].myAppt[j].patientID << ";"
                    << patients[i].myAppt[j].doctorID << ";"
                    << patients[i].myAppt[j].day << ";"
                    << patients[i].myAppt[j].startTime.hour << ";"
                    << patients[i].myAppt[j].startTime.minute << ";"
                    << patients[i].myAppt[j].endTime.hour << ";"
                    << patients[i].myAppt[j].endTime.minute
                    << (j < maxMyAppt - 1 ? "|" : "");
            }
            patFile << "}\n";
        }
        patFile.close();
    }
}

void loadData() {
    ifstream docFile("doctors.txt");
    if (docFile.is_open()) {
        string line;
        getline(docFile, line);
        doctorcount = stoi(line);
        for (int i = 0; i < doctorcount && i < maxDoc; ++i) {
            Doctor& doc = doctors[i];
            if (getline(docFile, line)) {
                stringstream ss(line);
                string temp;
                try {
                    if (!getline(ss, temp, ',')) continue; doc.ID = stoi(temp);
                    if (!getline(ss, doc.Name, ',')) continue;
                    if (!getline(ss, doc.User, ',')) continue;
                    if (!getline(ss, doc.Password, ',')) continue;
                    if (!getline(ss, doc.specialication, ',')) continue;
                    if (!getline(ss, temp, ',')) continue; doc.numAppt = stoi(temp);
                    if (!getline(ss, temp, ',')) continue; doc.totalRating = stoi(temp);
                    if (!getline(ss, temp, ',')) continue; doc.ratingCount = stoi(temp);
                    if (!getline(ss, temp, ',')) continue; doc.averageRating = stod(temp);
                    if (!getline(ss, temp, '{')) continue;
                    for (int j = 0; j < maxAvailTime; ++j) {
                        Session& s = doc.listAvail[j];
                        if (!getline(ss, temp, ';')) { s = { -1, doc.ID, "-1", {-1, -1}, {-1, -1} }; continue; }
                        s.patientID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.doctorID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, s.day, ';')) break;
                        if (!getline(ss, temp, ';')) break; s.startTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.startTime.minute = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.endTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, j < maxAvailTime - 1 ? '|' : '}')) break;
                        s.endTime.minute = temp.empty() ? -1 : stoi(temp);
                    }
                    if (!getline(ss, temp, '{')) continue;
                    for (int j = 0; j < maxDocAppt; ++j) {
                        Session& s = doc.docAppt[j];
                        if (!getline(ss, temp, ';')) { s = { -1, -1, "-1", {-1, -1}, {-1, -1} }; continue; }
                        s.patientID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.doctorID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, s.day, ';')) break;
                        if (!getline(ss, temp, ';')) break; s.startTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.startTime.minute = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.endTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, j < maxDocAppt - 1 ? '|' : '}')) break;
                        s.endTime.minute = temp.empty() ? -1 : stoi(temp);
                    }
                }
                catch (const exception& e) {
                    cout << "Error parsing doctor data: " << e.what() << ". Skipping invalid entry.\n";
                    continue;
                }
            }
        }
        docFile.close();
    }

    ifstream patFile("patients.txt");
    if (patFile.is_open()) {
        string line;
        getline(patFile, line);
        patientcount = stoi(line);
        for (int i = 0; i < patientcount && i < maxPatient; ++i) {
            Patient& pat = patients[i];
            if (getline(patFile, line)) {
                stringstream ss(line);
                string temp;
                try {
                    if (!getline(ss, temp, ',')) continue; pat.ID = stoi(temp);
                    if (!getline(ss, pat.Name, ',')) continue;
                    if (!getline(ss, pat.User, ',')) continue;
                    if (!getline(ss, pat.Password, ',')) continue;
                    if (!getline(ss, temp, ',')) continue; pat.age = stoi(temp);
                    if (!getline(ss, temp, ',')) continue; pat.gender = temp[0];
                    if (!getline(ss, temp, ',')) continue; pat.numAppt = stoi(temp);
                    if (!getline(ss, temp, '{')) continue;
                    for (int j = 0; j < maxMyAppt; ++j) {
                        Session& s = pat.myAppt[j];
                        if (!getline(ss, temp, ';')) { s = { -1, -1, "-1", {-1, -1}, {-1, -1} }; continue; }
                        s.patientID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.doctorID = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, s.day, ';')) break;
                        if (!getline(ss, temp, ';')) break; s.startTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.startTime.minute = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, ';')) break; s.endTime.hour = temp.empty() ? -1 : stoi(temp);
                        if (!getline(ss, temp, j < maxMyAppt - 1 ? '|' : '}')) break;
                        s.endTime.minute = temp.empty() ? -1 : stoi(temp);
                    }
                }
                catch (const exception& e) {
                    cout << "Error parsing patient data: " << e.what() << ". Skipping invalid entry.\n";
                    continue;
                }
            }
        }
        patFile.close();
    }
}

int getNumTimeSlots(int loggedDocIndex) {
    int numSlots = 0;
    while (doctors[loggedDocIndex].listAvail[numSlots].day != "-1" && numSlots < maxAvailTime)
        numSlots++;
    return numSlots;
}

int getNumApptSlot(int loggedDoc) {
    int numSlots = 0;
    while (doctors[loggedDoc].docAppt[numSlots].patientID != -1 && numSlots < maxDocAppt)
        numSlots++;
    return numSlots;
}

void getInput(int& time) {
    while (true) {
        bool isValid = true;
        string currInput;
        cin >> currInput;
        for (int i = 0; i < currInput.size(); i++) {
            if (!(currInput[i] >= '0' && currInput[i] <= '9')) {
                cout << "Invalid input! Please enter numbers.\n";
                isValid = false;
                break;
            }
        }
        if (!isValid)
            continue;
        time = 0;
        for (int i = 0; i < currInput.size(); i++) {
            int digit = currInput[i] - '0';
            time = 10 * time + digit;
        }
        break;
    }
}

void displayDocListAvail(int DocIndex, int slot) {
    int numSlots = getNumTimeSlots(DocIndex);
    if (slot == -1) {
        if (numSlots == 0) {
            cout << "You haven't set any available times yet. Please use 'Add available time' to set your availability.\n";
            return;
        }
        for (int i = 0; i < numSlots; i++) {
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
            if (doctors[DocIndex].listAvail[i].patientID == -1) {
                cout << "Unbooked\n";
            }
            else {
                cout << "Booked\n";
            }
        }
    }
    else if (slot == -2) {
        fakeCount = 0;
        cout << doctors[DocIndex].Name << "\t" << doctors[DocIndex].specialication << "\n";
        for (int i = 0; i < numSlots; i++) {
            if (doctors[DocIndex].listAvail[i].patientID == -1 && doctors[DocIndex].listAvail[i].day != "-1") {
                cout << fakeCount + 1 << ". ";
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday")
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                else
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                cout << doctors[DocIndex].listAvail[i].startTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].startTime.minute << " - "
                    << doctors[DocIndex].listAvail[i].endTime.hour << ":"
                    << doctors[DocIndex].listAvail[i].endTime.minute << "\n";
                realSlotIndex[fakeCount] = i;
                fakeCount++;
            }
        }
        if (fakeCount == 0) {
            if (numSlots == 0 || doctors[DocIndex].listAvail[0].day == "-1") {
                cout << "This doctor has not set any available times yet.\n";
            }
            else {
                cout << "All slots are booked.\n";
            }
        }
    }
}

void validateAvailTime(int loggedDoc, int Index) {
    string day;
    int numSlots = getNumTimeSlots(loggedDoc);
    int startHour, startMin, endHour, endMin;

    while (true) {
        string Day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
        cout << "Please choose a day : \n";
        for (int i = 0; i < 7; i++) {
            cout << i + 1 << ". " << Day[i] << '\n';
        }
        int choice;
        getInput(choice);
        if (choice > 7 || choice < 1) {
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
                if ((startTotalMins > existingStartTotalMins && startTotalMins < existingEndTotalMins) ||
                    (startTotalMins < existingStartTotalMins && ((endTotalMins > existingStartTotalMins && endTotalMins < existingEndTotalMins) || (endTotalMins > existingEndTotalMins)))) {
                    timeOverlab = true;
                    break;
                }
            }
        }
        if (timeOverlab) {
            cout << "You have set an available time in this duration before.\n";
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
        cout << "No appointments have been booked yet.\n";
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

bool existAvailableTimeSlot(int loggedDocIndex, int& newTimeIndex) {
    for (int i = 0; i < maxAvailTime; i++) {
        if (doctors[loggedDocIndex].listAvail[i].day == "-1") {
            newTimeIndex = i;
            return true;
        }
    }
    cout << "You have already added the maximum number of available times.\n";
    return false;
}

void addAvailableTimeDoc(int loggedDocIndex) {
    char ans;
    do {
        int newTimeIndex;
        if (!existAvailableTimeSlot(loggedDocIndex, newTimeIndex))
            return;
        doctors[loggedDocIndex].listAvail[newTimeIndex].patientID = -1; // Ensure the slot is unbooked
        doctors[loggedDocIndex].listAvail[newTimeIndex].doctorID = doctors[loggedDocIndex].ID;
        validateAvailTime(loggedDocIndex, newTimeIndex);
        cout << "Operation was successful.\nDo you want to add another time slot? (Y/N): ";
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
    do {
        getInput(timeSlotIndex);
        timeSlotIndex--;
        if (timeSlotIndex < 0 || timeSlotIndex >= numSlots || doctors[loggedDocIndex].listAvail[timeSlotIndex].day == "-1") {
            cout << "Invalid time slot index.\n";
            cout << "Enter valid index\n";
        }
    } while (timeSlotIndex < 0 || timeSlotIndex >= numSlots || doctors[loggedDocIndex].listAvail[timeSlotIndex].day == "-1");
    if (doctors[loggedDocIndex].listAvail[timeSlotIndex].patientID != -1) {
        cout << "Error: This time slot is already booked by a patient.\n";
        return;
    }
    for (int i = timeSlotIndex; i < maxAvailTime - 1; i++) {
        doctors[loggedDocIndex].listAvail[i] = doctors[loggedDocIndex].listAvail[i + 1];
    }
    doctors[loggedDocIndex].listAvail[maxAvailTime - 1] = { -1, doctor.ID, "-1", {-1, -1}, {-1, -1} };
    cout << "\nThe availability slot has been removed successfully.\n \n";
    displayDocListAvail(loggedDocIndex, -1);
}

void edit_doctor_profile(Doctor& before) {
    int number;
    cout << "Choose what you want to change (press the number, please):\n";
    cout << "1. Name\n2. Username\n3. Password\n";
    getInput(number);
    if (number == 1) {
        cout << "Enter your new Name: ";
        cin >> before.Name;
    }
    else if (number == 2) {
        cout << "Enter your new Username: ";
        int counter = 1;
        string user;
        while (counter != 0) {
            counter = 0;
            cin >> user;
            for (int i = 0; i < maxDoc; i++) {
                if (user == doctors[i].User) {
                    counter++;
                }
            }
            if (counter > 0) {
                cout << "This user already exists. Choose another username, please.\n";
            }
        }
        before.User = user;
    }
    else if (number == 3) {
        cout << "Enter your new password: ";
        cin >> before.Password;
    }
    else {
        cout << "Undefined choice!! Please choose another...\n";
    }
}

void display_doctortime(Doctor doctors[], int Count) {
    cout << "The available doctors are:\n";
    for (int i = 0; i < Count; i++) {
        int numSlots = getNumTimeSlots(i);
        if (numSlots == 0 || doctors[i].listAvail[0].day == "-1") {
            continue;
        }
        cout << "--------------------------------------\n";
        cout << "Doctor: " << doctors[i].Name << endl;
        cout << "ID: " << doctors[i].ID << "\t\t";
        cout << "Specialization: " << doctors[i].specialication << endl;
        if (doctors[i].ratingCount > 0) {
            cout << "Average Rating: " << doctors[i].averageRating << "\n";
        }
        else {
            cout << "Average Rating: No ratings yet!\n";
        }
        cout << "Available times:\n";
        for (int j = 0; j < numSlots; j++) {
            if (doctors[i].listAvail[j].patientID == -1 && doctors[i].listAvail[j].day != "-1") {
                if (doctors[i].listAvail[j].day == "Wednesday" || doctors[i].listAvail[j].day == "Thursday" || doctors[i].listAvail[j].day == "Saturday") {
                    cout << doctors[i].listAvail[j].day << "\t";
                    cout << "from " << doctors[i].listAvail[j].startTime.hour << ":" << doctors[i].listAvail[j].startTime.minute;
                    cout << " to " << doctors[i].listAvail[j].endTime.hour << ":" << doctors[i].listAvail[j].endTime.minute << endl;
                }
                else {
                    cout << doctors[i].listAvail[j].day << "\t\t";
                    cout << "from " << doctors[i].listAvail[j].startTime.hour << ":" << doctors[i].listAvail[j].startTime.minute;
                    cout << " to " << doctors[i].listAvail[j].endTime.hour << ":" << doctors[i].listAvail[j].endTime.minute << endl;
                }
            }
        }
    }
    cout << "--------------------------------------\n";
}

void Bookappointment(Patient& patient, Doctor doctors[], int doctorCount) {
    display_doctortime(doctors, doctorcount);
    if (doctorcount == 0) {
        cout << "No doctors are available to book with.\n";
        return;
    }
    cout << endl;
    int doctorID;
    cout << "\nPlease enter the doctor ID to book with:\n";
    getInput(doctorID);
    int docindex = -1;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].ID == doctorID) {
            docindex = i;
            break;
        }
    }
    if (docindex == -1) {
        cout << "Doctor not found.\n";
        return;
    }
    Doctor& doc = doctors[docindex];
    cout << "Available times for doctor " << doc.Name << ":\n";
    displayDocListAvail(docindex, -2);
    if (fakeCount == 0) {
        return; // The message is already handled in displayDocListAvail
    }
    int choice;
    cout << "Enter the number of the slot you want to book: ";
    getInput(choice);
    if (choice < 1 || choice > fakeCount) {
        cout << "Invalid choice.\n";
        return;
    }
    int realIndex = realSlotIndex[choice - 1];
    if (patient.numAppt >= maxMyAppt) {
        cout << "You have reached the maximum number of allowed appointments.\n";
        return;
    }
    for (int j = 0; j < maxMyAppt; j++) {
        if (patient.myAppt[j].day == "-1") {
            patient.myAppt[j].patientID = patient.ID;
            patient.myAppt[j].doctorID = doc.ID;
            patient.myAppt[j].day = doc.listAvail[realIndex].day;
            patient.myAppt[j].startTime.hour = doc.listAvail[realIndex].startTime.hour;
            patient.myAppt[j].endTime.hour = doc.listAvail[realIndex].endTime.hour;
            patient.myAppt[j].startTime.minute = doc.listAvail[realIndex].startTime.minute;
            patient.myAppt[j].endTime.minute = doc.listAvail[realIndex].endTime.minute;
            doc.listAvail[realIndex].patientID = patient.ID;
            int numappt = getNumApptSlot(docindex);
            if (numappt < maxDocAppt) {
                doc.docAppt[numappt].patientID = patient.ID;
                doc.docAppt[numappt].doctorID = doc.ID;
                doc.docAppt[numappt].day = doc.listAvail[realIndex].day;
                doc.docAppt[numappt].startTime.hour = doc.listAvail[realIndex].startTime.hour;
                doc.docAppt[numappt].endTime.hour = doc.listAvail[realIndex].endTime.hour;
                doc.docAppt[numappt].startTime.minute = doc.listAvail[realIndex].startTime.minute;
                doc.docAppt[numappt].endTime.minute = doc.listAvail[realIndex].endTime.minute;
            }
            patient.numAppt++;
            doc.numAppt++;
            cout << "\nAppointment booked successfully!\n";
            break;
        }
    }
}

void viewMyAppointment(int patientIndex) {
    bool hasAppointments = false;
    cout << "Current appointments for the patient: " << patients[patientIndex].Name << "\n";
    for (int i = 0; i < maxMyAppt; i++) {
        if (patients[patientIndex].myAppt[i].doctorID != -1 && patients[patientIndex].myAppt[i].day != "-1") {
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
        if (patients[patientIndex].myAppt[i].doctorID != -1 && patients[patientIndex].myAppt[i].day != "-1")
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
    for (int i = 0; i < numSlotDoc; i++) {
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

void editMyAppointmentPatient(int patientIndex) {
    char ans;
    int numApptPat = getNumOfPatientAppt(patientIndex);
    if (numApptPat == 0) {
        cout << "No appointments found.\n";
        return;
    }
    do {
        viewMyAppointment(patientIndex);
        cout << "Which appointment do you wish to change/edit?\n";
        while (true) {
            int editSlot;
            getInput(editSlot);
            if (editSlot > numApptPat || editSlot < 1) {
                cout << "Invalid choice!\n";
                continue;
            }
            editSlot--;
            int DocIndex = getDocIndex(patients[patientIndex].myAppt[editSlot].doctorID);
            displayDocListAvail(DocIndex, -2);
            if (fakeCount == 0) {
                return;
            }
            cout << "Choose an appointment:\n";
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
            for (int i = 0; i < maxDocAppt; i++) {
                if (doctors[DocIndex].docAppt[i].patientID == patients[patientIndex].ID &&
                    patients[patientIndex].myAppt[editSlot].day == doctors[DocIndex].docAppt[i].day &&
                    patients[patientIndex].myAppt[editSlot].startTime.hour == doctors[DocIndex].docAppt[i].startTime.hour &&
                    patients[patientIndex].myAppt[editSlot].startTime.minute == doctors[DocIndex].docAppt[i].startTime.minute &&
                    patients[patientIndex].myAppt[editSlot].endTime.hour == doctors[DocIndex].docAppt[i].endTime.hour &&
                    patients[patientIndex].myAppt[editSlot].endTime.minute == doctors[DocIndex].docAppt[i].endTime.minute) {
                    doctors[DocIndex].docAppt[i].day = doctors[DocIndex].listAvail[realIndex].day;
                    doctors[DocIndex].docAppt[i].startTime.hour = doctors[DocIndex].listAvail[realIndex].startTime.hour;
                    doctors[DocIndex].docAppt[i].startTime.minute = doctors[DocIndex].listAvail[realIndex].startTime.minute;
                    doctors[DocIndex].docAppt[i].endTime.hour = doctors[DocIndex].listAvail[realIndex].endTime.hour;
                    doctors[DocIndex].docAppt[i].endTime.minute = doctors[DocIndex].listAvail[realIndex].endTime.minute;
                    break;
                }
            }
            doctors[DocIndex].listAvail[realIndex].patientID = patients[patientIndex].ID;
            patients[patientIndex].myAppt[editSlot].doctorID = doctors[DocIndex].ID;
            patients[patientIndex].myAppt[editSlot].day = doctors[DocIndex].listAvail[realIndex].day;
            patients[patientIndex].myAppt[editSlot].startTime.hour = doctors[DocIndex].listAvail[realIndex].startTime.hour;
            patients[patientIndex].myAppt[editSlot].startTime.minute = doctors[DocIndex].listAvail[realIndex].startTime.minute;
            patients[patientIndex].myAppt[editSlot].endTime.hour = doctors[DocIndex].listAvail[realIndex].endTime.hour;
            patients[patientIndex].myAppt[editSlot].endTime.minute = doctors[DocIndex].listAvail[realIndex].endTime.minute;
            doctors[DocIndex].listAvail[cancelIndex].patientID = -1;
            break;
        }
        cout << "Operation was successful.\nDo you want to edit another appointment? (Y/N): ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
}

void Remove_Appt_By_Patient(Patient& patient) {
    int docIdx;
    int num = getNumOfPatientAppt(loggedPatient);
    viewMyAppointment(loggedPatient);
    if (num == 0) {
        return;
    }
    cout << "\nEnter the appointment index to remove:\n";
    int timeSlotIndex;
    do {
        getInput(timeSlotIndex);
        timeSlotIndex--;
        if (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || patients[loggedPatient].myAppt[timeSlotIndex].day == "-1") {
            cout << "Error: Invalid appointment index.\n";
            cout << "Enter valid index\n";
        }
    } while (timeSlotIndex < 0 || timeSlotIndex >= maxMyAppt || patients[loggedPatient].myAppt[timeSlotIndex].day == "-1");
    for (int i = 0; i < maxDoc; i++) {
        if (patients[loggedPatient].myAppt[timeSlotIndex].doctorID == doctors[i].ID) {
            docIdx = i;
            break;
        }
    }
    int patID = patient.myAppt[timeSlotIndex].patientID;
    string day = patient.myAppt[timeSlotIndex].day;
    Time start = patient.myAppt[timeSlotIndex].startTime;
    for (int i = timeSlotIndex; i < maxMyAppt - 1; i++) {
        patient.myAppt[i] = patient.myAppt[i + 1];
    }
    patient.myAppt[maxMyAppt - 1] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
    patient.numAppt--;
    for (int i = 0; i < maxAvailTime; i++) {
        if (doctors[docIdx].docAppt[i].patientID == patID &&
            doctors[docIdx].docAppt[i].day == day &&
            doctors[docIdx].docAppt[i].startTime.hour == start.hour &&
            doctors[docIdx].docAppt[i].startTime.minute == start.minute) {
            for (int j = i; j < maxDocAppt - 1; j++) {
                doctors[docIdx].docAppt[j] = doctors[docIdx].docAppt[j + 1];
            }
            doctors[docIdx].docAppt[maxDocAppt - 1] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
            doctors[docIdx].numAppt--;
            break;
        }
    }
    for (int i = 0; i < maxAvailTime; i++) {
        if (doctors[docIdx].listAvail[i].day == day &&
            doctors[docIdx].listAvail[i].startTime.hour == start.hour &&
            doctors[docIdx].listAvail[i].startTime.minute == start.minute) {
            doctors[docIdx].listAvail[i].patientID = -1;
            break;
        }
    }
    cout << "\nAppointment removed successfully.\n";
    cout << "\nUpdated appointments:\n";
    viewMyAppointment(loggedPatient);
}

void edit_patient_profile(Patient& before) {
    int number;
    cout << "Choose what you want to change (press the number, please):\n";
    cout << "1. Name\n2. Username\n3. Password\n4. Age\n5. Gender\n";
    getInput(number);
    if (number == 1) {
        cout << "Enter your new Name: ";
        cin >> before.Name;
    }
    else if (number == 2) {
        cout << "Enter your new Username: ";
        int counter = 1;
        string user;
        while (counter != 0) {
            counter = 0;
            cin >> user;
            for (int i = 0; i < maxPatient; i++) {
                if (user == patients[i].User) {
                    counter++;
                }
            }
            if (counter > 0) {
                cout << "This user already exists. Choose another username, please.\n";
            }
        }
        before.User = user;
    }
    else if (number == 3) {
        cout << "Enter your new password: ";
        cin >> before.Password;
    }
    else if (number == 4) {
        cout << "Enter your new age: ";
        getInput(before.age);
    }
    else if (number == 5) {
        cout << "Enter your new gender (M/F): ";
        cin >> before.gender;
        while (before.gender != 'F' && before.gender != 'f' && before.gender != 'M' && before.gender != 'm') {
            cout << "Invalid gender. Please enter M or F: ";
            cin >> before.gender;
        }
    }
    else {
        cout << "Undefined choice!! Please choose another...\n";
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
                        doctors[docIndex].docAppt[maxDocAppt - 1] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
                        doctors[docIndex].numAppt--;
                        break;
                    }
                }
            }
            patients[loggedPatient].myAppt[i] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
        }
        patients[loggedPatient].numAppt = 0;
        cout << "Appointment history cleared successfully.\n";
    }
    else {
        cout << "Operation cancelled.\n";
    }
}

void rateDoctor(int doctorcount) {
    if (doctorcount == 0) {
        cout << "No doctors available to rate.\n";
        return;
    }
    cout << "Available Doctors To Rate:\n";
    for (int i = 0; i < doctorcount; i++) {
        cout << i + 1 << " - " << doctors[i].Name << "  ID: " << doctors[i].ID << "\n";
    }
    int doctorChoice;
    while (true) {
        cout << "Select a doctor to rate (Enter the doctor's number): ";
        getInput(doctorChoice);
        if (doctorChoice < 1 || doctorChoice > doctorcount) {
            cout << "Invalid choice! Please try again.\n";
            continue;
        }
        break;
    }
    int i = doctorChoice - 1;
    int rating;
    while (true) {
        cout << "Enter your rating for " << doctors[i].Name << " (from 1 to 5)\nNote: 1 is the lowest value, 5 is the highest value: ";
        getInput(rating);
        if (rating < 1 || rating > 5) {
            cout << "Invalid rating! Please enter a number between 1 and 5.\n";
            continue;
        }
        break;
    }
    doctors[i].totalRating += rating;
    doctors[i].ratingCount++;
    doctors[i].averageRating = (double)(doctors[i].totalRating) / doctors[i].ratingCount;
    cout << "Thank you for rating " << doctors[i].Name << "!\n";
}

void viewMyRate(int loggedDocIndex) {
    if (doctors[loggedDocIndex].ratingCount == 0) {
        cout << "You have not received any ratings yet.\n";
    }
    else {
        cout << "Average Rating: " << doctors[loggedDocIndex].averageRating << "\n";
    }
}

int calcdoccount() {
    return doctorcount;
}

int calcpatcount() {
    return patientcount;
}

void docregisterfun(int& doctorcount, int patientcount) {
    string docusername, password;
    bool check;
    if (doctorcount >= maxDoc) {
        cout << "Maximum registration reached.\n";
        return;
    }
    cout << "Enter doctor's name: \n";
    cin >> doctors[doctorcount].Name;
    int id;
    while (true) {
        cout << "Enter doctor ID: \n";
        getInput(id);
        if (id <= 0) {
            cout << "Invalid ID. ID must be greater than zero. Please enter again.\n";
            continue;
        }
        bool idExists = false;
        for (int i = 0; i < doctorcount; i++) {
            if (doctors[i].ID == id) {
                idExists = true;
                break;
            }
        }
        for (int i = 0; i < patientcount; i++) {
            if (patients[i].ID == id) {
                idExists = true;
                break;
            }
        }
        if (idExists) {
            cout << "This ID is already taken. Please enter a unique ID.\n";
            continue;
        }
        doctors[doctorcount].ID = id;
        break;
    }
    for (int i = 0; i < maxDocAppt; i++) {
        doctors[doctorcount].docAppt[i] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
    }
    for (int i = 0; i < maxAvailTime; i++) {
        doctors[doctorcount].listAvail[i] = { -1, doctors[doctorcount].ID, "-1", {-1, -1}, {-1, -1} };
    }
    doctors[doctorcount].numAppt = 0;
    doctors[doctorcount].totalRating = 0;
    doctors[doctorcount].ratingCount = 0;
    doctors[doctorcount].averageRating = 0.0;

    cout << "Enter doctor's specialization: \n";
    cin >> doctors[doctorcount].specialication;
    while (true) {
        string username;
        cout << "Enter doctor's username: \n";
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
        cout << "This username is already used.\n";
    }
    cout << "Enter doctor's password: \n";
    cin >> doctors[doctorcount].Password;
    doctorcount++;
    cout << "Registration is done.\n";
    cout << "Please add available times using 'Add available time' in the doctor menu to allow patients to book appointments.\n";
}

void patregisterfun(int& patientcount, int doctorcount) {
    string patusername, password;
    bool check;
    if (patientcount >= maxPatient) {
        cout << "Maximum registration reached.\n";
        return;
    }
    cout << "Enter patient's name: \n";
    cin >> patients[patientcount].Name;
    int id;
    while (true) {
        cout << "Enter patient ID: \n";
        getInput(id);
        if (id <= 0) {
            cout << "Invalid ID. ID must be greater than zero. Please enter again.\n";
            continue;
        }
        bool idExists = false;
        for (int i = 0; i < doctorcount; i++) {
            if (doctors[i].ID == id) {
                idExists = true;
                break;
            }
        }
        for (int i = 0; i < patientcount; i++) {
            if (patients[i].ID == id) {
                idExists = true;
                break;
            }
        }
        if (idExists) {
            cout << "This ID is already taken. Please enter a unique ID.\n";
            continue;
        }
        patients[patientcount].ID = id;
        break;
    }
    cout << "Enter patient gender (M/F): \n";
    while (true) {
        cin >> patients[patientcount].gender;
        if (patients[patientcount].gender != 'F' && patients[patientcount].gender != 'f' && patients[patientcount].gender != 'M' && patients[patientcount].gender != 'm') {
            cout << "Invalid gender. Please enter M or F: \n";
            continue;
        }
        break;
    }
    cout << "Enter patient age: \n";
    getInput(patients[patientcount].age);
    for (int i = 0; i < maxMyAppt; i++) {
        patients[patientcount].myAppt[i] = { -1, -1, "-1", {-1, -1}, {-1, -1} };
    }
    patients[patientcount].numAppt = 0;
    while (true) {
        string username;
        cout << "Enter patient's username: \n";
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
        cout << "This username is already used.\n";
    }
    cout << "Enter patient's password: \n";
    cin >> patients[patientcount].Password;
    patientcount++;
    cout << "Registration is done.\n";
}

int loginfunpatient(string username, string password) {
    for (int i = 0; i < maxPatient; i++) {
        if (username == patients[i].User && password == patients[i].Password)
            return i;
    }
    return -1;
}

int loginfundoctor(string username, string password) {
    for (int i = 0; i < maxDoc; i++) {
        if (username == doctors[i].User && password == doctors[i].Password)
            return i;
    }
    return -1;
}

void loggeduser() {
    string username, password;
    while (true) {
        cout << "Enter username: \n";
        cin >> username;
        while (true) {
            password.clear();
            cout << "Enter password (spaces are ignored): \n";
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
                cout << "\nPassword cannot be empty! Please try again.\n";
            }
            else {
                break;
            }
        }
        loggedDocIndex = loginfundoctor(username, password);
        if (loggedDocIndex != -1) {
            cout << "\nLogin successful as Doctor!\n";
            break;
        }
        loggedPatient = loginfunpatient(username, password);
        if (loggedPatient != -1) {
            cout << "\nLogin successful as Patient!\n";
            break;
        }
        cout << "\nInvalid user. Please try again.\n";
    }
}

void menupatient() {
    int choice_menu_patient;
    while (true) {
        cout << "\n*Operations for Patient*\n";
        cout << "1. Display doctors' available times\n2. Book appointment\n3. Edit appointment\n4. Cancel appointment\n5. View my appointments\n6. Edit my profile\n7. Clear appointment history\n8. Rate Doctor\n9. Logout\n\n";
        cout << "Enter your choice: ";
        getInput(choice_menu_patient);
        if (choice_menu_patient == 1) {
            display_doctortime(doctors, doctorcount);
        }
        else if (choice_menu_patient == 2) {
            Bookappointment(patients[loggedPatient], doctors, doctorcount);
        }
        else if (choice_menu_patient == 3) {
            editMyAppointmentPatient(loggedPatient);
        }
        else if (choice_menu_patient == 4) {
            Remove_Appt_By_Patient(patients[loggedPatient]);
        }
        else if (choice_menu_patient == 5) {
            viewMyAppointment(loggedPatient);
        }
        else if (choice_menu_patient == 6) {
            edit_patient_profile(patients[loggedPatient]);
        }
        else if (choice_menu_patient == 7) {
            clearApptHistory(loggedPatient);
        }
        else if (choice_menu_patient == 8) {
            rateDoctor(doctorcount);
        }
        else if (choice_menu_patient == 9) {
            loggedPatient = -1;
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

void menudoctor() {
    int choice_menu_doctor;
    while (true) {
        cout << "\n*Operations for Doctor*\n";
        cout << "1. Display available time\n2. Add available time\n3. Edit available time\n4. Remove available time\n5. View booked appointments\n6. Edit my profile\n7. View my ratings\n8. Logout\n\n";
        cout << "Enter your choice: ";
        getInput(choice_menu_doctor);
        if (choice_menu_doctor == 1) {
            displayDocListAvail(loggedDocIndex, -1);
        }
        else if (choice_menu_doctor == 2) {
            addAvailableTimeDoc(loggedDocIndex);
        }
        else if (choice_menu_doctor == 3) {
            editTime(loggedDocIndex);
        }
        else if (choice_menu_doctor == 4) {
            RemoveTime(doctors[loggedDocIndex]);
        }
        else if (choice_menu_doctor == 5) {
            viewDocAppt(loggedDocIndex);
        }
        else if (choice_menu_doctor == 6) {
            edit_doctor_profile(doctors[loggedDocIndex]);
        }
        else if (choice_menu_doctor == 7) {
            viewMyRate(loggedDocIndex);
        }
        else if (choice_menu_doctor == 8) {
            loggedDocIndex = -1;
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
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
        cout << "3. Login\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        getInput(choice);
        if (choice == 1) {
            docregisterfun(doctorcount, patientcount);
        }
        else if (choice == 2) {
            patregisterfun(patientcount, doctorcount);
        }
        else if (choice == 3) {
            loggeduser();
            if (loggedDocIndex != -1) {
                menudoctor();
            }
            else if (loggedPatient != -1) {
                menupatient();
            }
        }
        else if (choice == 4) {
            saveData();
            cout << "Data saved. Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
}
