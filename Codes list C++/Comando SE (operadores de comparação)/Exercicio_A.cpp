//a) Escreva um programa que solicite ao usuário para digitar dois números
//inteiros e exiba se o primeiro número é maior que o segundo número.

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
	
	if (num1 > num2){
		cout << "O número maior é: " << num1;
	}else {
		cout << "O primeiro número não é maior que o segundo número.";
	}
	
	return 0;
}