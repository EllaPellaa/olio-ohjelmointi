#include "kerrostalo.h"

#include <iostream>

using namespace std;

int main()
{
    Kerrostalo* objectKerrostalo = new Kerrostalo;
    cout<<"Kerrostalon kulutus = "<<objectKerrostalo->laskeKulutus(1)<<endl;

    delete objectKerrostalo;

    return 0;
}
