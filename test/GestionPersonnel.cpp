#include "pch.h"
#include "gestionPersonnel.h"

namespace NS_SVC
{
    GestionPersonnel::GestionPersonnel(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->personnel = gcnew NS_Composants::mapPersonnel();
    }

    DataSet^ GestionPersonnel::listePersonnel(String^ dataTableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
        return this->ds;
    }

    void GestionPersonnel::ajouterPersonnel(String^ nom, String^ prenom, String^ dateEmbauche, String^ poste, int idPersonnel1, String^ adresse_Personnel)
    {
        this->personnel->setnom(nom);
        this->personnel->setprenom(prenom);
        this->personnel->setposte(poste);
        this->personnel->setdate_em(dateEmbauche);
        this->personnel->setAdresseP(adresse_Personnel);
        this->personnel->setid_Personnel_1(idPersonnel1);

        this->cad->actionRows(this->personnel->INSERT());
    }

    void GestionPersonnel::modifierPersonnel(int idPersonnel, String^ nom, String^ prenom, String^ dateEmbauche, String^ poste, int idPersonnel1, String^ adresse_Personnel)
    {

        
        this->personnel->setnom(nom);
        this->personnel->setid_Personnel(idPersonnel);
        this->personnel->setprenom(prenom);
        this->personnel->setposte(poste);
        this->personnel->setdate_em(dateEmbauche);
        this->personnel->setid_Personnel_1(idPersonnel1);
        this->personnel->setAdresseP(adresse_Personnel);
        this->cad->actionRows(this->personnel->UPDATE());
    }

    void GestionPersonnel::supprimerPersonnel(int idPersonnel)
    {
        this->personnel->setid_Personnel(idPersonnel);
        this->cad->actionRows(this->personnel->DELETE());
    }
}