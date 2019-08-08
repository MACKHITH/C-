// Programma che dati due nummeri interi A e B verificare se A � divisibile per B 
// se A � divisibile per B calcolare il quoziente

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin>>a>>b;

    if (a%b==0)
    {
        cout<<a/b;
    }
	return 0;
}
