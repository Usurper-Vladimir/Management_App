#include "pch.h"
#include "mappPaiement.h"
namespace NS_Composants
{
    mappaiement::mappaiement(void)
    {
        this->id_paiement = -1;
        this->montant_paiement = -1;
        this->moyen_paiement = -1;
        this->date_paiement = "RIEN";
        this->id_commande = -1;
    }

    String^ mappaiement::SELECT(void)
    {
        return "SELECT id_paiement, montant_paiement, moyen_paiement, date_paiement, id_commande " +
            "FROM TB_PAIEMENT;";
    }

    String^ mappaiement::INSERT(void)
    {
        return "INSERT INTO TB_PAIEMENT " +
            "(id_paiement, montant_paiement, moyen_paiement, date_paiement, id_commande) " +
            "VALUES(" + this->getIDPaiement() + ", " + this->getMontantPaiement() + ", " +
            this->getMoyenPaiement() + ", '" + this->getDatePaiement()+ "', " +
            this->getIDCommande() + ");";
    }
    String^ mappaiement::UPDATE(void)
    {
        return "UPDATE TB_PAIEMENT " +
            "SET <montant_paiement> = " + this->getMontantPaiement() + ", " +
            "moyen_paiement = " + this->getMoyenPaiement() + ", " +
            "date_paiement = '" + this->getDatePaiement() + "', " +
            "id_commande = " + this->getIDCommande() + " " +
            "WHERE(id_paiement = " + this->getIDPaiement() + ");";
    }

    String^ mappaiement::DELETE(void)
    {
        return "DELETE FROM TB_PAIEMENT " +
            "WHERE(id_paiement = " + this->getIDPaiement() + ");";
    }

    void mappaiement::setIDPaiement(int id_paiement)
    {
        
            this->id_paiement = id_paiement;
        
    }

    void mappaiement::setMontantPaiement(int montant_paiement)
    {
       
            this->montant_paiement = montant_paiement;
        
    }

    void mappaiement::setMoyenPaiement(int moyen_paiement)
    {
        
            this->moyen_paiement = moyen_paiement;
        
    }

    void mappaiement::setDatePaiement(String^ date_paiement)
    {
        this->date_paiement = date_paiement;
    }

    void mappaiement::setIDCommande(int id_commande)
    {
       
            this->id_commande = id_commande;
        
    }

    int mappaiement::getIDPaiement(void)
    {
        return this->id_paiement;
    }

    int mappaiement::getMontantPaiement(void)
    {
        return this->montant_paiement;
    }

    int mappaiement::getMoyenPaiement(void)
    {
        return this->moyen_paiement;
    }

    String^ mappaiement::getDatePaiement(void)
    {
        return this->date_paiement;
    }

    int mappaiement::getIDCommande(void)
    {
        return this->id_commande;
    }
}