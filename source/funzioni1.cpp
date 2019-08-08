/*Scrivere un main che genera casualmente 15 numeri casuali compresi tra 1 e 100 e (tramite una funzione di
nome isPari) stampa a video, uno per uno, se i numeri sono pari o no*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
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
  int num;

  for (int i = 0; i < 15; i++) {
    num=rand()%100+1;
    cout<<num<<endl;
    if (isPari(num)==true) {
      cout<<"Pari"<<endl;
    } else {
      if (isPari(num)==false) {
        cout<<"Non e' pari"<<endl;
      }
    }
  }
  return 0;
}
