//e) Crie um programa que solicite ao usuário para inserir números inteiros até
//que um número negativo seja inserido. Em seguida, exiba a soma dos
//números inseridos (excluindo o número negativo).

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num = 1;
	int soma;
	
	do{
		cout << "Insira um valor: " << endl;
		cin >> num;
		
		if (num >= 0){
		soma = soma + num;
	}

} 	while (num > 0);
	cout << "O resultado da soma é: " << soma << endl;
	return 0;
}
