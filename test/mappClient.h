#pragma once
using namespace System;
namespace NS_Composants

{
	ref class mapClient
	{
	private:
		int id_client;
		String^ nom;
		String^ prenom;
		int^ numero;
		String^ date_de_naissance;
		String^ date_premiere_achat;




	public:

		mapClient(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setIdcli(int);
		int getIdcli(void);


		void setnom(String^);
		String^ getnom(void);



		void setprenom(String^);
		String^ getprenom(void);

		void setnum(int^);
		int^ getnum(void);

		void setdateN(String^);
		String^ getdateN(void);

		void setdatePA(String^);
		String^ getdatePA(void);

	};

}

