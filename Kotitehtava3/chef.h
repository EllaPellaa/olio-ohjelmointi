#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef(string na);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
