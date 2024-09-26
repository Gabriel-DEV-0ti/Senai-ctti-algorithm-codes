//j) Escreva um programa que solicite ao usuário para digitar um número e exiba
//o resultado da divisão inteira.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	int x, y;
	
	cout << "Digite o primeiro número: ";
	
	cin >> x;
	
	cout << "Digite o segundo número: ";
	
	cin >> y;
	
	int resultado = ((x / y ) + x % y );
	
	cout << "O resultado da divisão dos dois números é: " << resultado;
}
