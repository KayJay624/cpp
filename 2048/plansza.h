#ifndef DTAB_H
#define DTAB_H

class Plansza{
  private:



  public:

    int size = 4;
    int tab[4][4];

    Plansza();

    ~Plansza();

    int wylosuj(int zakres);

    void wstaw(int x, int y, int zawartosc);

    int zwroc();

    void przesun(char c);

    void print();
};
#endif
