#include<string>
#include "loginform.h"


#pragma once

using namespace System::IO;
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for regstration
	/// </summary>
	public ref class regstration : public System::Windows::Forms::Form
	{
	public:
		regstration(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~regstration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;






	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label14;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;






	private: bool UsernameExists(String^ username) {
		if (!System::IO::File::Exists("patients.txt"))
			return false;

		auto lines = System::IO::File::ReadAllLines("patients.txt");
		for each (String ^ line in lines) {
			line = line->Trim();
			if (line->StartsWith("{")) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length >= 3) {
					String^ usernameInFile = parts[2]->Trim()->Replace("\"", "");
					if (usernameInFile->ToLower() == username->Trim()->ToLower()) {
						return true;
					}
				}
			}
		}
		return false;
	}


	private: bool UsernameExistsInDoctors(String^ username) {
		if (!System::IO::File::Exists("doctors.txt"))
			return false;

		auto lines = System::IO::File::ReadAllLines("doctors.txt");
		for each (String ^ line in lines) {
			line = line->Trim();
			if (line->StartsWith("{")) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length >= 3) {
					String^ usernameInFile = parts[2]->Trim()->Replace("\"", "");
					if (usernameInFile->ToLower() == username->Trim()->ToLower()) {
						return true;
					}
				}
			}
		}
		return false;
	}


	private: bool UsernameExistsAnywhere(String^ username) {
		return UsernameExists(username) || UsernameExistsInDoctors(username);
	}


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioButton1->Location = System::Drawing::Point(153, 90);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(87, 24);
			   this->radioButton1->TabIndex = 0;
			   this->radioButton1->Text = L"Doctor";
			   this->radioButton1->UseVisualStyleBackColor = true;
			   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &regstration::radioButton1_CheckedChanged);
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioButton2->Location = System::Drawing::Point(402, 90);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(89, 24);
			   this->radioButton2->TabIndex = 1;
			   this->radioButton2->Text = L"Patient";
			   this->radioButton2->UseVisualStyleBackColor = true;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &regstration::radioButton2_CheckedChanged);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->comboBox2);
			   this->groupBox1->Controls->Add(this->button1);
			   this->groupBox1->Controls->Add(this->textBox7);
			   this->groupBox1->Controls->Add(this->textBox6);
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label6);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Location = System::Drawing::Point(130, 139);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(420, 320);
			   this->groupBox1->TabIndex = 2;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Doctor";
			   this->groupBox1->Visible = false;
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				   L"Neurologist", L"Cardiologist", L"Dermatologist",
					   L"General Surgeon"
			   });
			   this->comboBox2->Location = System::Drawing::Point(31, 137);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(191, 24);
			   this->comboBox2->TabIndex = 12;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(288, 251);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(83, 26);
			   this->button1->TabIndex = 4;
			   this->button1->TabStop = false;
			   this->button1->Text = L"Done";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &regstration::button1_Click);
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(28, 280);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->PasswordChar = '*';
			   this->textBox7->Size = System::Drawing::Size(136, 22);
			   this->textBox7->TabIndex = 11;
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(28, 236);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(136, 22);
			   this->textBox6->TabIndex = 10;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(28, 183);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(136, 22);
			   this->textBox4->TabIndex = 8;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(49, 77);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(136, 22);
			   this->textBox2->TabIndex = 7;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(36, 37);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(197, 22);
			   this->textBox1->TabIndex = 6;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(25, 261);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(112, 16);
			   this->label6->TabIndex = 5;
			   this->label6->Text = L"confirm password";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(33, 208);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(66, 16);
			   this->label5->TabIndex = 4;
			   this->label5->Text = L"password";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(28, 118);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(89, 16);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"specialization";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(28, 164);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(67, 16);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"username";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(22, 80);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(20, 16);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"ID";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(33, 18);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(62, 16);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Fullname";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->button2);
			   this->groupBox2->Controls->Add(this->textBox12);
			   this->groupBox2->Controls->Add(this->label13);
			   this->groupBox2->Controls->Add(this->label12);
			   this->groupBox2->Controls->Add(this->comboBox1);
			   this->groupBox2->Controls->Add(this->label11);
			   this->groupBox2->Controls->Add(this->textBox11);
			   this->groupBox2->Controls->Add(this->label10);
			   this->groupBox2->Controls->Add(this->textBox10);
			   this->groupBox2->Controls->Add(this->textBox9);
			   this->groupBox2->Controls->Add(this->textBox8);
			   this->groupBox2->Controls->Add(this->label9);
			   this->groupBox2->Controls->Add(this->label8);
			   this->groupBox2->Controls->Add(this->label7);
			   this->groupBox2->Controls->Add(this->textBox3);
			   this->groupBox2->Location = System::Drawing::Point(107, 157);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(420, 358);
			   this->groupBox2->TabIndex = 3;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Patient";
			   this->groupBox2->Visible = false;
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(301, 318);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(75, 23);
			   this->button2->TabIndex = 12;
			   this->button2->TabStop = false;
			   this->button2->Text = L"Done";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &regstration::button2_Click);
			   // 
			   // textBox12
			   // 
			   this->textBox12->Location = System::Drawing::Point(272, 51);
			   this->textBox12->Name = L"textBox12";
			   this->textBox12->Size = System::Drawing::Size(52, 22);
			   this->textBox12->TabIndex = 17;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(269, 32);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(31, 16);
			   this->label13->TabIndex = 16;
			   this->label13->Text = L"age";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(20, 129);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(50, 16);
			   this->label12->TabIndex = 15;
			   this->label12->Text = L"gender";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			   this->comboBox1->Location = System::Drawing::Point(23, 148);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(102, 24);
			   this->comboBox1->TabIndex = 13;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(33, 229);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(66, 16);
			   this->label11->TabIndex = 12;
			   this->label11->Text = L"password";
			   // 
			   // textBox11
			   // 
			   this->textBox11->Location = System::Drawing::Point(40, 248);
			   this->textBox11->Name = L"textBox11";
			   this->textBox11->Size = System::Drawing::Size(136, 22);
			   this->textBox11->TabIndex = 12;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(33, 300);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(112, 16);
			   this->label10->TabIndex = 12;
			   this->label10->Text = L"confirm password";
			   // 
			   // textBox10
			   // 
			   this->textBox10->Location = System::Drawing::Point(34, 319);
			   this->textBox10->Name = L"textBox10";
			   this->textBox10->PasswordChar = '*';
			   this->textBox10->Size = System::Drawing::Size(136, 22);
			   this->textBox10->TabIndex = 12;
			   // 
			   // textBox9
			   // 
			   this->textBox9->Location = System::Drawing::Point(49, 98);
			   this->textBox9->Name = L"textBox9";
			   this->textBox9->Size = System::Drawing::Size(144, 22);
			   this->textBox9->TabIndex = 10;
			   // 
			   // textBox8
			   // 
			   this->textBox8->Location = System::Drawing::Point(23, 51);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(197, 22);
			   this->textBox8->TabIndex = 9;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(24, 175);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(67, 16);
			   this->label9->TabIndex = 8;
			   this->label9->Text = L"username";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(25, 98);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(20, 16);
			   this->label8->TabIndex = 8;
			   this->label8->Text = L"ID";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(22, 32);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(62, 16);
			   this->label7->TabIndex = 8;
			   this->label7->Text = L"Fullname";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(36, 194);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(197, 22);
			   this->textBox3->TabIndex = 8;
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label14->Location = System::Drawing::Point(165, 18);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(325, 46);
			   this->label14->TabIndex = 4;
			   this->label14->Text = L"regstriation form";
			   // 
			   // regstration
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(646, 842);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->radioButton2);
			   this->Controls->Add(this->radioButton1);
			   this->Name = L"regstration";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"regstration";
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion


	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		groupBox2->Visible = false;
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Visible = true;
		groupBox1->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Doctor full name is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (textBox2->Text == "") {

			MessageBox::Show("Doctor Id is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (comboBox2->SelectedIndex == -1) {
			MessageBox::Show("Please select a specialization.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (textBox4->Text == "") {
			MessageBox::Show("Doctor username is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (textBox7->Text->Length < 4) {
			MessageBox::Show("Doctor password must be 4 characters.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (UsernameExistsAnywhere(textBox4->Text)) {
			MessageBox::Show("This username already exists. Choose another one.", "Duplicate Username", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		String^ id = textBox2->Text;
		StreamWriter^ writer = gcnew StreamWriter("doctors.txt", true);
		String^ docLine = "{" + id + ", \"" + textBox1->Text + "\", \"" +
			textBox4->Text + "\", \"" + textBox7->Text + "\", \"" +
			comboBox2->Text + "\" }";

		writer->WriteLine(docLine);
		writer->Close();
		MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();
		loginform^ login = gcnew loginform();
		login->ShowDialog();
		this->Close();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox8->Text == "") {
			MessageBox::Show("Patient full name is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (textBox12->Text == "") {
			MessageBox::Show("patient age is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (textBox9->Text == "") {

			MessageBox::Show("Patient Id is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;

		}
		if (comboBox1->SelectedIndex == -1) {
			MessageBox::Show("Please select a gender.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (textBox3->Text == "") {
			MessageBox::Show("Patient username is required.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (textBox10->Text->Length < 4) {
			MessageBox::Show("Patient password must be 4 characters.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (UsernameExistsAnywhere(textBox3->Text)) {
			MessageBox::Show("This username already exists. Choose another one.", "Duplicate Username", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}


		String^ id = textBox9->Text;
		StreamWriter^ writer = gcnew StreamWriter("patients.txt", true);
		String^ patientLine = "{" + id + ", \"" + textBox8->Text + "\", \"" +
			textBox3->Text + "\", \"" + textBox10->Text + "\", \"" +
			textBox12->Text + "\", \"" + comboBox1->Text + "\" }";

		writer->WriteLine(patientLine);
		writer->Close();
		MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();
		loginform^ login = gcnew loginform();
		login->ShowDialog();
		this->Close();




	}

	};
};
