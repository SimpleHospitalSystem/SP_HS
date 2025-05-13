#pragma once
#include "Doctor.h"
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

	public:
		dochome(Project8::Doctor^ doc)
		{

			InitializeComponent();
			currentDoc = doc;
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

	private: System::Windows::Forms::Panel^ panel6;


	private: System::Windows::Forms::Label^ day;

	private: System::Windows::Forms::Label^ time;

	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::Button^ editbutton;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ combotime;
	private: System::Windows::Forms::ComboBox^ comboday;






	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->myappoint = (gcnew System::Windows::Forms::Panel());
			this->exitmyappoint = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->day = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::Label());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->editbutton = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->combotime = (gcnew System::Windows::Forms::ComboBox());
			this->comboday = (gcnew System::Windows::Forms::ComboBox());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->myappoint->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->editdoc);
			this->panel2->Controls->Add(this->specialication);
			this->panel2->Controls->Add(this->ID);
			this->panel2->Controls->Add(this->name);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->user);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(348, 109);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(968, 658);
			this->panel2->TabIndex = 9;
			this->panel2->Visible = false;
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(807, 473);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(158, 51);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &dochome::button5_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->passwordelabledoc);
			this->panel1->Controls->Add(this->passwordPanal);
			this->panel1->Controls->Add(this->passwordtextboxdoc);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(646, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 342);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			// 
			// passwordelabledoc
			// 
			this->passwordelabledoc->AutoSize = true;
			this->passwordelabledoc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->passwordelabledoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passwordelabledoc->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordelabledoc->Location = System::Drawing::Point(-1, 113);
			this->passwordelabledoc->Name = L"passwordelabledoc";
			this->passwordelabledoc->Size = System::Drawing::Size(97, 19);
			this->passwordelabledoc->TabIndex = 17;
			this->passwordelabledoc->Text = L"are you sure\?";
			this->passwordelabledoc->Visible = false;
			// 
			// passwordPanal
			// 
			this->passwordPanal->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->passwordPanal->Location = System::Drawing::Point(0, 160);
			this->passwordPanal->Name = L"passwordPanal";
			this->passwordPanal->Size = System::Drawing::Size(263, 2);
			this->passwordPanal->TabIndex = 15;
			this->passwordPanal->Visible = false;
			// 
			// passwordtextboxdoc
			// 
			this->passwordtextboxdoc->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->passwordtextboxdoc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtextboxdoc->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordtextboxdoc->Location = System::Drawing::Point(0, 133);
			this->passwordtextboxdoc->Name = L"passwordtextboxdoc";
			this->passwordtextboxdoc->PasswordChar = '*';
			this->passwordtextboxdoc->Size = System::Drawing::Size(263, 26);
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
			this->label12->Location = System::Drawing::Point(3, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 19);
			this->label12->TabIndex = 15;
			this->label12->Text = L"edit here:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Location = System::Drawing::Point(3, 103);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(263, 2);
			this->panel4->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(170, 207);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 42);
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Username", L"Name", L"Specialication", L"Password" });
			this->comboBox1->Location = System::Drawing::Point(102, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(164, 30);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &dochome::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 26);
			this->textBox1->TabIndex = 12;
			// 
			// editdoc
			// 
			this->editdoc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->editdoc->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->editdoc->FlatAppearance->BorderSize = 2;
			this->editdoc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->editdoc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->editdoc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editdoc->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold));
			this->editdoc->ForeColor = System::Drawing::Color::White;
			this->editdoc->Location = System::Drawing::Point(820, 23);
			this->editdoc->Name = L"editdoc";
			this->editdoc->Size = System::Drawing::Size(136, 66);
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
			this->specialication->Location = System::Drawing::Point(305, 283);
			this->specialication->Name = L"specialication";
			this->specialication->Size = System::Drawing::Size(264, 62);
			this->specialication->TabIndex = 8;
			this->specialication->Text = L"Dermatology";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(302, 221);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(61, 62);
			this->ID->TabIndex = 7;
			this->ID->Text = L"11";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(302, 163);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(148, 62);
			this->name->TabIndex = 6;
			this->name->Text = L"Asmaa";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(3, 160);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(293, 508);
			this->panel3->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 62);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 62);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ID:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(293, 62);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Specialication:";
			// 
			// user
			// 
			this->user->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->user->Font = (gcnew System::Drawing::Font(L"Sitka Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(166, 3);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(241, 157);
			this->user->TabIndex = 1;
			this->user->Text = L"asmauser";
			this->user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(-3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 163);
			this->label2->TabIndex = 0;
			// 
			// myappoint
			// 
			this->myappoint->BackColor = System::Drawing::Color::LightSteelBlue;
			this->myappoint->Controls->Add(this->exitmyappoint);
			this->myappoint->Controls->Add(this->listView1);
			this->myappoint->Controls->Add(this->panel6);
			this->myappoint->Controls->Add(this->deletebutton);
			this->myappoint->Controls->Add(this->editbutton);
			this->myappoint->Controls->Add(this->panel7);
			this->myappoint->Controls->Add(this->addbutton);
			this->myappoint->Location = System::Drawing::Point(361, 106);
			this->myappoint->Name = L"myappoint";
			this->myappoint->Size = System::Drawing::Size(965, 600);
			this->myappoint->TabIndex = 16;
			this->myappoint->Visible = false;
			this->myappoint->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dochome::myappoint_Paint);
			// 
			// exitmyappoint
			// 
			this->exitmyappoint->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exitmyappoint->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->exitmyappoint->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->exitmyappoint->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->exitmyappoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitmyappoint->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->exitmyappoint->ForeColor = System::Drawing::Color::White;
			this->exitmyappoint->Location = System::Drawing::Point(757, 427);
			this->exitmyappoint->Name = L"exitmyappoint";
			this->exitmyappoint->Size = System::Drawing::Size(158, 51);
			this->exitmyappoint->TabIndex = 15;
			this->exitmyappoint->Text = L"Exit";
			this->exitmyappoint->UseVisualStyleBackColor = true;
			this->exitmyappoint->Click += gcnew System::EventHandler(this, &dochome::exitmyappoint_Click);
			// 
			// listView1
			// 
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(322, 3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(484, 418);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &dochome::listView1_SelectedIndexChanged);
			this->listView1->Click += gcnew System::EventHandler(this, &dochome::listView1_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel6->Controls->Add(this->day);
			this->panel6->Controls->Add(this->time);
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(127, 86);
			this->panel6->TabIndex = 6;
			// 
			// day
			// 
			this->day->AutoSize = true;
			this->day->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day->Location = System::Drawing::Point(3, 14);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(46, 24);
			this->day->TabIndex = 1;
			this->day->Text = L"day";
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(3, 50);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(57, 24);
			this->time->TabIndex = 2;
			this->time->Text = L"time";
			// 
			// deletebutton
			// 
			this->deletebutton->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->deletebutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->deletebutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->deletebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->ForeColor = System::Drawing::Color::White;
			this->deletebutton->Location = System::Drawing::Point(8, 177);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(92, 30);
			this->deletebutton->TabIndex = 11;
			this->deletebutton->Text = L"delete";
			this->deletebutton->UseVisualStyleBackColor = true;
			this->deletebutton->Click += gcnew System::EventHandler(this, &dochome::deletebutton_Click);
			// 
			// editbutton
			// 
			this->editbutton->FlatAppearance->BorderColor = System::Drawing::Color::DarkBlue;
			this->editbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->editbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->editbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editbutton->ForeColor = System::Drawing::Color::White;
			this->editbutton->Location = System::Drawing::Point(8, 141);
			this->editbutton->Name = L"editbutton";
			this->editbutton->Size = System::Drawing::Size(92, 30);
			this->editbutton->TabIndex = 10;
			this->editbutton->Text = L"edit";
			this->editbutton->UseVisualStyleBackColor = true;
			this->editbutton->Click += gcnew System::EventHandler(this, &dochome::editbutton_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel7->Controls->Add(this->combotime);
			this->panel7->Controls->Add(this->comboday);
			this->panel7->Location = System::Drawing::Point(136, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(171, 86);
			this->panel7->TabIndex = 7;
			// 
			// combotime
			// 
			this->combotime->BackColor = System::Drawing::Color::AliceBlue;
			this->combotime->Cursor = System::Windows::Forms::Cursors::Default;
			this->combotime->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combotime->FormattingEnabled = true;
			this->combotime->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"11:00", L"12:30", L"13:00", L"14:30", L"15:00",
					L"16:30", L"17:00"
			});
			this->combotime->Location = System::Drawing::Point(3, 50);
			this->combotime->Name = L"combotime";
			this->combotime->Size = System::Drawing::Size(121, 24);
			this->combotime->TabIndex = 12;
			// 
			// comboday
			// 
			this->comboday->BackColor = System::Drawing::Color::AliceBlue;
			this->comboday->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboday->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboday->FormattingEnabled = true;
			this->comboday->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"saterday", L"sunday", L"monday", L"tuesday", L"wednsday",
					L"tharsday", L"friday"
			});
			this->comboday->Location = System::Drawing::Point(3, 11);
			this->comboday->Name = L"comboday";
			this->comboday->Size = System::Drawing::Size(121, 24);
			this->comboday->TabIndex = 6;
			// 
			// addbutton
			// 
			this->addbutton->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->addbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->addbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->addbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::White;
			this->addbutton->Location = System::Drawing::Point(8, 105);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(92, 30);
			this->addbutton->TabIndex = 9;
			this->addbutton->Text = L"add";
			this->addbutton->UseVisualStyleBackColor = true;
			this->addbutton->Click += gcnew System::EventHandler(this, &dochome::addbutton_Click);
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::AliceBlue;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 25.8F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(-1, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(625, 57);
			this->label1->TabIndex = 17;
			this->label1->Text = L"where do you want to go\?";
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(70, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 83);
			this->button2->TabIndex = 18;
			this->button2->Text = L"My Account";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &dochome::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(36, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(306, 83);
			this->button1->TabIndex = 19;
			this->button1->Text = L"My Appointments";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dochome::button1_Click);
			// 
			// dochome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1484, 743);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->myappoint);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"dochome";
			this->Text = L"dochome";
			this->Load += gcnew System::EventHandler(this, &dochome::dochome_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->myappoint->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void editdoc_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("choose from combobox then write in textbox", "instructions", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panel1->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedField = comboBox1->SelectedItem->ToString();
		String^ newValue = textBox1->Text->Trim();

		if (selectedField == "Name") {
			currentDoc->name = newValue;
			name->Text = newValue;
			MessageBox::Show("Name updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (selectedField == "Username") {
			auto lines = System::IO::File::ReadAllLines("doctors.txt");
			for each (String ^ line in lines) {
				if (line->Contains(newValue)) {
					MessageBox::Show("Username already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
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
			currentDoc->password = newValue;
			MessageBox::Show("Password updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			passwordtextboxdoc->Visible = false;
			passwordPanal->Visible = false;
			passwordelabledoc->Visible = false;
		}

		comboBox1->SelectedIndex = -1;
		textBox1->Text = "";
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
	private: System::Void myappoint_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		listView1->Columns->Add("day", 120);
		listView1->Columns->Add("time", 120);
		listView1->Columns->Add("State", 120);
		if (currentDoc->id == "31") {
			ListViewItem^ item1 = gcnew ListViewItem("Monday");
			item1->SubItems->Add("12:00->12:30");
			item1->SubItems->Add("Booked");
			listView1->Items->Add(item1);

			ListViewItem^ newItem2 = gcnew ListViewItem("Tuseday");
			newItem2->SubItems->Add("11:30->12:00");
			newItem2->SubItems->Add("booked");
			listView1->Items->Add(newItem2);

			ListViewItem^ newItem3 = gcnew ListViewItem("Tuseday");
			newItem3->SubItems->Add("2:30->3:00");
			newItem3->SubItems->Add("booked");
			listView1->Items->Add(newItem3);

		}


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
				listView1->SelectedItems[0]->Remove();
				MessageBox::Show("Appointment deleted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				comboday->SelectedIndex = -1;
				combotime->SelectedIndex = -1;

			}

		}
	}
	private: System::Void editbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0)
		{

			String^ state = listView1->SelectedItems[0]->SubItems[2]->Text;
			if (state == "Booked")
			{
				MessageBox::Show("Cannot edit booked appointment", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				comboday->SelectedItem = listView1->SelectedItems[0]->SubItems[0]->Text;
				combotime->SelectedItem = listView1->SelectedItems[0]->SubItems[1]->Text;
				MessageBox::Show("Appointment edited successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				comboday->SelectedIndex = -1;
				combotime->SelectedIndex = -1;
			}

		}
	}

	private: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isDuplicate = false;

		String^ selectedDay = comboday->SelectedItem->ToString();
		String^ selectedTime = combotime->SelectedItem->ToString();

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
			listView1->Items->Add(newItem);
		}
		comboday->SelectedIndex = -1;
		combotime->SelectedIndex = -1;
	}
	private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {
			comboday->SelectedItem = listView1->SelectedItems[0]->SubItems[0]->Text;
			combotime->SelectedItem = listView1->SelectedItems[0]->SubItems[1]->Text;


		}

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
	private: System::Void dochome_Load(System::Object^ sender, System::EventArgs^ e) {
		
		user->Text = currentDoc->username;
		name->Text = currentDoc->name;
		ID->Text = currentDoc->id->ToString();
		//specialication->Text = currentDoc->specialication;
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (currentDoc->id == "315") {
		ListViewItem^ newItem = gcnew ListViewItem("Tuseday");
		newItem->SubItems->Add("11:30->12:00");
		newItem->SubItems->Add("booked");
		ListViewItem^ newItem2 = gcnew ListViewItem("Tuseday");
		newItem->SubItems->Add("11:30->12:00");
		newItem->SubItems->Add("booked");
		ListViewItem^ newItem3 = gcnew ListViewItem("Tuseday");
		newItem->SubItems->Add("11:30->12:00");
		newItem->SubItems->Add("booked");
	
	}

}
};
}
