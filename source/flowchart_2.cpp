#include<iostream>
using namespace std;

int main(){
    int INIZIO, FINE;

    cin>>INIZIO;
    cin>>FINE;

    while(INIZIO!=FINE){
        if(INIZIO<FINE){
            do{
                cout<<INIZIO<<endl;
                INIZIO=INIZIO+1;
            }while(INIZIO<=FINE);
        } else {
            do{
                cout<<INIZIO<<endl;
                INIZIO=INIZIO-1;
            }while(INIZIO>=FINE);
        }
    }
    return 0;
}
