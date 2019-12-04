#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL,"portuguese");
	float mediafinal,n1,n2,n3,mediaexercicio;
	cout<<"Informe a primeira nota: ";
	cin>> n1;
	cout<<"Informe a segunda nota: ";
	cin>> n2;
	cout<<"Informe a terceira nota: ";
	cin>> n3;
	cout<<"Informe a media do exercicios:  ";
	cin>> mediaexercicio;
	
	mediafinal = (n1 + n2*2 + n3*3 + mediaexercicio)/7;
	cout<<"Media final: "<<mediafinal;
    if (mediafinal >= 9){
	
	cout << "\nA";
	}
    if (mediafinal >= 7.5 && mediafinal <  9){
    	cout << "\nB";
	}	
    if (mediafinal>= 6 && mediafinal <  7.5){
    	cout << "\nC";
	}	
    if (mediafinal >= 4 && mediafinal <  6)	{
    	cout << "\nD";
	}
    if (mediafinal <  4) {
    	cout << "\nE";
	}
	
		return 0;
}
