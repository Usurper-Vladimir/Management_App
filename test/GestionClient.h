
#include "CL_CAD.h"
#include "mappClient.h"

using namespace System;
using namespace System::Data;;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
    ref class svcGestionClient
    {
    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::mapClient^ client;
        DataSet^ ds;

    public:
        svcGestionClient();
        DataSet^ listeClients(String^ );
        void ajouter(String^, String^, String^, int, String^);
        void modifier(int, String^, String^, String^, int, String^);
        void supprimer(int);
    };
}
