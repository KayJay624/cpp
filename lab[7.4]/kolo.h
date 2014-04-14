#ifndef D_KOLO
#define D_KOLO

//const double PI = 3.14;

class kolo
{
  protected:
    double x;
    double y;
    double r;

  public:
    kolo();

    kolo(double _x, double _y, double _r);

    double pole();
};
#endif // D_KOLO
