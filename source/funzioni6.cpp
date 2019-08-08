/*Scrivere una funzione di nome somma che dati 2 numeri interi non negativi ne restituisce la somma. La
funzione può usare solo gli operatori ++ e --*/
#include <iostream>
using namespace std;

int somma(int num, int num2){
  while (num2!=0) {
      num++;
      num2--;
    }
  return num;
}

int main(int argc, char const *argv[]) {
  int numero, numero2;

  do {
    cin>>numero;
    cin>>numero2;
  } while(numero<0 || numero2<0);

  cout<<"Somma: "<<somma(numero, numero2);
  return 0;
}
