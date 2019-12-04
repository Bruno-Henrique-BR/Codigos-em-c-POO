#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;
class Eleitor{
private:
    string nome;
    int ano;
    int idade;
public:
    Eleitor(){
        nome = "NADA";
        ano = 0;
    }
    Eleitor(string valorNome, int valorAno){
        nome = valorNome;
        ano = valorAno;
    }
    int tipoEleitor(){
        return idade = (2019-ano);
    }
    int tipoEleitor(int valorAno){
        return idade = (2019 - valorAno);
    }
    
};
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    string nome;
    int ano;
    
    Eleitor e;

    cout<< "Insira seu nome:";
    cin >> nome;
    fflush(stdin);
    cout<< "Insira seu ano de nascimento (com 4 dígitos):";
    cin >> ano;
    
    cout<<nome<< " tem "<<e.tipoEleitor(ano)<<" anos de idade.\n";
    
        if (e.tipoEleitor(ano) < 16)
        
    cout<<"Não é eleitor.";
    
        if ((e.tipoEleitor(ano) >= 16 ) && (e.tipoEleitor(ano) < 18 ))
        
    cout<<"Eleitor facultativo.";
    
        if ((e.tipoEleitor(ano) >= 18 ) && (e.tipoEleitor(ano) <= 65 ))
        
    cout<<"Eleitor obrigátorio.";
    
        if (e.tipoEleitor(ano) > 65 )
        
    cout<<"Eleitor facultativo.";
    

    
                        
    return 0;
}
