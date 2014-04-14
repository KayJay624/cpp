#ifndef KWADRAT_H
#define KWADRAT_H
#include "punkt.h"

class Kwadrat
{
  private:
    Punkt A;
    Punkt B;
    Punkt C;
    Punkt D;

  public:
    Kwadrat(Punkt A, Punkt B, Punkt C, Punkt D);

    ~Kwadrat();

    double pole();

    double obwod();
};

#endif // KWADRAT_H
