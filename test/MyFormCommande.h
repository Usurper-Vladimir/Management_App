
#include"mappCommande.h"
#include"GestionCommande.h"
#include"CL_CAD.h"
#pragma once


namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm2
	/// </summary>
	public ref class MyFormCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormCommande(void)
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
		~MyFormCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnajouter;
	private: System::Windows::Forms::Button^ btnsupp;
	private: System::Windows::Forms::Button^ btnmod;
	private: System::Windows::Forms::Button^ btnsave;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label11;





	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: NS_SVC::gestioncommande^ gestioncommande;
	private: DataSet^ dsCommande;
	private: String^ mode;
	private: System::ComponentModel::IContainer^ components;
	private: int index;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCommande::typeid));
			this->btnajouter = (gcnew System::Windows::Forms::Button());
			this->btnsupp = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btnsave = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnajouter
			// 
			this->btnajouter->BackColor = System::Drawing::Color::Moccasin;
			this->btnajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnajouter.Image")));
			this->btnajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnajouter->Location = System::Drawing::Point(12, 72);
			this->btnajouter->Name = L"btnajouter";
			this->btnajouter->Size = System::Drawing::Size(122, 77);
			this->btnajouter->TabIndex = 6;
			this->btnajouter->Text = L"Ajouter";
			this->btnajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnajouter->UseVisualStyleBackColor = false;
			this->btnajouter->Click += gcnew System::EventHandler(this, &MyFormCommande::btnajouter_Click);
			// 
			// btnsupp
			// 
			this->btnsupp->BackColor = System::Drawing::Color::Firebrick;
			this->btnsupp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsupp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsupp.Image")));
			this->btnsupp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsupp->Location = System::Drawing::Point(140, 72);
			this->btnsupp->Name = L"btnsupp";
			this->btnsupp->Size = System::Drawing::Size(118, 77);
			this->btnsupp->TabIndex = 8;
			this->btnsupp->Text = L"Supprimer";
			this->btnsupp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsupp->UseVisualStyleBackColor = false;
			this->btnsupp->Click += gcnew System::EventHandler(this, &MyFormCommande::btnsupp_Click);
			// 
			// btnmod
			// 
			this->btnmod->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnmod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmod->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnmod.Image")));
			this->btnmod->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmod->Location = System::Drawing::Point(12, 155);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(122, 77);
			this->btnmod->TabIndex = 7;
			this->btnmod->Text = L"Modifier";
			this->btnmod->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmod->UseVisualStyleBackColor = false;
			this->btnmod->Click += gcnew System::EventHandler(this, &MyFormCommande::btnmod_Click);
			// 
			// btnsave
			// 
			this->btnsave->BackColor = System::Drawing::Color::SeaGreen;
			this->btnsave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnsave->Location = System::Drawing::Point(140, 155);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(118, 77);
			this->btnsave->TabIndex = 9;
			this->btnsave->Text = L"Enregistrer";
			this->btnsave->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsave->UseVisualStyleBackColor = false;
			this->btnsave->Click += gcnew System::EventHandler(this, &MyFormCommande::btnsave_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(651, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ID Commande";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(656, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 26);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(656, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 26);
			this->textBox2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(652, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Reférance commande";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(968, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(162, 26);
			this->textBox3->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(964, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Date Emission";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(656, 205);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(162, 26);
			this->textBox4->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(651, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date Livraison";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(968, 122);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 26);
			this->textBox5->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(964, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"ID Client";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(968, 205);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 26);
			this->textBox6->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(964, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"ID Personnel";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(84, 523);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(318, 93);
			this->panel1->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(186, 48);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(104, 26);
			this->textBox8->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(182, 15);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 25);
			this->label8->TabIndex = 2;
			this->label8->Text = L"TVA";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(26, 48);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(104, 26);
			this->textBox7->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(21, 15);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"HT";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 258);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(550, 255);
			this->dataGridView1->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Azure;
			this->panel2->Controls->Add(this->label11);
			this->panel2->ForeColor = System::Drawing::SystemColors::Control;
			this->panel2->Location = System::Drawing::Point(4, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 54);
			this->panel2->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(16, 14);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(213, 25);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Gestion Commandes";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(562, 438);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(602, 285);
			this->dataGridView2->TabIndex = 31;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(830, 249);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 20);
			this->label12->TabIndex = 33;
			this->label12->Text = L"adresse soc";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(8, 643);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Message";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(12, 668);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(518, 55);
			this->textBox10->TabIndex = 24;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::AliceBlue;
			this->button7->Location = System::Drawing::Point(968, 318);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 74);
			this->button7->TabIndex = 55;
			this->button7->Text = L"Afficher mode de paiment";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormCommande::button7_Click);
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
			this->button6->Location = System::Drawing::Point(585, 318);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 74);
			this->button6->TabIndex = 54;
			this->button6->Text = L"Afficher client";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormCommande::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::AliceBlue;
			this->button5->Location = System::Drawing::Point(764, 318);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 74);
			this->button5->TabIndex = 53;
			this->button5->Text = L"Afficher Articles de la commande";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormCommande::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(803, 279);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(188, 26);
			this->textBox9->TabIndex = 56;
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1178, 737);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
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
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->btnmod);
			this->Controls->Add(this->btnsupp);
			this->Controls->Add(this->btnajouter);
			this->Name = L"MyFormCommande";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyFormCommande::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void initialisationENR(void)

		{
			this->gestioncommande = gcnew NS_SVC::gestioncommande();
			this->dataGridView1->Columns->Clear();
			this->dsCommande= this->gestioncommande->listeCommande("LesPersonnel");
			this->rowsCount = this->dsCommande->Tables["LesPersonnel"]->Rows->Count;
			this->index = 0;
			this->dataGridView1->DataSource = this->dsCommande;
			this->dataGridView1->DataMember = "LesPersonnel";

		}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		this->initialisationENR();
		this->textBox10->Text = "Cnx SQL SERVER ok \r\nEnregistrement chargés";
	}
	


