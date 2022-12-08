#include "punto.h"
#include "linea.h"

int Punto::getX() const
{
    return x;
};

int Punto::getY() const
{
    return y;
};

Punto::Punto()
{

};

Punto::Punto(int x, int y)
{
    this->x=x;
    this->y=y;
};

string Punto::to_string()
{
    return "P(" + ::to_string(getX()) + ", " + ::to_string(getY()) + ")";
};
