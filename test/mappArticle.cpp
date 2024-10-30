#include "pch.h"
#include "mappArticle.h"
namespace NS_Composants
{
    maparticle::maparticle(void)
    {
        this->id_article = -1;
        this->reference_article = "RIEN";
        this->stock_article = -1;
        this->prix_article = -1;
        this->reduction_de_saison = -1;
        this->nom_article = "RIEN";
        this->seuilreapp = -1;
    }

    String^ maparticle::SELECT(void)
    {
        return "SELECT * FROM TB_ARTICLE;";
    }

    String^ maparticle::INSERT(void)
    {
        return "INSERT INTO TB_ARTICLE " +
            "(reference_article, stock_article, prix_article, reduction_de_saison, nom_article,seuil_reapro) " +
            "VALUES('" + this->reference_article + "', " + this->stock_article + ", " + this->prix_article + ", " +
            this-> reduction_de_saison + ", '" + this->nom_article + ", '" + this->seuilreapp + "');";   
    }

    String^ maparticle::UPDATE(void)
    {
        return "UPDATE TB_ARTICLE " +
            "SET reference_article = '" + this->reference_article + "', stock_article = " + this->stock_article +
            ", prix_article = " + this->prix_article + ", seuil_reapro = " + this->seuilreapp + ", reduction_de_saison = " + this->reduction_de_saison +
            ", nom_article = '" + this->nom_article + "' " +
            "WHERE(id_article = " + this->id_article + ");";
    }
    String^ maparticle::DELETE(void)
    {
        return "DELETE FROM TB_ARTICLE " +
            "WHERE(id_article = " + this->id_article + ");";
    }

    void maparticle::setID(int id_article)
    {
       
        
            this->id_article = id_article;
        
    }

    void maparticle::setReference(String^ reference_article)
    {

            this->reference_article = reference_article;
        
    }

    void maparticle::setStock(int stock_article)
    {
        this->stock_article = stock_article;
    }
    void maparticle::setseuilreapp(int stock_article)
    {
        this->seuilreapp = stock_article;
    }

    void maparticle::setPrix(int prix_article)
    {
        this->prix_article = prix_article;
    }
    void maparticle::setReduction(int reduction_de_saison)
    {
        this->reduction_de_saison = reduction_de_saison;
    }

    void maparticle::setNom(String^ nom_article)
    {
      
        
            this->nom_article = nom_article;
        
    }

    int maparticle::getID(void)
    {
        return this->id_article;
    }
    int maparticle::getseuilreapp(void)
    {
        return this->seuilreapp;
    }
    String^ maparticle::getReference(void)
    {
        return this->reference_article;
    }

    int maparticle::getStock(void)
    {
        return this->stock_article;
    }

    int maparticle::getPrix(void)
    {
        return this->prix_article;
    }

    int maparticle::getReduction(void)
    {
        return this->reduction_de_saison;
    }

    String^ maparticle::getNom(void)
    {
        return this->nom_article;
    }
}