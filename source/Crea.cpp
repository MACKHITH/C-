/*
Programma che dato un file di testo di nome numeri.txt contenente
un po di numeri casuali crea un nuovo file di nome soloAlcuniNumerti.txt
contenente tutti numeri di numeri.txt che sono maggiori del più
piccolo pari e minori del più grande dispari
Se non esiste il più piccolo pari considerarlo come -infinito
Se non esiste il più grande dispari considerarlo come +infinito 
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    fstream file1("numeri.txt", std::fstream::out);
    fstream file2("soloAlcuniNumeri.txt", std::fstream::out);
    int N, number2;

    if (!file1)
    {
        cout << "Error with opening the file";
        if (!file2)
        {
            cout << "Error with opening the file";
        }
    }

    N = rand() % 15 + 1;

    while (N > 0)
    {
        number2 = rand() % 50 + 1;
        file1 << number2 << endl;
        N--;
    }

    file1.close();
    file2.close();

    fstream i_file1("numeri.txt", std::fstream::in);
    fstream o_file2("soloAlcuniNumeri.txt", std::fstream::out);
    int N1, numEven = 0, numOdd = 0, support = 0;

    while (i_file1 >> N)
    {
        if (N % 2 == 0)
        {
            if (numEven != 0)
            {
                if (N > numEven)
                {
                    support = numEven;
                    numEven = N;
                    N = support;
                }
            }
            numEven = N;
        }
        else
        {
            if (numOdd != 0)
            {
                if (N < numOdd)
                {
                    support = numOdd;
                    numOdd = N;
                    N = support;
                }
            }
            numOdd = N;
        }
    }

    if (numEven == 0)
    {
        cout << "-infinito";
    }
    else
    {
        if (numOdd == 0)
        {
            cout << "+infinito";
        }
        else
        {
            cout << "Even number: " << numEven << endl;
            cout << "Odd number: " << numOdd;
        }
    }

    i_file1.close();
    o_file2.close();

    fstream in_file1("numeri.txt", std::fstream::in);
    fstream out_file2("soloAlcuniNumeri.txt", std::fstream::out);
    int n1;

    while (in_file1 >> n1)
    {
        if (n1 != numEven && n1 != numOdd)
        {
            out_file2 << n1 << endl;
        }
    }

    in_file1.close();
    out_file2.close();
    return 0;
}
