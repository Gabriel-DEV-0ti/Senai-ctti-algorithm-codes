//i) Escreva um programa que solicite ao usu�rio para digitar um n�mero e exiba
//o seu resto da divis�o por 2.

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
	
	int resultado = (x % y);
	
	cout << "O resultado do resto da divis�o dos dois n�meros �: " << resultado;
}
