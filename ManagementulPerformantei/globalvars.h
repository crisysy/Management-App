#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "vector"
#include "QString"

using namespace std;

class GlobalVars
{
public:
    GlobalVars();
    static int CurrentUserId;
    static QString CurrentUserName;
    static QString AccesLevel;
    static int CurrentCompanyId;
    static QString CurrentCompany;
    static vector<int> CurrentAgencysIds;
    static vector<QString> CurrentAgencysNames;
    static int ProcessId;
    static QString ProccessName;

};

#endif // GLOBALVARS_H
