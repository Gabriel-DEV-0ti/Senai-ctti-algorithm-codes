//d) Escreva um programa que solicite ao usuário para digitar três números
//inteiros e exiba se o primeiro número é menor que o segundo número e
//maior que o terceiro número.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	
	cout << "digite o segundo número: ";
	cin >> num2;
	
	cout << "Digite o terceiro número: ";
	cin >> num3;
	
	if (num1 < num2 && num1 > num3){
		cout << "o primeiro número é menor que o segundo número e maior que o terceiro número";
	}else {
		cout << "O primeiro número não é menor que o segundo e não é maior que o terceiro número";
	}
	
	return 0;
	
}