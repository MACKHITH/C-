//scrivere un programma che legge da tastiera inizio, fine e multiplo (inizio, fine e multiplo interi positivi con
//inizio <= fine) e conta quanti numeri multipli di multiplo ci sono tra inizio e fine

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int inizio, fine, multiplo, contaMultiplo=0;

  do {
    cin>>inizio;
    cin>>fine;
    cin>>multiplo;
  } while(inizio>fine && inizio<0 && fine<0 && multiplo<0);

  while (inizio!=fine) {
    if (inizio%multiplo==0) {
      contaMultiplo++;
    }
    inizio++;
  }

  cout<<contaMultiplo;
  return 0;
}
