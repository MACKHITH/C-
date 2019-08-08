//scrivere un programma che legge da tastiera inizio, fine e passo (inizio, fine e passo interi, passo uguale a +1
//o a -1) e stampa tutti i numeri da inizio a fine a passi di passo

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int inizio, fine, passo, appoggio;

  cin>>inizio;
  cin>>fine;

  do {
    cin>>passo;
  } while(passo!=1 && passo!=-1);

  if (passo==1) {
    while (inizio!=fine) {
      cout<<inizio<<" ";
      inizio=inizio+passo;
    }
  } else {
     if (passo==-1) {
       if (inizio>fine) {
         while (inizio!=fine) {
           cout<<inizio<<" ";
           inizio=inizio+passo;
         }
       } else {
         cout<<"Errore!! ";
       }
     }
  }
  return 0;
}
