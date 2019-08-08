/*scrivere un programma che legge da tastiera num1 e num2 (interi) e calcola quoz=num1/num2 e resto=num1
mod num2 senza usare gli operatori *, / o mod; se num2 uguale a 0 (zero) scrivere un opportuno messaggio
di errore (prova a farlo con un solo ciclo facendo diventare num1 e num2 positivi e poi regolandoti per il
segno finale)*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, quoz=0, resto=0, cambioSegno=0;

  cin>>num1>>num2;

  if (num2==0)
  {
    cout<<"Errore";
  }
  
  if (num1<0)
  {
    num1*=-1;
    cambioSegno++;
  }
  
  if (num2<0)
  {
    num2*=-1;
    cambioSegno++;
  }
  
  while (num1>=num2)
  {
    num1-=num2;
    quoz++;
  }
  
  resto=num1;

  if (cambioSegno==2 || cambioSegno==0)
  {
    cout<<"Risultato: "<<quoz<<endl;
    cout<<"Resto: "<<resto; 
  } else
  {
    if (cambioSegno==1)
    {
      quoz*=-1;
      cout<<"Risultato: "<<quoz<<endl;
      cout<<"Resto: "<<resto; 
    }
  }
  
  return 0;
}
