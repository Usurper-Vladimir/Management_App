#pragma once
#include "CL_mappCommande.h"
#include "Gestion_Commande.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Commandes
	/// </summary>
	public ref class Commandes : public System::Windows::Forms::Form
	{
	public:
		Commandes(void)
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
		~Commandes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgv_Commande;

	private: System::Windows::Forms::TextBox^ text_id;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_DRS;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ text_DE;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ text_DC;

	private: System::Windows::Forms::Label^ lable12;
	private: System::Windows::Forms::TextBox^ text_DL;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text_reference;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgv_info;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

	private: NS_SVC::Gestion_Commande^ gestionCommande;
	private: DataSet^ dsCommande;
	private: String^ mode;
	private: int index;
	private: int rowsCount;
	private: int id;
	private: System::Windows::Forms::TextBox^ text_idClient;

	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgv_Commande = (gcnew System::Windows::Forms::DataGridView());
			this->text_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_DRS = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_DE = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_DC = (gcnew System::Windows::Forms::TextBox());
			this->lable12 = (gcnew System::Windows::Forms::Label());
			this->text_DL = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_reference = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dgv_info = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->text_idClient = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Commande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_info))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Location = System::Drawing::Point(11, 290);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 46);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Location = System::Drawing::Point(11, 201);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Location = System::Drawing::Point(11, 96);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 46);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::AliceBlue;
			this->button4->Location = System::Drawing::Point(100, 391);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 55);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Commandes::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::AliceBlue;
			this->button3->Location = System::Drawing::Point(100, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 55);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Modifier commande";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Commandes::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::AliceBlue;
			this->button2->Location = System::Drawing::Point(100, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 55);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Supprimer commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Commandes::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->Location = System::Drawing::Point(100, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 55);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Ajouter commande";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Commandes::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Azure;
			this->label1->Location = System::Drawing::Point(28, 9);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(100, 0, 100, 0);
			this->label1->Size = System::Drawing::Size(564, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Gestion des commandes";
			// 
			// dgv_Commande
			// 
			this->dgv_Commande->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dgv_Commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Commande->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgv_Commande->Location = System::Drawing::Point(311, 322);
			this->dgv_Commande->Name = L"dgv_Commande";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Commande->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_Commande->RowHeadersWidth = 62;
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->dgv_Commande->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dgv_Commande->RowTemplate->Height = 28;
			this->dgv_Commande->Size = System::Drawing::Size(372, 308);
			this->dgv_Commande->TabIndex = 25;
			this->dgv_Commande->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Commandes::dgv_Commande_CellContentClick);
			// 
			// text_id
			// 
			this->text_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_id->Location = System::Drawing::Point(337, 104);
			this->text_id->Name = L"text_id";
			this->text_id->Size = System::Drawing::Size(61, 26);
			this->text_id->TabIndex = 48;
			this->text_id->TextChanged += gcnew System::EventHandler(this, &Commandes::text_id_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(332, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 25);
			this->label4->TabIndex = 47;
			this->label4->Text = L"ID Commande";
			// 
			// text_DRS
			// 
			this->text_DRS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_DRS->Location = System::Drawing::Point(636, 267);
			this->text_DRS->Name = L"text_DRS";
			this->text_DRS->Size = System::Drawing::Size(136, 26);
			this->text_DRS->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(631, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 25);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Date reglement solde";
			// 
			// text_DE
			// 
			this->text_DE->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_DE->Location = System::Drawing::Point(636, 188);
			this->text_DE->Name = L"text_DE";
			this->text_DE->Size = System::Drawing::Size(68, 26);
			this->text_DE->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(631, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Date emission";
			// 
			// text_DC
			// 
			this->text_DC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_DC->Location = System::Drawing::Point(627, 104);
			this->text_DC->Name = L"text_DC";
			this->text_DC->Size = System::Drawing::Size(145, 26);
			this->text_DC->TabIndex = 42;
			// 
			// lable12
			// 
			this->lable12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lable12->AutoSize = true;
			this->lable12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable12->ForeColor = System::Drawing::Color::Black;
			this->lable12->Location = System::Drawing::Point(622, 76);
			this->lable12->Name = L"lable12";
			this->lable12->Size = System::Drawing::Size(160, 25);
			this->lable12->TabIndex = 41;
			this->lable12->Text = L"Date Commande";
			// 
			// text_DL
			// 
			this->text_DL->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_DL->Location = System::Drawing::Point(337, 264);
			this->text_DL->Name = L"text_DL";
			this->text_DL->Size = System::Drawing::Size(119, 26);
			this->text_DL->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(332, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 25);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Date Livraison";
			// 
			// text_reference
			// 
			this->text_reference->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_reference->Location = System::Drawing::Point(337, 181);
			this->text_reference->Name = L"text_reference";
			this->text_reference->Size = System::Drawing::Size(121, 26);
			this->text_reference->TabIndex = 38;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(332, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 25);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Reference Commande";
			// 
			// dgv_info
			// 
			this->dgv_info->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dgv_info->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_info->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgv_info->Location = System::Drawing::Point(763, 322);
			this->dgv_info->Name = L"dgv_info";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_info->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgv_info->RowHeadersWidth = 62;
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->dgv_info->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgv_info->RowTemplate->Height = 28;
			this->dgv_info->Size = System::Drawing::Size(372, 308);
			this->dgv_info->TabIndex = 49;
			this->dgv_info->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Commandes::dgv_info_CellContentClick);
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
			this->button5->Location = System::Drawing::Point(998, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 74);
			this->button5->TabIndex = 50;
			this->button5->Text = L"Afficher Articles de la commande";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Commandes::button5_Click);
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
			this->button6->Location = System::Drawing::Point(998, 238);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 55);
			this->button6->TabIndex = 51;
			this->button6->Text = L"Afficher client";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Commandes::button6_Click);
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
			this->button7->Location = System::Drawing::Point(998, 63);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 79);
			this->button7->TabIndex = 52;
			this->button7->Text = L"Afficher mode de paiment";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Commandes::button7_Click);
			// 
			// text_idClient
			// 
			this->text_idClient->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_idClient->Location = System::Drawing::Point(817, 188);
			this->text_idClient->Name = L"text_idClient";
			this->text_idClient->Size = System::Drawing::Size(61, 26);
			this->text_idClient->TabIndex = 54;
			this->text_idClient->TextChanged += gcnew System::EventHandler(this, &Commandes::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(812, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 25);
			this->label7->TabIndex = 53;
			this->label7->Text = L"ID Client";
			this->label7->Click += gcnew System::EventHandler(this, &Commandes::label7_Click);
			// 
			// Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1257, 688);
			this->Controls->Add(this->text_idClient);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dgv_info);
			this->Controls->Add(this->text_id);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text_DRS);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_DE);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->text_DC);
			this->Controls->Add(this->lable12);
			this->Controls->Add(this->text_DL);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_reference);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgv_Commande);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Commandes";
			this->Text = L"Commandes";
			this->Load += gcnew System::EventHandler(this, &Commandes::Commandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Commande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_info))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "nouveau";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AfficherInfoClient();
	}
	private: System::Void Commandes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->initialisationENR();
	}

	private: void initialisationENR(void)
	{
		this->gestionCommande = gcnew NS_SVC::Gestion_Commande();
		this->dgv_Commande->Columns->Clear();
		this->dsCommande = this->gestionCommande->ListeCommande("LesPersonnel");
		this->rowsCount = this->dsCommande->Tables["LesPersonnel"]->Rows->Count;
		this->index = 0;
		this->dgv_Commande->DataSource = this->dsCommande;
		this->dgv_Commande->DataMember = "LesPersonnel";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "supprimer";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "modifier";

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mode == "nouveau") {
			this->gestionCommande->ajouter(this->text_reference->Text, this->text_DL->Text, this->text_DC->Text, this->text_DE->Text, this->text_DRS->Text, Convert::ToInt32(text_idClient->Text));
		}if (mode == "modifier") {
			this->gestionCommande->modifier(Convert::ToInt32(text_id->Text), this->text_reference->Text, this->text_DL->Text, this->text_DC->Text, this->text_DE->Text, this->text_DRS->Text, Convert::ToInt32(text_idClient->Text));
		}if (mode == "supprimer") {
			this->gestionCommande->supprimer(Convert::ToInt32(text_id->Text));
		}
		initialisationENR();
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void AfficherInfoClient() {
		String^ connectionString = "Data Source=DESKTOP-ESRV22V\\SQLEXPRESS;Initial Catalog=ProjetPooOfficiel;Integrated Security=True;Encrypt=False";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT client.Nom_client, Client.Prenom_client FROM Commande "
				"JOIN client ON Commande.ID_client = Client.ID_client "
				"WHERE Commande.ID_commande = " + Convert::ToInt32(text_id->Text);

			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

			SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);
			DataTable^ dataTableClient = gcnew DataTable();
			adapterClient->Fill(dataTableClient);
			dgv_info->DataSource = dataTableClient;

		}
		catch (Exception^ ex) {
			// Handle exceptions appropriately (e.g., show an error message).
		}
		finally {
			connection->Close();
		}

	}

	private: void AfficherInfoArticle() {
		String^ connectionString = "Data Source=DESKTOP-ESRV22V\\SQLEXPRESS;Initial Catalog=ProjetPooOfficiel;Integrated Security=True;Encrypt=False";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT Article.Référances_article, Article.Nom_article, Contenir.qtte_article, Contenir.prix_HT_article,remisz_commerciale "
				"FROM Contenir "
				"JOIN Article ON Contenir.ID_article = Article.ID_article "
				"WHERE Contenir.id_commande = " + Convert::ToInt32(text_id->Text);

			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

			SqlDataAdapter^ adapterArticle = gcnew SqlDataAdapter(query, connection);
			DataTable^ dataTableArticle = gcnew DataTable();
			adapterArticle->Fill(dataTableArticle);
			dgv_info->DataSource = dataTableArticle;

		}
		catch (Exception^ ex) {
			// Handle exceptions appropriately (e.g., show an error message).
		}
		finally {
			connection->Close();
		}

	}
	private: void AfficherInfoPaiment() {
		String^ connectionString = "Data Source=DESKTOP-ESRV22V\\SQLEXPRESS;Initial Catalog=ProjetPooOfficiel;Integrated Security=True;Encrypt=False";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT moyen_de_paiement, date_de_paiement FROM mode_de_paiement WHERE id_commande = " + Convert::ToInt32(text_id->Text);

			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.

			SqlDataAdapter^ adapterPaiment = gcnew SqlDataAdapter(query, connection);
			DataTable^ dataTablePaiment = gcnew DataTable();
			adapterPaiment->Fill(dataTablePaiment);
			dgv_info->DataSource = dataTablePaiment;

		}
		catch (Exception^ ex) {
			// Handle exceptions appropriately (e.g., show an error message).
		}
		finally {
			connection->Close();
		}

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AfficherInfoArticle();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AfficherInfoPaiment();
	}
	private: System::Void dgv_Commande_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void text_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgv_info_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
