#include <iostream>
#include "tab.h"

using namespace std;

DTab wypelniona1(DTab& tablica, int wypelnienie)
{
	for(int i = 0; i < tablica.length; i++)
	{
	  tablica.tab[i] = wypelnienie;
	  tablica.last++;
	}
  return tablica;
}

int main()
{
  DTab tab1;

  //tab1.wypelniona(5);
  tab1 = wypelniona1(tab1, 6);
  tab1.add(2);
  tab1[1] = 3;



  DTab tab2(tab1);
  tab2.add(3);

  tab1.print();
  tab2.print();

  tab1 = tab2;

  tab1.print();
  tab2.print();
  cout << tab1[1] << endl;

  //DTab tab3(3);
  //cin >> tab3;
  //cout << tab3;

  ++tab1;
  ++tab1;
  cout << tab1 << "  " << tab1.getLength() << endl;

 return 0;
}
