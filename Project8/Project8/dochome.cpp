#include "dochome.h"

void Project8::dochome::LoadAppointments()
{
    listView1->Items->Clear();
    listView1->Columns->Clear();

    listView1->Columns->Add("day", 120);
    listView1->Columns->Add("time", 120);
    listView1->Columns->Add("State", 120);
    listView1->Columns->Add("patient id", 120);

    String^ doctorID = currentDoc->id;

    if (System::IO::File::Exists("appointments.txt")) {
        array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

        for each (String ^ line in lines) {
            array<String^>^ parts = line->Split(',');

            // Format: id,name,user,day,time,isBooked,patientID,specialization
            if (parts->Length >= 7 && parts[0] == doctorID) {
                ListViewItem^ item = gcnew ListViewItem(parts[3]);         // day
                item->SubItems->Add(parts[4]);                             // time
                item->SubItems->Add(parts[5] == "True" ? "Booked" : "Unbooked");  // status
                item->SubItems->Add(parts[6]);                             // patient id
                listView1->Items->Add(item);
            }
        }
    }
}
void Project8::dochome::LoadAppointments2()
{
    listView2->Items->Clear();
    listView2->Columns->Clear();

    listView2->Columns->Add("day", 120);
    listView2->Columns->Add("time", 120);
    listView2->Columns->Add("State", 120);
    listView2->Columns->Add("patient id", 120);

    String^ doctorID = currentDoc->id;

    if (System::IO::File::Exists("appointments.txt")) {
        array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

        for each (String ^ line in lines) {
            array<String^>^ parts = line->Split(',');

            // Format: id,name,user,day,time,isBooked,patientID,specialization
            if (parts->Length >= 7 && parts[0] == doctorID) {
                ListViewItem^ item = gcnew ListViewItem(parts[3]);         // day
                item->SubItems->Add(parts[4]);                             // time
                item->SubItems->Add(parts[5] == "True" ? "Booked" : "Unbooked");  // status
                item->SubItems->Add(parts[6]);                             // patient id
                listView2->Items->Add(item);
            }
        }
    }
}


void Project8::dochome::LoadAppointments3()
{
    listView3->Items->Clear();
    listView3->Columns->Clear();

    listView3->Columns->Add("day", 120);
    listView3->Columns->Add("time", 120);
    listView3->Columns->Add("State", 120);
    listView3->Columns->Add("patient id", 120);

    String^ doctorID = currentDoc->id;

    if (System::IO::File::Exists("appointments.txt")) {
        array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

        for each(String ^ line in lines) {
            array<String^>^ parts = line->Split(',');

            // Format: id,name,user,day,time,isBooked,patientID,specialization
            if (parts->Length >= 7 && parts[0] == doctorID) {
                ListViewItem^ item = gcnew ListViewItem(parts[3]);         // day
                item->SubItems->Add(parts[4]);                             // time
                item->SubItems->Add(parts[5] == "True" ? "Booked" : "Unbooked");  // status
                item->SubItems->Add(parts[6]);                             // patient id
                listView3->Items->Add(item);
            }
        }
    }
}






/*




*/