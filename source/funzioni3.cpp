/*Scrivere un main che genera casualmente 15 numeri casuali compresi tra 1 e 100 e (tramite una funzione di
nome isPositivo) stampa a video, uno per uno, se i numeri sono positivi o no*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int isPositivo(int numero){
  if (numero>0) {
    return true;
  } else {
    if (numero<0) {
      return false;
    }
  }
}

int main(int argc, char const *argv[]) {
    srand(time(NULL));
  int num;

  for (int i = 0; i < 15; i++) {
    num=rand()%100+1;
    cout<<num<<endl;
    if (isPositivo(num)==true) {
      cout<<"Positivo"<<endl;
    } else {
      if (isPositivo(num)==false) {
        cout<<"Non e' positivo"<<endl;
      }
    }
  }
  return 0;
}
