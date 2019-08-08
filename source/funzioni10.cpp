/*Scrivere una funzione di nome resto che dati 2 numeri (il primo non negativo, il secondo positivo) ne
restituisce il resto. La funzione non può usare gli operatori +, -, *, /, div, ++, --*/

#include <iostream>
using namespace std;

int resto(int num1, int num2){
    int resto=0;

    if(num1<num2){
        return false;
    } else {
        if(num1>num2){
            resto=num1;
            while(resto>num2){
                resto=resto-num2;
            }
            return resto;
        }
    }
}

int main(int argc, char const *argv[]) {
    int numero, numero2;

    do{
        cin>>numero;
        cin>>numero2;
    }while(numero<0 || numero2<0);

    cout<<"Resto: "<<resto(numero, numero2);
    return 0;
}
