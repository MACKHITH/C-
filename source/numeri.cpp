#include<iostream>
using namespace std;

int main(){
    int N1, N2;

    cin>>N1;
    cin>>N2;

    if(N1<=N2){
        N1--;
        while(N1!=N2){
            cout<<N1<<endl;
            N1++;
        }
    }
    return 0;
}
