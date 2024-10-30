#pragma once
#include"CL_CAD.h"
#include "GestionStock.h"
#include "mappArticle.h"
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStock
	/// </summary>
	public ref class MyFormStock : public System::Windows::Forms::Form
	{
	public:
		MyFormStock(void)
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
		~MyFormStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox7;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnsave;
	private: System::Windows::Forms::Button^ btnsupp;
	private: System::Windows::Forms::Button^ btnmod;
	private: System::Windows::Forms::Button^ btnajouter;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;


	private: NS_SVC::GestionStock^ gestionpersonnel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStock::typeid));
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnsave = (gcnew System::Windows::Forms::Button());
			this->btnsupp = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btnajouter = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(24, 649);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1130, 72);
			this->textBox7->TabIndex = 58;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 625);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 20);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Message";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 352);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1131, 254);
			this->dataGridView1->TabIndex = 56;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(854, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 26);
			this->textBox1->TabIndex = 55;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(849, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 20);
			this->label7->TabIndex = 54;
			this->label7->Text = L"Reduction De Saison";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(572, 131);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 26);
			this->textBox6->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(567, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 20);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Referance Article";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(572, 38);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 26);
			this->textBox5->TabIndex = 51;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(567, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 50;
			this->label5->Text = L"ID Article";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(572, 203);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(204, 26);
			this->textBox4->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(567, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 20);
			this->label4->TabIndex = 48;
			this->label4->Text = L"seuil reaprovisionement";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(850, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(222, 26);
			this->textBox3->TabIndex = 47;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(849, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 20);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Prix Unitaire HT";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(852, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 26);
			this->textBox2->TabIndex = 45;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(849, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 20);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Quantité en Stock";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(30, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Gestion Stock";
			// 
			// btnsave
			// 
			this->btnsave->BackColor = System::Drawing::Color::SeaGreen;
			this->btnsave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsave->Location = System::Drawing::Point(230, 152);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(182, 77);
			this->btnsave->TabIndex = 62;
			this->btnsave->Text = L"Enregistrer";
			this->btnsave->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsave->UseVisualStyleBackColor = false;
			this->btnsave->Click += gcnew System::EventHandler(this, &MyFormStock::btnsave_Click_1);
			// 
			// btnsupp
			// 
			this->btnsupp->BackColor = System::Drawing::Color::Firebrick;
			this->btnsupp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsupp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsupp.Image")));
			this->btnsupp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsupp->Location = System::Drawing::Point(230, 69);
			this->btnsupp->Name = L"btnsupp";
			this->btnsupp->Size = System::Drawing::Size(182, 77);
			this->btnsupp->TabIndex = 61;
			this->btnsupp->Text = L"Supprimer";
			this->btnsupp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsupp->UseVisualStyleBackColor = false;
			this->btnsupp->Click += gcnew System::EventHandler(this, &MyFormStock::btnsupp_Click);
			// 
			// btnmod
			// 
			this->btnmod->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnmod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmod->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnmod.Image")));
			this->btnmod->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmod->Location = System::Drawing::Point(34, 152);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(182, 77);
			this->btnmod->TabIndex = 60;
			this->btnmod->Text = L"Modifier";
			this->btnmod->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmod->UseVisualStyleBackColor = false;
			this->btnmod->Click += gcnew System::EventHandler(this, &MyFormStock::btnmod_Click);
			// 
			// btnajouter
			// 
			this->btnajouter->BackColor = System::Drawing::Color::Moccasin;
			this->btnajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnajouter.Image")));
			this->btnajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnajouter->Location = System::Drawing::Point(34, 69);
			this->btnajouter->Name = L"btnajouter";
			this->btnajouter->Size = System::Drawing::Size(182, 77);
			this->btnajouter->TabIndex = 59;
			this->btnajouter->Text = L"Ajouter";
			this->btnajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnajouter->UseVisualStyleBackColor = false;
			this->btnajouter->Click += gcnew System::EventHandler(this, &MyFormStock::btnajouter_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(719, 291);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(204, 26);
			this->textBox8->TabIndex = 68;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(748, 265);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 20);
			this->label9->TabIndex = 67;
			this->label9->Text = L"nom article";
			// 
			// MyFormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1178, 737);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->btnsupp);
			this->Controls->Add(this->btnmod);
			this->Controls->Add(this->btnajouter);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyFormStock";
			this->Text = L"MyFormStock";
			this->Load += gcnew System::EventHandler(this, &MyFormStock::MyFormStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void initialisationENR(void)

		{

			this->gestionpersonnel = gcnew NS_SVC::GestionStock();
			this->dataGridView1->Columns->Clear();
			this->dsPersonnel = this->gestionpersonnel->listeArticles("Le Personnel");
			this->rowsCount = this->dsPersonnel->Tables["Le Personnel"]->Rows->Count;
			this->index = 0;
			this->dataGridView1->DataSource = this->dsPersonnel;
			this->dataGridView1->DataMember = "Le Personnel";

		}
	private: System::Void MyFormStock_Load(System::Object^ sender, System::EventArgs^ e) {
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



private: System::Void btnsupp_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "supprimer";
}
private: System::Void btnmod_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modifier";
}

private: System::Void btnsave_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "nouveau") {
		this->gestionpersonnel->ajouterArticle(this->textBox6->Text, Convert::ToInt32(this->textBox2->Text), Convert::ToInt32(this->textBox3->Text), Convert::ToInt32(this->textBox1->Text), this->textBox8->Text, Convert::ToInt32(this->textBox4->Text));
		this->textBox7->Text = "Veuillez saisir les renseignements avant d'enregister";

	}
	else if (mode == "supprimer") {
		this->gestionpersonnel->supprimerArticle(Convert::ToInt32(this->textBox5->Text));
		this->textBox7->Text = "L'enregistrement a été supprimer.";

	}
	else if (mode == "modifier") {
		this->gestionpersonnel->modifierArticle(Convert::ToInt32(this->textBox5->Text), this->textBox6->Text, Convert::ToInt32(this->textBox2->Text), Convert::ToInt32(this->textBox3->Text), Convert::ToInt32(this->textBox1->Text), this->textBox8->Text, Convert::ToInt32(this->textBox4->Text));
		this->textBox7->Text = "Enregistrement en attente de validation";

	}

	this->initialisationENR();
}
};
}
