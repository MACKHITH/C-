/* 
Programma che legge dalla tastiera una sequenza di numeri interi terminata da 0 ed alla fine dice se la sequenza è crescente o NON è crescente
sequenza nulla è indeterminata se la sequenza è fatta da un solo nuemro è indeterminata
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, contaZero = 0, previousNumber = 0, nonCrescente = 0, contaNumeri = 0;
    bool crescente = false;

    do
    {
        cin >> number;
        if (number != 0)
        {
            contaNumeri++;
            if (previousNumber != 0)
            {
                if (number > previousNumber || number < previousNumber)
                {
                    crescente = true;
                }
            }
            else
            {
                previousNumber = number;
            }
        }
        if (number == previousNumber)
        {
            nonCrescente++;
        }
        if (previousNumber > number)
        {
            nonCrescente++;
        }
        if (number == 0)
        {
            contaZero++;
        }
    } while (contaZero != 1);

    cout << endl;
    cout << crescente << endl;
    cout << nonCrescente << endl;

    if (crescente == true)
    {
        if (nonCrescente == 0)
        {
            cout << "crescente";
        }
    }

    if (contaNumeri == 1 || contaNumeri == 0)
    {
        cout << "indeterminata";
    }
    else
    {
        if (nonCrescente != 0)
        {
            cout << "non crescente";
        }
    }

    return 0;
}
