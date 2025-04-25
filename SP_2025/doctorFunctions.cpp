#include <iostream>
#include <iomanip>
#include "doctorFunctions.h"
using namespace std;

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
        {
            {201, 1, "Monday", {9, 0}, {9, 30}},
            {201, 1, "Wednesday", {14, 0}, {14, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
            {-1, -1, "", {-1, -1}, {-1, -1}}
        }
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
        {
            {203, 2, "Tuesday", {9, 0}, {9, 30}},
            {-1, -1, "", {-1, -1}, {-1, -1}},
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

void displayDocListAvail(int DocIndex, int availableIndexes[], int& count, int slot) {
    int numSlots = getNumTimeSlots(DocIndex);
    count = 0;
    if (numSlots == 0) {
        cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
        return;
    }
    else if (slot == -1) { // For editTime, removeTime, and editAppt functions
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

                availableIndexes[count] = i;
                count++;
            }
        }
    }
    else { // View my Available time list(user aka doc)(default purpose of displayDocListAvail function)  
        cout << doctors[DocIndex].Name << "\t" << doctors[DocIndex].specialication << "\n";
        for (int i = 0; i < numSlots; i++) {
            if (doctors[DocIndex].listAvail[i].patientID == -1) {
                if (doctors[DocIndex].listAvail[i].day == "Wednesday" || doctors[DocIndex].listAvail[i].day == "Thursday" || doctors[DocIndex].listAvail[i].day == "Saturday")
                    cout << doctors[DocIndex].listAvail[i].day << "\t" << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                    << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute
                    << "\n";
                else
                    cout << doctors[DocIndex].listAvail[i].day << "\t";
                cout << " " << doctors[DocIndex].listAvail[i].startTime.hour << ":" << doctors[DocIndex].listAvail[i].startTime.minute
                    << " - " << doctors[DocIndex].listAvail[i].endTime.hour << ":" << doctors[DocIndex].listAvail[i].endTime.minute
                    << "\n";
            }
        }
    }
    if (count == 0)
        cout << "No available slots.\n";
}

void validateAvailTime(int loggedDoc, int Index) { // to make sure that the available time isn't repeated whether it's booked or unbooked
    string day;
    int numSlots = getNumTimeSlots(loggedDoc);
    int startHour, startMin, endHour, endMin;
    string Day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    bool correctDay = false;
    while (!correctDay) {
        cout << "Enter new day: ";
        cin >> day;
        for (int i = 0; i < 7; i++) {
            if (day == Day[i]) {
                correctDay = true;
                break;
            }
        }
        if (!correctDay)
            cout << "Invalid day entered. Please enter a valid day of the week.\n( Make sure that the first letter is a Capital letter )\n";
    }
    while (true) {
        cout << "Enter new start time (24-Hour Format: hour minute): ";
        cin >> startHour >> startMin;
        cout << "Enter new end time (24-Hour Format: hour minute): ";
        cin >> endHour >> endMin;
        if (startHour < 0 || startHour > 23 || startMin < 0 || startMin > 59 || endHour < 0 || endHour > 23 || endMin < 0 || endMin > 59) {
            cout << "Please re-enter valid times in 24-hour format.\n";
            continue;
        }
        int startTotalMins = startHour * 60 + startMin;
        int endTotalMins = endHour * 60 + endMin;
        int duration = endTotalMins - startTotalMins;
        if (startTotalMins >= endTotalMins) {
            cout << "Set a proper start and end time for your available time.\n";
            continue;
        }
        else if (duration < 30 || duration > 60) {
            cout << "Duration must range between 30 mins and 1 hour.\n";
            continue;
        }
        bool repeated = false;
        for (int i = 0;i < numSlots;i++) {
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
    int realIndex;
    char ans;
    do {
        int numSlots = getNumTimeSlots(loggedDocIndex);
        int availableIndexes[maxAvailTime];
        int count;
        displayDocListAvail(loggedDocIndex, availableIndexes, count);
        if (count == 0) {
            cout << "No available time slots to edit.\n";
            return;
        }
        while (true) {
            cout << "Which time slot do you want to change/edit?\n";
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice < 1 || choice > count) {
                cout << "Invalid choice.\n";
                continue;
            }
            realIndex = availableIndexes[choice - 1];
            if (doctors[loggedDocIndex].listAvail[realIndex].patientID != -1) {
                cout << "You cannot edit a time slot that has already been booked.\n";
                break;
            }
            validateAvailTime(loggedDocIndex, realIndex);
            displayDocListAvail(loggedDocIndex, availableIndexes, count);
            cout << "Your schedule has been successfully updated.\n";
            break;
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
    for (int i = 0;i < numSlots;i++) {
        for (int j = 0;j < maxPatient;j++) {
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