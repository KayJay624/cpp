#include "tab.h"
#include <iostream>
#include <iomanip>

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

DTab::DTab(const DTab &tablica)
{
	length = tablica.length;
	last = tablica.last;
	tab = new double[length];

	for(int i = 0; i< length; i++)
		tab[i] = tablica.tab[i];
}

//przeciazanie

double& DTab::operator[](int n)
{
	return tab[n];
}

DTab& DTab::operator=(const DTab& tablica)
{
	delete[] tab;

	length = tablica.length;
	last = tablica.last;
	tab = new double [length];

	for(int i = 0; i < length; i++)
		tab[i] = tablica.tab[i];

	return *this;
}

istream& operator>>(istream& input, DTab& t)
{

	input.ignore();    // Ignoruj nawias

	for(int i = 0; i < t.length; i++)
	{
        	input >> t.tab[i];
   		input.ignore();    // Ignoruj przecinek
        }
   		input.ignore();    // Ignowruj nawias

	return input;      // Umożliwia cin >> a >> b >> c;
}

ostream& operator<<(ostream& output, DTab& t)
{
	output << "[";
	for(int i = 0; i < t.length; i++)
	{
		output << t.tab[i];

		if(i<t.length-1) output << ",";
	}
	output << "]";
	return output;
}

void DTab::operator++()
{
    resize(length + 1);
    tab[length-1] = 0;
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
}

double DTab::get(int index)
{
	return tab[index];
}

int DTab::getLength()
{
    return length;
}

void DTab::print()
{
	for(int i = 0; i < length; i++)
	{
		cout << tab[i] << "   ";
	}
	cout << endl;
}

void DTab::wypelniona(int wypelnienie)
{
	for(int i = 0; i < length; i++)
	{
	  tab[i] = wypelnienie;
	  last++;
	}
}



