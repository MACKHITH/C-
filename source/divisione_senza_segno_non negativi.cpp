//scrivere un programma che legge da tastiera num1 e num2 (interi, non negativi) e calcola quoz=num1/num2
//e resto=num1 mod num2 senza usare gli operatori *, / o mod; se num2 uguale a 0 (zero) scrivere un
//opportuno messaggio di errore

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, quoz=0, resto=0;

  do {
    cin>>num1;
    cin>>num2;
  } while(num1<0 || num2<0);

  if (num1<num2) {
    cout<<"Non è possibile eseguire la divisione.";
  } else {
    if (num2==0) {
      cout<<"Errore!!";
    } else {
      if (num1>num2) {
        resto=num1;
        while (resto>=num2) {
          resto=resto-num2;
          quoz++;
        }
        cout<<quoz<<endl;
        cout<<resto;
      }
    }
  }
  return 0;
}
