//i) Escreva um programa que solicite ao usuário para digitar um número e exiba
//o seu resto da divisão por 2.

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
	
	int resultado = (x % y);
	
	cout << "O resultado do resto da divisão dos dois números é: " << resultado;
}
