/*Scrivere un main che legge da tastiera 2 numeri e (tramite una funzione di nome somma) stampa a video il
risultato della somma*/

#include <iostream>
using namespace std;

int somma(int num, int num2){
  int somma;
  somma=num+num2;
  return somma;
}

int main(int argc, char const *argv[]) {
  int numero, numero2;

  cin>>numero;
  cin>>numero2;

  cout<<"Somma: "<<somma(numero, numero2);
  return 0;
}
