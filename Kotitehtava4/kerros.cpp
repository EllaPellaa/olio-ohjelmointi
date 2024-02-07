#include "kerros.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{
    cout<<"Kerros luotu \n";
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja \n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double a)
{
    double kulutus = 0;
    kulutus += as1.laskeKulutus(a);
    kulutus += as2.laskeKulutus(a);
    kulutus += as3.laskeKulutus(a);
    kulutus += as4.laskeKulutus(a);
    return kulutus;
}
