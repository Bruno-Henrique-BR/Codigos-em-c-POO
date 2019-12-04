#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class cilindro 
{
	private:
	float raio; 
	float altura;
	float area;
	float arealateral;
	float volume;
public:
	void setRaio(float valorRaio)
	{
		if ( valorRaio > 0){
		
		raio = valorRaio;
	}
}
	void setAltura(float valorAltura)
	{
		if ( valorAltura > 0){
		
		altura = valorAltura;
	}
}

	
	float getRaio(){
    return raio;
}
    float getAltura (){
    return altura;
	}
    float getArea(){
	return area;
}
    float getAreaLateral(){
	return arealateral;
}
    float getVolume(){
	return volume;
}
    float calcularAreaLateral(){
    arealateral = ((2*3.1415)*(raio*altura));
}
    float calcularArea(){
	area = (((2*3.1415)*raio)*(altura+raio));
}
		
    float calcularVolume(){
    volume = ((3.1415*raio)*(raio*altura));
}
		
};

int main(int argc, char** argv) 
{
	cilindro p;
	int op;
	float raio,altura;
  
    do{
    cout <<"Digite o raio :           ";
    cin >>raio;
    cout <<"Digite a altura :         ";
    cin >>altura;
    
    p.setRaio(raio);
    p.setAltura(altura);
    p.calcularAreaLateral();
    p.calcularArea();
    p.calcularVolume();
    cout <<"\nArea lateral:             "<<p.getAreaLateral();
    cout <<"\nArea total:               "<<p.getArea();
    cout <<"\nVolume:                   "<<p.getVolume();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
