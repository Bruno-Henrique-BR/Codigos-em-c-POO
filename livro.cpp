#include <cstdlib>
#include <iostream>
#include <cmath>
#include <locale>
#include <string>
#include <locale>
using namespace std;
int op;
   class livro
{
	private:
	
	string titulo;	
	string autor;
	int exemplar;
	int edicao;
	
	
	public:
		
		void setTitulo(string valorTitulo){
			titulo = valorTitulo;
		}
		void setAutor(string valorAutor){
			autor = valorAutor;
		}
		void setEdicao(int valorEdicao){
			edicao = valorEdicao;
		}
		void setExemplar(int valorExemplar){
			exemplar = valorExemplar;
		}
	
		string getTitulo(){
			return titulo;
			
		}
		string getAutor(){
			return autor;
		}

		int getEdicao(){
			return edicao;
		}
		
		int getExemplar(){
			return exemplar;
		}
		emprestar (int exemplar){
	
	if (op = 1)	{
	if (exemplar >= 1){
			
				cout<<"Livro emprestado"<<endl;
				exemplar = exemplar - 1;
				cout<<"Livros disponivel "<<exemplar<<endl;
			
			}
		
		else  {
		
		        cout<<"Livro indisponivel"<<endl;
}
		}
	}
		receber(int exemplar){
			
	if (op = 2){
				cout<<"Livro devolvido "<<endl;
				exemplar = exemplar + 1;
				cout<<"Livros disponivel "<<exemplar<<endl;
			
		
		}
	}
};


int main(int argc, char** argv) 
{ 
     setlocale(LC_ALL,"portuguese");
	livro li;
	string titulo;	
	string autor;
	int edicao;
	int exemplar;
	
	cout<<"\t\t\t\t\tBiblioteca "<<endl;
	cout<<"Digite o titulo do livro: ";
	cin>>titulo;
	fflush(stdin);
	cout<<"Digite o autor do livro: ";
	cin>>autor;
	fflush(stdin);
	cout<<"Digite a edição do livro: ";
	cin>>edicao;
	cout<<"Digite quantos exemplares tem do livro: ";
	cin>>exemplar;
	
    li.setTitulo(titulo);
	li.setAutor(autor);
	li.setEdicao(edicao);
	
	do{
	cout<<"\t\t\t\t\tBiblioteca "<<endl;
	cout<<"1 - Emprestar "<<endl;
	cout<<"2 - Devolver "<<endl;
	cout<<"0 - Sair" <<endl;
	cin>>op;
	switch(op){
		
		case 1:
		 li.emprestar(exemplar);	
            exemplar--;
			break;
			
		case 2:
		 li.receber(exemplar);
           exemplar++;
			break;
	}

}while(op != 0);
return 0;
}
	
