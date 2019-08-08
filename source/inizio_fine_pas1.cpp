//scrivere un programma che legge da tastiera "inizio" e "fine" (inizio e fine interi con inizio<=fine) e stampa tutti
//i numeri da inizio a fine a passi di 1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int inizio, fine;

  do {
    cin>>inizio;
    cin>>fine;
  } while(inizio>fine);

  while (inizio<fine+1) {
    cout<<inizio;
    inizio++;
  }
  return 0;
}
