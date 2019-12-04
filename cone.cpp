#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class cone 
{
	private:
	float raio; 
	float altura;
	float area;
	float arealateral;
	float volume;
	float geratriz;
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
    float getGeratriz(){
    return geratriz;
	}
float calcularGeratriz(){
	geratriz = (sqrt((altura*2)+(raio*2)));
}

float calcularAreaLateral(){
    arealateral = (3.1415 * (raio * geratriz));
}
float calcularArea(){
	area = ((3.1415*raio)*(geratriz+raio));
}
		
float calcularVolume(){
volume = ((0.33*3.1415)*((raio*2)*altura));
}
		
};

int main(int argc, char** argv) 
{
	cone p;
	int op;
	float raio,altura;
  
    do{
    cout <<"Digite o raio :           ";
    cin >>raio;
    cout <<"Digite a altura :         ";
    cin >>altura;
    
    p.setRaio(raio);
    p.setAltura(altura);
    p.calcularVolume();
    p.calcularGeratriz();
    p.calcularArea();
    p.calcularAreaLateral();
    
    cout <<"\nVolume:                   "<<p.getVolume();
    cout <<"\nGeratriz:                 "<<p.getGeratriz();
    cout <<"\nArea total:               "<<p.getArea();
    cout <<"\nArea lateral:             "<<p.getAreaLateral();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
