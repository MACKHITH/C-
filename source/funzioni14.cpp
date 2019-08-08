/*scrivere una funzione di nome isPrimo che dato un numero N dice se il numero è o non è Primo (per la
definizione di numero primo usare wikipedia)*/
#include <iostream>
using namespace std;

int isPrimo(int num){
  int divisore=1, divisori=0;
  while (divisore<=num) {
    if (num%divisore==0) {
      divisori++;
    }
    divisore++;
  }
  if (divisori==2) {
    return true;
  }
}

int main(int argc, char const *argv[]) {
  int numero;

  cin>>numero;

  if (isPrimo(numero)==true) {
    cout<<"Primo";
  } else {
    if (isPrimo(numero)!=true) {
      cout<<"Non e' Primo";
    }
  }
  return 0;
}
