#include "linea.h"
#include "punto.h"
#include "math.h"

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1=p1;
    this->p2=p2;
    Num_Lineas++;
};


float Linea::getD() const
{
    float aux, aux1, aux2, aux3, d;
    aux = p2->getX() - p1->getX();
    aux1 = pow(aux , 2);
    aux2 = p2->getY() - p1->getY();
    aux3 = pow(aux2 , 2);
    d = sqrt(aux1 + aux3);

    return d;

}

float Linea::getM() const
{
    float ax, ax1, m;
    ax = p2->getY() - p1->getY();
    ax1 = p2->getX() - p1->getX();
    m = ax / ax1;
    return m;
};

Punto *Linea::getP1() const
{
    return p1;
};

Punto *Linea::getP2() const
{
    return p2;
};

string Linea::to_string()
{
    return "L" + ::to_string(this->Num_Lineas) + "[" + p1->to_string() + " - " + p2->to_string() + " , d= " + ::to_string(getD()) + ", m= " + ::to_string(getM()) + "]";
};
