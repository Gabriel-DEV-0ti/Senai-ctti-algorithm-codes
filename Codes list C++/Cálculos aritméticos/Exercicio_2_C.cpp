//c) Escreva um programa que peça ao usuário para digitar um número e exiba a
//sua metade.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	double x;
	
	cout << "Digite o um número: ";
	
	cin >> x;
	
	int resultado = (x / 2);
	
	cout << "O dobro do números é: " << resultado;
}
