//e) Escreva um programa que solicite ao usuário para digitar dois números reais
//e exiba se o primeiro número é maior ou igual ao segundo número.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");

	float num1, num2;
	
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	
	cout << "Digite o segundo número: \n";
	cin >> num2;
	
	if (num1 > num2){
		
		cout << "O primeiro número é maior que o segundo número";
		
	}else if (num1 == num2){
		
		cout << "O primeiro número é igual ao segundo";
		
	}else {
		
		cout << "O primeiro número não é maior e nem igual ao segundo número";
		
	}
	
	return 0;
	
}
