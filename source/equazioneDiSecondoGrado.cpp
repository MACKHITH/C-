// Programma che risolve un'equazione di secondo grado

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int A, B, C, delta, X1, X2;

    cout<<"Risoluzione di un'equazione di secondo grado"<<endl;
    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    cout<<"C: ";
    cin>>C;

	if(A!=0)
	{
		if(B!=0 && C!=0)
		{
			{
				cout<<"equazione completa"<<endl;
				delta=B*B-(4*A*C);
				cout<<"delta="<<delta<<endl;
			 
				if(delta>0) 
		    	
				{X1=-B+sqrt(delta)/(2*A);
				X2=-B-sqrt(delta)/(2*A);
				cout<<"x1="<<X1<<endl;
				cout<<"x2="<<X2<<endl;}

				else
			
				if(delta<0)
		    	{
		    
					{cout<<"equazione impossibile";}
					
			        }else
			
					{X1=-B/(2*A);  
					X2=-B/(2*A);
					cout<<"x1="<<X1<<endl;
					cout<<"x2="<<X2<<endl;}
			}
		}
		
		else 
		    if(B==0)
		{
			if(C==0)
			{
			    cout<<"equazione pura"<<endl;
				X1=(-sqrt(-C/A));
				X2=(+sqrt(-C/A));
				cout<< "x1="<<X1<<endl;
				cout <<"x2="<<X2;
	
		    }
			else
			{
				cout<<"equazione monomia"<<endl;
				X1=0; 
				X2=0;
				cout<<"x1="<<X1<<endl;
				cout<<"x2="<<X2;
			}
		}
				else
			{	
				cout<<"equazione spuria"<<endl;
				X1=0;
				X2=-B/A;
				cout<<"x1="<<X1<<endl;
				cout<<"x2="<<X2;
			}
	}
	else
    cout<<"non � di secondo grado";
    return 0;
}