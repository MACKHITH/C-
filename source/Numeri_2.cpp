/*
 * forlinNumeri.cpp
 *
 *  Created on: Jul 30, 2019
 *      Author: matthew
 */
/*
Programma che aggiunge ad un file di testo di nome numeri.txt N numeri interi, N casuale intero non negativo minore di 10, i numeri vanno
scritti uno per riga, il primo numero da inserire nel file è 0 i seguenti numeri sono in ordine crescente a passi di 1
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	ofstream file("numeri.txt");
	int N, nFile=1;

	if(!file){
		cout<<"Error with opening of the file";
	}

	file<<0<<endl;
	N=rand()%10+1;

	while(N>0){
		file<<nFile<<endl;
		nFile++;
		N--;
	}

	file.close();
	return 0;
}



