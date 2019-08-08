/*Scrivere una funzione di nome moltiplica che dati 2 numeri nn negativi ne restituisce il prodotto. La funzione
non può usare gli operatori +, -, *, /, div, ++, --*/
#include <iostream>
using namespace std;

int prodotto(int num, int num2){
  int prodotto=0;
  while (num2!=0) {
    prodotto=prodotto+num;
    num2--;
  }
  return prodotto;
}

int main(int argc, char const *argv[]) {
  int numero, numero2;

  do {
    cin>>numero;
    cin>>numero2;
  } while(numero<0 || numero2<0);

  cout<<"Prodotto: "<<prodotto(numero, numero2);
  return 0;
}
