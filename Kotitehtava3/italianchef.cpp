
#include "italianchef.h"

ItalianChef::ItalianChef(string na, int ve, int ja) : Chef(na)
{
    vesi = ve;
    jauhot = ja;
    name = na;
    cout<<name <<" constructor"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<name <<" destructor"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
}
