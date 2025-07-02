#pragma once
#include "Patient.h"
using namespace System::IO;
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dochome
	/// </summary>
	public ref class homepatient : public System::Windows::Forms::Form
	{
	private: Patient^ currentPatient;


	public:
		homepatient(Project8::Patient^ pat)
		{
			InitializeComponent();
			currentPatient = pat;
			this->Load += gcnew System::EventHandler(this, &homepatient::homepatient_Load);

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~homepatient()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






















	private: System::Windows::Forms::Panel^ myappoint;
	private: System::Windows::Forms::Button^ exitmyappoint;
	private: System::Windows::Forms::ListView^ listView1;








	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::Button^ editbutton;









	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;











	private: System::Windows::Forms::Panel^ apped;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListView^ ydapp;
	private: System::Windows::Forms::Button^ exyapp;

	private: System::Windows::Forms::Button^ editap;
	private: System::Windows::Forms::ComboBox^ udoc;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListView^ otherapp;
	private: System::Windows::Forms::Label^ la10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ addpa;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ListView^ docavti;

	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::ComboBox^ compdoc;

	private: System::Windows::Forms::ComboBox^ compspc;


	private: System::Windows::Forms::Label^ label17;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ uspc;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ListView^ ratelist;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ComboBox^ docra;
	private: System::Windows::Forms::ComboBox^ spcra;


	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ ratedone;
	private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ user;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ name;
private: System::Windows::Forms::Label^ ID;
private: System::Windows::Forms::Label^ age;
private: System::Windows::Forms::Button^ editdoc;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ passwordelabledoc;
private: System::Windows::Forms::Panel^ passwordPanal;
private: System::Windows::Forms::TextBox^ passwordtextboxdoc;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ gender;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button6;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(homepatient::typeid));
			this->addpa = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->docavti = (gcnew System::Windows::Forms::ListView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->compdoc = (gcnew System::Windows::Forms::ComboBox());
			this->compspc = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->apped = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->uspc = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ydapp = (gcnew System::Windows::Forms::ListView());
			this->exyapp = (gcnew System::Windows::Forms::Button());
			this->editap = (gcnew System::Windows::Forms::Button());
			this->udoc = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->otherapp = (gcnew System::Windows::Forms::ListView());
			this->la10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->ratedone = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->ratelist = (gcnew System::Windows::Forms::ListView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->docra = (gcnew System::Windows::Forms::ComboBox());
			this->spcra = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->myappoint = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->editbutton = (gcnew System::Windows::Forms::Button());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->exitmyappoint = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->editdoc = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->passwordelabledoc = (gcnew System::Windows::Forms::Label());
			this->passwordPanal = (gcnew System::Windows::Forms::Panel());
			this->passwordtextboxdoc = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->addpa->SuspendLayout();
			this->apped->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->myappoint->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// addpa
			// 
			this->addpa->BackColor = System::Drawing::Color::LightSteelBlue;
			this->addpa->Controls->Add(this->label14);
			this->addpa->Controls->Add(this->label15);
			this->addpa->Controls->Add(this->docavti);
			this->addpa->Controls->Add(this->button7);
			this->addpa->Controls->Add(this->compdoc);
			this->addpa->Controls->Add(this->compspc);
			this->addpa->Controls->Add(this->label17);
			this->addpa->Controls->Add(this->label18);
			this->addpa->Location = System::Drawing::Point(451, 11);
			this->addpa->Margin = System::Windows::Forms::Padding(2);
			this->addpa->Name = L"addpa";
			this->addpa->Size = System::Drawing::Size(806, 572);
			this->addpa->TabIndex = 26;
			this->addpa->Visible = false;
			this->addpa->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &homepatient::addpa_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(192, 155);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(325, 17);
			this->label14->TabIndex = 23;
			this->label14->Text = L"(click on the appointment you want to book)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(158, 124);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(408, 28);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Doctor\'s available appointments:";
			// 
			// docavti
			// 
			this->docavti->GridLines = true;
			this->docavti->HideSelection = false;
			this->docavti->Location = System::Drawing::Point(119, 179);
			this->docavti->Margin = System::Windows::Forms::Padding(2);
			this->docavti->Name = L"docavti";
			this->docavti->Size = System::Drawing::Size(519, 329);
			this->docavti->TabIndex = 21;
			this->docavti->UseCompatibleStateImageBehavior = false;
			this->docavti->View = System::Windows::Forms::View::Details;
			this->docavti->Click += gcnew System::EventHandler(this, &homepatient::docavti_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(673, 46);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(127, 38);
			this->button7->TabIndex = 20;
			this->button7->Text = L"exit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &homepatient::button7_Click);
			// 
			// compdoc
			// 
			this->compdoc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->compdoc->Cursor = System::Windows::Forms::Cursors::Default;
			this->compdoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->compdoc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->compdoc->ForeColor = System::Drawing::Color::Black;
			this->compdoc->FormattingEnabled = true;
			this->compdoc->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Neurologist", L"Cardiologist", L"Dermatologist",
					L"General Surgeon"
			});
			this->compdoc->Location = System::Drawing::Point(98, 73);
			this->compdoc->Margin = System::Windows::Forms::Padding(2);
			this->compdoc->Name = L"compdoc";
			this->compdoc->Size = System::Drawing::Size(148, 22);
			this->compdoc->TabIndex = 18;
			this->compdoc->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::compdoc_SelectedIndexChanged);
			// 
			// compspc
			// 
			this->compspc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->compspc->Cursor = System::Windows::Forms::Cursors::Default;
			this->compspc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->compspc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->compspc->ForeColor = System::Drawing::Color::Black;
			this->compspc->FormattingEnabled = true;
			this->compspc->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Neurologist", L"Cardiologist", L"Dermatologist",
					L"General Surgeon"
			});
			this->compspc->Location = System::Drawing::Point(176, 38);
			this->compspc->Margin = System::Windows::Forms::Padding(2);
			this->compspc->Name = L"compspc";
			this->compspc->Size = System::Drawing::Size(148, 22);
			this->compspc->TabIndex = 17;
			this->compspc->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::compspc_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(2, 68);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 25);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Doctor:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(2, 33);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(179, 25);
			this->label18->TabIndex = 2;
			this->label18->Text = L"specialication:";
			// 
			// apped
			// 
			this->apped->BackColor = System::Drawing::Color::LightSteelBlue;
			this->apped->Controls->Add(this->label25);
			this->apped->Controls->Add(this->label23);
			this->apped->Controls->Add(this->label24);
			this->apped->Controls->Add(this->label22);
			this->apped->Controls->Add(this->label21);
			this->apped->Controls->Add(this->label20);
			this->apped->Controls->Add(this->label19);
			this->apped->Controls->Add(this->label16);
			this->apped->Controls->Add(this->uspc);
			this->apped->Controls->Add(this->label11);
			this->apped->Controls->Add(this->label9);
			this->apped->Controls->Add(this->label8);
			this->apped->Controls->Add(this->ydapp);
			this->apped->Controls->Add(this->exyapp);
			this->apped->Controls->Add(this->editap);
			this->apped->Controls->Add(this->udoc);
			this->apped->Controls->Add(this->label10);
			this->apped->Controls->Add(this->label7);
			this->apped->Controls->Add(this->otherapp);
			this->apped->Controls->Add(this->la10);
			this->apped->Location = System::Drawing::Point(422, 13);
			this->apped->Margin = System::Windows::Forms::Padding(2);
			this->apped->Name = L"apped";
			this->apped->Size = System::Drawing::Size(837, 566);
			this->apped->TabIndex = 21;
			this->apped->Visible = false;
			this->apped->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &homepatient::apped_Paint);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(724, 20);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(44, 19);
			this->label25->TabIndex = 35;
			this->label25->Text = L"New";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::AliceBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label23->Location = System::Drawing::Point(718, 46);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 14);
			this->label23->TabIndex = 34;
			this->label23->Text = L"label23";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AliceBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label24->Location = System::Drawing::Point(718, 76);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 14);
			this->label24->TabIndex = 33;
			this->label24->Text = L"label24";
			this->label24->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(574, 20);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 19);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Old";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::AliceBlue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(574, 73);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 14);
			this->label21->TabIndex = 30;
			this->label21->Text = L"label21";
			this->label21->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::AliceBlue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(574, 45);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 14);
			this->label20->TabIndex = 29;
			this->label20->Text = L"label20";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(496, 64);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 25);
			this->label19->TabIndex = 28;
			this->label19->Text = L"Time:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(496, 34);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 25);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Day:";
			// 
			// uspc
			// 
			this->uspc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->uspc->Cursor = System::Windows::Forms::Cursors::Default;
			this->uspc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uspc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->uspc->ForeColor = System::Drawing::Color::Transparent;
			this->uspc->FormattingEnabled = true;
			this->uspc->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Neurologist", L"Cardiologist", L"Dermatologist",
					L"General Surgeon"
			});
			this->uspc->Location = System::Drawing::Point(176, 38);
			this->uspc->Margin = System::Windows::Forms::Padding(2);
			this->uspc->Name = L"uspc";
			this->uspc->Size = System::Drawing::Size(148, 22);
			this->uspc->TabIndex = 26;
			this->uspc->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::uspc_SelectedIndexChanged_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(477, 153);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(352, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"(choose the new appointment, then press \"edit\")";
			this->label11->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 151);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(320, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"(click on the appointment you want to edit)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 116);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(364, 28);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Your Appointments with Dr. ";
			// 
			// ydapp
			// 
			this->ydapp->GridLines = true;
			this->ydapp->HideSelection = false;
			this->ydapp->Location = System::Drawing::Point(10, 177);
			this->ydapp->Margin = System::Windows::Forms::Padding(2);
			this->ydapp->Name = L"ydapp";
			this->ydapp->Size = System::Drawing::Size(309, 291);
			this->ydapp->TabIndex = 21;
			this->ydapp->UseCompatibleStateImageBehavior = false;
			this->ydapp->View = System::Windows::Forms::View::Details;
			this->ydapp->Click += gcnew System::EventHandler(this, &homepatient::ydapp_Click);
			// 
			// exyapp
			// 
			this->exyapp->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exyapp->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->exyapp->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->exyapp->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->exyapp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exyapp->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->exyapp->ForeColor = System::Drawing::Color::White;
			this->exyapp->Location = System::Drawing::Point(352, 271);
			this->exyapp->Margin = System::Windows::Forms::Padding(2);
			this->exyapp->Name = L"exyapp";
			this->exyapp->Size = System::Drawing::Size(127, 38);
			this->exyapp->TabIndex = 20;
			this->exyapp->Text = L"exit";
			this->exyapp->UseVisualStyleBackColor = false;
			this->exyapp->Click += gcnew System::EventHandler(this, &homepatient::exyapp_Click);
			// 
			// editap
			// 
			this->editap->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->editap->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->editap->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->editap->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->editap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editap->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->editap->ForeColor = System::Drawing::Color::White;
			this->editap->Location = System::Drawing::Point(352, 214);
			this->editap->Margin = System::Windows::Forms::Padding(2);
			this->editap->Name = L"editap";
			this->editap->Size = System::Drawing::Size(127, 37);
			this->editap->TabIndex = 19;
			this->editap->Text = L"edit";
			this->editap->UseVisualStyleBackColor = false;
			this->editap->Click += gcnew System::EventHandler(this, &homepatient::editap_Click);
			// 
			// udoc
			// 
			this->udoc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->udoc->Cursor = System::Windows::Forms::Cursors::Default;
			this->udoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->udoc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->udoc->ForeColor = System::Drawing::Color::Transparent;
			this->udoc->FormattingEnabled = true;
			this->udoc->Location = System::Drawing::Point(98, 73);
			this->udoc->Margin = System::Windows::Forms::Padding(2);
			this->udoc->Name = L"udoc";
			this->udoc->Size = System::Drawing::Size(148, 22);
			this->udoc->TabIndex = 18;
			this->udoc->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::udoc_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(457, 122);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(378, 28);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Other Available Appointments";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(2, 68);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Doctor:";
			// 
			// otherapp
			// 
			this->otherapp->GridLines = true;
			this->otherapp->HideSelection = false;
			this->otherapp->Location = System::Drawing::Point(510, 177);
			this->otherapp->Margin = System::Windows::Forms::Padding(2);
			this->otherapp->Name = L"otherapp";
			this->otherapp->Size = System::Drawing::Size(296, 291);
			this->otherapp->TabIndex = 0;
			this->otherapp->UseCompatibleStateImageBehavior = false;
			this->otherapp->View = System::Windows::Forms::View::Details;
			this->otherapp->Click += gcnew System::EventHandler(this, &homepatient::otherapp_Click);
			// 
			// la10
			// 
			this->la10->AutoSize = true;
			this->la10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->la10->Location = System::Drawing::Point(2, 33);
			this->la10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->la10->Name = L"la10";
			this->la10->Size = System::Drawing::Size(179, 25);
			this->la10->TabIndex = 2;
			this->la10->Text = L"specialication:";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel5->Controls->Add(this->groupBox3);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Controls->Add(this->label27);
			this->panel5->Controls->Add(this->ratelist);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->docra);
			this->panel5->Controls->Add(this->spcra);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Location = System::Drawing::Point(406, 15);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(822, 593);
			this->panel5->TabIndex = 27;
			this->panel5->Visible = false;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &homepatient::panel5_Paint);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox3->Controls->Add(this->ratedone);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(649, 179);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(151, 202);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"rate:";
			// 
			// ratedone
			// 
			this->ratedone->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ratedone->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->ratedone->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ratedone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ratedone->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ratedone->ForeColor = System::Drawing::Color::White;
			this->ratedone->Location = System::Drawing::Point(30, 151);
			this->ratedone->Margin = System::Windows::Forms::Padding(2);
			this->ratedone->Name = L"ratedone";
			this->ratedone->Size = System::Drawing::Size(76, 35);
			this->ratedone->TabIndex = 21;
			this->ratedone->Text = L"Done";
			this->ratedone->UseVisualStyleBackColor = true;
			this->ratedone->Click += gcnew System::EventHandler(this, &homepatient::ratedone_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(15, 124);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(36, 22);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(15, 102);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(36, 22);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 79);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(36, 22);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 56);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(36, 22);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 33);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 22);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(249, 154);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(257, 17);
			this->label26->TabIndex = 23;
			this->label26->Text = L"(click on any if you want to delete)";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(264, 123);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(201, 28);
			this->label27->TabIndex = 22;
			this->label27->Text = L"your rating list:";
			// 
			// ratelist
			// 
			this->ratelist->GridLines = true;
			this->ratelist->HideSelection = false;
			this->ratelist->Location = System::Drawing::Point(155, 179);
			this->ratelist->Margin = System::Windows::Forms::Padding(2);
			this->ratelist->Name = L"ratelist";
			this->ratelist->Size = System::Drawing::Size(459, 329);
			this->ratelist->TabIndex = 21;
			this->ratelist->UseCompatibleStateImageBehavior = false;
			this->ratelist->View = System::Windows::Forms::View::Details;
			this->ratelist->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::ratelist_SelectedIndexChanged);
			this->ratelist->Click += gcnew System::EventHandler(this, &homepatient::ratelist_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(654, 45);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(127, 38);
			this->button8->TabIndex = 20;
			this->button8->Text = L"exit";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &homepatient::button8_Click);
			// 
			// docra
			// 
			this->docra->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->docra->Cursor = System::Windows::Forms::Cursors::Default;
			this->docra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->docra->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->docra->ForeColor = System::Drawing::Color::Transparent;
			this->docra->FormattingEnabled = true;
			this->docra->Location = System::Drawing::Point(98, 73);
			this->docra->Margin = System::Windows::Forms::Padding(2);
			this->docra->Name = L"docra";
			this->docra->Size = System::Drawing::Size(148, 22);
			this->docra->TabIndex = 18;
			// 
			// spcra
			// 
			this->spcra->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->spcra->Cursor = System::Windows::Forms::Cursors::Default;
			this->spcra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spcra->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->spcra->ForeColor = System::Drawing::Color::Transparent;
			this->spcra->FormattingEnabled = true;
			this->spcra->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Neurologist", L"Cardiologist", L"Dermatologist",
					L"General Surgeon"
			});
			this->spcra->Location = System::Drawing::Point(176, 38);
			this->spcra->Margin = System::Windows::Forms::Padding(2);
			this->spcra->Name = L"spcra";
			this->spcra->Size = System::Drawing::Size(148, 22);
			this->spcra->TabIndex = 17;
			this->spcra->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::spcra_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(2, 68);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(97, 25);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Doctor:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(2, 33);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(179, 25);
			this->label29->TabIndex = 2;
			this->label29->Text = L"specialication:";
			// 
			// myappoint
			// 
			this->myappoint->BackColor = System::Drawing::Color::LightSteelBlue;
			this->myappoint->Controls->Add(this->label13);
			this->myappoint->Controls->Add(this->groupBox1);
			this->myappoint->Controls->Add(this->exitmyappoint);
			this->myappoint->Controls->Add(this->listView1);
			this->myappoint->Location = System::Drawing::Point(451, 24);
			this->myappoint->Margin = System::Windows::Forms::Padding(2);
			this->myappoint->Name = L"myappoint";
			this->myappoint->Size = System::Drawing::Size(724, 485);
			this->myappoint->TabIndex = 16;
			this->myappoint->Visible = false;
			this->myappoint->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &homepatient::myappoint_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(320, 82);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(336, 17);
			this->label13->TabIndex = 24;
			this->label13->Text = L"(click on the appointment you want to delete)";
			this->label13->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->addbutton);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->editbutton);
			this->groupBox1->Controls->Add(this->deletebutton);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(4, 16);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(262, 287);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"what do you want\?";
			// 
			// addbutton
			// 
			this->addbutton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->addbutton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->addbutton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->addbutton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->addbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::Black;
			this->addbutton->Location = System::Drawing::Point(36, 41);
			this->addbutton->Margin = System::Windows::Forms::Padding(2);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(185, 42);
			this->addbutton->TabIndex = 9;
			this->addbutton->Text = L"add";
			this->addbutton->UseVisualStyleBackColor = false;
			this->addbutton->Click += gcnew System::EventHandler(this, &homepatient::addbutton_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(95, 172);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 38);
			this->button6->TabIndex = 16;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &homepatient::button6_Click);
			// 
			// editbutton
			// 
			this->editbutton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->editbutton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editbutton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->editbutton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->editbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editbutton->ForeColor = System::Drawing::Color::Black;
			this->editbutton->Location = System::Drawing::Point(54, 88);
			this->editbutton->Margin = System::Windows::Forms::Padding(2);
			this->editbutton->Name = L"editbutton";
			this->editbutton->Size = System::Drawing::Size(147, 37);
			this->editbutton->TabIndex = 10;
			this->editbutton->Text = L"edit";
			this->editbutton->UseVisualStyleBackColor = false;
			this->editbutton->Click += gcnew System::EventHandler(this, &homepatient::editbutton_Click);
			// 
			// deletebutton
			// 
			this->deletebutton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->deletebutton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->deletebutton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->deletebutton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->deletebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->ForeColor = System::Drawing::Color::Black;
			this->deletebutton->Location = System::Drawing::Point(80, 130);
			this->deletebutton->Margin = System::Windows::Forms::Padding(2);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(106, 37);
			this->deletebutton->TabIndex = 11;
			this->deletebutton->Text = L"delete";
			this->deletebutton->UseVisualStyleBackColor = false;
			this->deletebutton->Click += gcnew System::EventHandler(this, &homepatient::deletebutton_Click);
			// 
			// exitmyappoint
			// 
			this->exitmyappoint->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exitmyappoint->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->exitmyappoint->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->exitmyappoint->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->exitmyappoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitmyappoint->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->exitmyappoint->ForeColor = System::Drawing::Color::White;
			this->exitmyappoint->Location = System::Drawing::Point(578, 438);
			this->exitmyappoint->Margin = System::Windows::Forms::Padding(2);
			this->exitmyappoint->Name = L"exitmyappoint";
			this->exitmyappoint->Size = System::Drawing::Size(118, 41);
			this->exitmyappoint->TabIndex = 15;
			this->exitmyappoint->Text = L"Exit";
			this->exitmyappoint->UseVisualStyleBackColor = true;
			this->exitmyappoint->Click += gcnew System::EventHandler(this, &homepatient::exitmyappoint_Click);
			// 
			// listView1
			// 
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(288, 104);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(408, 322);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Click += gcnew System::EventHandler(this, &homepatient::listView1_Click);
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::AliceBlue;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(16, -8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"where do you want to go\?";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(55, 49);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(317, 67);
			this->button2->TabIndex = 18;
			this->button2->Text = L"My Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &homepatient::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(91, 120);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 67);
			this->button1->TabIndex = 19;
			this->button1->Text = L"My Appointments";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &homepatient::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(143, 191);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 67);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Rate Doc";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &homepatient::button3_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::Navy;
			this->button9->Location = System::Drawing::Point(165, 262);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 68);
			this->button9->TabIndex = 28;
			this->button9->Text = L"Exit";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &homepatient::button9_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::Color::Navy;
			this->groupBox4->Location = System::Drawing::Point(3, 54);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(466, 358);
			this->groupBox4->TabIndex = 29;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"where do you want to go\?";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(2, 0);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 132);
			this->label2->TabIndex = 0;
			// 
			// user
			// 
			this->user->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->user->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(124, 2);
			this->user->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(181, 128);
			this->user->TabIndex = 1;
			this->user->Text = L"asmauser";
			this->user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->user->Click += gcnew System::EventHandler(this, &homepatient::user_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(0, 127);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 413);
			this->panel3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 154);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 50);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(2, 2);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 50);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(2, 53);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 50);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ID:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(2, 100);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 50);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Age:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(224, 141);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(127, 38);
			this->name->TabIndex = 6;
			this->name->Text = L"Asmaa";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold));
			this->ID->Location = System::Drawing::Point(226, 188);
			this->ID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(59, 38);
			this->ID->TabIndex = 7;
			this->ID->Text = L"11";
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold));
			this->age->Location = System::Drawing::Point(226, 239);
			this->age->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(59, 38);
			this->age->TabIndex = 8;
			this->age->Text = L"18";
			// 
			// editdoc
			// 
			this->editdoc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->editdoc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->editdoc->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->editdoc->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->editdoc->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->editdoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editdoc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold));
			this->editdoc->ForeColor = System::Drawing::Color::White;
			this->editdoc->Location = System::Drawing::Point(599, 356);
			this->editdoc->Margin = System::Windows::Forms::Padding(2);
			this->editdoc->Name = L"editdoc";
			this->editdoc->Size = System::Drawing::Size(149, 54);
			this->editdoc->TabIndex = 10;
			this->editdoc->Text = L"Edit My Profile";
			this->editdoc->UseVisualStyleBackColor = false;
			this->editdoc->Click += gcnew System::EventHandler(this, &homepatient::editdoc_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->passwordelabledoc);
			this->panel1->Controls->Add(this->passwordPanal);
			this->panel1->Controls->Add(this->passwordtextboxdoc);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(483, 20);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 278);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(128, 214);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 30);
			this->button10->TabIndex = 21;
			this->button10->Text = L"exit";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &homepatient::button10_Click);
			// 
			// passwordelabledoc
			// 
			this->passwordelabledoc->AutoSize = true;
			this->passwordelabledoc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->passwordelabledoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passwordelabledoc->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordelabledoc->Location = System::Drawing::Point(-1, 92);
			this->passwordelabledoc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->passwordelabledoc->Name = L"passwordelabledoc";
			this->passwordelabledoc->Size = System::Drawing::Size(78, 16);
			this->passwordelabledoc->TabIndex = 17;
			this->passwordelabledoc->Text = L"are you sure\?";
			this->passwordelabledoc->Visible = false;
			// 
			// passwordPanal
			// 
			this->passwordPanal->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->passwordPanal->Location = System::Drawing::Point(0, 130);
			this->passwordPanal->Margin = System::Windows::Forms::Padding(2);
			this->passwordPanal->Name = L"passwordPanal";
			this->passwordPanal->Size = System::Drawing::Size(197, 2);
			this->passwordPanal->TabIndex = 15;
			this->passwordPanal->Visible = false;
			// 
			// passwordtextboxdoc
			// 
			this->passwordtextboxdoc->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->passwordtextboxdoc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtextboxdoc->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordtextboxdoc->Location = System::Drawing::Point(0, 108);
			this->passwordtextboxdoc->Margin = System::Windows::Forms::Padding(2);
			this->passwordtextboxdoc->Name = L"passwordtextboxdoc";
			this->passwordtextboxdoc->PasswordChar = '*';
			this->passwordtextboxdoc->Size = System::Drawing::Size(197, 21);
			this->passwordtextboxdoc->TabIndex = 16;
			this->passwordtextboxdoc->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(2, 47);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 15;
			this->label12->Text = L"edit here:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Location = System::Drawing::Point(2, 84);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(197, 2);
			this->panel4->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(128, 168);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 34);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &homepatient::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Username", L"Name", L"Age", L"Password" });
			this->comboBox1->Location = System::Drawing::Point(76, 2);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 25);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &homepatient::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(2, 63);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 21);
			this->textBox1->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(617, 414);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 41);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &homepatient::button5_Click);
			// 
			// gender
			// 
			this->gender->AutoSize = true;
			this->gender->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold));
			this->gender->Location = System::Drawing::Point(226, 289);
			this->gender->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(39, 38);
			this->gender->TabIndex = 15;
			this->gender->Text = L"F";
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->gender);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->editdoc);
			this->panel2->Controls->Add(this->age);
			this->panel2->Controls->Add(this->ID);
			this->panel2->Controls->Add(this->name);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->user);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(457, 26);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(753, 540);
			this->panel2->TabIndex = 9;
			this->panel2->Visible = false;
			// 
			// homepatient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1266, 635);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->apped);
			this->Controls->Add(this->addpa);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->myappoint);
			this->Controls->Add(this->groupBox4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"homepatient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SH.system";
			this->Load += gcnew System::EventHandler(this, &homepatient::homepatient_Load);
			this->addpa->ResumeLayout(false);
			this->addpa->PerformLayout();
			this->apped->ResumeLayout(false);
			this->apped->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->myappoint->ResumeLayout(false);
			this->myappoint->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void editdoc_Click(System::Object^ sender, System::EventArgs^ e) {






		MessageBox::Show("choose from combobox then write in textbox", "instructions", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panel1->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedField = comboBox1->SelectedItem ? comboBox1->SelectedItem->ToString() : nullptr;
		String^ newValue = textBox1->Text->Trim();

		if (String::IsNullOrEmpty(selectedField)) {
			MessageBox::Show("Please select a field to edit.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (selectedField == "Name") {
			name->Text = newValue;
			currentPatient->name = newValue;
		}
		else if (selectedField == "Username") {
			array<String^>^ lines = File::ReadAllLines("patients.txt");
			for each(String ^ line in lines) {
				if (line->Contains("\"" + newValue + "\"")) {
					MessageBox::Show("This username is already taken!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			user->Text = newValue;
			currentPatient->username = newValue;
		}
		else if (selectedField == "Age") {
			int newAge;
			if (!Int32::TryParse(newValue, newAge)) {
				MessageBox::Show("Please enter a valid age.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			age->Text = newAge.ToString();
			currentPatient->age = newAge;
		}
		else if (selectedField == "Gender") {
			gender->Text = newValue;
			currentPatient->gender = newValue[0];
		}
		else if (selectedField == "Password") {
			String^ newPassword = textBox1->Text->Trim();
			String^ confirmPassword = passwordtextboxdoc->Text->Trim();

			if (newPassword != confirmPassword) {
				MessageBox::Show("Password does not match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Text = "";
				passwordtextboxdoc->Text = "";
				return;
			}

			currentPatient->password = newPassword;

			passwordtextboxdoc->Visible = false;
			passwordelabledoc->Visible = false;
			passwordPanal->Visible = false;

			MessageBox::Show("Password changed successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		UpdatePatientInFile(currentPatient);

		comboBox1->SelectedIndex = -1;
		textBox1->Text = "";
		passwordtextboxdoc->Text = "";
		passwordtextboxdoc->Visible = false;
		passwordelabledoc->Visible = false;
		passwordPanal->Visible = false;

		MessageBox::Show("Updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panel1->Visible = false;

		comboBox1->SelectedIndex = -1;
		textBox1->Text = "";
		panel1->Visible = false;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == "Password") {
			passwordtextboxdoc->Visible = true;
			passwordPanal->Visible = true;
			passwordelabledoc->Visible = true;
			textBox1->PasswordChar = '*';

		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = false;
		label1->Text = "where do you want to go?";

	}


	private: System::Void LoadPatientAppointments() {
		listView1->Items->Clear();
		listView1->Columns->Clear();


		if (currentPatient == nullptr || currentPatient->id == nullptr) {
			MessageBox::Show("Patient is not logged in.");
			return;
		}

		String^ patientID = currentPatient->id;

		if (System::IO::File::Exists("appointments.txt")) {
			array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

			for each(String ^ line in lines) {
				array<String^>^ parts = line->Split(',');

				// Format: DoctorID,DoctorName,Specialization,Date,Time,IsBooked,PatientID
				if (parts->Length >= 7) {
					String^ isBooked = parts[5]->Trim()->ToLower();
					String^ bookedBy = parts[6]->Trim();

					if (isBooked == "true" && bookedBy == patientID) {
						String^ spec = parts[2]->Trim();
						String^ doc = parts[1]->Trim();
						String^ day = parts[3]->Trim();
						String^ time = parts[4]->Trim();

						ListViewItem^ item = gcnew ListViewItem(doc);    // Specialization
						item->SubItems->Add(spec);                         // Doctor
						item->SubItems->Add(day);                         // Day
						item->SubItems->Add(time);                        // Time

						listView1->Items->Add(item);
					}
				}
			}
		}
		else {
			MessageBox::Show("appointments.txt not found.");
		}
	}

	private: System::Void myappoint_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		LoadPatientAppointments();
		listView1->Columns->Add("Doctor", 120);
		listView1->Columns->Add("Specialication", 120);
		listView1->Columns->Add("day", 120);
		listView1->Columns->Add("time", 120);



	}
	private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Text = "(click on the appointment you want to delete)";
		label13->Visible = true;

	}
	private: System::Void editbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = false;
		apped->Visible = true;

	}

	private: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = false;
		addpa->Visible = true;

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = true;
		label1->Text = "My account";
	}
	private: System::Void exitmyappoint_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = false;
		label1->Text = "where do you want to go?";

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = true;
		label1->Text = "My appointments";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to clear all booked appointments?",
			"Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Step 1: Clear the ListView
			listView1->Items->Clear();

			// Step 2: Read and update the file
			array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

			for (int i = 0; i < lines->Length; i++) {
				array<String^>^ parts = lines[i]->Split(',');

				if (parts->Length >= 7) {
					String^ isBooked = parts[5]->Trim()->ToLower();

					if (isBooked == "true") {
						parts[5] = "False";
						parts[6] = ""; // remove PatientID
						lines[i] = String::Join(",", parts);
					}
				}
			}

			System::IO::File::WriteAllLines("appointments.txt", lines);

			MessageBox::Show("All booked appointments have been cleared.", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void user_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void homepatient_Load(System::Object^ sender, System::EventArgs^ e) {
		user->Text = currentPatient->username;
		name->Text = currentPatient->name;
		ID->Text = currentPatient->id->ToString();
		age->Text = currentPatient->age.ToString();
		gender->Text = currentPatient->gender.ToString();
	}
		   void UpdatePatientInFile(Patient^ updatedPatient) {
			   array<String^>^ lines = File::ReadAllLines("patients.txt");
			   for (int i = 0; i < lines->Length; i++) {
				   String^ line = lines[i]->Trim();
				   if (line->StartsWith("{")) {
					   array<String^>^ parts = line->Split(',');
					   if (parts->Length >= 6) {
						   String^ id = parts[0]->Trim()->Replace("{", "")->Replace("\"", "");
						   if (id == updatedPatient->id) {
							   lines[i] = "{" + updatedPatient->id + ",\"" + updatedPatient->name + "\",\"" + updatedPatient->username +
								   "\",\"" + updatedPatient->password + "\"," + updatedPatient->age + ", " + updatedPatient->gender + ",";
							   break;
						   }
					   }
				   }
			   }

			   File::WriteAllLines("patients.txt", lines);
		   }





	private: System::Void exyapp_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = true;
		otherapp->Items->Clear();
		ydapp->Items->Clear();

		if (uspc->Items->Count == 0 || uspc->Items[0]->ToString() != "") {
			uspc->Items->Insert(0, "");
		}
		uspc->SelectedIndex = 0;

		if (udoc->Items->Count == 0 || udoc->Items[0]->ToString() != "") {
			udoc->Items->Insert(0, "");
		}
		udoc->SelectedIndex = 0;
		label20->Visible = false;
		label21->Visible = false;
		label23->Visible = false;
		label24->Visible = false;

		apped->Visible = false;
	}
	private: System::Void compspc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		compdoc->Items->Clear();

		if (compspc->SelectedItem == nullptr) return;

		String^ selectedSpecialization = compspc->SelectedItem->ToString()->Trim()->ToLower();

		array<String^>^ lines;
		try
		{
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error reading appointments file: " + ex->Message);
			return;
		}

		System::Collections::Generic::List<String^>^ availableDoctors = gcnew System::Collections::Generic::List<String^>();

		for each(String ^ line in lines)
		{
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 6)
			{
				String^ doctorName = parts[1]->Trim();
				String^ specialization = parts[2]->Trim()->ToLower();
				String^ isBooked = parts[5]->Trim()->ToLower();

				if (specialization == selectedSpecialization && isBooked == "false")
				{
					if (!availableDoctors->Contains(doctorName))
					{
						availableDoctors->Add(doctorName);
						compdoc->Items->Add(doctorName);
					}
				}
			}
		}

		compdoc->Items->Insert(0, "");
		compdoc->SelectedIndex = 0;

		if (compdoc->Items->Count == 0)
		{
			MessageBox::Show("No doctors available for this specialization at the moment.", "No Available Doctors");
		}

	}
	private: System::Void adap_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void compdoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		docavti->Items->Clear();

		// التأكد من أن الدكتور محدد
		if (compdoc->SelectedItem == nullptr || compdoc->SelectedItem->ToString() == "") return;

		String^ selectedDoctor = compdoc->SelectedItem->ToString()->Trim();

		// قراءة الملف
		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading appointments file: " + ex->Message);
			return;
		}

		// استعراض المواعيد المتاحة للدكتور المحدد
		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 6) {
				String^ doctorName = parts[1]->Trim();
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();

				if (doctorName == selectedDoctor && isBooked == "false") {
					// إنشاء عنصر جديد للعرض
					ListViewItem^ item = gcnew ListViewItem(date);
					item->SubItems->Add(time);
					docavti->Items->Add(item);
				}
			}
		}

		// إذا لم يوجد مواعيد متاحة
		if (docavti->Items->Count == 0) {
			MessageBox::Show("No available appointments for this doctor.", "No Appointments", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void docavti_Click(System::Object^ sender, System::EventArgs^ e) {
		if (docavti->SelectedItems->Count == 0 || compdoc->SelectedItem == nullptr || currentPatient == nullptr) return;

		// استخراج البيانات
		String^ selectedDate = docavti->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedTime = docavti->SelectedItems[0]->SubItems[1]->Text->Trim();
		String^ selectedDoctor = compdoc->SelectedItem->ToString()->Trim();
		String^ selectedspcs = compspc->SelectedItem->ToString()->Trim();

		// قراءة كل المواعيد
		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading appointments file: " + ex->Message);
			return;
		}

		// ✅ تحقق 1: هل أكثر من دكتور عنده نفس التاريخ والوقت؟
		int sameTimeCount = 0;
		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');
			if (parts->Length >= 6) {
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();

				if (date == selectedDate && time == selectedTime && isBooked == "false") {
					sameTimeCount++;
				}
			}
		}
		if (sameTimeCount > 1) {
			MessageBox::Show("This time slot is available with more than one doctor. You cannot book it.", "Conflict", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// ✅ تحقق 2: هل المريض لديه موعد في هذا الوقت؟
		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');
			if (parts->Length >= 7) {
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();
				String^ patientId = parts[6]->Trim();

				if (date == selectedDate && time == selectedTime && isBooked == "true" && patientId == currentPatient->id) {
					MessageBox::Show("You already have an appointment at this time.", "Conflict", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
			}
		}

		// رسالة التأكيد
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to book this appointment?",
			"Confirm Booking",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			// تعديل الملف
			for (int i = 0; i < lines->Length; i++) {
				array<String^>^ parts = lines[i]->Split(',');

				if (parts->Length >= 7) {
					String^ doctorName = parts[1]->Trim();
					String^ spcs = parts[2]->Trim();
					String^ date = parts[3]->Trim();
					String^ time = parts[4]->Trim();
					String^ isBooked = parts[5]->Trim()->ToLower();

					if (spcs == selectedspcs && doctorName == selectedDoctor && date == selectedDate && time == selectedTime && isBooked == "false") {
						parts[5] = "True";
						parts[6] = currentPatient->id;
						lines[i] = String::Join(",", parts);
						break;
					}
				}
			}

			System::IO::File::WriteAllLines("appointments.txt", lines);


			docavti->Items->Remove(docavti->SelectedItems[0]);

			MessageBox::Show("Appointment booked successfully.", "Booked", MessageBoxButtons::OK, MessageBoxIcon::Information);
			addpa->Visible = false;
		}

		compdoc->Items->Clear();
		compspc->SelectedIndex = 0;

		if (compdoc->Items->Count == 0 || compdoc->Items[0]->ToString() != "") {
			compdoc->Items->Insert(0, "");
		}
		compdoc->SelectedIndex = 0;
	}
	private: System::Void addpa_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		docavti->Columns->Add("Day", 250);
		docavti->Columns->Add("Time", 250);
		//==============

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		compdoc->Items->Clear();

		compspc->SelectedIndex = 0;

		if (compdoc->Items->Count == 0 || compdoc->Items[0]->ToString() != "") {
			compdoc->Items->Insert(0, "");
		}
		compdoc->SelectedIndex = 0;

		addpa->Visible = false;
		myappoint->Visible = true;

	}



	private: System::Void apped_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		otherapp->Columns->Add("Day", 150);
		otherapp->Columns->Add("Time", 150);
		ydapp->Columns->Add("Day", 150);
		ydapp->Columns->Add("Time", 150);



	}




	private: System::Void uspc_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		udoc->Items->Clear();

		System::Collections::Generic::List<String^>^ doctors = gcnew System::Collections::Generic::List<String^>();
		if (uspc->SelectedItem == nullptr) return;  // تأكدي إن في حاجة متختارة

		String^ selectedSpc = uspc->SelectedItem->ToString()->Trim();  // ده السطر المهم

		array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");
		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 7) {
				String^ spcs = parts[2]->Trim();
				String^ doctor = parts[1]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();
				String^ patientId = parts[6]->Trim();

				if (isBooked == "true" && patientId == currentPatient->id && spcs == selectedSpc) {
					if (!doctors->Contains(doctor)) {
						doctors->Add(doctor);
					}
				}
			}
		}

		for each(String ^ d in doctors) {
			udoc->Items->Add(d);
		}

	}

	private: System::Void udoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ydapp->Items->Clear();
		otherapp->Items->Clear();

		if (udoc->SelectedItem == nullptr || currentPatient == nullptr) return;

		String^ selectedDoctor = udoc->SelectedItem->ToString()->Trim();
		array<String^>^ lines;

		try {
			lines = File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading file: " + ex->Message);
			return;
		}

		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 7) {
				String^ doctorName = parts[1]->Trim();
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();
				String^ patientId = parts[6]->Trim();

				if (isBooked == "true" && patientId == currentPatient->id && doctorName == selectedDoctor) {
					ListViewItem^ item = gcnew ListViewItem(date);
					item->SubItems->Add(time);
					ydapp->Items->Add(item);
				}
				else if (isBooked == "false" && doctorName == selectedDoctor) {
					ListViewItem^ item = gcnew ListViewItem(date);
					item->SubItems->Add(time);
					otherapp->Items->Add(item);
				}
			}
		}

	}
	private: System::Void delap_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ydapp->SelectedItems->Count == 0 || currentPatient == nullptr)
		{
			MessageBox::Show("Please select an appointment to delete.", "No Selection", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to delete this appointment?",
			"Confirm Delete",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (result == System::Windows::Forms::DialogResult::No)
			return;

		String^ selectedDate = ydapp->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedTime = ydapp->SelectedItems[0]->SubItems[1]->Text->Trim();
		String^ selectedDoctor = udoc->SelectedItem != nullptr ? udoc->SelectedItem->ToString()->Trim() : "";

		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading file: " + ex->Message);
			return;
		}

		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ parts = lines[i]->Split(',');

			if (parts->Length >= 7) {
				String^ doctorName = parts[1]->Trim();
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();
				String^ patientId = parts[6]->Trim();

				if (doctorName == selectedDoctor && date == selectedDate && time == selectedTime &&
					isBooked == "true" && patientId == currentPatient->id) {

					parts[5] = "false";
					parts[6] = "";
					lines[i] = String::Join(",", parts);
					break;
				}
			}
		}

		try {
			System::IO::File::WriteAllLines("appointments.txt", lines);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error writing to file: " + ex->Message);
			return;
		}

		ydapp->Items->Remove(ydapp->SelectedItems[0]);

		MessageBox::Show("Appointment deleted successfully.", "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count == 0)
		{
			MessageBox::Show("Please select an appointment to delete.", "No Selection", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to delete this appointment?",
			"Confirm Deletion",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (result == System::Windows::Forms::DialogResult::No)
			return;

		// استخراج بيانات الموعد المحدد
		String^ selectedDoctor = listView1->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedSpec = listView1->SelectedItems[0]->SubItems[1]->Text->Trim();
		String^ selectedDay = listView1->SelectedItems[0]->SubItems[2]->Text->Trim();
		String^ selectedTime = listView1->SelectedItems[0]->SubItems[3]->Text->Trim();

		// قراءة محتوى الملف
		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading file: " + ex->Message);
			return;
		}

		System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

		for each(String ^ line in lines)
		{
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 7)
			{
				String^ docName = parts[1]->Trim();
				String^ spec = parts[2]->Trim();
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();

				if (docName == selectedDoctor && spec == selectedSpec && date == selectedDay && time == selectedTime)
					continue;

				updatedLines->Add(line);
			}
			else
			{
				updatedLines->Add(line);
			}
		}

		try {
			System::IO::File::WriteAllLines("appointments.txt", updatedLines);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error writing to file: " + ex->Message);
			return;
		}

		listView1->Items->Remove(listView1->SelectedItems[0]);

		MessageBox::Show("Appointment deleted successfully.", "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
		label13->Visible = false;
	}



	private: System::Void ydapp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ydapp->SelectedItems->Count == 0)
			return;
		label11->Visible = true;
		String^ selectedDate = ydapp->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedTime = ydapp->SelectedItems[0]->SubItems[1]->Text->Trim();

		label20->Text = selectedDate;
		label21->Text = selectedTime;
		label20->Visible = true;
		label21->Visible = true;
	}
	private: System::Void otherapp_Click(System::Object^ sender, System::EventArgs^ e) {

		if (otherapp->SelectedItems->Count == 0)
			return;

		String^ selectedDate = otherapp->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedTime = otherapp->SelectedItems[0]->SubItems[1]->Text->Trim();

		label23->Text = selectedDate;
		label24->Text = selectedTime;
		label23->Visible = true;
		label24->Visible = true;
	}
	private: System::Void editap_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ydapp->SelectedItems->Count == 0 || otherapp->SelectedItems->Count == 0 || currentPatient == nullptr)
		{
			MessageBox::Show("Please select both the current appointment and the new one from available list.", "Incomplete Selection", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to edit this appointment?",
			"Confirm Edit",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result != System::Windows::Forms::DialogResult::Yes)
			return;

		String^ oldDate = ydapp->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ oldTime = ydapp->SelectedItems[0]->SubItems[1]->Text->Trim();

		String^ newDate = otherapp->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ newTime = otherapp->SelectedItems[0]->SubItems[1]->Text->Trim();

		String^ selectedDoctor = udoc->SelectedItem != nullptr ? udoc->SelectedItem->ToString()->Trim() : "";

		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading appointments file: " + ex->Message);
			return;
		}

		bool oldFound = false;
		bool newFound = false;

		for (int i = 0; i < lines->Length; i++)
		{
			array<String^>^ parts = lines[i]->Split(',');

			if (parts->Length >= 7)
			{
				String^ docName = parts[1]->Trim();
				String^ date = parts[3]->Trim();
				String^ time = parts[4]->Trim();
				String^ isBooked = parts[5]->Trim()->ToLower();
				String^ patientId = parts[6]->Trim();

				if (!oldFound && docName == selectedDoctor && date == oldDate && time == oldTime &&
					isBooked == "true" && patientId == currentPatient->id)
				{
					parts[5] = "false";
					parts[6] = "";
					lines[i] = String::Join(",", parts);
					oldFound = true;
				}

				else if (!newFound && docName == selectedDoctor && date == newDate && time == newTime &&
					isBooked == "false")
				{
					parts[5] = "true";
					parts[6] = currentPatient->id;
					lines[i] = String::Join(",", parts);
					newFound = true;
				}

				if (oldFound && newFound) break;
			}
		}

		try {
			System::IO::File::WriteAllLines("appointments.txt", lines);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error writing to file: " + ex->Message);
			return;
		}

		if (!newFound)
		{
			MessageBox::Show("The new appointment is not available anymore.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ydapp->Items->Remove(ydapp->SelectedItems[0]);

		ListViewItem^ newItem = gcnew ListViewItem(newDate);
		newItem->SubItems->Add(newTime);
		ydapp->Items->Add(newItem);

		otherapp->Items->Remove(otherapp->SelectedItems[0]);

		MessageBox::Show("Appointment updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		label20->Visible = false;
		label21->Visible = false;
		label23->Visible = false;
		label24->Visible = false;

	}









	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ratelist->Columns->Add("Specialication", 150);
		ratelist->Columns->Add("Doctor", 150);
		ratelist->Columns->Add("rate", 150);
		//===========================================
		ratelist->Items->Clear();

		if (currentPatient == nullptr) {
			MessageBox::Show("No patient is currently logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ patientId = currentPatient->id;

		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("ratings.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading ratings file: " + ex->Message);
			return;
		}

		for each(String ^ line in lines) {
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 4) {
				String^ filePatientId = parts[0]->Trim();
				String^ specialization = parts[1]->Trim();
				String^ doctorName = parts[2]->Trim();
				String^ rating = parts[3]->Trim();

				if (filePatientId == patientId) {
					ListViewItem^ item = gcnew ListViewItem(specialization);
					item->SubItems->Add(doctorName);
					item->SubItems->Add(rating);
					ratelist->Items->Add(item);
				}
			}
		}
	}
	private: System::Void spcra_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		docra->Items->Clear();

		if (spcra->SelectedItem == nullptr) return;

		String^ selectedSpecialization = spcra->SelectedItem->ToString()->Trim()->ToLower();

		array<String^>^ lines;
		try
		{
			lines = System::IO::File::ReadAllLines("appointments.txt");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error reading appointments file: " + ex->Message);
			return;
		}

		System::Collections::Generic::List<String^>^ availableDoctors = gcnew System::Collections::Generic::List<String^>();

		for each(String ^ line in lines)
		{
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 6)
			{
				String^ doctorName = parts[1]->Trim();
				String^ specialization = parts[2]->Trim()->ToLower();
				String^ isBooked = parts[5]->Trim()->ToLower();

				if (specialization == selectedSpecialization && isBooked == "false")
				{
					if (!availableDoctors->Contains(doctorName))
					{
						availableDoctors->Add(doctorName);
						docra->Items->Add(doctorName);
					}
				}
			}
		}

		docra->Items->Insert(0, "");
		docra->SelectedIndex = 0;

		if (docra->Items->Count == 0)
		{
			MessageBox::Show("No doctors available for this specialization at the moment.", "No Available Doctors");
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Visible = true;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		docra->Items->Clear();

		spcra->SelectedIndex = 0;

		if (docra->Items->Count == 0 || docra->Items[0]->ToString() != "") {
			docra->Items->Insert(0, "");
		}
		docra->SelectedIndex = 0;

		panel5->Visible = false;
	}
	private: System::Void ratedone_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentPatient == nullptr || docra->SelectedItem == nullptr || spcra->SelectedItem == nullptr) {
			MessageBox::Show("Please make sure all selections are made.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		String^ specialization = spcra->SelectedItem->ToString()->Trim();
		String^ doctorName = docra->SelectedItem->ToString()->Trim();
		String^ rating = "";

		if (radioButton1->Checked) rating = "1";
		else if (radioButton2->Checked) rating = "2";
		else if (radioButton3->Checked) rating = "3";
		else if (radioButton4->Checked) rating = "4";
		else if (radioButton5->Checked) rating = "5";
		else {
			MessageBox::Show("Please select a rating before submitting.", "No Rating Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		System::Windows::Forms::DialogResult result =
			MessageBox::Show("Are you sure you want to submit this rating?", "Confirm Rating", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			String^ line = currentPatient->id + "," + specialization + "," + doctorName + "," + rating;

			try {
				System::IO::File::AppendAllText("ratings.txt", line + "\n");
				MessageBox::Show("Rating submitted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error writing to file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//============================================
		ListViewItem^ item = gcnew ListViewItem(specialization);
		item->SubItems->Add(doctorName);
		item->SubItems->Add(rating);
		ratelist->Items->Add(item);
	}

	private: System::Void ratelist_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void ratelist_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ratelist->SelectedItems->Count == 0) return;

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to delete this rating?",
			"Confirm Delete",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result != System::Windows::Forms::DialogResult::Yes) return;

		ListViewItem^ selectedItem = ratelist->SelectedItems[0];
		String^ specialization = selectedItem->SubItems[0]->Text->Trim();
		String^ doctor = selectedItem->SubItems[1]->Text->Trim();
		String^ rating = selectedItem->SubItems[2]->Text->Trim();

		ratelist->Items->Remove(selectedItem);

		try {
			array<String^>^ lines = System::IO::File::ReadAllLines("ratings.txt");
			System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

			for each(String ^ line in lines) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length >= 4) {
					String^ patientId = parts[0]->Trim();
					String^ spc = parts[1]->Trim();
					String^ doc = parts[2]->Trim();
					String^ rate = parts[3]->Trim();

					if (!(patientId == currentPatient->id && spc == specialization && doc == doctor && rate == rating)) {
						updatedLines->Add(line);
					}
				}
			}

			System::IO::File::WriteAllLines("ratings.txt", updatedLines->ToArray());
			MessageBox::Show("Rating deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error writing file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Are you sure you want to exit?", "Confirmation",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Are you sure you want to exit?", "Confirmation",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			panel1->Visible = false;
		}
	}
};
}