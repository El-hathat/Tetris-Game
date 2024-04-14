#pragma once
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <iostream>
#include <fstream>
#include <string>

#include "Form1.h"

using namespace std;











namespace Tetriste {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(149, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 102);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 455);
			this->panel1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(158, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 47);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Connexion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 557);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 button3->Text="Connexion";
			 button1->Enabled=false;
			 button2->Enabled=true;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			  button3->Text="Valider";
			 button1->Enabled=true;
			 button2->Enabled=false;
		 }



		 //voids

		 void enregistrerUsers(Users Users) {
    ofstream fichier("C:/Users/lenovo/eclipse/Documents/Visual Studio 2010/Projects/Tetriste/Tetriste/Userss.txt", ios::app); // ios::app pour ajouter à la fin du fichier
    if (fichier.is_open()) {
        fichier << Users.login << " " << Users.motDePasse << " " << Users.score << endl;
        fichier.close();
        cout << "Users enregistré avec succès." << endl;
    } else {
        cout << "Impossible d'ouvrir le fichier pour l'enregistrement." << endl;
    }
}



		 bool UsersExiste(Users user1) {
    ifstream fichier("C:/Users/lenovo/eclipse/Documents/Visual Studio 2010/Projects/Tetriste/Tetriste/Userss.txt");
    if (fichier.is_open()) {
       struct Users Users;
        while (fichier >> Users.login >> Users.motDePasse >> Users.score) {
           if (Users.login == user1.login && Users.motDePasse == user1.motDePasse) {
                fichier.close();
                return true;
            }
        }
        fichier.close();
    }
    return false;
}



		 Users trouverUtilisateurScoreMax() {
    Users utilisateurMax;
    utilisateurMax.score = INT_MIN; // Initialiser à la plus petite valeur possible

    ifstream fichier("C:/Users/lenovo/eclipse/Documents/Visual Studio 2010/Projects/Tetriste/Tetriste/Userss.txt");
    if (fichier.is_open()) {
        Users utilisateur;
        while (fichier >> utilisateur.login >> utilisateur.motDePasse >> utilisateur.score) {
            if (utilisateur.score > utilisateurMax.score) {
                utilisateurMax = utilisateur;
            }
        }
        fichier.close();
    }
	 
    return utilisateurMax;
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			   msclr::interop::marshal_context context;
    std::string log = context.marshal_as<std::string>(textBox1->Text);
	  std::string pwd = context.marshal_as<std::string>(textBox2->Text);
				struct Users user;
				user.login=log;
				 user.motDePasse=pwd;
			 if(button3->Text=="Connexion"){
				 if(UsersExiste(user)){
				Form1^ frm = gcnew Form1();
				 frm->user=&user;
				 frm->topUser->score=trouverUtilisateurScoreMax().score;
				 frm->topUser->login=trouverUtilisateurScoreMax().login;
				// System::Windows::Forms::MessageBox::Show(gcnew String(frm->topUser->login.c_str()), "Some thing wrong ");
				 frm->Show();
				this->Hide();}
				 else{
					 System::Windows::Forms::MessageBox::Show("Usename or password is incorrect !! ", "Some thing wrong ");
				 }
			 }
			 else{
				 
				
				 
				 user.score=0;

				enregistrerUsers(user);



			 }
		 }
};
}
