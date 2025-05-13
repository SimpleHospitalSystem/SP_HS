#pragma once

namespace yarbY4ta8al {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DomainUpDown^ Select;
	protected:



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Select = (gcnew System::Windows::Forms::DomainUpDown());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(234, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rate Doctor";
			// 
			// Select
			// 
			this->Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Select->Items->Add(L"1");
			this->Select->Items->Add(L"2");
			this->Select->Items->Add(L"3");
			this->Select->Items->Add(L"4");
			this->Select->Items->Add(L"5");
			this->Select->Location = System::Drawing::Point(241, 145);
			this->Select->Name = L"Select";
			this->Select->Size = System::Drawing::Size(180, 34);
			this->Select->TabIndex = 1;
			this->Select->Text = L"Select (1->5)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(750, 538);
			this->Controls->Add(this->Select);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//display the selected date and time in the dateTimePicker
			label1->Text = "Selected Time: " + dateTimePicker1->Value.ToString("hh:mm tt");
		}*/
		/*private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			//display the selected date and time in the label
			label1->Text = "Selected Time: " + dateTimePicker1->Value.ToString("hh:mm tt");
		}*/
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
