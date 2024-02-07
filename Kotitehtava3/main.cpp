#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    //Ensimmäiset tehtävät
    Chef objectChef1("Gordon Ramsay");
    Chef objectChef2("Anthony Bourdain");

    objectChef1.makeSalad();
    objectChef1.makeSoup();

    objectChef2.makeSalad();
    objectChef2.makeSoup();

    //Toinen tehtävä
    Chef objectChef3("Jyrki");
    ItalianChef objectItalianChef1("Mario", 250, 100);

    objectChef3.makeSalad();
    objectItalianChef1.makePasta();
    objectChef3.makeSoup();
    return 0;
}
