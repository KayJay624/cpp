#include <iostream>
#include "tab.h"

using namespace std;

int main(void){
  DTab tab1;


	for(int i=0; i<10; i++) tab1.set(i+1, i);

  tab1.add(11);
  tab1.add(33);
  tab1.add(56);

  DTab tab3 = tab1;
  tab1.print();
  tab3.print();


  return 0;
}
