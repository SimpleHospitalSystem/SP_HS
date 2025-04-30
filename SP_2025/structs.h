#ifndef STRUCTS_H
#define STRUCTS_H

#include <string>
#define maxAvailTime 5
#define maxDocAppt 5
#define maxMyAppt 5
#define maxDoc 5
#define maxPatient 10

// PLEASEEEEEEEEEEEEEEEEEEEEEEE 2E4T8ALLLLLLLLLLLLLLLL

using namespace std;

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

extern int doctorcount;
extern int patientcount;
extern Doctor doctors[3];
extern Patient patients[3];

#endif
