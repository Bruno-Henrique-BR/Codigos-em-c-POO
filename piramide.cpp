#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class piramide 
{
	private:
	float base; 
	float altura;
	float volume;
public:
	void setBase(float valorBase)
	{
		
		base = valorBase;
	
}

	void setAltura(float valorAltura)
	{
		
		altura = valorAltura;
	}
	
	float getBase(){
    return base;
}
    float getAltura(){
	return altura;
}
    float getVolume(){
	return volume;
}
float calcularVolume(){
	volume = (0.33 *(base * altura));
}
		
};

int main(int argc, char** argv) 
{
	piramide p;
	int op;
	float base,altura;
  
    do{
    cout <<"Digite a base :            ";
    cin >>base;
    cout <<"Digite a altura :          ";
    cin >>altura;
    p.setBase(base);
    p.setAltura(altura);
    p.calcularVolume();
    cout <<"\nVolume:                  "<<p.getVolume();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
