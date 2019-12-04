#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Pessoa {
private:
    string  nome;
    float peso;
    float altura;
    float imc;

public:
	Pessoa (){
		peso = 0;
		altura = 0;
		nome = "NADA";
        imc = (peso /(altura*2));
	     
}
 Pessoa(float valorPeso, float valorAltura, string valorNome,float imc) {
 peso = valorPeso;
 altura = valorAltura;
 nome = valorNome;
 imc = (valorPeso/(valorAltura*2));
 }
 float calcularIMC() {
return imc = (peso /(altura*2));
}

float calcularIMC(float valorPeso,float valorAltura,float imc) {
       return imc = (valorPeso/(valorAltura*2));
        
}

};
int main(int argc, char** argv) {
    
    int op;
    float peso,altura,imc;
    string nome;
    Pessoa pes;
    
    cout<<"Digite seu nome:                     ";
    cin>>nome;
    fflush(stdin);
    cout <<"Digite o peso da pessoa:            ";
    cin >>peso;
    cout <<"Digite a altura da pessoa:          ";
    cin >>altura;
    
        cout<<nome<< " tem "<<pes.calcularIMC(peso,altura,imc)<<" de imc .\n";
if (pes.calcularIMC(peso,altura,imc)< 20)
        
    cout<<"Abaixo do peso ideal ";
    
        if ((pes.calcularIMC(peso,altura,imc)>= 20 ) && (pes.calcularIMC(peso,altura,imc)< 25 ))
        
    cout<<"Peso normal ";
    
        if ((pes.calcularIMC(peso,altura,imc)>= 25 ) && (pes.calcularIMC(peso,altura,imc)<= 30 ))
        
    cout<<"Excesso de peso ";
    
        if ((pes.calcularIMC(peso,altura,imc)> 30 ) && (pes.calcularIMC(peso,altura,imc) <= 35))
        
    cout<<"Obesidade ";
        
        if(pes.calcularIMC(peso,altura,imc)> 35)
    
    cout<<"Obesidade mórbida ";
    
    return 0;
}
