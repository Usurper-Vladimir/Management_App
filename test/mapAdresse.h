#pragma once
using namespace System;
namespace NS_Composants

{
	ref class mapAdresse
	{
	private:
		int id_Adresse;
		String^ ville;
		String^ rue;
		String^ cp;
		int id_Client;
		int id_Client1;



	public:

		mapAdresse(void);
		String^ SELECTByIdClient(void);
		String^ SELECTByIdClient1(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setIdAdresse(int);
		int getIdAdresse(void);


		void setVille(String^);
		String^ getVille(void);

		void setrue(String^);
		String^ getrue(void);

		void setCp(String^);
		String^ getCp(void);

		int getidClient(void);
		void setidClient(int);

		int getidClient1(void);
		void setidClient1(int);


	};

}