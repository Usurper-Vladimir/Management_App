#include "pch.h"
#include "GestionStock.h"

using namespace System::Data;

 namespace NS_SVC

{
     GestionStock::GestionStock()
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->article = gcnew NS_Composants::maparticle();
        this->ds = gcnew DataSet();
       
    }

    DataSet^ GestionStock::listeArticles(String^ dataTableName)
    {
       
        ds = this->cad->getRows(this->article->SELECT(), dataTableName);
        return ds;
    }

    void GestionStock::ajouterArticle(String^ reference, int stock, int prix, int reduction, String^ nom, int seuilreapp)
    {
        this->article->setReference(reference);
        this->article->setStock(stock);
        this->article->setPrix(prix);
        this->article->setReduction(reduction);
        this->article->setNom(nom);
        this->article->setseuilreapp(seuilreapp);
        this->cad->actionRows(this->article->INSERT());
    }

    void GestionStock::modifierArticle(int id_article, String^ reference, int stock, int prix, int reduction, String^ nom, int seuilreapp)
    {
        this->article->setID(id_article);
        this->article->setReference(reference);
        this->article->setStock(stock);
        this->article->setPrix(prix);
        this->article->setReduction(reduction);
        this->article->setNom(nom);
        this->article->setseuilreapp(seuilreapp);
        this->cad->actionRows(this->article->UPDATE());
    }

    void GestionStock::supprimerArticle(int id_article)
    {
        this->article->setID(id_article);
        this->cad->actionRows(this->article->DELETE());
    }
}