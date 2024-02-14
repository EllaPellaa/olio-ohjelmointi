#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
    cout<<"Kerrostalo luotu"<<endl;
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double a)
{
    double kulutus = 0;
    kulutus += eka->laskeKulutus(a);
    kulutus += toka->laskeKulutus(a);
    kulutus += kolmas->laskeKulutus(a);
    return kulutus;
}
