#pragma once

#include "CL_CAD.h"
#include "mappPersonnel.h" 
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
    ref class GestionPersonnel
    {
    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::mapPersonnel^ personnel;
        DataSet^ ds;

    public:
        GestionPersonnel(void);
        DataSet^ listePersonnel(String^ dataTableName);
        void ajouterPersonnel(String^ nom, String^ prenom, String^ poste, String^ dateEmbauche, int idPersonnel1, String^ adresse_Personnel);
        void modifierPersonnel(int idPersonnel, String^ nom, String^ prenom, String^ poste, String^ dateEmbauche, int idPersonnel1, String^ adresse_Personnel);
        void supprimerPersonnel(int idPersonnel);
    };
}