#include "pch.h"
#include "mapAdresse.h"
namespace NS_Composants
{
    mapAdresse::mapAdresse(void)
    {

        this->id_Adresse = -1;
        this->ville = "RIEN";
        this->rue = "RIEN";
        this->cp = "RIEN";
        this->id_Client = -1;
        this->id_Client1 = -1;



    }
    String^ mapAdresse::SELECTByIdClient(void)
    {
        return "SELECT id_adresse, ville, rue , cp, id_personnel " +
            "FROM TB_ADRESSE " +
            "WHERE(id_Client = " + this->id_Client + ");";
    }

    String^ mapAdresse::SELECTByIdClient1(void)
    {
        return "SELECT id_adresse, ville, rue , cp, id_personnel " +
            "FROM TB_ADRESSE " +
            "WHERE(id_Client1 = " + this->id_Client1 + ");";
    }
    String^ mapAdresse::SELECT(void)
    {
        return "SELECT *FROM TB_ADRESSE ;";
            
            
    }
    String^ mapAdresse::INSERT(void)
    {
        return "INSERT INTO TB_ADRESSE( ville, cp, id_Client, id_Client1, rue) " +
            "VALUES('" + this->ville + "', '" + this->cp + "', " + this->id_Client + "," + this->id_Client1 + ", " + this->rue + ");";
    }
    String^ mapAdresse::UPDATE(void)
    {
        return "UPDATE TB_ADRESSE " +
             "SET ville ='" + this->ville + "', cp ='" + this->cp + "' " + "', rue ='" + this->rue + "' " + "', id_Client ='"  +this->id_Client + "' " + "', id_Client1 ='" + this->id_Client1 +
            "WHERE(id_Adresse =  " + this->id_Adresse + "); ";
    }
    String^ mapAdresse::DELETE(void)
    {
        return "DELETE FROM TB_ADRESSE " +
            "WHERE(id_Adresse = " + this->id_Adresse + ");";
    }


    void mapAdresse::setIdAdresse(int IdAdresse)
    {
        this->id_Adresse = IdAdresse;
    }
    
    void mapAdresse::setCp(String^ Cp)
    {
        this->cp = Cp;
    }
    void mapAdresse::setrue(String^ Cp)
    {
        this->rue = Cp;
    }
    void mapAdresse::setVille(String^ Ville)
    {
        this->ville = Ville;
    }
    void mapAdresse::setidClient(int Id)
    {
        this->id_Client = Id;
    }
    void mapAdresse::setidClient1(int IdPersonne)
    {
        this->id_Client1 = IdPersonne;
    }
    int mapAdresse::getIdAdresse(void)
    {
        return this->id_Adresse;
    }
   
    String^ mapAdresse::getCp(void)
    {
        return this->cp;
    }
    String^ mapAdresse::getVille(void)
    {
        return this->ville;
    }
    String^ mapAdresse::getrue(void)
    {
        return this->rue;
    }
    int mapAdresse::getidClient(void)
    {
        return this->id_Client;
    }
    int mapAdresse::getidClient1(void)
    {
        return this->id_Client1;
    }
}






