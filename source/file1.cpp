/*scrivere un programma che chiede ad un utente una sequenza di numeri interi (terminata da 0) ed uno alla
volta li scrive nel file in modo tale che i numeri nel file (uno per riga) siano sempre in ogni momento in ordine
crescente*/
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  fstream file("file.txt", std::fstream::out);
  int number1, number2 = 0, support = 0, countZeroes = 0;

  if (!file)
  {
    cout << "Error with opening the file";
    if (!file)
    {
      cout << "Error with opening the file";
    }
  }
  else
  {
    do
    {
      number1 = rand() % 10 + 0;
      if (number1 != 0)
      {
        file << number1 << endl;
      }
      if (number1 == 0)
      {
        countZeroes++;
      }
    } while (countZeroes != 1);
  }

  while (file.eof())
  {
    file >> number1;
    if (number2 != 0)
    {
      if (number2 > number1)
      {
        support = number2;
        number2 = number1;
        number1 = support;
      }
    }
    else
    {
      number2 = number1;
    }
  }

  file.close();
  return 0;
}
