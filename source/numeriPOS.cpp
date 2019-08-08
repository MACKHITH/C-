// programma che conta, dati 3 numeri in ingresso, quanti sono positivi

#include <iostream>
using namespace std;

int main(){
	int num1, pos=0, i=0;

    while (i!=3)
    {
        cin>>num1;
        if (num1>0)
        {
            pos++;
        }
        i++;
    }

    cout<<pos;
	return 0;
}