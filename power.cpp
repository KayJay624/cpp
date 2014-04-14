#include<iostream>

using namespace std;

double power(double a, int x)
{
    int pow = 1;

    for(int i = 0; i < x; i++)
            pow *= a;
    return pow;
}

int main()
{
   cout << power(12, 5);
}
