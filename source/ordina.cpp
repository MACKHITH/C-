/* 
Programma che dati 3 numeri A, B e C (generati casualmente tra -10 e +10) mette in A il più piccolo, in C il più grande ed in B 
quello che rimane.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int A, B, C, minimum = -10, maximum = 10, support = 0;

    A = rand() % (maximum - minimum + 1) + minimum;
    B = rand() % (maximum - minimum + 1) + minimum;
    C = rand() % (maximum - minimum + 1) + minimum;

    cout << "A: " << A << " B: " << B << " C: " << C;

    if (A < B && A < C)
    {
        if (B > C)
        {
            support = C;
            C = B;
            B = support;
        }
    }
    else
    {
        if (B < A && B < C)
        {
            support = B;
            B = A;
            A = support;
            if (B > C)
            {
                support = C;
                C = B;
                B = support;
            }
        }
        else
        {
            if (C < A && C < A)
            {
                support = C;
                C = A;
                A = support;
                if (B > C)
                {
                    support = C;
                    C = B;
                    B = support;
                }
            }
        }
    }

    cout << endl;
    cout << "A: " << A << " B: " << B << " C: " << C;
    return 0;
}