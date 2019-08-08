/*scrivere un programma che dati 3 numeri A, B e C mette in A il piú piccolo, in C il piú grande ed in B quello
che rimane*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <time.h>
using namespace std;
using std::setw;

int main(int argc, char const *argv[])
{
  int a, b, c, appoggio;

  cin >> a;
  cin >> b;
  cin >> c;

  cout << a << " " << b << " " << c;
  cout << endl;

  if (a < b && a < c)
  {
    if (b > c)
    {
      appoggio = c;
      c = b;
      b = appoggio;
    }
  }
  else
  {
    if (a < b && a > c)
    {
      appoggio = c;
      c = a;
      a = appoggio;
      appoggio = c;
      c = b;
      b = appoggio;
    }
    else
    {
      if (a > b && a > c)
      {
        if (b < c)
        {
          appoggio = b;
          b = a;
          a = appoggio;
          appoggio = c;
          c = b;
          b = appoggio;
        }
        else
        {
          appoggio = c;
          c = a;
          a = appoggio;
        }
      }
    }
  }
  cout << a << " " << b << " " << c;
  system("PAUSE");
  return 0;
}
