#include "pch.h"
#include "mapContenir.h"

namespace NS_Composants
{
    mapContenir::mapContenir(void)
    {
        this->id_article = -1;
        this->id_commande = -1;
        this->quantite = -1;
    }

    String^ mapContenir::SELECT(void)
    {
        return "SELECT id_article, id_commande, quantite FROM TB_CONTENIR;";
    }

    String^ mapContenir::INSERT(void)
    {
        return "INSERT INTO TB_CONTENIR " +
            "(id_article, id_commande, quantite) " +
            "VALUES(" + this->getIDA() + ", " + this->getIDC() + ", " + this->getQ() + ");";
    }

    String^ mapContenir::UPDATE(void)
    {
        return "UPDATE TB_CONTENIR " +
            "SET id_article = " + this->getIDA() + ", id_commande = " + this->getIDC() +
            ", quantite = " + this->getQ() + " " +
            "WHERE(id_article = " + this->getIDA() + " AND id_commande = " + this->getIDC() + ");";
    }

    String^ mapContenir::DELETE(void)
    {
        return "DELETE FROM TB_CONTENIR " +
            "WHERE(id_article = " + this->getIDA() + " AND id_commande = " + this->getIDC() + ");";
    }

    void mapContenir::setIDA(int id_article)
    {
        if (id_article > 0)
        {
            this->id_article = id_article;
        }
    }

    void mapContenir::setIDC(int id_commande)
    {
        if (id_commande > 0)
        {
            this->id_commande = id_commande;
        }
    }

    void mapContenir::setQ(int quantite)
    {
        if (quantite >= 0)
        {
            this->quantite = quantite;
        }
    }

    int mapContenir::getIDA(void)
    {
        return this->id_article;
    }

    int mapContenir::getIDC(void)
    {
        return this->id_commande;
    }

    int mapContenir::getQ(void)
    {
        return this->quantite;
    }
}
