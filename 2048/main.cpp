#include<iostream>
#include "plansza.h"
#include<cstdio>
#include<conio.h>

using namespace std;

int main()
{
    Plansza plansza;
    char c;
    while(true)
    {
            plansza.print();
            plansza.wstaw(plansza.wylosuj(4), plansza.wylosuj(4), plansza.zwroc());

            c = getch();
            plansza.przesun(c);

    }

    return 0;
}
