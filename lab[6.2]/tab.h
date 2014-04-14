#ifndef DTAB_H
#define DTAB_H

#include<iostream>
#include<iomanip>

using namespace std;

class DTab{
  private:
    double * tab;
    int length;
    int last;

	friend DTab wypelniona1(DTab& tablica, int a);

    // Metoda rozszerzajaca rozmiar tablicy do rozmiaru podanego jako parametr
    void resize(int newSize);
  public:
    // Konstruktor bezparametrowy. Powinien tworzyć tablicę o rozmiarze 10. (wykorzystaj metode resize)
    DTab();
    // Tworzy tablice o rozmiarze podanym jako parametr. (wykorzystaj metode resize)
    DTab(int initLength);
    // Destruktor. Uwaga! Tablicę tworzymy dynamicznie, czyli tutaj jest wymagany!
    ~DTab();

    DTab(const DTab&);

    double& operator[](int n);

    DTab& operator=(const DTab& );

    friend istream& operator>>(istream&, DTab& );

    friend ostream& operator<<(ostream&, DTab& );

    void operator++();

    // Dodaje element do na koniec tablicy. Jeśli tablica jest za mała
    // rozszerza ją. (wykorzystaj metode resize)
    void add(double element);
    // Pobiera element z tablicy z podanego indexu
    double get(int index);

    int getLength();
    // Ustawia element o danym indeksie na daną wartość
    void set(double element, int index);
    // wyświetla tablice.
    void print();

   void wypelniona(int wypelnienie);
};
#endif
