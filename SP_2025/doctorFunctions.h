#ifndef DOCTOR_FUNCTIONS_H
#define DOCTOR_FUNCTIONS_H

#include "structs.h"

int getNumTimeSlots(int loggedDocIndex);
void displayDocListAvail(int DocIndex, int availableIndexes[], int& count, int slot = -1);
void editTime(int loggedDocIndex);
int getNumTimeSlots(int loggedDocIndex);
void viewDocAppt(int loggedDoc);

#endif