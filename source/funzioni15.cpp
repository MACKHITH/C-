/*scrivere una funzione di nome ennesimoPrimo che dato un numero N restituisce l’Nesimo numero Primo*/
#include <iostream>
using namespace std;

int ennesimoPrimo(int NUM){
  int numPrimo=2;
  int ennesimoNumPrimo;

  while (NUM>0)
  {
    int divisore=1;
    int divisori=0;
    while (numPrimo>=divisore)
    {
      if (numPrimo%divisore==0)
      {
        divisori++;
      }
      divisore++;
    }
    if (divisori==2)
    {
      ennesimoNumPrimo=numPrimo;
      NUM--;
    }
    numPrimo++; 
  }
  return ennesimoNumPrimo;
}

int main(int argc, char const *argv[]) {
  int N;

  cout<<"Ennesimo numero primo da conoscere? ";
  cin>>N;

  cout<<"Ennesimo numero primo: "<<ennesimoPrimo(N);
  return 0;
}
