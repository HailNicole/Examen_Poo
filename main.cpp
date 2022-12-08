#include <iostream>
#include "linea.h"
#include "punto.h"
using namespace std;
int Linea::Num_Lineas=0;
int main()
{
    Punto p1(-7,4);
    Punto p2(2,9);

    Linea l1(&p1, &p2);
    cout<<l1.to_string()<<endl;
    return 0;
}
