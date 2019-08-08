#include <iostream>
using namespace std;

int sottrai(int n1, int n2){
    int ris=0;
    if(n1>n2){
        while(n2!=0){
            n1--;
            n2--;
        }
        ris=n1;
    } else {
        if(n1<n2){
            while(n1!=0){
                n2--;
                n1--;
            }
        }
        n2=n2*-1;
        ris=n2;
    }
    return ris;
}

int main(){
    int num1, num2;

    cin>>num1;
    cin>>num2;

    cout<<sottrai(num1, num2);
    return 0;
}
