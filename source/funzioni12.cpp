/*Scrivere la funzione di nome maximum che restituisce il maximum tra 3 numeri A, B e C*/
#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
  if (a > b && a > c)
  {
    return a;
  }
  else
  {
    if (b > a && b > c)
    {
      return b;
    }
    else
    {
      if (c > a && c > b)
      {
        return c;
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  int A, B, C;

  cin >> A;
  cin >> B;
  cin >> C;

  cout << "maximum: " << maximum(A, B, C);
  return 0;
}
