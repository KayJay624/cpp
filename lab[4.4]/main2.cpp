#include <iostream>
#include "Zespolona.h"

using namespace std;

int main()
{
    Zespolona a(1, -1);
    Zespolona b(2, 2);
    Zespolona wynik;

    wynik = a.add(b); wynik.print();

    wynik = a.sub(b); wynik.print();

    wynik = a.mul(b); wynik.print();

    wynik = a.div(b); wynik.print();

    wynik = a.pow(9); wynik.print();

    return 0;
}
