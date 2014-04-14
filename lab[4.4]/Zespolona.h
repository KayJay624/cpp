#ifndef H_ZESP
#define H_ZESP

class Zespolona
{
  private:

      double re;

      double im;

  public:

    Zespolona();

    Zespolona(double _re, double _im);

    ~Zespolona();

    Zespolona add(Zespolona inna);

    Zespolona sub(Zespolona inna);

    Zespolona mul(Zespolona inna);

    Zespolona div(Zespolona inna);

    Zespolona pow(int p);

    void print();
};
#endif // H_ZESP
