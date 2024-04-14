#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <fstream>
using namespace std;
using namespace msclr::interop;
#include <string.h>
#include <vector>
#include "gameOver.h"
#include "GameCode.h"
//-------------------------------------------------------------------------------------------------------------------------

struct Users {
    string login;
    string motDePasse;
    int score;
};





//-------------------------------------------------------------------------------------------------------------
namespace Tetriste {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public :
static struct Users *user=new  Users;

static struct Users *topUser=new  Users;
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox0;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;


	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox11;

	private: System::Windows::Forms::PictureBox^  pictureBox10;


	private: System::Windows::Forms::PictureBox^  pictureBox9;





	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;






			 //	private:	 string t[16];





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox0 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox0))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(702, 519);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(265, 169);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(136, 94);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Form1::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Location = System::Drawing::Point(640, 438);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(43, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Location = System::Drawing::Point(576, 438);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(43, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(518, 438);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(43, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(265, 438);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(43, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(331, 438);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(43, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(391, 438);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(43, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(459, 438);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(43, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"label11";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(46, 207);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 41);
			this->button2->TabIndex = 5;
			this->button2->Text = L"<--";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(590, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 41);
			this->button1->TabIndex = 4;
			this->button1->Text = L"-->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(142, 438);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(43, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(205, 438);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(43, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(74, 438);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(12, 438);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(9, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Next : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(61, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"El-hathat";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Level 1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label9->Location = System::Drawing::Point(9, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Top player : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"00 : 00";
			// 
			// pictureBox0
			// 
			this->pictureBox0->Location = System::Drawing::Point(126, 248);
			this->pictureBox0->Name = L"pictureBox0";
			this->pictureBox0->Size = System::Drawing::Size(77, 69);
			this->pictureBox0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox0->TabIndex = 4;
			this->pictureBox0->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(149, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"12";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(9, 356);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Score : ";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->pictureBox0);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(699, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(261, 518);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(0, 384);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(260, 134);
			this->panel3->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label8->Location = System::Drawing::Point(9, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Top score : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(112, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"12";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"El-hathat";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 516);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox0))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion
		//---------------code------------------
		void modifierScoreUtilisateur( string login, int nouveauScore) {
    vector<Users> utilisateurs;
	array<Users> utilisateurs;
    // Lire toutes les utilisateurs dans la structure de données
    ifstream fichierEntree("C:/Users/lenovo/eclipse/Documents/Visual Studio 2010/Projects/Tetriste/Tetriste/Userss.txt");
    if (fichierEntree.is_open()) {
        Users utilisateur;
        while (fichierEntree >> utilisateur.login >> utilisateur.motDePasse >> utilisateur.score) {
            utilisateurs.push_back(utilisateur);
        }
        fichierEntree.close();
    } else {
        cout << "Impossible d'ouvrir le fichier pour la lecture." << endl;
        return;
    }

    // Rechercher l'utilisateur dont nous voulons modifier le score
    for (size_t i = 0; i < utilisateurs.size(); ++i) {
        if (utilisateurs[i].login == login) {
            utilisateurs[i].score = nouveauScore;
            break; // Sortir de la boucle une fois que l'utilisateur est trouvé et modifié
        }
    }

    // Réécrire toutes les utilisateurs dans le fichier avec les données mises à jour
    ofstream fichierSortie("C:/Users/lenovo/eclipse/Documents/Visual Studio 2010/Projects/Tetriste/Tetriste/Userss.txt");
      if (fichierSortie.is_open()) {
        for (auto it = utilisateurs.begin(); it != utilisateurs.end(); ++it) {

            fichierSortie << it->login << " " << it->motDePasse << " " << it->score << std::endl;
        }



        fichierSortie.close();
        cout << "Score de l'utilisateur " << login << " modifie avec succes." << endl;
    } else {
        cout << "Impossible d'ouvrir le fichier pour l'ecriture." << endl;
    }
}

	
static int minutes=1 ; 
static int seconds=0 ;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text=gcnew String(user->login.c_str());
			 label7->Text=""+topUser->score;
			 label10->Text=gcnew String(topUser->login.c_str());
			  
			 freeTab();
			  rempliste();
			  randImage();
			  initImage();
				 randImgNext();
			 pictureBox0->Image = System::Drawing::Image::FromFile(gcnew String(nextShape->chemain.c_str()));
			
		
		 }

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Start();
			 addToTable(*nextShape);
			 randImgNext();
			pictureBox0->Image = System::Drawing::Image::FromFile(gcnew String(nextShape->chemain.c_str()));
			 dropShape();
			initImage();
			label6->Text=""+score;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 addToLeft(*nextShape);
			 randImgNext();
			 pictureBox0->Image = System::Drawing::Image::FromFile(gcnew String(nextShape->chemain.c_str()));
			 dropShape();
				initImage();
				label6->Text=""+score;
		 }

private: void initImage(){
			 
			  
		 		array<System::Windows::Forms::PictureBox^>^ pictureBoxes = {pictureBox1,pictureBox2, pictureBox3,pictureBox4, pictureBox5,pictureBox6,pictureBox7, pictureBox8,pictureBox9, pictureBox10,pictureBox11 };

 table *t=new table;
			 t=firstone;
			 for each (System::Windows::Forms::PictureBox^ pictureBox in pictureBoxes) {
	
    pictureBox->Visible = false;
	
	}
			 
for each (System::Windows::Forms::PictureBox^ pictureBox in pictureBoxes) {
	 pictureBox->Visible = true;
    pictureBox->Image = System::Drawing::Image::FromFile(gcnew String(t->f.chemain.c_str()));
	if(t==lastone){
		break;
	}
	t=t->next;
	
}
	


		 }

table *shape1,*shape2;
 int count;
void remp2shape(int num){
	  table* l=new table;
	 count=count+1;
    l=firstone;
			int i=1;
				  while(true){
					  //System::Windows::Forms::MessageBox::Show("Title of the message box "+l->index, "Title of the message box ");
					  if(l->index==num){ 
						  if(count==1){
							  shape1=l;
							 
							  break;
						  }else{
							  shape2=l;
							  pictureBox12->Visible=true;
							  //count=0;
							  count=0;
							  break;
						  }
						 // if( count==2){  }	
						  }
					  l=l->next;
					  i++;

        }
	         
								  
				 
				  }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 remp2shape(1);
			 pictureBox1->Enabled=false;
			 //56; 60
			// System::Drawing::Point newLocation(pictureBox1->Location.X, 400);
			 pictureBox1->Location=Point(pictureBox1->Location.X, pictureBox1->Location.Y-30);
		 }

private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {


			 struct formeColeurie ff;
			 ff=shape2->f;
			 shape2->f=shape1->f;

			 shape1->f=ff;

			 dropShape();
			 reparateur();
			 initImage();
			  pictureBox12->Visible=false;
			  array<System::Windows::Forms::PictureBox^>^ pictureBoxes = {pictureBox1,pictureBox2, pictureBox3,pictureBox4, pictureBox5,pictureBox6,pictureBox7, pictureBox8,pictureBox9, pictureBox10,pictureBox11 };

			 for each (System::Windows::Forms::PictureBox^ pictureBox in pictureBoxes) {
	 if(pictureBox->Enabled == false ) pictureBox->Location=Point(pictureBox->Location.X, pictureBox->Location.Y+30);
    pictureBox->Enabled = true;
	label6->Text=""+score;
	
	}
			  
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 remp2shape(2);
			 pictureBox2->Enabled=false;
			  pictureBox2->Location=Point(pictureBox2->Location.X, pictureBox2->Location.Y-30);
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 remp2shape(3);
			 pictureBox3->Enabled=false;
	 pictureBox3->Location=Point(pictureBox3->Location.X, pictureBox3->Location.Y-30);
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 remp2shape(4);
			 pictureBox4->Enabled=false;
			 pictureBox4->Location=Point(pictureBox4->Location.X, pictureBox4->Location.Y-30);
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  remp2shape(5);
			 pictureBox5->Enabled=false;
			  pictureBox5->Location=Point(pictureBox5->Location.X, pictureBox5->Location.Y-30);
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			  remp2shape(6);
			 pictureBox6->Enabled=false;
			  pictureBox6->Location=Point(pictureBox6->Location.X, pictureBox6->Location.Y-30);
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		  remp2shape(7);
			 pictureBox7->Enabled=false;
			 pictureBox7->Location=Point(pictureBox7->Location.X, pictureBox7->Location.Y-30);
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
		  remp2shape(8);
			 pictureBox8->Enabled=false;
			 pictureBox8->Location=Point(pictureBox8->Location.X, pictureBox8->Location.Y-30);
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		  remp2shape(9);
			 pictureBox9->Enabled=false;
			  pictureBox9->Location=Point(pictureBox9->Location.X, pictureBox9->Location.Y-30);
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
		
		  remp2shape(10);
			 pictureBox10->Enabled=false;
		 pictureBox10->Location=Point(pictureBox10->Location.X, pictureBox10->Location.Y-30);
		 }

private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
		 remp2shape(11);
			 pictureBox11->Enabled=false; 
	 pictureBox11->Location=Point(pictureBox11->Location.X, pictureBox11->Location.Y-30);}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			  // Decrement the seconds
    if (seconds > 0) {
        seconds--;
    } else {
        // If seconds reach 0, decrement the minutes and reset seconds to 59
        if (minutes > 0) {
            minutes--;
            seconds = 59;
        } else {
            // If both minutes and seconds reach 0, stop the timer
            timer1->Stop();
			modifierScoreUtilisateur(user->login,score);
			//System::Windows::Forms::MessageBox::Show(gcnew String(user->login.c_str()), "Some thing wrong "+score);
		 gameOver^ nextForm = gcnew gameOver();
		 nextForm->score=score;
                nextForm->Show();
			this->Hide();

            return;
        }
    }

    // Update the label with the current time
    label2->Text = System::String::Format("{0:D2}:{1:D2}", minutes, seconds);
	
		 }
};
}




//struct img{
//	string pic;
//	int index
//	struct img* next;
//}
//struct img
//void addElem(){
//	struct img* im;
//	
//
//}



