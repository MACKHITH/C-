//Scrivere un programma che genera un numero casuale N compreso tra minimum e maximum (minimum e
//maximum generati casualmente, non negativi, con maximum>=minimum)

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  int minimum, maximum, N;

  do
  {
    minimum = rand();
    maximum = rand();
  } while (minimum < 0 || maximum < 0 || maximum < minimum);

  cout << minimum;
  cout << endl;
  cout << maximum;
  cout << endl;

  N = rand() % (maximum - minimum + 1) + minimum;
  cout << N;

  return 0;
}
