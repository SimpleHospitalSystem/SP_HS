#ifndef PATIENT_FUNCTIONS_H
#define PATIENT_FUNCTIONS_H

#include "structs.h"

//Patient Function Deceleration
int getNumTimeSlots(int loggedDocIndex);
void display_doctortime(Doctor doctors[], int Count = doctorcount);
int getRealIndexFromChoice(Doctor doc, int choice);
void Bookappointment(Patient& patient, Doctor doctors[], int doctorCount);
void viewMyAppointment(int patientIndex);
void getInput(int& time);
void displayDocListAvail(int DocIndex, int slot);
int getNumOfPatientAppt(int patientIndex);
int getDocIndex(int DocID);
int getCancelIndexToUnbook(int numSlotDoc, int editSlot, int patientIndex, int DocIndex);
void editMyAppointmentPatient(int patientIndex);
void Remove_Appt_By_Patient(Patient& patient);
void edit_patient_profile (Patient & before);

#endif
