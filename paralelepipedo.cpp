#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class paralelepipedo 
{
	private:
	float altura;
	float largura;
	float comprimento;
	float area;
	float volume;
public:
	  void setAltura(float valorAltura)
	{
		if ( valorAltura > 0 )
		{
				altura = valorAltura;
		}
	
	
}
	void setComprimento(float valorComprimento)
	{
		if ( valorComprimento > 0 )
		{
				comprimento = valorComprimento;
		}
	
	
}

	void setLargura(float valorLargura)
	{
		if ( valorLargura > 0 )
		{
			largura = valorLargura;
		}
		
		
	}
	
	float getComprimento(){
    return comprimento;
}
    float getLargura(){
	return largura;
}
    float getArea(){
	return area;
}
    float getVolume(){
    	return volume;
	}
    float calcularArea(){
     area =	( 2 * (altura * largura + altura * comprimento + largura *
comprimento));
} 
    float cacularVolume(){
	volume = (altura * largura * comprimento);
}
		
};

int main(int argc, char** argv) 
{
	paralelepipedo p;
	int op;
	float comprimento,largura,altura;
  
    do{
    cout<<"Digite a altura:          ";
    cin>>altura;
    cout <<"Digite o comprimento:     ";
    cin >>comprimento;
    cout <<"Digite a largura:         ";
    cin >>largura;
    
    p.setAltura(altura);
    p.setComprimento(comprimento);
    p.setLargura(largura);
    p.calcularArea();
    p.cacularVolume();
    cout <<"\nArea total:               "<<p.getArea();
    cout <<"\nVolume:                   "<<p.getVolume();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
