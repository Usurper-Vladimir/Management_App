#include "pch.h"
#include "mappPersonnel.h"

namespace NS_Composants
{
    mapPersonnel::mapPersonnel(void)
    {

        this->id_personnel = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        this->poste = "RIEN";
        this->AdresseP="RIEN";
        this->date_embauche = "RIEN";
        this->id_personnel_1 = -1;



    }
    String^ mapPersonnel::SELECT(void) {
        return "SELECT * FROM TB_PERSONNEL ;";
    }
    
    String^ mapPersonnel::INSERT(void)
    {
        return "INSERT INTO TB_PERSONNEL(nom, prenom, poste, AdresseP, date_embauche, id_Personnel_1) " +
            "VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->poste + "', '" +  this->AdresseP + "', '"  + this->date_embauche  + "', " + this->id_personnel_1 + "); SELECT @@IDENTITY;";
    }
    String^ mapPersonnel::UPDATE(void)
    {
        return "UPDATE TB_PERSONNEL " +
            "SET nom = '" + this->nom + "', prenom ='" + this->prenom + "', poste ='" + this->poste + "', date_embauche ='" + this->date_embauche +"', AdresseP ='" + this->AdresseP + "', id_Personnel_1 ='" + this->id_personnel_1 + 
            "' WHERE (id_personnel =  " + this->id_personnel + "); ";
    }

    String^ mapPersonnel::DELETE(void)
    {
        return "DELETE FROM TB_PERSONNEL " +
            "WHERE(id_personnel = " + this->id_personnel + ");";
    }


    void mapPersonnel::setid_Personnel(int Id)
    {
        
        
            this->id_personnel = Id;
        
    }
    int mapPersonnel::getid_Personnel(void)
    {
        return this->id_personnel;
    }

    void mapPersonnel::setnom(String^ nom)
    {
        
        
            this->nom = nom;
        
    }
    void mapPersonnel::setprenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->prenom = prenom;
        }
    }
    void mapPersonnel::setposte(String^ poste)
    {
        
            this->poste = poste;
        
    }
    void mapPersonnel::setdate_em(String^ date)
    {
       
            this->date_embauche = date;
        
    }
    void mapPersonnel::setid_Personnel_1(int IdPersonnel)
    {
        
            this->id_personnel_1 = IdPersonnel;
        
    }
    void mapPersonnel::setAdresseP(String^ adresse){
        
       
            this->AdresseP = adresse;
        

    }
    String^ mapPersonnel::getnom(void)
    {
        return this->nom;
    }
    String^ mapPersonnel::getprenom(void)
    {
        return this->prenom;
    }
    String^ mapPersonnel::getposte(void)
    {
        return this->poste;
    }
    String^ mapPersonnel::getdate_em(void)
    {
        return this->date_embauche;
    }
    int mapPersonnel::getid_Personnel_1(void)
    {
        return this->id_personnel_1;
    }
    
    String^ mapPersonnel::getAdresseP(void) {
        return this->AdresseP;
    }
}






