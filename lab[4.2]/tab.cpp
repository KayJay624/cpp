#include "tab.h"
#include <iostream>
#include <cstring>

using namespace std;

void DTab::resize(int newSize)
{
	double* newTab = new double[newSize];
	for(int i = 0; i < length; i++)
		newTab[i] = tab[i];

	delete [] tab;

	tab = newTab;
	length = newSize;
}

DTab::DTab()					//konstruktor bezparametrowy;
{
	length = 0;
	last = 0;
	resize(10);
}

DTab::DTab(int initLength)		//konstruktor parametrowy
{
	length = 0;
	last = 0;
	resize(initLength);
}

DTab::~DTab()					//destruktor
{
	delete [] tab;
}

DTab::DTab(const DTab& Tab)
{
    length = Tab.length;
    last = Tab.last;
    tab = new double [length];

    for(int i = 0; i < length; i++)
		tab[i] = Tab.tab[i];

}

void DTab::add(double element)
{
	if(last < length)
	{
		tab[last] = element;
		last++;
	}
	else
	{
		resize(last+1);
		tab[last] = element;
		last++;
	}
}

void DTab::set(double element, int index)
{
	tab[index] = element;
	last++;
}

double DTab::get(int index)
{
	return tab[index];
}

void DTab::print()
{
	for(int i = 0; i < length; i++)
	{
		cout << tab[i] << "   ";
	}

	cout << endl;
}



