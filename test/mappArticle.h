#pragma once

using namespace System;

namespace NS_Composants
{
    ref class maparticle
    {
    private:
        int id_article;
        String^ reference_article;
        int stock_article;
        int prix_article;
        int reduction_de_saison;
        String^ nom_article;
        int seuilreapp;
    public:
        maparticle(void);

        String^ SELECT(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);

        void setID(int);
        void setReference(String^);
        void setStock(int);
        void setPrix(int);
        void setReduction(int);
        void setseuilreapp(int);
        int getseuilreapp(void);
        void setNom(String^);

        int getID(void);
        String^ getReference(void);
        int getStock(void);
        int getPrix(void);
        int getReduction(void);
        String^ getNom(void);
    };
}; 