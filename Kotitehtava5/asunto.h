#ifndef ASUNTO_H
#define ASUNTO_H

using namespace std;

class Asunto
{
public:
    Asunto();
    ~Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int a, int b);
    double laskeKulutus(double a);
};

#endif // ASUNTO_H
