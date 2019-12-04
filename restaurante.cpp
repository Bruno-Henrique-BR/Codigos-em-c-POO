#include <iostream>
#include <cstdlib>
#include <cmath>

 using namespace std;
class Restaurante
{
	private:
		float valor;
		int pessoa;
	    float valorPes;
	
	public:
		void setValor(float valorValor){
			valor = valorValor;
		}
		void setPessoa(int valorPessoa){
			pessoa = valorPessoa;
		} 
		void setvalorPes(float porPessoa){
			valorPes = porPessoa;
		}
		float getValor(){
			return valor;
		}
		int getPessoa()
		{
			return pessoa;
		}
		float getporPessoa(){
			return valorPes;
		}
		float calcular(float valor,int pessoa,float valorPes){
		valorPes = valor / pessoa;
		cout<<"Valor por pessoa: R$ "<<valorPes<<endl;
		}
		
};
int main(int argc, char** argv) {
	Restaurante r;
	float valor;
	int pessoa;
	int i;
	float total;
	float valorPes;
     for (i=0; i<10; i++){
	cout<<"Valor consumido: "<<endl;
	cin>>valor;
	
	cout<<"Quantas pessoas consumiu: "<<endl;
	cin>>pessoa;
	
	r.calcular(valor,pessoa,valorPes);
	total = total+valor;
}  
	cout<<"Total da noite: "<<total<<endl;
	
	return 0;
}
