#include "CL_CAD.h"
#include "mappCommande.h"


 

namespace NS_SVC
{
    ref class gestioncommande
    {
    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::mapCommande^ commande;
        DataSet^ ds;
        

    public:
        gestioncommande();
        DataSet^ listeCommande(String^ dataTableName);
        void ajouterCommande( String^, int, int, String^, String^, int,int, String^);
        void modifiercommande(int, String^, int, int, String^, String^,  int, int, String^);
        void supprimmercommande(int);
        DataSet^ listeclient();





    };

}