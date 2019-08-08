/*Scrivere una funzione di nome sottrai che dati 2 numeri interi non negativi ne restituisce la sottrazione. La
funzione può usare solo gli operatori ++ e --*/
#include <iostream>
using namespace std;

int sottrazione(int num, int num2){
  if (num>num2) {
    while (num2!=0) {
      num--;
      num2--;
    }
  } else {
    if (num<num2) {
      return false;
    }
  }
  return num;
}

int main(int argc, char const *argv[]) {
  int numero, numero2;

  do {
    cin>>numero;
    cin>>numero2;
  } while(numero<0 || numero2<0);

  if (sottrazione(numero, numero2)==false) {
    cout<<"Non e' possibile eseguire la sottrazione.";
  } else {
    cout<<"Sottrazione: "<<sottrazione(numero, numero2);
  }
  return 0;
}
