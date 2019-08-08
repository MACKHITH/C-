//Scrivere un programma che genera N numeri casuali compresi tra minimum e maximum (minimum e
//maximum generati casualmente, non negativi, con maximum>=minimum; N CASUALE positivo) e ne calcola
//la media REAL

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  int minimum, maximum, N, num;

  do
  {
    minimum = rand();
    maximum = rand();
    N = rand();
  } while (minimum < 0 || maximum < 0 || maximum < minimum);

  while (N != 0)
  {
    num = rand() % (maximum - minimum + 1) + minimum;
    cout << num << " ";
    N--;
  }

  return 0;
}
