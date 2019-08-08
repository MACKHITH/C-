// Programma che dato in ingresso un numero stampi 
// i suoi divisori

#include <iostream>
using namespace std;

int main(){
    int numero, divisore=1;

    cin>>numero;

    while (divisore<numero)
    {
        if (numero%divisore==0)
        {
            cout<<divisore<<endl;
        }
        divisore++;
    }
	return 0;
}