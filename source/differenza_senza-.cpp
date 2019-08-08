//scrivere un programma che legge da tastiera num1 e num2 (interi) e calcola ris=num1-num2 senza usare gli
//operatori + e – (dovresti farcela con 2 cicli)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int num1, num1Clone, num2, num2Clone, ris=0;

  cout<<"num1: ";
  cin>>num1;
  num1Clone=num1;
  cout<<"num2: ";
  cin>>num2;
  num2Clone=num2;

  if (num2<0) {
    num2=num2*-1;
    if (num1>0) {
      while (num2!=0) {
        num1++;
        num2--;
      }
      ris=num1;
    } else {
      if (num1<0) {
        while (num2!=0) {
          num1++;
          num2--;
        }
        ris=num1;
      }
    }
  } else {
    if (num2>0) {
      num2=num2*-1;
      if (num1>0) {
        while (num2!=0) {
          num1--;
          num2++;
        }
        ris=num1;
      } else {
        if (num1<0) {
          while (num2!=0) {
            num1--;
            num2++;
          }
          ris=num1;
        }
      }
    }
  }
  cout<<"("<<num1Clone<<")"<<" - "<<"("<<num2Clone<<")"<<" = "<<ris;
  return 0;
}
