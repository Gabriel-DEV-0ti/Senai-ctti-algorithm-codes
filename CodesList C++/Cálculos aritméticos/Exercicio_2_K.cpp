//k) Escreva um programa que solicite ao usu�rio para inserir tr�s n�meros e
//calcule a m�dia aritm�tica deles.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	cout << "Vamo calcular a m�dia de 3 n�meros \n";
	
	cout << "\nDigite o prieiro n�mero: \n";
	cin >> x;
	
	cout << "\nDigite o segundo n�emro: \n";
	cin  >> y;
	
	cout << "\nDigite o terceiro n�mero: \n";
	cin >> z;
	
	double resultado = (x + y + z)/3.0;
	
	cout << "\nO resultado da media �: " << resultado;

}
	
