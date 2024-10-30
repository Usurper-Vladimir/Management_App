#pragma once

using namespace System;

namespace NS_Composants
{
    ref class mappaiement
    {
    private:
        int id_paiement;
        int montant_paiement;
        int moyen_paiement;
        String^ date_paiement;
        int id_commande;

    public:
        mappaiement(void);

        String^ SELECT(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);

        void setIDPaiement(int);
        void setMontantPaiement(int);
        void setMoyenPaiement(int);
        void setDatePaiement(String^);
        void setIDCommande(int);

        int getIDPaiement(void);
        int getMontantPaiement(void);
        int getMoyenPaiement(void);
        String^ getDatePaiement(void);
        int getIDCommande(void);
    };
};