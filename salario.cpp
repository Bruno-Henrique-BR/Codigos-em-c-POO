#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL,"portuguese");
	float presidente = 0,diretor = 0,chefededivisao = 0, chefededepartamento = 0, chefedesessao = 0;
	cout <<"Insira o salario do presidente: ";
	cin >> presidente;
	diretor = presidente - 200;
	chefededivisao = diretor / 2;
	chefedesessao = chefededivisao / 3;
	chefededepartamento = chefedesessao + 50;
	cout <<"Diretor = "<<diretor << "\n";
	cout <<"Chefe de Divisão = "<<chefededivisao << "\n";
	cout <<"Chefe de Departamento = "<<chefededepartamento << "\n";
	cout <<"Chefe de Sessão = "<<chefedesessao << "\n";
	return 0;
}
