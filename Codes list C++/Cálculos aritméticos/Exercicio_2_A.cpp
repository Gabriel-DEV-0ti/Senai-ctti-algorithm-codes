//a) Escreva um programa que peça ao usuário para digitar dois números e exiba
//a soma deles.

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
	
	int resultado = (x + y);
	
	cout << "O resultado da soma dos dois números é: " << resultado;
}
