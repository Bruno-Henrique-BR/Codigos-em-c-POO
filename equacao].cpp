#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	//Declarações das Variáveis Necessarias
	int x,
		y,
		z,
		a,
		b,
		c,
		delta,
		raiz;
		//Dados de Entrada
		cout<<"\nDigite o valor de B: \n";
		cin>>y;
		cout<<"\nInforme o valor de A: \n";
		cin>>x;
		cout<<"\nInforme o valor de C: \n";
		cin>>z;
		//Cálculos
		a=x;
		b=y;
		c=z;
		delta=((pow(b,2)-4)*(a*c));
		raiz=sqrt(delta);
		if  (delta<0){
		
			cout<<"\nNenhuma Raiz Real\n";
		}
	    else
	    	cout<<"\nDuas Raizes Reais Distintas\n";
	    
	    if  (delta==0){
		
			cout<<"\nPossui Duas Raizes Iguais\n";	
		}
}
