//c) Escreva um programa que pe�a ao usu�rio para digitar um n�mero e exiba a
//sua metade.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	double x;
	
	cout << "Digite o um n�mero: ";
	
	cin >> x;
	
	int resultado = (x / 2);
	
	cout << "O dobro do n�meros �: " << resultado;
}
