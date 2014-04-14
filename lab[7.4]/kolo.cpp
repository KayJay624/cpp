#include <iostream>
#include "kolo.h"

//using namespace std;

kolo::kolo()
{
    x = 0;
    y = 0;
    r = 10;
}

kolo::kolo(double _x, double _y, double _r)
{
    x = _x;
    y = _y;
    r = _r;
}

double kolo::pole()
{
    return 3.14 * r * r;
}
