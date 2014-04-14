#include<iostream>
#include "kwadrat.h"
#include "punkt.h"

using namespace std;

Kwadrat::Kwadrat(Punkt _A, Punkt _B, Punkt _C, Punkt _D)
{
  A = _A;
  B = _B;
  C = _C;
  D = _D;
}

Kwadrat::~Kwadrat()
{

}

double Kwadrat::obwod()
{
    return (4 * A.distance(B));
}

double Kwadrat::pole()
{
    return (A.distance(B) * A.distance(B));
}
