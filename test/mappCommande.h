#pragma once
using namespace System;
namespace NS_Composants

{
	ref class mapCommande
	{
	private:
		int id_commande;
		String^ reference;
		int Ht;
		int Tva;
		String^ date_livraison;
		String^ date_emission;
		String^ adresse_soc;
		int id_personnel;
		int id_client;



	public:

		mapCommande(void);
		String^ SELECTByIdPersonnel(void);
		String^ SELECTByIdclient(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setref(String^);
		String^ getref(void);

		int getidcom(void);
		void setidcom(int);




		void setHt(int);
		int getHt(void);

		void setTva(int);
		int getTva(void);


		int getTtc(void);

		void setdate_livraison(String^);
		String^ getdate_livraison(void);

		void setdate_emission(String^);
		String^ getdate_emission(void);

		void setAdresseSoc(String^);
		String^ getAdresseSoc(void);


		int getidPersonnel(void);
		void setidPersonnel(int);


		int getidcli(void);
		void setidcli(int);


	};

}
