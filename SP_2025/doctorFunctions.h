#ifndef DOCTOR_FUNCTIONS_H
#define DOCTOR_FUNCTIONS_H

#include "structs.h"

// PLEASEEEEEEEEEEEEEEEEEEEEEEE 2E4T8ALLLLLLLLLLLLLLLL

int getNumTimeSlots(int loggedDocIndex);
void displayDocListAvail(int DocIndex, int availableIndexes[], int& count, int slot = -1);
void validateAvailTime(int loggedDoc, int Index);
void editTime(int loggedDocIndex);
int getNumApptSlot(int loggedDoc);
void viewDocAppt(int loggedDoc);
void addAvailableTimeDoc(int loggedDocIndex);
bool existAvailableTimeSlot(int loggedDocIndex, int& newTimeIndex);
void getInput(int& time);

#endif