private: System::Void btnajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";

	this->textBox2->Text = "";

	this->textBox3->Text = "";

	this->textBox4->Text = "";

	this->textBox5->Text = "";

	this->textBox6->Text = "";

	this->textBox7->Text = "";

	this->textBox8->Text = "";

	this->textBox9->Text = "";

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
			this->gestioncommande->ajouterCommande(this->textBox2->Text, Convert::ToInt32(this->textBox7->Text), Convert::ToInt32(this->textBox8->Text), this->textBox4->Text, this->textBox3->Text, Convert::ToInt32(this->textBox5->Text), Convert::ToInt32(this->textBox6->Text), this->textBox9->Text);
			this->textBox10->Text = "Veuillez saisir les renseignements avant d'enregister";

		}
		else if (mode == "supprimer") {
			this->gestioncommande->supprimmercommande(Convert::ToInt32(this->textBox1->Text));
			this->textBox10->Text = "L'enregistrement a été supprimer.";

		}
		else if (mode == "modifier") {
			this->gestioncommande->modifiercommande(Convert::ToInt32(this->textBox1->Text),this->textBox2->Text, Convert::ToInt32(this->textBox7->Text), Convert::ToInt32(this->textBox8->Text), this->textBox4->Text, this->textBox3->Text, Convert::ToInt32(this->textBox5->Text), Convert::ToInt32(this->textBox6->Text), this->textBox9->Text);
			this->textBox10->Text = "Enregistrement en attente de validation";

		}
		this->initialisationENR();
	}

	




private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AfficherInfoClient();

}
	   private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		  this->AfficherInfoArticle();
	   
	   }
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AfficherInfoPaiment();
	}



	   private: void AfficherInfoClient() {
		   String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();

			   String^ query = "SELECT TB_CLIENT.nom, TB_CLIENT.prenom FROM TB_COMMANDE "
				   "JOIN TB_CLIENT ON TB_COMMANDE.id_client = TB_CLIENT.id_client "
				   "WHERE TB_COMMANDE.id_commande = " + Convert::ToInt32(textBox1->Text);

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
			  private: void AfficherInfoArticle() {
				  String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";
				  SqlConnection^ connection = gcnew SqlConnection(connectionString);

				  try {
					  connection->Open();

					  String^ query = "SELECT TB_ARTICLE.reference_article, TB_ARTICLE.nom_article, TB_CONTENIR.quantite FROM TB_CONTENIR "
						  "JOIN TB_ARTICLE ON TB_CONTENIR.id_article = TB_ARTICLE.id_article "
						  "WHERE TB_CONTENIR.id_commande = " + Convert::ToInt32(textBox1->Text);

					  // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

					  SqlDataAdapter^ adapterArticle = gcnew SqlDataAdapter(query, connection);
					  DataTable^ dataTableArticle = gcnew DataTable();
					  adapterArticle->Fill(dataTableArticle);
					  dataGridView2->DataSource = dataTableArticle;

				  }
				  catch (Exception^ ex) {
					  // Handle exceptions appropriately (e.g., show an error message).
				  }
				  finally {
					  connection->Close();
				  }

			  }
					 private: void AfficherInfoPaiment() {
						 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";
						 SqlConnection^ connection = gcnew SqlConnection(connectionString);

						 try {
							 connection->Open();

							 String^ query = "SELECT moyen_paiement, date_paiement ,montant_paiement FROM TB_PAIEMENT WHERE id_commande = " + Convert::ToInt32(textBox1->Text);

							 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

							 SqlDataAdapter^ adapterPaiment = gcnew SqlDataAdapter(query, connection);
							 DataTable^ dataTablePaiment = gcnew DataTable();
							 adapterPaiment->Fill(dataTablePaiment);
							 dataGridView2->DataSource = dataTablePaiment;

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
