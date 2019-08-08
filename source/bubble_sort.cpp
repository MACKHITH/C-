// bubble sort

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void riempimentovettore(int vett[], int DIM){
    for (int i = 0; i < DIM; i++)
    {
        vett[i]=rand()%1000+1;
    }
}

void stampavettore(int vett[], int DIM){
    for (int i = 0; i < DIM; i++)
    {
        cout<<vett[i]<<"  ";
    }
}

void bubble_sort(int vett[], int DIM){
    int appoggio=0;
    for (int i = 0; i < DIM; i++)
    {
        if (vett[i]>vett[i+1])
        {
            appoggio=vett[i+1];
            vett[i+1]=vett[i];
            vett[i]=appoggio;
        }
    }
}

int controllo(int vett[], int DIM){
    int maggiore=0;
    for (int i = 0; i < DIM; i++)
    {
        if (vett[i]>vett[i+1])
        {
            maggiore++;
        }
    }
    return maggiore;
}

int main()
{
    srand(time(NULL));
    int DIM=10, vettore[DIM], conta=DIM;

    riempimentovettore(vettore, DIM);
    stampavettore(vettore, DIM);
    while (controllo(vettore, DIM)>0)
    {
        bubble_sort(vettore, DIM);
        controllo(vettore, DIM);
        cout<<endl;
        stampavettore(vettore, DIM);
    }
    return 0;
}
