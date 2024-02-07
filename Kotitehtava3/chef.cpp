#include "chef.h"

Chef::Chef(string na)
{
    name = na;
    cout<<name <<" constructor"<<endl;
}

Chef::~Chef()
{
    cout<<name <<" destructor"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
