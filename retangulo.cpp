#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

	class retangulo 
{
	private:
	float comprimento; 
	float largura;
	float area;
	float perimetro;
public:
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
    float getPerimetro(){
    	return perimetro;
	}
    float calcularArea(){
	area = (largura * comprimento );
} 
    float cacularPerimetro(){
	perimetro = (2*(largura + comprimento));
}
		
};

int main(int argc, char** argv) 
{
	retangulo p;
	int op;
	float comprimento,largura;
  
    do{
    cout <<"Digite a comprimento :    ";
    cin >>comprimento;
    cout <<"Digite a largura :        ";
    cin >>largura;
    p.setComprimento(comprimento);
    p.setLargura(largura);
    p.calcularArea();
    p.cacularPerimetro();
    cout <<"\nArea total:               "<<p.getArea();
    cout <<"\nPerimetro:                "<<p.getPerimetro();
    cout <<"\nDigite 0 para Sair                    ";
    cout<<"\nDigite um numero diferente de 0 para continuar  ";
    cin >> op;
}while (op != 0);
	return 0;
}
