#include<iostream>
#include<conio.h>
#include <cstdlib>
#include "ln.h"

using namespace std;

int main()
{
    List lista;

    int n;
    string zaw = "";

    while(true)
    {
        system("CLS");

        cout << "  M E N U  " << endl << endl;
        cout << "[1] - Dodaj element na koniec listy." << endl;
        cout << "[2] - Usun element z konca listy." << endl;
        cout << "[3] - Wyswietl liste." << endl;
        cout << "[4] - Wyjscie." << endl;

        n = getch();

        switch (n)
        {
            case '1': {cout << "Podaj zawartosc: "; cin >> zaw; lista.addNode(zaw);} break;
            case '2': lista.delNode(); break;
            case '3': {lista.print(); getch();} break;
            case '4': exit(0); break;
        }
    }

    /*
    lista.addNode("kamil");

    lista.addNode("jurek");

    lista.addNode("bolek");

    lista.print();

    lista.delNode();

    lista.delNode();

    //lista.delNode();

    //lista.addNode("lolek");

    lista.print();

    //lista.addNode("lolek");
    */


}
