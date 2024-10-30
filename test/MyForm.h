#pragma once
#include"MyFormPersonnel.h"
#include"MyFormCommande.h"
#include"MyFormClient.h"
#include"MyFormStock.h"
#include"MyFormHome.h"
#include"MyFormStats.h"
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::Panel^ paneTitle;




	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Button^ btnclient;
	private: System::Windows::Forms::Button^ btncommande;
	private: System::Windows::Forms::Button^ btnstock;
	private: System::Windows::Forms::Button^ btnstats;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ btnpersonnel;
	private: System::Windows::Forms::Button^ btnreturnhome;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ paneldesktop;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->paneTitle = (gcnew System::Windows::Forms::Panel());
			this->btnreturnhome = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnclient = (gcnew System::Windows::Forms::Button());
			this->btncommande = (gcnew System::Windows::Forms::Button());
			this->btnstock = (gcnew System::Windows::Forms::Button());
			this->btnstats = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnpersonnel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->paneldesktop = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->paneTitle->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->paneldesktop->SuspendLayout();
			this->SuspendLayout();
			// 
			// paneTitle
			// 
			this->paneTitle->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->paneTitle->Controls->Add(this->btnreturnhome);
			this->paneTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->paneTitle->Location = System::Drawing::Point(176, 0);
			this->paneTitle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->paneTitle->Name = L"paneTitle";
			this->paneTitle->Size = System::Drawing::Size(801, 52);
			this->paneTitle->TabIndex = 1;
			// 
			// btnreturnhome
			// 
			this->btnreturnhome->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnreturnhome->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnreturnhome->FlatAppearance->BorderSize = 0;
			this->btnreturnhome->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btnreturnhome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnreturnhome->Font = (gcnew System::Drawing::Font(L"Arial Black", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnreturnhome->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnreturnhome->Location = System::Drawing::Point(0, 0);
			this->btnreturnhome->Name = L"btnreturnhome";
			this->btnreturnhome->Size = System::Drawing::Size(801, 52);
			this->btnreturnhome->TabIndex = 0;
			this->btnreturnhome->Text = L"HOME";
			this->btnreturnhome->UseVisualStyleBackColor = true;
			this->btnreturnhome->Click += gcnew System::EventHandler(this, &MyForm::btnreturnhome_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLogo.BackgroundImage")));
			this->panelLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(176, 52);
			this->panelLogo->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 0;
			// 
			// btnclient
			// 
			this->btnclient->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnclient->FlatAppearance->BorderSize = 0;
			this->btnclient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnclient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->btnclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnclient->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnclient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclient.Image")));
			this->btnclient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnclient->Location = System::Drawing::Point(0, 114);
			this->btnclient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnclient->Name = L"btnclient";
			this->btnclient->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btnclient->Size = System::Drawing::Size(176, 62);
			this->btnclient->TabIndex = 2;
			this->btnclient->Text = L"Gestion Clients";
			this->btnclient->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnclient->UseVisualStyleBackColor = true;
			this->btnclient->Click += gcnew System::EventHandler(this, &MyForm::btnclient_Click);
			// 
			// btncommande
			// 
			this->btncommande->Dock = System::Windows::Forms::DockStyle::Top;
			this->btncommande->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btncommande->FlatAppearance->BorderSize = 0;
			this->btncommande->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightSalmon;
			this->btncommande->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSalmon;
			this->btncommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncommande->ForeColor = System::Drawing::Color::Gainsboro;
			this->btncommande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncommande.Image")));
			this->btncommande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btncommande->Location = System::Drawing::Point(0, 176);
			this->btncommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btncommande->Name = L"btncommande";
			this->btncommande->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btncommande->Size = System::Drawing::Size(176, 62);
			this->btncommande->TabIndex = 3;
			this->btncommande->Text = L"Gestions Orders";
			this->btncommande->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btncommande->UseVisualStyleBackColor = true;
			this->btncommande->Click += gcnew System::EventHandler(this, &MyForm::btncommande_Click);
			// 
			// btnstock
			// 
			this->btnstock->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnstock->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnstock->FlatAppearance->BorderSize = 0;
			this->btnstock->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Goldenrod;
			this->btnstock->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->btnstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnstock->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnstock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnstock.Image")));
			this->btnstock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnstock->Location = System::Drawing::Point(0, 238);
			this->btnstock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnstock->Name = L"btnstock";
			this->btnstock->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btnstock->Size = System::Drawing::Size(176, 62);
			this->btnstock->TabIndex = 4;
			this->btnstock->Text = L"Gestion Stock";
			this->btnstock->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnstock->UseVisualStyleBackColor = true;
			this->btnstock->Click += gcnew System::EventHandler(this, &MyForm::btnstock_Click);
			// 
			// btnstats
			// 
			this->btnstats->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnstats->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnstats->FlatAppearance->BorderSize = 0;
			this->btnstats->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Crimson;
			this->btnstats->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Crimson;
			this->btnstats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnstats->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnstats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnstats.Image")));
			this->btnstats->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnstats->Location = System::Drawing::Point(0, 300);
			this->btnstats->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnstats->Name = L"btnstats";
			this->btnstats->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btnstats->Size = System::Drawing::Size(176, 62);
			this->btnstats->TabIndex = 5;
			this->btnstats->Text = L"Gestion Stats";
			this->btnstats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnstats->UseVisualStyleBackColor = true;
			this->btnstats->Click += gcnew System::EventHandler(this, &MyForm::btnstats_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMenu->Controls->Add(this->btnstats);
			this->panelMenu->Controls->Add(this->btnstock);
			this->panelMenu->Controls->Add(this->btncommande);
			this->panelMenu->Controls->Add(this->btnclient);
			this->panelMenu->Controls->Add(this->btnpersonnel);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(176, 570);
			this->panelMenu->TabIndex = 0;
			// 
			// btnpersonnel
			// 
			this->btnpersonnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnpersonnel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnpersonnel->FlatAppearance->BorderSize = 0;
			this->btnpersonnel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnpersonnel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnpersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnpersonnel->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnpersonnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnpersonnel.Image")));
			this->btnpersonnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnpersonnel->Location = System::Drawing::Point(0, 52);
			this->btnpersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnpersonnel->Name = L"btnpersonnel";
			this->btnpersonnel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btnpersonnel->Size = System::Drawing::Size(176, 62);
			this->btnpersonnel->TabIndex = 1;
			this->btnpersonnel->Text = L"Gestion Personnel";
			this->btnpersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnpersonnel->UseVisualStyleBackColor = true;
			this->btnpersonnel->Click += gcnew System::EventHandler(this, &MyForm::btnpersonnel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(192, 126);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(402, 101);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// paneldesktop
			// 
			this->paneldesktop->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->paneldesktop->BackColor = System::Drawing::SystemColors::Control;
			this->paneldesktop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->paneldesktop->Controls->Add(this->label6);
			this->paneldesktop->Controls->Add(this->label5);
			this->paneldesktop->Controls->Add(this->label4);
			this->paneldesktop->Controls->Add(this->label3);
			this->paneldesktop->Controls->Add(this->label2);
			this->paneldesktop->Controls->Add(this->pictureBox1);
			this->paneldesktop->Location = System::Drawing::Point(176, 52);
			this->paneldesktop->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->paneldesktop->Name = L"paneldesktop";
			this->paneldesktop->Size = System::Drawing::Size(801, 518);
			this->paneldesktop->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(236, 478);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"FELLAG Hichem";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(426, 478);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"TASSIST Nassim";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(612, 478);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"TASSIST Wassim";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 478);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"KHIREDDINE Lamine";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(327, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"LHNW TEAM";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 570);
			this->Controls->Add(this->paneldesktop);
			this->Controls->Add(this->paneTitle);
			this->Controls->Add(this->panelMenu);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->paneTitle->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->paneldesktop->ResumeLayout(false);
			this->paneldesktop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void ShowFormPersonnel(Form^ formToShow) {
	// Clear existing controls from the panel
	paneldesktop->Controls->Clear();

	// Add the new form to the panel
	formToShow->TopLevel = false;
	formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	formToShow->Dock = DockStyle::Fill;
	paneldesktop->Controls->Add(formToShow);
	formToShow->Show();
}
	   private: System::Void ShowFormCommandes(Form^ formToShow) {
		   // Clear existing controls from the panel
		   paneldesktop->Controls->Clear();

		   // Add the new form to the panel
		   formToShow->TopLevel = false;
		   formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		   formToShow->Dock = DockStyle::Fill;
		   paneldesktop->Controls->Add(formToShow);
		   formToShow->Show();
	   }
private: System::Void ShowFormClient(Form^ formToShow) {
	// Clear existing controls from the panel
	paneldesktop->Controls->Clear();

	// Add the new form to the panel
	formToShow->TopLevel = false;
	formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	formToShow->Dock = DockStyle::Fill;
	paneldesktop->Controls->Add(formToShow);
	formToShow->Show();
}
private: System::Void ShowFormStock(Form^ formToShow) {
	// Clear existing controls from the panel
	paneldesktop->Controls->Clear();

	// Add the new form to the panel
	formToShow->TopLevel = false;
	formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	formToShow->Dock = DockStyle::Fill;
	paneldesktop->Controls->Add(formToShow);
	formToShow->Show();
}
private: System::Void ShowFormHome(Form^ formToShow) {
	// Clear existing controls from the panel
	paneldesktop->Controls->Clear();

	// Add the new form to the panel
	formToShow->TopLevel = false;
	formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	formToShow->Dock = DockStyle::Fill;
	paneldesktop->Controls->Add(formToShow);
	formToShow->Show();
}

private: System::Void ShowFormStats(Form^ formToShow) {
	// Clear existing controls from the panel
	paneldesktop->Controls->Clear();

	// Add the new form to the panel
	formToShow->TopLevel = false;
	formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	formToShow->Dock = DockStyle::Fill;
	paneldesktop->Controls->Add(formToShow);
	formToShow->Show();
}


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnpersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormPersonnel(gcnew test::MyFormPersonnel);
}

private: System::Void btnclient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormClient(gcnew test::MyFormClient);
	
}
private: System::Void btncommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormCommandes(gcnew test::MyFormCommande);
}



private: System::Void btnstock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormCommandes(gcnew test::MyFormStock);
}

private: System::Void btnreturnhome_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormCommandes(gcnew test::MyFormHome);
}
private: System::Void btnstats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowFormCommandes(gcnew test::MyFormStats);
}
};
}
