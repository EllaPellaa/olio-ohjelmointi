#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout<<"Asunto luotu \n";
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout<<"Asunto maaritetty, asukkaita on "<<asukasMaara<<" ja nelioita on "<<neliot<<endl;
}

double Asunto::laskeKulutus(double a)
{
    double kulutus = asukasMaara * neliot * a;
    return kulutus;
}
