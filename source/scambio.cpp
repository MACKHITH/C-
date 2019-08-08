//scrivere un programma che dati due numeri A e B li scambia
#include<iostream>
using namespace std;

int main() {
    int a, b, appoggio;

    cin>>a;
    cin>>b;

    appoggio=a;
    a=b;
    b=appoggio;

    cout<<a<<" "<<b;
    return 0;
}
