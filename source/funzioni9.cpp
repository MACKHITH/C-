/*Scrivere una funzione di nome dividi che dati 2 numeri (il primo non negativo, il secondo positivo) ne
restituisce il quoziente. La funzione non può usare gli operatori +, -, *, /, div, ++, --*/

#include <iostream>
using namespace std;

int dividi(int num1, int num2){
    int quoziente=0;
    if(num1<num2){
        return false;
    } else {
        if(num1>num2){
            while(num1>=num2){
                num1=num1-num2;
                quoziente++;
            }
            return quoziente;
        }
    }
}

int main(int argc, char const *argv[]) {
    int numero1, numero2;

    do{
        cin>>numero1;
        cin>>numero2;
    }while(numero1<0 || numero2<0);

    cout<<"Quoziente: "<<dividi(numero1, numero2);
    return 0;
}
