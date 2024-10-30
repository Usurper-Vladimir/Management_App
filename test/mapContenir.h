#pragma once

using namespace System;

namespace NS_Composants
{
    ref class mapContenir
    {
    private:
        int id_article;
        int id_commande;
        int quantite;
    public:
        mapContenir(void);

        String^ SELECT(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);

        void setIDA(int);
        void setIDC(int);
        void setQ(int);

        int getIDA(void);
        int getIDC(void);
        int getQ(void);


    };
}
