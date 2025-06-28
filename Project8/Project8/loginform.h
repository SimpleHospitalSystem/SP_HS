#pragma once
#include "dochome.h"
#include "homepatient.h"
#include "Doctor.h"
#include "Patient.h"

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class loginform : public System::Windows::Forms::Form
	{
	public:
		loginform(void)
		{
			InitializeComponent();

		}

	protected:

		~loginform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1_DOC;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButton2_PAT;
	protected:

	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ log_butt_doctor;
	private: System::Windows::Forms::TextBox^ passward_textbox_doc;





	private: System::Windows::Forms::TextBox^ username_textbox_doc;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Log_butt_patient;
	private: System::Windows::Forms::TextBox^ passward_textbox_pat;



	private: System::Windows::Forms::TextBox^ username_textbox_pat;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton1_DOC = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_PAT = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->log_butt_doctor = (gcnew System::Windows::Forms::Button());
			this->passward_textbox_doc = (gcnew System::Windows::Forms::TextBox());
			this->username_textbox_doc = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Log_butt_patient = (gcnew System::Windows::Forms::Button());
			this->passward_textbox_pat = (gcnew System::Windows::Forms::TextBox());
			this->username_textbox_pat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1_DOC
			// 
			this->radioButton1_DOC->AutoSize = true;
			this->radioButton1_DOC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1_DOC->Location = System::Drawing::Point(221, 105);
			this->radioButton1_DOC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1_DOC->Name = L"radioButton1_DOC";
			this->radioButton1_DOC->Size = System::Drawing::Size(81, 22);
			this->radioButton1_DOC->TabIndex = 3;
			this->radioButton1_DOC->Text = L"Doctor";
			this->radioButton1_DOC->UseVisualStyleBackColor = true;
			this->radioButton1_DOC->CheckedChanged += gcnew System::EventHandler(this, &loginform::radioButton1_CheckedChanged);
			// 
			// radioButton2_PAT
			// 
			this->radioButton2_PAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2_PAT->Location = System::Drawing::Point(395, 98);
			this->radioButton2_PAT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2_PAT->Name = L"radioButton2_PAT";
			this->radioButton2_PAT->Size = System::Drawing::Size(111, 34);
			this->radioButton2_PAT->TabIndex = 4;
			this->radioButton2_PAT->Text = L"Patient";
			this->radioButton2_PAT->UseVisualStyleBackColor = true;
			this->radioButton2_PAT->CheckedChanged += gcnew System::EventHandler(this, &loginform::radioButton2_PAT_CheckedChanged);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(551, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login Form";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->log_butt_doctor);
			this->groupBox1->Controls->Add(this->passward_textbox_doc);
			this->groupBox1->Controls->Add(this->username_textbox_doc);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(29, 139);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(476, 164);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Doctor";
			this->groupBox1->Visible = false;
			// 
			// log_butt_doctor
			// 
			this->log_butt_doctor->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->log_butt_doctor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->log_butt_doctor->Location = System::Drawing::Point(365, 116);
			this->log_butt_doctor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->log_butt_doctor->Name = L"log_butt_doctor";
			this->log_butt_doctor->Size = System::Drawing::Size(83, 30);
			this->log_butt_doctor->TabIndex = 4;
			this->log_butt_doctor->Text = L"login";
			this->log_butt_doctor->UseVisualStyleBackColor = true;
			this->log_butt_doctor->Click += gcnew System::EventHandler(this, &loginform::log_butt_doctor_Click);
			// 
			// passward_textbox_doc
			// 
			this->passward_textbox_doc->Location = System::Drawing::Point(73, 116);
			this->passward_textbox_doc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passward_textbox_doc->Name = L"passward_textbox_doc";
			this->passward_textbox_doc->PasswordChar = '*';
			this->passward_textbox_doc->Size = System::Drawing::Size(189, 22);
			this->passward_textbox_doc->TabIndex = 3;
			// 
			// username_textbox_doc
			// 
			this->username_textbox_doc->Location = System::Drawing::Point(73, 60);
			this->username_textbox_doc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_textbox_doc->Name = L"username_textbox_doc";
			this->username_textbox_doc->Size = System::Drawing::Size(189, 22);
			this->username_textbox_doc->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Username";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Log_butt_patient);
			this->groupBox2->Controls->Add(this->passward_textbox_pat);
			this->groupBox2->Controls->Add(this->username_textbox_pat);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(12, 215);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(476, 164);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Patient";
			this->groupBox2->Visible = false;
			// 
			// Log_butt_patient
			// 
			this->Log_butt_patient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Log_butt_patient->Location = System::Drawing::Point(383, 116);
			this->Log_butt_patient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Log_butt_patient->Name = L"Log_butt_patient";
			this->Log_butt_patient->Size = System::Drawing::Size(65, 30);
			this->Log_butt_patient->TabIndex = 4;
			this->Log_butt_patient->Text = L"login";
			this->Log_butt_patient->UseVisualStyleBackColor = true;
			this->Log_butt_patient->Click += gcnew System::EventHandler(this, &loginform::Log_butt_patient_Click);
			// 
			// passward_textbox_pat
			// 
			this->passward_textbox_pat->Location = System::Drawing::Point(73, 116);
			this->passward_textbox_pat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passward_textbox_pat->Name = L"passward_textbox_pat";
			this->passward_textbox_pat->PasswordChar = '*';
			this->passward_textbox_pat->Size = System::Drawing::Size(189, 22);
			this->passward_textbox_pat->TabIndex = 3;
			// 
			// username_textbox_pat
			// 
			this->username_textbox_pat->Location = System::Drawing::Point(73, 60);
			this->username_textbox_pat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_textbox_pat->Name = L"username_textbox_pat";
			this->username_textbox_pat->Size = System::Drawing::Size(189, 22);
			this->username_textbox_pat->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Username";
			// 
			// loginform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 514);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2_PAT);
			this->Controls->Add(this->radioButton1_DOC);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"loginform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &loginform::loginform_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
			groupBox1->Visible = false;
			groupBox2->Visible = false;

		private: System::Void LoginForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
			groupBox1->Visible = false;
			groupBox2->Visible = false;

		}*/

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		groupBox2->Visible = false;
	}

	private: System::Void radioButton2_PAT_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = false;
		groupBox2->Visible = true;
	}
	private: Doctor^ GetDoctorIfValid(String^ username, String^ password) {
		if (!System::IO::File::Exists("doctors.txt"))
			return nullptr;

		auto lines = System::IO::File::ReadAllLines("doctors.txt");

		for each (String ^ line in lines) {
			line = line->Trim();
			line = line->Replace("{", "");
			line = line->Replace("}", "");

			array<String^>^ parts = line->Split(',');
			if (parts->Length >= 5) {
				String^ id = parts[0]->Trim()->Replace("\"", "");
				String^ name = parts[1]->Trim()->Replace("\"", "");
				String^ fileUsername = parts[2]->Trim()->Replace("\"", "");
				String^ filePassword = parts[3]->Trim()->Replace("\"", "");
				String^ fileSpecialization = parts[4]->Trim()->Replace("\"", "");

				if (fileUsername == username && filePassword == password) {
					return gcnew Doctor(id, name, fileUsername, filePassword, fileSpecialization);
				}
			}
		}

		return nullptr;
	}

		   Patient^ GetPatientByUsernameAndPassword(String^ username, String^ password) {
			   if (!System::IO::File::Exists("patients.txt"))
				   return nullptr;

			   auto lines = System::IO::File::ReadAllLines("patients.txt");

			   //for each (String ^ line in lines) {
				  // if (line->StartsWith("{")) {
					 //  array<String^>^ parts = line->Split(',');
					 //  if (parts->Length >= 6) {
						//   String^ id = parts[0]->Trim()->Replace("{", "")->Replace("\"", "");
						//   String^ name = parts[1]->Trim()->Replace("\"", "");
						//   String^ fileUsername = parts[2]->Trim()->Replace("\"", "");
						//   String^ filePassword = parts[3]->Trim()->Replace("\"", "");
						//   int age = Convert::ToInt32(parts[4]->Trim());
						//   char gender = parts[5]->Trim()->Replace("}", "")[1]; // get the char inside the single quotes
						//   if (fileUsername == username && filePassword == password) {
						//	   return gcnew Patient(id, name, fileUsername, filePassword, age, gender);
						//   }
					 //  }
				  // }
			   //}
			   for each (String ^ line in lines) {
				   line = line->Replace("{", "");
				   line = line->Replace("}", "");
				   line = line->Replace("\"", "");
				   line = line->Trim();

				   array<String^>^ parts = line->Split(',');

				   if (parts->Length >= 6) {
					   String^ id = parts[0]->Trim();
					   String^ name = parts[1]->Trim();
					   String^ fileUsername = parts[2]->Trim();
					   String^ filePassword = parts[3]->Trim();
					   int age = Convert::ToInt32(parts[4]->Trim());
					   char gender = parts[5]->Trim()->Replace("}", "")[0];

					   if (fileUsername == username && filePassword == password) {
						   return gcnew Patient(id, name, fileUsername, filePassword, age, gender);
					   }
				   }
			   }


			   return nullptr;
		   }




	private: System::Void log_butt_doctor_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = username_textbox_doc->Text->Trim();
		String^ pass = passward_textbox_doc->Text->Trim();

		Doctor^ doctor = GetDoctorIfValid(user, pass);
		if (doctor != nullptr) {
			MessageBox::Show("Login successful! Welcome Dr. " + doctor->name, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			/*dochome^ doctorForm = gcnew dochome(doctor);
				doctorForm->Show();*/
			this->Hide();
			dochome^ doctorForm = gcnew dochome(doctor);
			doctorForm->ShowDialog();
		}
		else {
			MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}



	private: System::Void Log_butt_patient_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = username_textbox_pat->Text->Trim();
		String^ pass = passward_textbox_pat->Text->Trim();

		Patient^ patient = GetPatientByUsernameAndPassword(user, pass);
		if (patient != nullptr) {
			MessageBox::Show("Login successful! Welcome " + patient->name, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			homepatient^ patientForm = gcnew homepatient(patient);
			patientForm->ShowDialog();
		}
		else {
			MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void loginform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
};





