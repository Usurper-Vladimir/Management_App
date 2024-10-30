#include "pch.h"
#include "mappCommande.h"

namespace NS_Composants
{
    mapCommande::mapCommande(void)
    {
        this->id_commande = -1;
        this->reference = "RIEN";
        this->Ht = -1;
        this->Tva = -1;
        this->date_livraison = "RIEN";
        this->date_emission = "RIEN";
        this->id_personnel = -1;
        this->id_client = -1;
        this->adresse_soc = "RIEN";
    }

    String^ mapCommande::SELECT(void) {
        return "SELECT * FROM TB_COMMANDE ;";
    }

    String^ mapCommande::SELECTByIdPersonnel(void)
    {
        return "SELECT id_commande, reference, HT, Tva, date_livraison, date_emission,adresse_soc, id_personnel, id_client " +
            "FROM TB_COMMANDE " +
            "WHERE (id_personnel = " + this->id_personnel + ");";
    }
    String^ mapCommande::SELECTByIdclient(void)
    {
        return "SELECT id_commande, reference, HT, Tva, date_livraison,adresse_soc, date_emission, id_personnel, id_client " +
            "FROM TB_COMMANDE " +
            "WHERE (id_client = " + this->id_client + ");";
    }



    String^ mapCommande::INSERT(void)
    {
        return "INSERT INTO TB_COMMANDE(reference, HT, Tva, date_livraison, date_emission, id_personnel, id_client,adresse_soc) " +
            "VALUES('" + this->reference + "', " + this->Ht + ", " + this->Tva + ", '" +
            this->date_livraison + "', '" + this->date_emission +
            "', " + this->id_personnel + ", " + this->id_client + ", " + this->adresse_soc + ")SELECT @@IDENTITY;";
    }

    String^ mapCommande::UPDATE(void)
    {
        return "UPDATE TB_COMMANDE " +
            "SET reference ='" + this->reference + "', HT =" + this->Ht + ", Tva =" + this->Tva +
            ", date_livraison ='" + this->date_livraison + "', date_emission ='" +
            this->date_emission + "', id_personnel =" + this->id_personnel +
            ", id_client =" + this->id_client + ", adresse_soc =" + this->adresse_soc +
            " WHERE (id_commande =  " + this->id_commande + "); ";
    }

    String^ mapCommande::DELETE(void)
    {
        return "DELETE FROM TB_COMMANDE " +
            "WHERE (id_commande = " + this->id_commande + ");";
    }

    void mapCommande::setidcom(int IdCommande)
    {
        this->id_commande = IdCommande;
    }

    void mapCommande::setref(String^ Reference)
    {
         this->reference = Reference;
    }
    String^ mapCommande::getref(void) {
        return this->reference;

    }
    void mapCommande::setAdresseSoc(String^ adresse) {
         this->adresse_soc= adresse;

    }

    int mapCommande::getidcom(void)
    {
        return this->id_commande;
    }

    void mapCommande::setHt(int Ht)
    {
        this->Ht = Ht;
    }

    int mapCommande::getHt(void)
    {
        return this->Ht;
    }

    void mapCommande::setTva(int Tva)
    {
        this->Tva = Tva;
    }

    int mapCommande::getTva(void)
    {
        return this->Tva;
    }



    int mapCommande::getTtc(void)
    {
        return static_cast<double>(this->Ht) + (static_cast<double>(this->Ht) * static_cast<double>(this->Tva) / 100.0);;
    }

    void mapCommande::setdate_livraison(String^ DateLivraison)
    {

        this->date_livraison = DateLivraison;
    }

    String^ mapCommande::getdate_livraison(void)
    {
        return this->date_livraison;
    }

    void mapCommande::setdate_emission(String^ DateEmission)
    {

        this->date_emission = DateEmission;
    }

    String^ mapCommande::getdate_emission(void)
    {
        return this->date_emission;
    }

    String^ mapCommande::getAdresseSoc(void)
    {
        return this->adresse_soc;
    }
    void mapCommande::setidPersonnel(int IdPersonnel)
    {
         this->id_personnel = IdPersonnel;
    }

    int mapCommande::getidPersonnel(void)
    {
        return this->id_personnel;
    }

    void mapCommande::setidcli(int IdClient)
    {
         this->id_client = IdClient;
    }

    int mapCommande::getidcli(void)
    {
        return this->id_client;
    }
}
