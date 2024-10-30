#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStats
	/// </summary>
	public ref class MyFormStats : public System::Windows::Forms::Form
	{
	public:
		MyFormStats(void)
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
		~MyFormStats()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::DataGridView^ dataGridView1;












	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 356);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1131, 254);
			this->dataGridView1->TabIndex = 60;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(30, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 25);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Gestion Statistiques";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 625);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 20);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Message";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(24, 649);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1130, 72);
			this->textBox7->TabIndex = 62;
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
			this->button6->Location = System::Drawing::Point(35, 74);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 74);
			this->button6->TabIndex = 63;
			this->button6->Text = L"Requete1";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormStats::button6_Click);
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
			this->button1->Location = System::Drawing::Point(518, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 74);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Requete4";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormStats::button1_Click);
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
			this->button2->Location = System::Drawing::Point(195, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 74);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Requete2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormStats::button2_Click);
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
			this->button3->Location = System::Drawing::Point(518, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 74);
			this->button3->TabIndex = 66;
			this->button3->Text = L"Requete8";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormStats::button3_Click);
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
			this->button4->Location = System::Drawing::Point(350, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 74);
			this->button4->TabIndex = 67;
			this->button4->Text = L"Requete3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormStats::button4_Click);
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
			this->button5->Location = System::Drawing::Point(674, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 74);
			this->button5->TabIndex = 68;
			this->button5->Text = L"Requete5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormStats::button5_Click);
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
			this->button7->Location = System::Drawing::Point(1002, 74);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 74);
			this->button7->TabIndex = 69;
			this->button7->Text = L"Requete7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormStats::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::AliceBlue;
			this->button8->Location = System::Drawing::Point(841, 74);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 74);
			this->button8->TabIndex = 70;
			this->button8->Text = L"Requete6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormStats::button8_Click);
			// 
			// MyFormStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1178, 737);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyFormStats";
			this->Text = L"MyFormStats";
			this->Load += gcnew System::EventHandler(this, &MyFormStats::MyFormStats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormStats_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_1();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_2();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_3();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_4();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_5();

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_6();

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_7();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->REQUETE_8();

}




	private: void REQUETE_1() {

		String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);



		try {

			connection->Open();



			String^ query = "SELECT AVG(c.Ht + c.Tva) AS panier_moyen_apres_remise FROM TB_COMMANDE c JOIN TB_PAIEMENT p ON c.id_commande = p.id_commande;"

				;



			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



			SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

			DataTable^ dataTableClient = gcnew DataTable();

			adapterClient->Fill(dataTableClient);

			dataGridView1->DataSource = dataTableClient;



		}

		catch (Exception^ ex) {

			// Handle exceptions appropriately (e.g., show an error message).

		}

		finally {

			connection->Close();

		}



	}
			 private: void REQUETE_2() {

				 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

				 SqlConnection^ connection = gcnew SqlConnection(connectionString);



				 try {

					 connection->Open();



					 String^ query = "SELECT SUM(Ht) AS chiffre_affaire FROM TB_COMMANDE WHERE MONTH(date_emission) = 12 AND YEAR(date_emission) = 2023;";





					 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



					 SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

					 DataTable^ dataTableClient = gcnew DataTable();

					 adapterClient->Fill(dataTableClient);

					 dataGridView1->DataSource = dataTableClient;



				 }

				 catch (Exception^ ex) {

					 // Handle exceptions appropriately (e.g., show an error message).

				 }

				 finally {

					 connection->Close();

				 }



			 }  private: void REQUETE_3() {

				 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

				 SqlConnection^ connection = gcnew SqlConnection(connectionString);



				 try {

					 connection->Open();



					 String^ query = "SELECT * FROM TB_ARTICLE WHERE stock_article < seuil_reapro;";



					 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



					 SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

					 DataTable^ dataTableClient = gcnew DataTable();

					 adapterClient->Fill(dataTableClient);

					 dataGridView1->DataSource = dataTableClient;



				 }

				 catch (Exception^ ex) {

					 // Handle exceptions appropriately (e.g., show an error message).

				 }

				 finally {

					 connection->Close();

				 }



			 }  private: void REQUETE_4() {

				 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

				 SqlConnection^ connection = gcnew SqlConnection(connectionString);



				 try {

					 connection->Open();



					 String^ query = "DECLARE @idclient INT = 1; SELECT SUM(Ht + Tva) ASmontanttotalachat FROM TB_COMMANDE WHERE id_client = 1; ";



					 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



					 SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

					 DataTable^ dataTableClient = gcnew DataTable();

					 adapterClient->Fill(dataTableClient);

					 dataGridView1->DataSource = dataTableClient;



				 }

				 catch (Exception^ ex) {

					 // Handle exceptions appropriately (e.g., show an error message).

				 }

				 finally {

					 connection->Close();

				 }



			 }  private: void REQUETE_5() {

				 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

				 SqlConnection^ connection = gcnew SqlConnection(connectionString);



				 try {

					 connection->Open();



					 String^ query = " SELECT A.id_article, A.reference_article, A.nom_article, SUM(C.quantite) AS Totalqrticlevendu FROM TB_CONTENIR C INNER JOIN TB_ARTICLE A ON C.id_article = A.id_article    GROUP BY A.id_article, A.reference_article, A.nom_article ORDER BY Totalqrticlevendu DESC;";




					 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



					 SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

					 DataTable^ dataTableClient = gcnew DataTable();

					 adapterClient->Fill(dataTableClient);

					 dataGridView1->DataSource = dataTableClient;



				 }

				 catch (Exception^ ex) {

					 // Handle exceptions appropriately (e.g., show an error message).

				 }

				 finally {

					 connection->Close();

				 }



			 }  private: void REQUETE_6() {

				 String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

				 SqlConnection^ connection = gcnew SqlConnection(connectionString);



				 try {

					 connection->Open();



					 String^ query = "SELECT	A.id_article, A.reference_article, A.nom_article, SUM(C.quantite) AS Totalqrticlevend FROM TB_CONTENIR C INNER JOIN TB_ARTICLE A ON C.id_article = A.id_article GROUP BY A.id_article, A.reference_article, A.nom_article ORDER BY Totalqrticlevend ASC;";






					 // Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



					 SqlDataAdapter^ adapterClient = gcnew SqlDataAdapter(query, connection);

					 DataTable^ dataTableClient = gcnew DataTable();

					 adapterClient->Fill(dataTableClient);

					 dataGridView1->DataSource = dataTableClient;



				 }

				 catch (Exception^ ex) {

					 // Handle exceptions appropriately (e.g., show an error message).

				 }

				 finally {

					 connection->Close();

				 }



			 }

	private: void REQUETE_7() {

		String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);



		try {

			connection->Open();



			String^ query = "		SELECT A.id_article, A.reference_article, A.nom_article, A.stock_article, ((B.Ht + (0.05* B.Ht))* A.stock_article) AS valeurcommerciale FROM TB_ARTICLE A JOIN TB_COMMANDE B ON A.id_article = B.id_client";




			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



			SqlDataAdapter^ adapterArticle = gcnew SqlDataAdapter(query, connection);

			DataTable^ dataTableArticle = gcnew DataTable();

			adapterArticle->Fill(dataTableArticle);

			dataGridView1->DataSource = dataTableArticle;



		}

		catch (Exception^ ex) {

			// Handle exceptions appropriately (e.g., show an error message).

		}

		finally {

			connection->Close();

		}



	}

	private: void REQUETE_8() {

		String^ connectionString = "Data Source=DESKTOP-EA53TAL\\SQLEXPRESS09;Initial Catalog=lamineTchach;Integrated Security=True;Encrypt=False";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);



		try {

			connection->Open();



			String^ query = "SELECT A.id_article, A.reference_article, A.prix_article, A.nom_article, A.stock_article, (B.Ht + B.Tva)* A.stock_article AS valeur_dachat FROM TB_ARTICLE A  JOIN TB_COMMANDE B ON A.id_article = B.id_client;";




			// Replace textBoxArticleID with the actual name of your textbox containing ID_Article.



			SqlDataAdapter^ adapterPaiment = gcnew SqlDataAdapter(query, connection);

			DataTable^ dataTablePaiment = gcnew DataTable();

			adapterPaiment->Fill(dataTablePaiment);

			dataGridView1->DataSource = dataTablePaiment;



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
