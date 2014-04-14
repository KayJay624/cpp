#include<iostream>
#include<cstdlib>
#include<ctime>
#include "plansza.h"

using namespace std;

Plansza::Plansza()
{
    //size = 4;
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
        {
            tab[i][j] = 0;
        }
}

Plansza::~Plansza(){};
int Plansza::wylosuj(int zakres)
{
    srand( time( NULL ) );
        return  (rand() % zakres ) ;
}

void Plansza::wstaw(int x, int y, int zawartosc)
{
    if(tab[x][y] == 0) tab[x][y] = (zawartosc);

}

int Plansza::zwroc()
{
    if(rand() % 2 == 1) return 4;
    else return 2;
}

void Plansza::print()
{
    system("CLS");
    cout << endl << endl << endl;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(tab[i][j] == 0) cout << " ";
            cout <<"    ";
            cout.width(4);
            cout << tab[i][j];
        }
        cout << endl;
    }
}

void Plansza::przesun(char c)
{
    if( c == 'w')
    {
        for(int i = size-1; i > 0; i--)
        {
            for(int j = 0; j < size; j++)
            {
                if(tab[i][j] == tab[i-1][j])
                {
                    tab[i-1][j] = 2 * tab[i][j];
                       tab[i][j] = 0;
                }
                 if(tab[i-1][j] == 0)
                {
                    tab[i-1][j] = tab[i][j];
                    tab[i][j] = 0;
                }
            }
        }
    }

    if( c == 's')
    {
        for(int i = 0; i < size-1; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(tab[i][j] == tab[i+1][j])
                {
                    tab[i+1][j] = 2 * tab[i][j];
                       tab[i][j] = 0;
                }
                if(tab[i+1][j] == 0)
                {
                    tab[i+1][j] = tab[i][j];
                    tab[i][j] = 0;
                }
            }
        }
    }

    if( c == 'a')
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = size-1; j > 0; j--)
            {
                if(tab[i][j] == tab[i][j-1]) tab[i][j-1] = 2 * tab[i][j];
                if(tab[i][j-1] == 0)
                {
                    tab[i][j-1] = tab[i][j];
                    tab[i][j] = 0;
                }
            }
        }
    }

    if( c == 'd')
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size - 1; j++)
            {
                if(tab[i][j] == tab[i][j+1])
                {
                    tab[i][j+1] = 2 * tab[i][j];
                    tab[i][j] = 0;
                }
                if(tab[i][j+1] == 0)
                {
                    tab[i][j+1] = tab[i][j];
                    tab[i][j] = 0;
                }
            }
        }
    }
}


