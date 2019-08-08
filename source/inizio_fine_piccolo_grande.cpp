//scrivere un programma che legge da tastiera inizio e fine (inizio e fine interi) e stampa tutti i numeri dal piú
//piccolo al piú grande a passi di 1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int inizio, fine;

  cin>>inizio;
  cin>>fine;

  if (inizio<fine+1) {
    while (inizio!=fine) {
      cout<<inizio<<" ";
      inizio++;
    }
  } else {
    if (fine<inizio) {
      while (fine!=inizio+1) {
        cout<<fine<<" ";
        fine++;
      }
    }
  }
  return 0;
}
