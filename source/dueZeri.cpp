/* 
Programma che legge una sequenza di numeri interi terminata quado sono stati letti due zeri (i zeri non vanno conteggiati) e alla fine 
scrive quanti numeri sono stati letti
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, contaZeri = 0, contaNumeri = 0;

    do
    {
        cin >> N;
        if (N != 0)
        {
            contaNumeri++;
        }
        if (N == 0)
        {
            contaZeri++;
        }
    } while (contaZeri != 2);

    cout << contaNumeri;
    return 0;
}
