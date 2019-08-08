//Scrivere un programma che genera un numero casuale N compreso tra minimum e maximum (minimum e
//maximum letti da tastiera, non negativi, con maximum>=minimum)

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  int N, minimum, maximum;

  do
  {
    cin >> minimum;
    cin >> maximum;
  } while (minimum < 0 || maximum < 0 || maximum < minimum);

  N = rand() % (maximum - minimum + 1) + minimum;
  cout << N;
  return 0;
}
