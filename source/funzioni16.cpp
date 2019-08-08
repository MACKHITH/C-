/*scrivere una funzione di nome posizionePrimo che dato un numero N dice qual è la posizione di N nella
sequenza di numeri Primi (se N non è primo restituisce 0 (zero))*/
#include <iostream>
using namespace std;

int primeNumPosition(int number)
{
  int position = 0, numPrime = 1, divider1 = 1, dividers1 = 0, positionPrime = 0;

  while (position != 0)
  {
    while (numPrime >= 0)
    {
      if (numPrime % divider1 == 0)
      {
        dividers1++;
      }
      divider1++;
      numPrime--;
    }
    if (dividers1 == 2)
    {
      position++;
      if (numPrime == number)
      {
        positionPrime = position;
      }
    }
    else
    {
      numPrime++;
    }
  }
  return positionPrime;
}

int main(int argc, char const *argv[])
{
  int N, dividers = 0, divider = 1;

  cin >> N;

  while (N > 0)
  {
    if (N % divider == 0)
    {
      dividers++;
    }
    divider++;
    N--;
  }
  if (dividers == 2)
  {
    primeNumPosition(N);
  }
  else
  {
    cout << "Error the number isn't a prime number";
  }
  return 0;
}
