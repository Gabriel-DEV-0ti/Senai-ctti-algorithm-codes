//e) Crie um programa que solicite ao usu�rio para inserir n�meros inteiros at�
//que um n�mero negativo seja inserido. Em seguida, exiba a soma dos
//n�meros inseridos (excluindo o n�mero negativo).

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num = 1;
	int soma;
	
	while (num > 0){
		cout << "Insira um valor: " << endl;
		cin >> num;
		
		if (num >= 0){
			soma = soma + num;
		}
	}
	cout << "O resultado da soma �: " << soma;
	return 0;
}
