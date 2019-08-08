//scrivere un programma che dati due numeri A e B mette in A il piú piccolo ed in B l'altro
#include <iostream>
using namespace std;

int main() {
  int a, b, appoggio;

  cin >> a;
  cin >> b;

  if (b<a) {
    appoggio=b;
    b=a;
    a=appoggio;
  }

  cout <<a<<" "<<b;
  return 0;
}
