//scrivere un programma che legge da tastiera inizio, fine e passo (inizio, fine e passo interi con inizio<=fine e
//passo positivo) e stampa tutti i numeri da inizio a fine a passi di passo

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int inizio, fine, passo;

  do {
    cin>>inizio;
    cin>>fine;
    cin>>passo;
  } while(inizio>fine && passo<0);

  while (inizio<fine) {
    cout<<inizio<<" ";
    inizio=inizio+passo;
  }
  return 0;
}
