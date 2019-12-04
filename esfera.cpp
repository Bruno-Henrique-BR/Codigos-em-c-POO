#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class esfera 
{
	private:
	float raio; 
	float area;
	float volume;
public:
	void setRaio(float valorRaio)
	{
		if ( valorRaio > 0){
		
		raio = valorRaio;
	}
}

	
	float getRaio(){
    return raio;
}
    float getArea(){
	return area;
}
    float getVolume(){
	return volume;
}
float calcularArea(){
	area = (4*((3.1415*raio) * 2));
}
		
float calcularVolume(){
volume =((4/3)*((3.1415*raio) * 3));
}
		
};

int main(int argc, char** argv) 
{
	esfera p;
	int op;
	float raio;
  
    do{
    cout <<"Digite o raio :             ";
    cin >>raio;
    
    p.setRaio(raio);
    p.calcularArea();
    p.calcularVolume();
    cout <<"\nArea total:               "<<p.getArea();
    cout <<"\nVolume:                   "<<p.getVolume();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
