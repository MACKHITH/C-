/*Scrivere un main che genera casualmente 15 numeri casuali compresi tra 1 e 100 e (tramite una funzione di
nome isPari) stampa a video quanti sono pari e quanti non sono pari*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int isPari(int numero){
    if (numero%2==0) {
    return true;
    } else {
    if (numero%2!=0) {
        return false;
    }
   }
}

int main(int argc, char const *argv[]) {
    srand(time(NULL));
    int num, pari=0, nonPari=0;

    for (int i = 0; i < 15; i++) {
        num=rand()%100+1;
        cout<<num<<" ";
        if (isPari(num)==true) {
          pari++;
        } else {
          if (isPari(num)==false) {
            nonPari++;
          }
        }
    }

    cout<<endl;
    cout<<"ci sono "<<pari<<" numeri pari"<<endl;
    cout<<"ci sono "<<nonPari<<" numeri non pari";
  return 0;
}
