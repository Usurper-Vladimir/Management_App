#pragma once
using namespace System;
namespace NS_Composants

{
	ref class mapPersonnel
	{
	private:
		int id_personnel;
		String^ nom;
		String^ prenom;
		String^ poste;
		String^ AdresseP;
		String^ date_embauche;
		int id_personnel_1;


	public:

		mapPersonnel(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		int getid_Personnel(void);
		void setid_Personnel(int);

		void setnom(String^);
		String^ getnom(void);



		void setprenom(String^);
		String^ getprenom(void);

		void setposte(String^);
		String^ getposte(void);

		void setdate_em(String^);
		String^ getdate_em(void);

		int getid_Personnel_1(void);
		void setid_Personnel_1(int);

		void setAdresseP(String^);
		String^ getAdresseP(void);


	};

}