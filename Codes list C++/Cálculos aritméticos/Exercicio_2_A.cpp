//a) Escreva um programa que pe�a ao usu�rio para digitar dois n�meros e exiba
//a soma deles.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	int x, y;
	
	cout << "Digite o primeiro n�mero: ";
	
	cin >> x;
	
	cout << "Digite o segundo n�mero: ";
	
	cin >> y;
	
	int resultado = (x + y);
	
	cout << "O resultado da soma dos dois n�meros �: " << resultado;
}
