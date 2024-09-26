//e) Crie um programa que solicite ao usuário para inserir números inteiros até
//que um número negativo seja inserido. Em seguida, exiba a soma dos
//números inseridos (excluindo o número negativo).

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
	cout << "O resultado da soma é: " << soma;
	return 0;
}
