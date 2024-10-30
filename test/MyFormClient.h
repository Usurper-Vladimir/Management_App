#pragma once
#include "CL_CAD.h"
#include "mappClient.h"
#include "GestionClient.h"

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormClient
	/// </summary>
	public ref class MyFormClient : public System::Windows::Forms::Form
	{
	public:
		MyFormClient(void)
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
		~MyFormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;




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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;




	private: System::Windows::Forms::Button^ btnsave;
	private: System::Windows::Forms::Button^ btnsupp;
	private: System::Windows::Forms::Button^ btnmod;
	private: System::Windows::Forms::Button^ btnajouter;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;

	private: NS_SVC::svcGestionClient^ gestioncommande;
	private: DataSet^ dsCommande;
	private: String^ mode;
	private: System::ComponentModel::IContainer^ components;
	private: int index;


	private: int rowsCount;






	

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormClient::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->btnsave = (gcnew System::Windows::Forms::Button());
			this->btnsupp = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btnajouter = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(16, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion Clients";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(652, 185);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(162, 26);
			this->textBox6->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(648, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Nom Client";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(652, 92);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 26);
			this->textBox5->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(648, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 30;
			this->label5->Text = L"ID Client";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(652, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(162, 26);
			this->textBox4->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(648, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Prénom Client";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(934, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(187, 26);
			this->textBox3->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(930, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Date Naissance";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(932, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 26);
			this->textBox2->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(930, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Numéro Client";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(934, 257);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 26);
			this->textBox1->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(930, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 20);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Date Premier Achat";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(636, 361);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(504, 254);
			this->dataGridView1->TabIndex = 36;
			
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 625);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 20);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Message";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(10, 649);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1130, 72);
			this->textBox7->TabIndex = 38;
			// 
			// btnsave
			// 
			this->btnsave->BackColor = System::Drawing::Color::SeaGreen;
			this->btnsave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsave->Location = System::Drawing::Point(216, 149);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(182, 77);
			this->btnsave->TabIndex = 42;
			this->btnsave->Text = L"Enregistrer";
			this->btnsave->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsave->UseVisualStyleBackColor = false;
			this->btnsave->Click += gcnew System::EventHandler(this, &MyFormClient::btnsave_Click);
			// 
			// btnsupp
			// 
			this->btnsupp->BackColor = System::Drawing::Color::Firebrick;
			this->btnsupp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsupp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsupp.Image")));
			this->btnsupp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsupp->Location = System::Drawing::Point(216, 66);
			this->btnsupp->Name = L"btnsupp";
			this->btnsupp->Size = System::Drawing::Size(182, 77);
			this->btnsupp->TabIndex = 41;
			this->btnsupp->Text = L"Supprimer";
			this->btnsupp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsupp->UseVisualStyleBackColor = false;
			this->btnsupp->Click += gcnew System::EventHandler(this, &MyFormClient::btnsupp_Click);
			// 
			// btnmod
			// 
			this->btnmod->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnmod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmod->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnmod.Image")));
			this->btnmod->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmod->Location = System::Drawing::Point(21, 149);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(182, 77);
			this->btnmod->TabIndex = 40;
			this->btnmod->Text = L"Modifier";
			this->btnmod->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmod->UseVisualStyleBackColor = false;
			this->btnmod->Click += gcnew System::EventHandler(this, &MyFormClient::btnmod_Click);
			// 
			// btnajouter
			// 
			this->btnajouter->BackColor = System::Drawing::Color::Moccasin;
			this->btnajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnajouter.Image")));
			this->btnajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnajouter->Location = System::Drawing::Point(21, 66);
			this->btnajouter->Name = L"btnajouter";
			this->btnajouter->Size = System::Drawing::Size(182, 77);
			this->btnajouter->TabIndex = 39;
			this->btnajouter->Text = L"Ajouter";
			this->btnajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnajouter->UseVisualStyleBackColor = false;
			this->btnajouter->Click += gcnew System::EventHandler(this, &MyFormClient::btnajouter_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(13, 361);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(504, 254);
			this->dataGridView2->TabIndex = 43;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::AliceBlue;
			this->button6->Location = System::Drawing::Point(139, 257);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 74);
			this->button6->TabIndex = 55;
			this->button6->Text = L"Afficher Adresse";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormClient::button6_Click);
			// 
			// MyFormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1178, 737);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
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
			this->Name = L"MyFormClient";
			this->Text = L"MyFormClient";
			this->Load += gcnew System::EventHandler(this, &MyFormClient::MyFormClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void initialisationENR(void)

		{
			this->gestioncommande = gcnew NS_SVC::svcGestionClient();
			this->dataGridView1->Columns->Clear();
			this->dsCommande = this->gestioncommande->listeClients("LesPersonnel");
			this->rowsCount = this->dsCommande->Tables["LesPersonnel"]->Rows->Count;
			this->index = 0;
			this->dataGridView1->DataSource = this->dsCommande;
			this->dataGridView1->DataMember = "LesPersonnel";

		}

	private: System::Void MyFormClient_Load(System::Object^ sender, System::EventArgs^ e) {
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

	this->mode = "nouveau";
}

private: System::Void btnsupp_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "supprimer";
}
private: System::Void btnmod_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modifier";
}
private: System::Void btnsave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "nouveau") {
		this->gestioncommande->ajouter(this->textBox6->Text, this->textBox4->Text, this->textBox3->Text, Convert::ToInt32(this->textBox2->Text), this->textBox1->Text);
		this->textBox7->Text = "Veuillez saisir les renseignements avant d'enregister";

	}
	else if (mode == "supprimer") {
		this->gestioncommande->supprimer(Convert::ToInt32(this->textBox5->Text));
		this->textBox7->Text = "L'enregistrement a été supprimer.";

	}
	else if (mode == "modifier") {
		this->gestioncommande->modifier(Convert::ToInt32(this->textBox5->Text), this->textBox6->Text, this->textBox4->Text, this->textBox3->Text, Convert::ToInt32(this->textBox2->Text), this->textBox1->Text);
		this->textBox7->Text = "Enregistrement en attente de validation";

	}
	this->initialisationENR();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AfficherAdresse();
}

	   private: void AfficherAdresse() {
		   String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();

			   String^ query = "SELECT * FROM TB_ADRESSE WHERE TB_ADRESSE.id_client = " + Convert::ToInt32(textBox5->Text);
				   

			   // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

			   SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);
			   DataTable^ dataTableClient = gcnew DataTable();
			   adapterClient->Fill(dataTableClient);
			   dataGridView2->DataSource = dataTableClient;

		   }
		   catch (Exception^ ex) {
			   // Handle exceptions appropriately (e.g., show an error message).
		   }
		   finally {
			   connection->Close();
		   }

	   }






};
}
