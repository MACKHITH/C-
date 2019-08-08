/* Programma che legge tre numeri num1, num2, num3(interi) e tramite una funzione moltiplica calcola e restituisce il 
prodotto tra il più grande ed il più piccolo 
*/

#include <iostream>
using namespace std;

int multiply(int number1, int number2)
{
    return number1 * number2;
}

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout << num1 << " " << num2 << " " << num3 << endl;

    if (num1 > num2 && num1 > num3)
    {
        if (num2 < num3)
        {
            cout << multiply(num1, num2);
        }
        else
        {
            cout << multiply(num1, num3);
        }
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            if (num1 < num3)
            {
                cout << multiply(num2, num1);
            }
            else
            {
                cout << multiply(num2, num3);
            }
        }
        else
        {
            if (num3 > num1 && num3 > num2)
            {
                if (num1 < num2)
                {
                    cout << multiply(num3, num1);
                }
                else
                {
                    cout << multiply(num3, num2);
                }
            }
        }
    }

    return 0;
}
