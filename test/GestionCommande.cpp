#include "pch.h"
#include "GestionCommande.h"



namespace NS_SVC
{
    gestioncommande::gestioncommande()
    {

        this->cad = gcnew NS_Composants::CL_CAD();
        this->commande = gcnew NS_Composants::mapCommande();
        this->ds = gcnew DataSet();
        
    }
        


    DataSet^ gestioncommande::listeCommande(String^ dataTableName)
    {

        this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
        return this->ds;
    }

    void gestioncommande::ajouterCommande(String^ reference, int ht, int tva, String^ dateLivraison, String^ emission, int idclient, int idpersonnel, String^ adresseSoc)
    {

        
        this->commande->setref(reference);
        this->commande->setAdresseSoc(adresseSoc);
        this->commande->setHt(ht);
        this->commande->setTva(tva);
        this->commande->setdate_livraison(dateLivraison);
        this->commande->setdate_emission(emission);
        this->commande->setidPersonnel(idpersonnel);
        this->commande->setidcli(idclient);



        this->cad->actionRows(this->commande->INSERT());
    }

    void gestioncommande::modifiercommande(int id ,String^ reference, int ht, int tva, String^ dateLivraison, String^ emission, int idclient, int idpersonnel, String^ adresseSoc)
    {
        this->commande->setidcom(id);
        this->commande->setref(reference);
        this->commande->setAdresseSoc(adresseSoc);
        this->commande->setHt(ht);
        this->commande->setTva(tva);
        this->commande->setdate_livraison(dateLivraison);
        this->commande->setdate_emission(emission);
        this->commande->setidPersonnel(idpersonnel);
        this->commande->setidcli(idclient);



        this->cad->actionRows(this->commande->UPDATE());
    }

    void gestioncommande::supprimmercommande(int id)
    {

        this->commande->setidcom(id);
        this->cad->actionRows(this->commande->DELETE());
    }

    DataSet^ gestioncommande::listeclient()
    {

        this->ds = this->cad->getRows(this->commande->SELECTByIdclient(), "TB_COMMANDE");
        return this->ds;
    }
}