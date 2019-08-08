/*Scrivere un main che legge da tastiera 2 numeri positivi (la verifica della positività deve essere fatta tramite
una funzione di nome isPositivo) e (tramite una funzione di nome quoziente) stampa a video il quoziente (la
funzione quoziente può usare solo gli operatori + e -)*/
#include <iostream>
using namespace std;

int isPositivo(int num){
  if (num>0) {
    return true;
  } else {
    if (num<0) {
      return false;
    }
  }
}

int quoziente(int NUM1, int NUM2){
  int risultato=0;
  if (NUM1>NUM2) {
    while (NUM1!=0) {
      NUM1=NUM1-NUM2;
      risultato++;
    }
  }
  return risultato;
}

int main(int argc, char const *argv[]) {
  int numero, numero2;

  do {
    cin>>numero;
    cin>>numero2;
  } while(isPositivo(numero)!=true || isPositivo(numero2)!=true);

  cout<<"Quoziente: "<<quoziente(numero, numero2);
  return 0;
}
