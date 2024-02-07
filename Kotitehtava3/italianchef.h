#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
using namespace std;

#include "chef.h"

class ItalianChef : public Chef
{
private:
    int vesi;
    int jauhot;
public:
    ItalianChef(string na, int ve, int ja);
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
