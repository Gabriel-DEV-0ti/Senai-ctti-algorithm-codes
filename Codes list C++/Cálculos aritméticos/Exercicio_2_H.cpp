//h) Escreva um programa que solicite ao usu�rio para digitar dois n�meros e
//exiba o resultado da multiplica��o entre eles.

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
	
	int resultado = (x * y);
	
	cout << "O resultado da multiplica��o dos dois n�meros �: " << resultado;
}
