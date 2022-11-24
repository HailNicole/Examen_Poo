#ifndef LINEA_H
#define LINEA_H

#include <string>
using namespace std;
#include "punto.h"

class Linea
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
public:
    static int Num_Lineas;
    Linea(Punto* p1, Punto* p2);
    virtual string to_string();
    float getD() const;
    void sacarD();
    Punto *getP1() const;
    Punto *getP2() const;
};

#endif // LINEA_H
