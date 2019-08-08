#include<iostream>
using namespace std;

int main(){
    int B;
    int N;
    int P=1;
    int I=1;

    cin>>B;
    cin>>N;

    while(I<=N){
        P=P*B;
        I=I+1;
    }
    cout<<P;
    return 0;
}
