#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja \n";
    as1 = new Asunto;
    as2 = new Asunto;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja \n";
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double a)
{
    double kulutus = 0;
    kulutus += as1->laskeKulutus(a);
    kulutus += as2->laskeKulutus(a);
    kulutus += Kerros::laskeKulutus(a);
    return kulutus;
}
