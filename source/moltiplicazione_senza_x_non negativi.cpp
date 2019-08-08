//scrivere un programma che legge da tastiera num1 e num2 (interi, non negativi) e calcola ris=num1*num2
//senza usare gli operatori *, / o mod

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num2, ris=0;

  do {
    cin>>num1;
    cin>>num2;
  } while(num1<0 || num2<0);

  while (num2!=0) {
    ris=ris+num1;
    num2--;
  }
  cout<<ris;
  return 0;
}
