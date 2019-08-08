// Programma che dati in input N stampa i numeri da 0 a N se N>=0

#include<iostream>
using namespace std;

int main(){
    int n, x=0;

    cin>>n;

    if (n>=0)
    {
        while (x!=n+1)
        {
            cout<<x<<endl;
            x++;
        }
    } else
    {
        cout<<"ERRORE";
    }

    return 0;
}
