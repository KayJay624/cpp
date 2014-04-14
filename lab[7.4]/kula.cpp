#include <iostream>
#include "kula.h"

//using namespace std;

kula::kula()
{
    x = 0;
    y = 0;
    z = 0;
    r = 10;
}

kula::kula(double _x, double _y, double _z, double _r)
{
    x = _x;
    y = _y;
    z = _z;
    r = _r;
}

double kula::pole()
{
    return 4 * 3.14 * r * r;
}

