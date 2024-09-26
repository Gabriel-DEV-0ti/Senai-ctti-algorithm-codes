//k) Escreva um programa que solicite ao usuário para digitar um número inteiro
//e exiba se ele é negativo.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	double num;
	
	cout << "Vamos descobrir se o número informado é positivo\n";
	cout << "------------------------------------------------\n";
	cout << "\n";
	
	cout << "Informe um número: ";
	cin >> num;
	
	if (num < 0){
		
		cout << "O número é negativo";
		
	}else {
		
		cout << "O número é positivo";
		
	}
	
	return 0;
	
}
