#include <iostream>
#include <iomanip>
#include "doctorFunctions.h"
using namespace std;

int doctorcount = 0;
int patientcount = 0;

// PLEASEEEEEEEEEEEEEEEEEEEEEEE 2E4T8ALLLLLLLLLLLLLLLL

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
    int timeSlot;
    char ans;
    do {
        int numSlots = getNumTimeSlots(loggedDocIndex);
        displayDocListAvail(loggedDocIndex, -1);
        if (numSlots == 0) {
            cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
            break;
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
        cout << "You haven't set your available times yet. Set them now to start receiving appointments!\n";
        return;
    }

    int timeSlotIndex;
    cout << "Enter the time slot index to remove: ";
    cin >> timeSlotIndex;
    timeSlotIndex--; // Convert to 0-based index
    if (timeSlotIndex < 0 || timeSlotIndex >= maxAvailTime || doctors[loggedDocIndex].listAvail[timeSlotIndex].day == "") {
        cout << "Invalid time slot index.\n";
        return;
    }
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

}
