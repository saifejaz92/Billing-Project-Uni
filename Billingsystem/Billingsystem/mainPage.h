#pragma once

namespace Billingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainPage
	/// </summary>
	public ref class mainPage : public System::Windows::Forms::Form
	{
		double slippers = 10.99;
		double jogers = 25.55;
		double loofers = 18.99;
		double shoes = 30.67;
		double sportsshoes = 40.76;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblcostitem;
	private: System::Windows::Forms::Label^ label5;
		   

	public:
		mainPage(void)
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
		~mainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Exitbtn;

	private: System::Windows::Forms::Button^ Totalbtn;
	private: System::Windows::Forms::Button^ Recieptbtn;
	private: System::Windows::Forms::Button^ Printbtn;
	private: System::Windows::Forms::Button^ Resetbtn;
	private: System::Windows::Forms::RichTextBox^ rtreciept;
	private: System::Windows::Forms::NumericUpDown^ numslip;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numsshoes;

	private: System::Windows::Forms::NumericUpDown^ numjogers;

	private: System::Windows::Forms::NumericUpDown^ numshoes;

	private: System::Windows::Forms::NumericUpDown^ numloofers;
	private: System::Windows::Forms::Label^ lblsshoes;


	private: System::Windows::Forms::Label^ lbljogers;

	private: System::Windows::Forms::Label^ lblshoes;

	private: System::Windows::Forms::Label^ lblloofers;

	private: System::Windows::Forms::Label^ lblslip;

	private: System::Windows::Forms::Label^ lblnumitems;





	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainPage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Totalbtn = (gcnew System::Windows::Forms::Button());
			this->Recieptbtn = (gcnew System::Windows::Forms::Button());
			this->Printbtn = (gcnew System::Windows::Forms::Button());
			this->Resetbtn = (gcnew System::Windows::Forms::Button());
			this->Exitbtn = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->rtreciept = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->numsshoes = (gcnew System::Windows::Forms::NumericUpDown());
			this->numjogers = (gcnew System::Windows::Forms::NumericUpDown());
			this->numshoes = (gcnew System::Windows::Forms::NumericUpDown());
			this->numloofers = (gcnew System::Windows::Forms::NumericUpDown());
			this->numslip = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblsshoes = (gcnew System::Windows::Forms::Label());
			this->lbljogers = (gcnew System::Windows::Forms::Label());
			this->lblshoes = (gcnew System::Windows::Forms::Label());
			this->lblloofers = (gcnew System::Windows::Forms::Label());
			this->lblslip = (gcnew System::Windows::Forms::Label());
			this->lblcostitem = (gcnew System::Windows::Forms::Label());
			this->lblnumitems = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numsshoes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numjogers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numshoes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numloofers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numslip))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1366, 640);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->Totalbtn);
			this->panel5->Controls->Add(this->Recieptbtn);
			this->panel5->Controls->Add(this->Printbtn);
			this->panel5->Controls->Add(this->Resetbtn);
			this->panel5->Controls->Add(this->Exitbtn);
			this->panel5->Location = System::Drawing::Point(9, 545);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1298, 84);
			this->panel5->TabIndex = 0;
			// 
			// Totalbtn
			// 
			this->Totalbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Totalbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Totalbtn->Location = System::Drawing::Point(6, 8);
			this->Totalbtn->Name = L"Totalbtn";
			this->Totalbtn->Size = System::Drawing::Size(250, 70);
			this->Totalbtn->TabIndex = 0;
			this->Totalbtn->Text = L"Total";
			this->Totalbtn->UseVisualStyleBackColor = false;
			this->Totalbtn->Click += gcnew System::EventHandler(this, &mainPage::Totalbtn_Click);
			// 
			// Recieptbtn
			// 
			this->Recieptbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Recieptbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Recieptbtn->Location = System::Drawing::Point(264, 8);
			this->Recieptbtn->Name = L"Recieptbtn";
			this->Recieptbtn->Size = System::Drawing::Size(250, 70);
			this->Recieptbtn->TabIndex = 0;
			this->Recieptbtn->Text = L"Reciept";
			this->Recieptbtn->UseVisualStyleBackColor = false;
			this->Recieptbtn->Click += gcnew System::EventHandler(this, &mainPage::Recieptbtn_Click);
			// 
			// Printbtn
			// 
			this->Printbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Printbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Printbtn->Location = System::Drawing::Point(523, 8);
			this->Printbtn->Name = L"Printbtn";
			this->Printbtn->Size = System::Drawing::Size(250, 70);
			this->Printbtn->TabIndex = 0;
			this->Printbtn->Text = L"Print";
			this->Printbtn->UseVisualStyleBackColor = false;
			this->Printbtn->Click += gcnew System::EventHandler(this, &mainPage::Printbtn_Click);
			// 
			// Resetbtn
			// 
			this->Resetbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Resetbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Resetbtn->Location = System::Drawing::Point(779, 8);
			this->Resetbtn->Name = L"Resetbtn";
			this->Resetbtn->Size = System::Drawing::Size(250, 70);
			this->Resetbtn->TabIndex = 0;
			this->Resetbtn->Text = L"Reset";
			this->Resetbtn->UseVisualStyleBackColor = false;
			this->Resetbtn->Click += gcnew System::EventHandler(this, &mainPage::Resetbtn_Click);
			// 
			// Exitbtn
			// 
			this->Exitbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Exitbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exitbtn->Location = System::Drawing::Point(1035, 8);
			this->Exitbtn->Name = L"Exitbtn";
			this->Exitbtn->Size = System::Drawing::Size(250, 70);
			this->Exitbtn->TabIndex = 0;
			this->Exitbtn->Text = L"Exit";
			this->Exitbtn->UseVisualStyleBackColor = false;
			this->Exitbtn->Click += gcnew System::EventHandler(this, &mainPage::Exitbtn_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->Controls->Add(this->rtreciept);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Location = System::Drawing::Point(846, 117);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(461, 423);
			this->panel6->TabIndex = 0;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainPage::panel4_Paint);
			// 
			// rtreciept
			// 
			this->rtreciept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtreciept->Location = System::Drawing::Point(14, 61);
			this->rtreciept->Name = L"rtreciept";
			this->rtreciept->Size = System::Drawing::Size(434, 355);
			this->rtreciept->TabIndex = 0;
			this->rtreciept->Text = L"";
			this->rtreciept->TextChanged += gcnew System::EventHandler(this, &mainPage::rtreciept_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(177, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 39);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Reciept";
			this->label3->Click += gcnew System::EventHandler(this, &mainPage::label3_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->numsshoes);
			this->panel4->Controls->Add(this->numjogers);
			this->panel4->Controls->Add(this->numshoes);
			this->panel4->Controls->Add(this->numloofers);
			this->panel4->Controls->Add(this->numslip);
			this->panel4->Controls->Add(this->lblsshoes);
			this->panel4->Controls->Add(this->lbljogers);
			this->panel4->Controls->Add(this->lblshoes);
			this->panel4->Controls->Add(this->lblloofers);
			this->panel4->Controls->Add(this->lblslip);
			this->panel4->Controls->Add(this->lblcostitem);
			this->panel4->Controls->Add(this->lblnumitems);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(9, 117);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(831, 423);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainPage::panel4_Paint);
			// 
			// numsshoes
			// 
			this->numsshoes->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numsshoes->Location = System::Drawing::Point(204, 289);
			this->numsshoes->Name = L"numsshoes";
			this->numsshoes->Size = System::Drawing::Size(241, 40);
			this->numsshoes->TabIndex = 1;
			this->numsshoes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numsshoes->ValueChanged += gcnew System::EventHandler(this, &mainPage::numsshoes_ValueChanged);
			// 
			// numjogers
			// 
			this->numjogers->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numjogers->Location = System::Drawing::Point(204, 230);
			this->numjogers->Name = L"numjogers";
			this->numjogers->Size = System::Drawing::Size(241, 40);
			this->numjogers->TabIndex = 1;
			this->numjogers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numjogers->ValueChanged += gcnew System::EventHandler(this, &mainPage::numjogers_ValueChanged);
			// 
			// numshoes
			// 
			this->numshoes->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numshoes->Location = System::Drawing::Point(204, 174);
			this->numshoes->Name = L"numshoes";
			this->numshoes->Size = System::Drawing::Size(241, 40);
			this->numshoes->TabIndex = 1;
			this->numshoes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numshoes->ValueChanged += gcnew System::EventHandler(this, &mainPage::numshoes_ValueChanged);
			// 
			// numloofers
			// 
			this->numloofers->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numloofers->Location = System::Drawing::Point(204, 117);
			this->numloofers->Name = L"numloofers";
			this->numloofers->Size = System::Drawing::Size(241, 40);
			this->numloofers->TabIndex = 1;
			this->numloofers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numloofers->ValueChanged += gcnew System::EventHandler(this, &mainPage::numloofers_ValueChanged);
			// 
			// numslip
			// 
			this->numslip->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numslip->Location = System::Drawing::Point(204, 61);
			this->numslip->Name = L"numslip";
			this->numslip->Size = System::Drawing::Size(241, 40);
			this->numslip->TabIndex = 1;
			this->numslip->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numslip->ValueChanged += gcnew System::EventHandler(this, &mainPage::numslip_ValueChanged);
			// 
			// lblsshoes
			// 
			this->lblsshoes->BackColor = System::Drawing::Color::White;
			this->lblsshoes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblsshoes->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsshoes->Location = System::Drawing::Point(522, 289);
			this->lblsshoes->Name = L"lblsshoes";
			this->lblsshoes->Size = System::Drawing::Size(253, 33);
			this->lblsshoes->TabIndex = 0;
			this->lblsshoes->Text = L"Rs0.00";
			this->lblsshoes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbljogers
			// 
			this->lbljogers->BackColor = System::Drawing::Color::White;
			this->lbljogers->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbljogers->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbljogers->Location = System::Drawing::Point(522, 230);
			this->lbljogers->Name = L"lbljogers";
			this->lbljogers->Size = System::Drawing::Size(253, 33);
			this->lbljogers->TabIndex = 0;
			this->lbljogers->Text = L"Rs0.00";
			this->lbljogers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblshoes
			// 
			this->lblshoes->BackColor = System::Drawing::Color::White;
			this->lblshoes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblshoes->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblshoes->Location = System::Drawing::Point(522, 174);
			this->lblshoes->Name = L"lblshoes";
			this->lblshoes->Size = System::Drawing::Size(253, 33);
			this->lblshoes->TabIndex = 0;
			this->lblshoes->Text = L"Rs0.00";
			this->lblshoes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblloofers
			// 
			this->lblloofers->BackColor = System::Drawing::Color::White;
			this->lblloofers->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblloofers->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblloofers->Location = System::Drawing::Point(522, 117);
			this->lblloofers->Name = L"lblloofers";
			this->lblloofers->Size = System::Drawing::Size(253, 33);
			this->lblloofers->TabIndex = 0;
			this->lblloofers->Text = L"Rs0.00";
			this->lblloofers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblslip
			// 
			this->lblslip->BackColor = System::Drawing::Color::White;
			this->lblslip->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblslip->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblslip->Location = System::Drawing::Point(522, 61);
			this->lblslip->Name = L"lblslip";
			this->lblslip->Size = System::Drawing::Size(253, 33);
			this->lblslip->TabIndex = 0;
			this->lblslip->Text = L"Rs0.00";
			this->lblslip->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblcostitem
			// 
			this->lblcostitem->BackColor = System::Drawing::Color::White;
			this->lblcostitem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblcostitem->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcostitem->Location = System::Drawing::Point(573, 359);
			this->lblcostitem->Name = L"lblcostitem";
			this->lblcostitem->Size = System::Drawing::Size(152, 38);
			this->lblcostitem->TabIndex = 0;
			this->lblcostitem->Text = L"Rs0.00";
			this->lblcostitem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblnumitems
			// 
			this->lblnumitems->BackColor = System::Drawing::Color::White;
			this->lblnumitems->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblnumitems->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumitems->Location = System::Drawing::Point(242, 359);
			this->lblnumitems->Name = L"lblnumitems";
			this->lblnumitems->Size = System::Drawing::Size(152, 38);
			this->lblnumitems->TabIndex = 0;
			this->lblnumitems->Text = L"0";
			this->lblnumitems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblnumitems->Click += gcnew System::EventHandler(this, &mainPage::label15_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(430, 364);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 33);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Total Cost:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(29, 364);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(146, 33);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Total Items:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(29, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 33);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Sports Shoes";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 33);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Jogers";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 33);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Shoes";
			this->label6->Click += gcnew System::EventHandler(this, &mainPage::label6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 33);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Loofers";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(553, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(196, 39);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Cost Of Items";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(241, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(176, 39);
			this->label13->TabIndex = 0;
			this->label13->Text = L"No Of Items";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(29, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 39);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Items";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 33);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Slippers";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(9, 28);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1298, 84);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, -18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(245, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(737, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Billing Managment System";
			this->label1->Click += gcnew System::EventHandler(this, &mainPage::label1_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &mainPage::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// mainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel1);
			this->Name = L"mainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainPage";
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numsshoes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numjogers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numshoes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numloofers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numslip))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtreciept_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Cnofirm If You Want To Exit", "Billing Managment System",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void Resetbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		numslip-> Value = 0;
		numloofers-> Value = 0;
		numjogers-> Value = 0;
		numshoes->Value = 0;
		numsshoes->Value = 0;

		rtreciept->Clear();
		lblslip->Text = "Rs0.00";
		lbljogers->Text = "Rs0.00";
		lblloofers->Text = "Rs0.00";
		lblshoes->Text = "Rs0.00";
		lblsshoes->Text = "Rs0.00";
		lblcostitem->Text = "Rs0.00";
		lblnumitems->Text = "0";
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void numslip_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numslip->Value);
	lblslip->Text = String::Format("Rs " +i * slippers);
}
private: System::Void numloofers_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numloofers->Value);
	lblloofers->Text = String::Format("Rs " + i * loofers);
}
private: System::Void numshoes_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numshoes->Value);
	lblshoes->Text = String::Format("Rs " + i * shoes);
}
private: System::Void numjogers_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numjogers->Value);
	lbljogers->Text = String::Format("Rs " + i * jogers);
}
private: System::Void numsshoes_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numsshoes->Value);
	lblsshoes->Text = String::Format("Rs " + i * sportsshoes);
}
private: System::Void Totalbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	double j[6], k[6];

	j[0] = Convert::ToDouble(numslip->Value);
	j[1] = Convert::ToDouble(numloofers->Value);
	j[2] = Convert::ToDouble(numjogers->Value);
	j[3] = Convert::ToDouble(numshoes->Value);
	j[4] = Convert::ToDouble(numsshoes->Value);

	j[5] = j[0] + j[1] + j[2] + j[3] + j[4];
	
	lblnumitems->Text = Convert::ToString(j[5]);

	k[0] = j[0] * slippers;
	k[1] = j[1] * loofers;
	k[2] = j[2] * jogers;
	k[3] = j[3] * shoes;
	k[4] = j[4] * sportsshoes;

	k[5] = k[0] + k[1] + k[2] + k[3] + k[4];
	
	lblcostitem->Text = String::Format("Rs " + k[5]);
}
private: System::Void Recieptbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	rtreciept->Clear();
	rtreciept->AppendText(label12->Text + "\t" + "\t" + label13->Text + "\t" + "  " + label17->Text + "\n" + "\n");
	rtreciept->AppendText(label2->Text + "\t" + "\t" + numslip->Value + "\t" + "\t" + "\t" + lblslip->Text + "\n" + "\n");
	rtreciept->AppendText(label4->Text + "\t" + "\t" + numloofers->Value + "\t" + "\t" + "\t" + lblloofers->Text + "\n" + "\n");
	rtreciept->AppendText(label6->Text + "\t" + "\t" + numshoes->Value + "\t" + "\t" + "\t" + lblshoes->Text + "\n" + "\n");
	rtreciept->AppendText(label8->Text + "\t" + "\t" + numjogers->Value + "\t" + "\t" + "\t" + lbljogers->Text + "\n" + "\n");
	rtreciept->AppendText(label10->Text + "\t" + numsshoes->Value + "\t" + "\t" + "\t" + lblsshoes->Text + "\n");

	rtreciept->AppendText("-----------------------------------------------------------------------" +"\n" + label14->Text + "\t" + "\t" + lblnumitems->Text + "\t" + label5->Text + " " + " " + lblcostitem->Text);

}
private: System::Void Printbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Calibri", 14, FontStyle::Regular);
	e->Graphics->DrawString(rtreciept->Text, fntString, Brushes::Purple, 100, 100);
}
};
}
