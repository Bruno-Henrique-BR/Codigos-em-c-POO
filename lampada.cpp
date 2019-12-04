#include <cstdlib>
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;
class Lampada {
public:
string tipo;
string marca;
float preco;
int volts;
int potencia;
int status;

public: 

Lampada(){
tipo = "NADA";
marca = "NADA";
preco = 0;
volts = 0;
potencia = 0;
status = 0;
}

void Ascender(){
	status = 1;
}	
void Apagar(){
	status = 2;
  }
void Meia (){
	status = 3;
}	

};

int main(int argc, char** argv){
setlocale (LC_ALL,"portuguese");	
Lampada l;
int op;
	
cout<<"Digite o tipo: ";
cin >> l.tipo;

cout<<"Digite a marca: ";
cin>> l.marca;

cout<<"Digite o preço: ";
cin>> l.preco;

cout<<"Digite o volts: ";
cin>> l.volts;

cout<<"Digite a potencia: ";
cin>> l.potencia;	

cout<<"1- Ligar";
cout<<"2- Desligar";
cout<<"3- Meia Luz "; 
cin>>op;
/*if (l.status == true) 
cout<< "Status: Acesa ";
else {
	cout<<"Status: Desligada ";
} 
*/
switch(op){
	case 1:
	l.Ascender();	
	break;
	case 2:
	l.Apagar();
	break;
	case 3:
	l.Meia();
	break;
}
l.Ascender();
l.Apagar();



};
