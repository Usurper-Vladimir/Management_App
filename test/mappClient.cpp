#include "pch.h"
#include "mappClient.h"

namespace NS_Composants
{
    mapClient::mapClient(void)
    {

        this->id_client = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        this->numero = -1;
        this->date_de_naissance = "RIEN";
        this->date_premiere_achat = "RIEN";





    }
    String^ mapClient::SELECT(void)
    {
        return "SELECT *" +
            "FROM TB_CLIENT " + ";";

    }
    String^ mapClient::INSERT(void)
    {
        return "INSERT INTO TB_CLIENT(nom, prenom, num , date_de_naissance, date_premiere_achat ) " +
            "VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->numero + "', " + this->date_de_naissance + ", " + this->date_premiere_achat + ");";
    }
    String^ mapClient::UPDATE(void)
    {
        return "UPDATE TB_CLIENT " +
            "SET nom ='" + this->nom + "', prenom ='" + this->prenom + "', num ='" + this->numero + "' " + "', date_de_naissance ='" + this->date_de_naissance + "', date_premiere_achat ='" + this->date_premiere_achat +
            "WHERE(id_client =  " + this->id_client + "); ";
    }
    String^ mapClient::DELETE(void)
    {
        return "DELETE FROM TB_CLIENT " +
            "WHERE(id_client = " + this->id_client + ");";
    }



    void mapClient::setIdcli(int Id)
    {
        this->id_client = Id;
    }
    int mapClient::getIdcli(void)
    {
        return this->id_client;
    }

    void mapClient::setnom(String^ nom)
    {
        this->nom = nom;
    }
    void mapClient::setprenom(String^ prenom)
    {
        this->prenom = prenom;
    }
    void mapClient::setnum(int^ numero)
    {
        this->numero = numero;
    }
    void mapClient::setdateN(String^ date)
    {
        this->date_de_naissance = date;
    }
    void mapClient::setdatePA(String^ IdPersonnel)
    {
         this->date_premiere_achat = IdPersonnel;
    }
    String^ mapClient::getnom(void)
    {
        return this->nom;
    }
    String^ mapClient::getprenom(void)
    {
        return this->prenom;
    }
    int^ mapClient::getnum(void)
    {
        return this->numero;
    }
    String^ mapClient::getdateN(void)
    {
        return this->date_de_naissance;
    }
    String^ mapClient::getdatePA(void)
    {
        return this->date_premiere_achat;
    }
}






