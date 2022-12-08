#ifndef PUNTO_H
#define PUNTO_H

#include <string>

using namespace std;
class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int x, int y);
    int getX() const;
    int getY() const;
    string to_string();
};

#endif // PUNTO_H
