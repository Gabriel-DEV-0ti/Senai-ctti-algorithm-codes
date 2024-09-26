//h) Escreva um programa que solicite ao usuário para digitar dois números e
//exiba o resultado da multiplicação entre eles.

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
	
	int resultado = (x * y);
	
	cout << "O resultado da multiplicação dos dois números é: " << resultado;
}
