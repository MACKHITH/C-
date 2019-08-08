//Leggere da tastiera un numero intero non negativo “obbligando” l’utente a darti quello che gli è stato richiesto

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int numero;

  do {
    cin>>numero;
  } while(numero<0);

  cout<<numero;
  return 0;
}
