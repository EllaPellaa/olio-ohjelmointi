#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double a)
{
    double kulutus = 0;
    kulutus += eka.laskeKulutus(a);
    toka.laskeKulutus(a);
    kulutus += toka.laskeKulutus(a);
    kulutus += kolmas.laskeKulutus(a);
    return kulutus;
}
