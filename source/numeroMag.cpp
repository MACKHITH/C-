// dato N stampare il maggiore della sequenza

#include<iostream>
using namespace std;

int main(){
    int n, x, max=0;

    cin>>n;

    while (n>0)
    {
        cin>>x;
        if(x>max){
            max=x;
        }
        n--;
    }
    
    cout<<max;
	return 0;
}
