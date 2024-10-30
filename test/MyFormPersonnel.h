#pragma once
#include"mappPersonnel.h"
#include"GestionPersonnel.h"
#include"CL_CAD.h"
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}


	
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnajouter;
	private: System::Windows::Forms::Button^ btnmod;
	private: System::Windows::Forms::Button^ btnsupp;
	private: System::Windows::Forms::Button^ btnsave;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;


	private: NS_SVC::GestionPersonnel^ gestionpersonnel;
	private: DataSet^ dsPersonnel;
	private: String^ mode;
	private: System::ComponentModel::IContainer^ components;
	private: int index;




	private: int rowsCount;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPersonnel::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnajouter = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btnsupp = (gcnew System::Windows::Forms::Button());
			this->btnsave = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(516, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(512, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ID Personnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(512, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(516, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 26);
			this->textBox2->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(512, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Prénom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(516, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 26);
			this->textBox3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(789, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date Embauche";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(792, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 26);
			this->textBox4->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(789, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Poste";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(792, 137);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 26);
			this->textBox5->TabIndex = 17;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 352);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1131, 254);
			this->dataGridView1->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(790, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"ID Superrieur";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(794, 228);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 26);
			this->textBox6->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(10, 649);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1130, 72);
			this->textBox7->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 625);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Message";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(16, 14);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(189, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Gestion Personnel";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Azure;
			this->panel1->Controls->Add(this->label8);
			this->panel1->ForeColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(4, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(243, 54);
			this->panel1->TabIndex = 23;
			// 
			// btnajouter
			// 
			this->btnajouter->BackColor = System::Drawing::Color::Moccasin;
			this->btnajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnajouter.Image")));
			this->btnajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnajouter->Location = System::Drawing::Point(26, 69);
			this->btnajouter->Name = L"btnajouter";
			this->btnajouter->Size = System::Drawing::Size(182, 77);
			this->btnajouter->TabIndex = 6;
			this->btnajouter->Text = L"Ajouter";
			this->btnajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnajouter->UseVisualStyleBackColor = false;
			this->btnajouter->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnajouter_Click);
			// 
			// btnmod
			// 
			this->btnmod->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnmod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmod->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnmod.Image")));
			this->btnmod->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmod->Location = System::Drawing::Point(26, 152);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(182, 77);
			this->btnmod->TabIndex = 7;
			this->btnmod->Text = L"Modifier";
			this->btnmod->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmod->UseVisualStyleBackColor = false;
			this->btnmod->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnmod_Click);
			// 
			// btnsupp
			// 
			this->btnsupp->BackColor = System::Drawing::Color::Firebrick;
			this->btnsupp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsupp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsupp.Image")));
			this->btnsupp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsupp->Location = System::Drawing::Point(220, 69);
			this->btnsupp->Name = L"btnsupp";
			this->btnsupp->Size = System::Drawing::Size(182, 77);
			this->btnsupp->TabIndex = 8;
			this->btnsupp->Text = L"Supprimer";
			this->btnsupp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsupp->UseVisualStyleBackColor = false;
			this->btnsupp->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnsupp_Click);
			// 
			// btnsave
			// 
			this->btnsave->BackColor = System::Drawing::Color::SeaGreen;
			this->btnsave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsave->Location = System::Drawing::Point(220, 152);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(182, 77);
			this->btnsave->TabIndex = 9;
			this->btnsave->Text = L"Enregistrer";
			this->btnsave->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsave->UseVisualStyleBackColor = false;
			this->btnsave->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnsave_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(512, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 20);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Adresse Personnel";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(516, 308);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(468, 26);
			this->textBox8->TabIndex = 35;
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1178, 737);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->btnsupp);
			this->Controls->Add(this->btnmod);
			this->Controls->Add(this->btnajouter);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyFormPersonnel::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void initialisationENR(void)

{

	this->gestionpersonnel = gcnew NS_SVC::GestionPersonnel();
	this->dataGridView1->Columns->Clear();
	this->dsPersonnel = this->gestionpersonnel->listePersonnel("Le Personnel");
	this->rowsCount = this->dsPersonnel->Tables["Le Personnel"]->Rows->Count;
	this->index = 0;
	this->dataGridView1->DataSource = this->dsPersonnel;
	this->dataGridView1->DataMember = "Le Personnel";

}

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->initialisationENR();
	this->textBox7->Text = "Cnx SQL SERVER ok \r\nEnregistrement chargés";
}

private: System::Void btnajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";

	this->textBox2->Text = "";

	this->textBox3->Text = "";

	this->textBox4->Text = "";

	this->textBox5->Text = "";

	this->textBox6->Text = "";

	this->textBox8->Text = "";

	

	this->mode = "nouveau";
}

private: System::Void btnsave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "nouveau") {
		this->gestionpersonnel->ajouterPersonnel(this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, Convert::ToInt32(this->textBox6->Text), this->textBox8->Text);
		this->textBox7->Text = "Veuillez saisir les renseignements avant d'enregister";

	}
	else if (mode == "supprimer") {
		this->gestionpersonnel->supprimerPersonnel(Convert::ToInt32(this->textBox1->Text));
		this->textBox7->Text = "L'enregistrement a été supprimer.";

	}
	else if (mode == "modifier") {
		this->gestionpersonnel->modifierPersonnel(Convert::ToInt32(this->textBox1->Text),this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, Convert::ToInt32(this->textBox6->Text), this->textBox8->Text);
		this->textBox7->Text = "Enregistrement en attente de validation";

	}

	this->initialisationENR();
}
private: System::Void btnsupp_Click(System::Object^ sender, System::EventArgs^ e) {

	this->mode = "supprimer";
}
private: System::Void btnmod_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modifier";

}
};
}
