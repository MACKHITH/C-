/* Programma che legge da tastiera un numero N intero positivo e con una funzione calcolaEnnesimoNumeroPrimo calcola
e poi stampa a video l'Nesimo numero primo. N va controllato se necessario rifiutarlo e richiederlo ancora
*/

#include <iostream>
using namespace std;

int calculateNthNumberPrime(int N)
{
    int primeNum = 1, divider = 1, dividers = 0, finalPrimeNum = 0;

    while (N > 0)
    {
        int divider = 1, dividers = 0;
        while (divider <= primeNum)
        {
            if (primeNum % divider == 0)
            {
                dividers++;
            }
            divider++;
        }
        if (dividers == 2)
        {
            finalPrimeNum = primeNum;
            N--;
        }
        primeNum++;
    }
    return finalPrimeNum;
}

int main(int argc, char const *argv[])
{
    int N;

    do
    {
        cout << "Enter the Nth prime number you want to know: ";
        cin >> N;
    } while (N <= 0);

    cout << calculateNthNumberPrime(N);
    return 0;
}
