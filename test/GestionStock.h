#pragma once
#include "CL_CAD.h"
#include "mappArticle.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
    ref class GestionStock
    {
    private:
        NS_Composants::maparticle^ article;
        NS_Composants::CL_CAD^ cad;
        DataSet^ ds;
    public:
        GestionStock();
        
        DataSet^ listeArticles(String^ );
      
        void ajouterArticle(String^ , int , int , int , String^ , int );
        

        void modifierArticle(int , String^ , int , int , int , String^ , int );
       

        void supprimerArticle(int );
       
    };
}
