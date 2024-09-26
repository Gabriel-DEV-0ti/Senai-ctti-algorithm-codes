//d) Escreva um programa que peça ao usuário para digitar dois números e exiba
//o resultado da divisão do primeiro pelo segundo.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	double x, y;
	
	cout << "Digite o primeiro número: ";
	
	cin >> x;
	
	cout << "Digite o segundo número: ";
	
	cin >> y;
	
	int resultado = (x / y);
	
	cout << "O resultado da divisão dos dois números é: " << resultado;
}
