#include<iostream>
#include "Zespolona.h"

using namespace std;

Zespolona::Zespolona()
{
    re = 0;
    im = 0;
}

Zespolona::Zespolona(double _re, double _im)
{
    re = _re;
    im = _im;
}

Zespolona::~Zespolona(){}

Zespolona Zespolona::add(Zespolona inna)
{
    Zespolona wynik;
    wynik.re = re + inna.re;
    wynik.im = im + inna.im;
    return wynik;
}

Zespolona Zespolona::sub(Zespolona inna)
{
    Zespolona wynik;
    wynik.re = re - inna.re;
    wynik.im = im - inna.im;
    return wynik;
}

Zespolona Zespolona::mul(Zespolona inna)
{
    Zespolona wynik;
    wynik.re = ((re * inna.re) - (im * inna.im));
    wynik.im = ((re * inna.im) + (im * inna.re));
    return wynik;
}

Zespolona Zespolona::div(Zespolona inna)
{
    Zespolona wynik;
    wynik.re = ((re * inna.re + im * inna.im) / (inna.re * inna.re + inna.im * inna.im));
    wynik.im = ((im * inna.re - re * inna.im) / (inna.re * inna.re + inna.im * inna.im));
    return wynik;
}

Zespolona Zespolona::pow(int p)
{
    Zespolona wynik = *this;

    for(int i = 1; i < p; i++)
    {
        wynik = wynik.mul(*this);
    }
    return wynik;
}

void Zespolona::print()
{
    cout << "Re: " << re << "     Im: " << im << endl;
}
