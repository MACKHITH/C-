//scrivere un programma che legge da tastiera num1 e num2 (interi) e calcola quoz=num1/num2 e resto=num1
//mod num2 senza usare gli operatori *, / o mod; se num2 uguale a 0 (zero) scrivere un opportuno messaggio
//di errore (dovresti farcela con 4 cicli)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, quoz=0, resto=0;

  cin>>num1>>num2;

  if (num1>0 && num2>0)
  {
    resto=num1;
    while (resto>=num2)
    {
      resto=resto-num2;
      quoz++;
    }
    cout<<"Risultato: "<<quoz<<endl;
    cout<<"Resto: "<<resto;
  } else
  {
    if (num1>0 && num2<0)
    {
      num2*=-1;
      if (num1>num2)
      {
        resto=num1;
        while (resto>=num2)
        {
          resto=resto-num2;
          quoz++;
        }
        cout<<"Risultato: "<<quoz*-1<<endl;
        cout<<"Resto: "<<resto;
      } else
      {
        if (num1<num2)
        {
          num2*=-1;
        } 
      }
    } else
    {
      if (num1<0 && num2>0)
      {
        num1*=-1;
        if (num1>num2)
        {
          
        } else
        {
          if (num1<num2)
          {
          
          } 
        }
      } else
      {
        if (num1<0 && num2<0)
        {
          num1*=-1;
          num2*=-1;
          if (num1>num2)
          {
        
          } else
          {
            if (num1<num2)
            {
          
            } 
          }
        }
      }
    }
  }
  return 0;
}
