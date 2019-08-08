//scrivere un programma che legge da tastiera num1 e num2 (interi) e calcola ris=num1*num2 senza usare gli
//operatori *, / o mod (dovresti farcela con 2 cicli)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, ris=0, cambioSegno=0;

  cin>>num1>>num2;

  if (num1>0 && num2>0)
  {
    while (num2!=0)
    {
      ris=ris+num1;
      num2--;
    }
  } else
  {
    if (num1<0 || num2<0)
    {
      if (num1<0)
      {
        num1=num1*-1;
        cambioSegno++;
      }
      if (num2<0)
      {
        num2=num2*-1; 
        cambioSegno++;
      }
      while (num2!=0)
      {
        ris=ris+num1;
        num2--;
      }
    }
  }

  if (cambioSegno==1)
  {
    ris=ris*-1;
  }
  
  cout<<ris;
  
  return 0;
}
