#ifndef D_KULA
#define D_KULA

#include "kolo.h"

class kula : public kolo
{
  private:
    double z;

  public:
    kula();

    kula(double _x, double _y, double _z, double _r);

    double pole();
};
#endif // D_KULA

