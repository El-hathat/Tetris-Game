#pragma once

namespace Tetriste {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gameOver
	/// </summary>
	public ref class gameOver : public System::Windows::Forms::Form
	{
	public:
		 int score;
		gameOver(void)
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
		~gameOver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

			
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Matura MT Script Capitals", 72, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(687, 160);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Game Over";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 325);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(426, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Votre Score est :  ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(416, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 55);
			this->label3->TabIndex = 2;
			this->label3->Text = L"00";
			this->label3->Click += gcnew System::EventHandler(this, &gameOver::label3_Click);
			// 
			// gameOver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 559);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"gameOver";
			this->Text = L"gameOver";
			this->Load += gcnew System::EventHandler(this, &gameOver::gameOver_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void gameOver_Load(System::Object^  sender, System::EventArgs^  e) {
				 label3->Text=""+this->score;
			 }
	};
}
