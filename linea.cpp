#include "linea.h"
#include "punto.h"
#include "math.h"

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

Linea::Linea(Punto* p1, Punto* p2)
{
    Num_Lineas++;
}

void Linea::sacarD()
{
    int x1, x2, y1, y2;
    int aux1, aux2, aux3, aux4;

    Punto p1(x1, y1);
    Punto p2(x2, y2);

    aux1=x1-x2;
    aux2=y1-y2;

    aux3=pow(aux1, 2);
    aux4=pow(aux2, 2);

    this->d=sqrt(aux3+aux4);
}

float Linea::getD() const
{
    return d;
}
