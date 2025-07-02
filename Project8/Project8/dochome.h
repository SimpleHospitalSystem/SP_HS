#pragma once
#include "Doctor.h"
//#include "MyMenu.h"
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
	public ref class dochome : public System::Windows::Forms::Form
	{

	private: Doctor^ currentDoc;

		   //public: MyMenu^ mainForm;

		   void LoadAppointments();
		   void LoadAppointments2();
		   void LoadAppointments3();


	public:

		dochome(Project8::Doctor^ doc)
		{

			InitializeComponent();
			currentDoc = doc;
			LoadAppointments();
			LoadAppointments2();
			LoadAppointments3();
			this->Load += gcnew System::EventHandler(this, &dochome::dochome_Load);

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dochome()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ passwordelabledoc;
	private: System::Windows::Forms::Panel^ passwordPanal;
	private: System::Windows::Forms::TextBox^ passwordtextboxdoc;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ editdoc;
	private: System::Windows::Forms::Label^ specialication;

	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ user;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ myappoint;
	private: System::Windows::Forms::Button^ exitmyappoint;
	private: System::Windows::Forms::ListView^ listView1;



















	private: System::Windows::Forms::Button^ addbutton;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ avgrate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::ComboBox^ tim;

	private: System::Windows::Forms::ComboBox^ daya;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::ListView^ listView3;


private: System::Windows::Forms::GroupBox^ groupBox1;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button12;

private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dochome::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->avgrate = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->editdoc = (gcnew System::Windows::Forms::Button());
			this->specialication = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->myappoint = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->exitmyappoint = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tim = (gcnew System::Windows::Forms::ComboBox());
			this->daya = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->myappoint->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->avgrate);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->editdoc);
			this->panel2->Controls->Add(this->specialication);
			this->panel2->Controls->Add(this->ID);
			this->panel2->Controls->Add(this->name);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->user);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(388, 56);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(726, 508);
			this->panel2->TabIndex = 9;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dochome::panel2_Paint);
			// 
			// avgrate
			// 
			this->avgrate->AutoSize = true;
			this->avgrate->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avgrate->Location = System::Drawing::Point(229, 292);
			this->avgrate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->avgrate->Name = L"avgrate";
			this->avgrate->Size = System::Drawing::Size(50, 50);
			this->avgrate->TabIndex = 15;
			this->avgrate->Text = L"11";
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(583, 383);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 41);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &dochome::button5_Click);
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
			this->panel1->Location = System::Drawing::Point(476, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(239, 278);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Info;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::WindowFrame;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(128, 219);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 30);
			this->button10->TabIndex = 22;
			this->button10->Text = L"exit";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &dochome::button10_Click);
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
			this->passwordtextboxdoc->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
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
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
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
			this->button4->Click += gcnew System::EventHandler(this, &dochome::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Username", L"Password" });
			this->comboBox1->Location = System::Drawing::Point(76, 2);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 25);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &dochome::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(2, 63);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 21);
			this->textBox1->TabIndex = 12;
			// 
			// editdoc
			// 
			this->editdoc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->editdoc->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->editdoc->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->editdoc->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->editdoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editdoc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold));
			this->editdoc->ForeColor = System::Drawing::Color::White;
			this->editdoc->Location = System::Drawing::Point(567, 328);
			this->editdoc->Margin = System::Windows::Forms::Padding(2);
			this->editdoc->Name = L"editdoc";
			this->editdoc->Size = System::Drawing::Size(155, 51);
			this->editdoc->TabIndex = 10;
			this->editdoc->Text = L"Edit My Profile";
			this->editdoc->UseVisualStyleBackColor = true;
			this->editdoc->Click += gcnew System::EventHandler(this, &dochome::editdoc_Click);
			// 
			// specialication
			// 
			this->specialication->AutoSize = true;
			this->specialication->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->specialication->Location = System::Drawing::Point(229, 230);
			this->specialication->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->specialication->Name = L"specialication";
			this->specialication->Size = System::Drawing::Size(215, 50);
			this->specialication->TabIndex = 8;
			this->specialication->Text = L"Dermatology";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(229, 180);
			this->ID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(50, 50);
			this->ID->TabIndex = 7;
			this->ID->Text = L"11";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(229, 132);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(121, 50);
			this->name->TabIndex = 6;
			this->name->Text = L"Asmaa";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(2, 130);
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
			this->label3->Location = System::Drawing::Point(0, 162);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 50);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Avg rating:";
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
			this->label6->Size = System::Drawing::Size(239, 50);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Specialication:";
			// 
			// user
			// 
			this->user->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->user->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(124, 2);
			this->user->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(181, 128);
			this->user->TabIndex = 1;
			this->user->Text = L"asmauser";
			this->user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(-2, 0);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 132);
			this->label2->TabIndex = 0;
			// 
			// myappoint
			// 
			this->myappoint->BackColor = System::Drawing::Color::LightSteelBlue;
			this->myappoint->Controls->Add(this->label13);
			this->myappoint->Controls->Add(this->groupBox1);
			this->myappoint->Controls->Add(this->listView3);
			this->myappoint->Controls->Add(this->exitmyappoint);
			this->myappoint->Location = System::Drawing::Point(392, 35);
			this->myappoint->Margin = System::Windows::Forms::Padding(2);
			this->myappoint->Name = L"myappoint";
			this->myappoint->Size = System::Drawing::Size(736, 468);
			this->myappoint->TabIndex = 16;
			this->myappoint->Visible = false;
			this->myappoint->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dochome::myappoint_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(313, 55);
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
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(4, 74);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(238, 199);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"what do you want\?";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(36, 41);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(185, 42);
			this->button12->TabIndex = 9;
			this->button12->Text = L"add";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &dochome::button12_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(54, 88);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(147, 37);
			this->button14->TabIndex = 10;
			this->button14->Text = L"edit";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &dochome::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::HotTrack;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(85, 129);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 37);
			this->button15->TabIndex = 11;
			this->button15->Text = L"delete";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &dochome::button15_Click);
			// 
			// listView3
			// 
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(246, 74);
			this->listView3->Margin = System::Windows::Forms::Padding(2);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(476, 340);
			this->listView3->TabIndex = 16;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->Click += gcnew System::EventHandler(this, &dochome::listView3_Click);
			// 
			// exitmyappoint
			// 
			this->exitmyappoint->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitmyappoint->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exitmyappoint->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->exitmyappoint->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->exitmyappoint->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->exitmyappoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitmyappoint->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->exitmyappoint->ForeColor = System::Drawing::Color::White;
			this->exitmyappoint->Location = System::Drawing::Point(591, 418);
			this->exitmyappoint->Margin = System::Windows::Forms::Padding(2);
			this->exitmyappoint->Name = L"exitmyappoint";
			this->exitmyappoint->Size = System::Drawing::Size(118, 41);
			this->exitmyappoint->TabIndex = 15;
			this->exitmyappoint->Text = L"Exit";
			this->exitmyappoint->UseVisualStyleBackColor = false;
			this->exitmyappoint->Click += gcnew System::EventHandler(this, &dochome::exitmyappoint_Click);
			// 
			// listView1
			// 
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(170, 83);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(476, 340);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &dochome::listView1_SelectedIndexChanged);
			this->listView1->Click += gcnew System::EventHandler(this, &dochome::listView1_Click);
			// 
			// addbutton
			// 
			this->addbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addbutton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->addbutton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->addbutton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->addbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::White;
			this->addbutton->Location = System::Drawing::Point(12, 135);
			this->addbutton->Margin = System::Windows::Forms::Padding(2);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(127, 42);
			this->addbutton->TabIndex = 9;
			this->addbutton->Text = L"add";
			this->addbutton->UseVisualStyleBackColor = false;
			this->addbutton->Click += gcnew System::EventHandler(this, &dochome::addbutton_Click);
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
			this->button2->Location = System::Drawing::Point(71, 77);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(293, 67);
			this->button2->TabIndex = 18;
			this->button2->Text = L"My Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dochome::button2_Click);
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
			this->button1->Location = System::Drawing::Point(92, 150);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 67);
			this->button1->TabIndex = 19;
			this->button1->Text = L"My Appointments";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &dochome::button1_Click);
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
			this->button9->Location = System::Drawing::Point(183, 221);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 68);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Exit";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &dochome::button9_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::Color::Navy;
			this->groupBox4->Location = System::Drawing::Point(9, 87);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(456, 358);
			this->groupBox4->TabIndex = 30;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"where do you want to go\?";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->tim);
			this->panel5->Controls->Add(this->listView1);
			this->panel5->Controls->Add(this->daya);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Controls->Add(this->addbutton);
			this->panel5->Location = System::Drawing::Point(385, 21);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(674, 459);
			this->panel5->TabIndex = 31;
			this->panel5->Visible = false;
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
			this->button8->Location = System::Drawing::Point(12, 189);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(127, 38);
			this->button8->TabIndex = 23;
			this->button8->Text = L"exit";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &dochome::button8_Click);
			// 
			// tim
			// 
			this->tim->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tim->Cursor = System::Windows::Forms::Cursors::Default;
			this->tim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tim->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->tim->ForeColor = System::Drawing::Color::Transparent;
			this->tim->FormattingEnabled = true;
			this->tim->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"11:00", L"12:30", L"13:00", L"14:30", L"15:00", L"16:30",
					L"17:00"
			});
			this->tim->Location = System::Drawing::Point(86, 52);
			this->tim->Margin = System::Windows::Forms::Padding(2);
			this->tim->Name = L"tim";
			this->tim->Size = System::Drawing::Size(148, 22);
			this->tim->TabIndex = 22;
			// 
			// daya
			// 
			this->daya->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->daya->Cursor = System::Windows::Forms::Cursors::Default;
			this->daya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->daya->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->daya->ForeColor = System::Drawing::Color::Transparent;
			this->daya->FormattingEnabled = true;
			this->daya->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->daya->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday", L"Friday",
					L"Saturday", L"Sunday"
			});
			this->daya->Location = System::Drawing::Point(71, 17);
			this->daya->Margin = System::Windows::Forms::Padding(2);
			this->daya->Name = L"daya";
			this->daya->Size = System::Drawing::Size(148, 22);
			this->daya->TabIndex = 21;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(8, 47);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(78, 25);
			this->label28->TabIndex = 20;
			this->label28->Text = L"Time:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(8, 12);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 25);
			this->label29->TabIndex = 19;
			this->label29->Text = L"Day:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(12, 135);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 42);
			this->button6->TabIndex = 9;
			this->button6->Text = L"edit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &dochome::button6_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->comboBox3->ForeColor = System::Drawing::Color::Transparent;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday", L"Saturday", L"Sunday"
			});
			this->comboBox3->Location = System::Drawing::Point(177, 36);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(148, 22);
			this->comboBox3->TabIndex = 21;
			// 
			// listView2
			// 
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(170, 110);
			this->listView2->Margin = System::Windows::Forms::Padding(2);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(476, 340);
			this->listView2->TabIndex = 8;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->Click += gcnew System::EventHandler(this, &dochome::listView2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->comboBox2->ForeColor = System::Drawing::Color::Transparent;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"11:00", L"12:30", L"13:00", L"14:30", L"15:00",
					L"16:30", L"17:00"
			});
			this->comboBox2->Location = System::Drawing::Point(177, 65);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(148, 22);
			this->comboBox2->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(12, 189);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 38);
			this->button3->TabIndex = 23;
			this->button3->Text = L"exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &dochome::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(219, 88);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(369, 19);
			this->label9->TabIndex = 24;
			this->label9->Text = L"(click on the appointment you want to edit)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(5, 30);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 25);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Day:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(2, 60);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 25);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Time:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::AliceBlue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(86, 38);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 14);
			this->label20->TabIndex = 38;
			this->label20->Text = L"label20";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::AliceBlue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(86, 67);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 14);
			this->label21->TabIndex = 39;
			this->label21->Text = L"label21";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(80, 9);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 19);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Old";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(230, 9);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(44, 19);
			this->label25->TabIndex = 43;
			this->label25->Text = L"New";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->button3);
			this->panel8->Controls->Add(this->comboBox2);
			this->panel8->Controls->Add(this->listView2);
			this->panel8->Controls->Add(this->comboBox3);
			this->panel8->Controls->Add(this->button6);
			this->panel8->Location = System::Drawing::Point(383, 33);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(674, 445);
			this->panel8->TabIndex = 32;
			this->panel8->Visible = false;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dochome::panel8_Paint);
			// 
			// dochome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1135, 604);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->myappoint);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"dochome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SH.system";
			this->Load += gcnew System::EventHandler(this, &dochome::dochome_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->myappoint->ResumeLayout(false);
			this->myappoint->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void editdoc_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("choose from combobox then write in textbox", "instructions", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panel1->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedField = comboBox1->SelectedItem->ToString();
		String^ newValue = textBox1->Text->Trim();

		auto lines = System::IO::File::ReadAllLines("doctors.txt");

		for (int i = 0; i < lines->Length; i++) {
			String^ line = lines[i]->Trim();

			if (line->StartsWith("{") && line->EndsWith("}")) {
				// إزالة القوسين
				line = line->Substring(1, line->Length - 2);

				// تقسيم باستخدام ',' واحترام علامات الاقتباس
				array<String^>^ parts = line->Split(',');

				if (parts->Length == 5) {
					// نظف العناصر من علامات التنصيص والمسافات
					String^ id = parts[0]->Trim();
					String^ name = parts[1]->Trim()->Trim('"');
					String^ username = parts[2]->Trim()->Trim('"');
					String^ password = parts[3]->Trim()->Trim('"');
					String^ specialty = parts[4]->Trim()->Trim('"');

					if (id == currentDoc->id->Trim()) {
						if (selectedField == "Username") {
							// تحقق من التكرار أولًا
							for each (String ^ otherLine in lines) {
								if (otherLine != lines[i] && otherLine->Contains(newValue)) {
									MessageBox::Show("Username already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
									return;
								}
							}

							username = newValue;
							currentDoc->username = newValue;
							user->Text = newValue;
							MessageBox::Show("Username updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else if (selectedField == "Password") {
							String^ confirm = passwordtextboxdoc->Text->Trim();
							if (newValue != confirm) {
								MessageBox::Show("Password does not match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
								textBox1->Text = "";
								passwordtextboxdoc->Text = "";
								return;
							}

							password = newValue;
							currentDoc->password = newValue;
							MessageBox::Show("Password updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
							passwordtextboxdoc->Visible = false;
							passwordPanal->Visible = false;
							passwordelabledoc->Visible = false;
						}

						// إعادة تجميع السطر بنفس التنسيق
						lines[i] = "{" + id + ", \"" + name + "\", \"" + username + "\", \"" + password + "\", \"" + specialty + "\"}";
						break;
					}
				}
			}
		}

		// إعادة كتابة الملف بعد التعديل
		System::IO::File::WriteAllLines("doctors.txt", lines);


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

	}
	private: System::Void myappoint_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		//if (currentDoc->id == "31") {
		//	ListViewItem^ item1 = gcnew ListViewItem("Monday");
		//	item1->SubItems->Add("12:00->12:30");
		//	item1->SubItems->Add("Booked");
		//	listView1->Items->Add(item1);
		//	ListViewItem^ newItem2 = gcnew ListViewItem("Tuseday");
		//	newItem2->SubItems->Add("11:30->12:00");
		//	newItem2->SubItems->Add("booked");
		//	listView1->Items->Add(newItem2);
		//	ListViewItem^ newItem3 = gcnew ListViewItem("Tuseday");
		//	newItem3->SubItems->Add("2:30->3:00");
		//	newItem3->SubItems->Add("booked");
		//	listView1->Items->Add(newItem3);
		//}


	}
	private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0)
		{
			String^ state = listView1->SelectedItems[0]->SubItems[2]->Text;

			if (state == "Booked")
			{
				MessageBox::Show("Cannot delete booked appointment", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				String^ selectedDay = listView1->SelectedItems[0]->SubItems[0]->Text;
				String^ selectedTime = listView1->SelectedItems[0]->SubItems[1]->Text;

				array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");
				System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

				for each (String ^ line in lines)
				{
					array<String^>^ parts = line->Split(',');

					// Format: id,name,user,day,time,isBooked,patientID,specialization
					if (parts->Length >= 7)
					{
						bool isSameDoctor = parts[0] == currentDoc->id;
						bool isSameDay = parts[3] == selectedDay;
						bool isSameTime = parts[4] == selectedTime;

						if (!(isSameDoctor && isSameDay && isSameTime))
						{
							updatedLines->Add(line);
						}
					}
				}

				System::IO::File::WriteAllLines("appointments.txt", updatedLines);

				listView1->SelectedItems[0]->Remove();

				MessageBox::Show("Appointment deleted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
		}
		else
		{
			MessageBox::Show("Please select an appointment to delete", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void editbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		
			
	}


	private: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isDuplicate = false;

		String^ selectedDay = daya->SelectedItem != nullptr ? daya->SelectedItem->ToString() : "";
		String^ selectedTime = tim->SelectedItem != nullptr ? tim->SelectedItem->ToString() : "";

		if (String::IsNullOrWhiteSpace(selectedDay) || String::IsNullOrWhiteSpace(selectedTime)) {
			MessageBox::Show("Please select both day and time.");
			return;
		}

		for (int i = 0; i < listView1->Items->Count; i++) {
			String^ existingDay = listView1->Items[i]->SubItems[0]->Text;
			String^ existingTime = listView1->Items[i]->SubItems[1]->Text;

			if (existingDay == selectedDay && existingTime == selectedTime) {
				isDuplicate = true;
				break;
			}
		}

		if (isDuplicate) {
			MessageBox::Show("This time slot already exists!");
		}
		else {
			ListViewItem^ newItem = gcnew ListViewItem(selectedDay);
			newItem->SubItems->Add(selectedTime);
			newItem->SubItems->Add("Unbooked");
			newItem->SubItems->Add("");
			listView1->Items->Add(newItem);

			String^ doctorID = currentDoc->id;
			String^ doctorName = currentDoc->name;
			String^ doctorSpec = currentDoc->specialication;
			String^ line = doctorID + "," + doctorName + "," + doctorSpec + "," + selectedDay + "," + selectedTime + ",False,__";
			System::IO::File::AppendAllText("appointments.txt", line + Environment::NewLine);

			MessageBox::Show("Appointment added successfully!");
		}

		daya->SelectedIndex = -1;
		tim->SelectedIndex = -1;
	}









	private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {


		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = true;
	}
	private: System::Void exitmyappoint_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = false;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		myappoint->Visible = true;
	}
	private: System::Void dochome_Load(System::Object^ sender, System::EventArgs^ e) {

		user->Text = currentDoc->username;
		name->Text = currentDoc->name;
		ID->Text = currentDoc->id->ToString();
		specialication->Text = currentDoc->specialication;
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*if (currentDoc->id == "315") {
			ListViewItem^ newItem = gcnew ListViewItem("Tuseday");
			newItem->SubItems->Add("11:30->12:00");
			newItem->SubItems->Add("booked");
			ListViewItem^ newItem2 = gcnew ListViewItem("Tuseday");
			newItem->SubItems->Add("11:30->12:00");
			newItem->SubItems->Add("booked");
			ListViewItem^ newItem3 = gcnew ListViewItem("Tuseday");
			newItem->SubItems->Add("11:30->12:00");
			newItem->SubItems->Add("booked");

		}*/

	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



		array<String^>^ lines;
		try {
			lines = System::IO::File::ReadAllLines("ratings.txt");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading ratings file: " + ex->Message);
			return;
		}

		int total = 0;
		int count = 0;

		for each (String ^ line in lines) {
			array<String^>^ parts = line->Split(',');

			if (parts->Length >= 4) {
				String^ doctorName = parts[2]->Trim();
				String^ ratingStr = parts[3]->Trim();

				if (doctorName == currentDoc->name) {
					int rating = Int32::Parse(ratingStr);
					total += rating;
					count++;
				}
			}
		}

		double average = 0;

		if (count > 0)
		{
			average = static_cast<double>(total) / count;
			avgrate->Text = average.ToString("F1");
		}
		else
		{
			avgrate->Text = "0";
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
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	panel5->Visible = false;
	myappoint->Visible = true;
	daya->SelectedIndex = -1;
	tim->SelectedIndex = -1;
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void listView2_Click(System::Object^ sender, System::EventArgs^ e) {
	ListViewItem^ selectedItem = listView2->SelectedItems[0];
	String^ state = selectedItem->SubItems[2]->Text;

	if (state == "Booked") {
		MessageBox::Show("Cannot edit booked appointment", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ selectedDay = listView2->SelectedItems[0]->SubItems[0]->Text->Trim();
		String^ selectedTime = listView2->SelectedItems[0]->SubItems[1]->Text->Trim();

		label20->Text = selectedDay;
		label21->Text = selectedTime;
		label20->Visible = true;
		label21->Visible = true;
		

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Are you sure you want to edit this appointment?",
		"Confirm Edit",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question
	);

	if (result != System::Windows::Forms::DialogResult::Yes)
		return;
	String^ newday= comboBox3->SelectedItem->ToString()->Trim();
	String^ newtime = comboBox2->SelectedItem->ToString()->Trim();
	
	String^ oldDay = listView2->SelectedItems[0]->SubItems[0]->Text->Trim();
	String^ oldTime = listView2->SelectedItems[0]->SubItems[1]->Text->Trim();

	
	array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");
	String^ doctorID = currentDoc->id;
	String^ doctorName = currentDoc->name;
	String^ doctorSpec = currentDoc->specialication;

	for (int i = 0; i < lines->Length; i++) {
		array<String^>^ parts = lines[i]->Split(',');
		if (parts->Length >= 7) {
			if (parts[0]->Trim() == doctorID &&
				parts[3]->Trim() == oldDay &&
				parts[4]->Trim() == oldTime) {

				lines[i] = doctorID + "," + doctorName + "," + doctorSpec + "," + newday + "," + newtime + ",False,";
				break;
			}
		}
		

	}

	System::IO::File::WriteAllLines("appointments.txt", lines);

	MessageBox::Show("Appointment edited successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	listView2->SelectedItems[0]->SubItems[0]->Text = newday;
	listView2->SelectedItems[0]->SubItems[1]->Text = newtime;
	comboBox3->SelectedIndex = -1;
	comboBox2->SelectedIndex = -1;
	label20->Visible = false;
	label21->Visible = false;


	
	/*
			String^ selectedDoctor = compdoc->SelectedItem->ToString()->Trim();
			ListViewItem^ newItem = gcnew ListViewItem(selectedDay);
			newItem->SubItems->Add(selectedTime);
			newItem->SubItems->Add("Unbooked");
			newItem->SubItems->Add("");
			listView1->Items->Add(newItem);


	*/
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Visible = false;
	myappoint->Visible = true;
	label20->Visible = false;
	label21->Visible = false;
	comboBox3->SelectedIndex = -1;
	comboBox2->SelectedIndex = -1;


	
}
private: System::Void listView3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView3->SelectedItems->Count == 0)
	{
		MessageBox::Show("Please select at least one appointment.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// التحقق من وجود مواعيد محجوزة ضمن المحدد
	for each (ListViewItem ^ item in listView3->SelectedItems)
	{
		String^ state = item->SubItems[2]->Text;
		if (state == "Booked")
		{
			MessageBox::Show("it's booked! you cannot  delete it.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}

	// رسالة تأكيد
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Are you sure you want to delete this appointment?",
		"Confirm Deletion",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning
	);

	if (result == System::Windows::Forms::DialogResult::No)
		return;

	// قراءة الملف
	array<String^>^ allAppointments = System::IO::File::ReadAllLines("appointments.txt");
	auto updatedAppointments = gcnew System::Collections::Generic::List<String^>();

	for each (String ^ line in allAppointments)
	{
		array<String^>^ parts = line->Split(',');

		if (parts->Length < 7)
		{
			updatedAppointments->Add(line); // نحتفظ بأي سطر غير مكتمل
			continue;
		}

		bool shouldDelete = false;

		for each (ListViewItem ^ selectedItem in listView3->SelectedItems)
		{
			String^ selectedDay = selectedItem->SubItems[0]->Text;
			String^ selectedTime = selectedItem->SubItems[1]->Text;

			bool sameDoctor = (parts[0] == currentDoc->id);
			bool sameDay = (parts[3] == selectedDay);
			bool sameTime = (parts[4] == selectedTime);

			if (sameDoctor && sameDay && sameTime)
			{
				shouldDelete = true;
				break;
			}
		}

		if (!shouldDelete)
		{
			updatedAppointments->Add(line);
		}
	}

	// كتابة التعديلات
	System::IO::File::WriteAllLines("appointments.txt", updatedAppointments);

	// حذف العناصر من الواجهة
	for each (ListViewItem ^ item in listView3->SelectedItems)
	{
		item->Remove();
	}

	MessageBox::Show("Appointment(s) deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Visible = true;
	myappoint->Visible = false;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Visible = true;
	myappoint->Visible = false;

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	label13->Visible = true;
}
};
}

/*

this->Hide();
	MyMenu^ exit = gcnew MyMenu();
	exit->ShowDialog();
	this->Close();
*/











//============================================================================functions!!================================================================
/*


ListViewItem^ newItem = gcnew ListViewItem(selectedDay);
			newItem->SubItems->Add(selectedTime)
			newItem->SubItems->Add("Unbooked");
			newItem->SubItems->Add("");
			listView1->Items->Add(newItem);

*/