#include<iostream>
#include "kolo.h"
#include "kula.h"

using namespace std;

double foo(kolo k)
{
    return k.pole();
}

int main()
{
    kolo kolo1;
    kolo kolo2(0.0, 0.0, 5.0);

    kula kula1(0, 0, 0, 10);
    kula kula2(0, 0, 0, 5);

    cout << "Pole kola I: " << kolo1.pole() << "  " << "Pole kola II: " << kolo2.pole() << endl;

    cout << "Pole kuli I: " << kula1.pole() << "  " << "Pole kuli II: " << kula2.pole() << endl;

    cout << "Pole przekroju kuli I: " << kolo(kula1).pole() << "  " << "Pole przekroju kili II: " << kula2.pole() << endl;
}
