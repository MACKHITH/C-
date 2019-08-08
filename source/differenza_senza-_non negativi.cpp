//scrivere un programma che legge da tastiera num1 e num2 (interi, non negativi) e calcola ris=num1-num2
//senza usare gli operatori + e -

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, ris;

  do {
    cin>>num1;
    cin>>num2;
  } while(num1<0 || num2<0);

  if (num1>num2) {
    while (num2!=0) {
      num1--;
      num2--;
    }
    ris=num1;
  } else {
    if (num2>num1) {
      while (num1!=0) {
        num2--;
        num1--;
      }
      num2=num2*-1;
      ris=num2;
    }
  }
  cout<<ris;
  return 0;
}
