#include<iostream>
using namespace std;

int main(){
    int num1, contaZero=0, numPrecedente=0, crescente=0, decrescente=0, contanumeri=0;

    do{
        cin>>num1;
        if(num1!=0){
            numPrecedente=num1;
            cin>>num1;
            if(numPrecedente<num1){
                crescente++;
            } else {
                decrescente++;
            }
        }
        if(num1==0){
            contaZero++;
        }
    }while(contaZero==0);

    if(decrescente!=0){
        cout<<"La sequenza e' descrescente";
    }

    if(crescente!=0){
        cout<<"La sequenza e' crescente";
    }
    return 0;
}
