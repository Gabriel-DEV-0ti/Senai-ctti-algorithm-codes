//d) Escreva um programa que pe�a ao usu�rio para digitar dois n�meros e exiba
//o resultado da divis�o do primeiro pelo segundo.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	double x, y;
	
	cout << "Digite o primeiro n�mero: ";
	
	cin >> x;
	
	cout << "Digite o segundo n�mero: ";
	
	cin >> y;
	
	int resultado = (x / y);
	
	cout << "O resultado da divis�o dos dois n�meros �: " << resultado;
}
