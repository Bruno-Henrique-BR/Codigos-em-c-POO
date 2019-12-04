#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

void H1 ();
void C1 ();
void P1 ();
void B1 ();
void M1 ();
void R1 ();
int menu ();
int opcao;
    char nome[50];
    float pedido1; 
	float pedido2;
	float pedido3;
    float pedido4;
    float pedido5;
    double resultado;
    float hamburguer = 5.00;
	float cheeseburger = 5.50;
	float batatafritas = 1.00;
	float milkshake = 10.00;
	float refri500ml = 10.00;
int main(int argc, char** argv) {
printf("Qual e seu nome ? ");
gets(nome);
cout<<"\nSeja bem vindo "<<nome<<"\n";
while (opcao!=7){
          system("cls");
          menu();
          } 
	return 0;
}
int menu (){


cout<<"\t\t\t\t\tLANCHONETE \n";
cout<<"\n";
cout<<"\n\t\t\t\t      Seja bem vindo! \n\n";
cout<<"1- Hamburguer 5.00 R$ \n";
cout<<"2- Cheeseburger 5.50 R$ \n";
cout<<"3- Batatas Fritas 1.00 R$ \n";
cout<<"4- Milk Shake 10.00 R$ \n";
cout<<"5- Refrigerante 500ml 10.00 R$ \n";
cout<<"6- Pedir Conta \n";
cout<<"7- Sair \n";
cout<<"Escolha a vontade "<<nome<<"!\n";
cin>>opcao;
switch(opcao){

	case 1:
		H1 ();
		break;
	case 2:
		C1 ();
		break;
	case 3:
		B1 ();
		break;
	case 4:
		M1 ();
		break;
	case 5:
		R1 ();
		break;
	case 6:
		P1 ();
		break;
    case 7:
    	exit(0);
	default:
		cout<<"Opcao invalida\nTente outra vez\n";
}

	return 0;
}

void H1 (){
	
	cout<<"Quantos hamburguer voce deseja: ";
	cin>>pedido1;
	pedido1 = pedido1 * hamburguer;

	
}
void C1 (){

	cout<<"Quantos cheeseburger voce deseja: ";
	cin>>pedido2;
	pedido2 = pedido2 * cheeseburger;
	

	
}
void B1 (){

	cout<<"Quantas batatas fritas voce deseja: ";
	cin>>pedido3;
	pedido3 = pedido3 * batatafritas;
	

}
void M1 (){
	
	cout<<"Quantos milkshake voce deseja: ";
	cin>>pedido4;
	pedido4 = pedido4 * milkshake;


	
}

void R1 (){
	
	cout<<"Quantos refrigerante voce deseja: ";
	cin>>pedido5;
	pedido5 = pedido5 * refri500ml;

	
}
void P1(){
	resultado = pedido1+pedido2+pedido3+pedido4+pedido5;
	printf("Conta: R$ %.2f",resultado);
	cout<<"\n";
	cout<<"Volte sempre "<<nome<<"\n";
	system("PAUSE");
	
	
}
