//scrivere un programma che dati 3 numeri A, B e C fa lo scambio "circolare"
#include<iostream>
using namespace std;

int main(){
    int a, b, c, appoggio;

    cin>>a;
    cin>>b;
    cin>>c;

    cout<<a<<" "<<b<<" "<<c;
    cout<<endl;

    appoggio=b;
    b=a;
    a=c;
    c=appoggio;

    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
