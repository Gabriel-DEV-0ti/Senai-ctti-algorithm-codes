//c) Escreva um programa que solicite ao usuário para digitar dois números
//inteiros e exiba se eles são iguais.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2;
	
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	
	cout << "\nDigite o segundo número: \n";
	cin >> num2;
	
	if (num1 == num2){
		cout << "Os números são iguais";
	}else {
		cout << "Os números são diferentes";
	}
	
	return 0;
	
}