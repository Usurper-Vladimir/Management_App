
#include "pch.h"
#include "GestionClient.h"

using namespace System::Data;

namespace NS_SVC
{
 
   
        svcGestionClient:: svcGestionClient()
        {
            this->cad = gcnew NS_Composants::CL_CAD();
            this->client = gcnew NS_Composants::mapClient();
            this->ds = gcnew DataSet();
            
        }

        DataSet^ svcGestionClient:: listeClients(String^ dataTableName)
        {
          
            this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
            return this->ds;
        }

        void svcGestionClient:: ajouter(String^ nom, String^ prenom, String^ dateNaissance, int numeroClient, String^ datePremierAchat)
        {
            this->client->setnom(nom);
            this->client->setprenom(prenom);
            this->client->setdateN(dateNaissance);
            this->client->setnum(numeroClient);
            this->client->setdatePA(datePremierAchat);

            this->cad->actionRows(this->client->INSERT());
        }

        void svcGestionClient:: modifier(int idClient, String^ nom, String^ prenom, String^ dateNaissance, int numeroClient, String^ datePremierAchat)
        {
            this->client->setIdcli(idClient);
            this->client->setnom(nom);
            this->client->setprenom(prenom);
            this->client->setdateN(dateNaissance);
            this->client->setnum(numeroClient);
            this->client->setdatePA(datePremierAchat);

            this->cad->actionRows(this->client->UPDATE());
        }

        void svcGestionClient:: supprimer(int idClient)
        {
            this->client->setIdcli(idClient);
            this->cad->actionRows(this->client->DELETE());
        }

    };

