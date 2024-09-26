//k) Escreva um programa que solicite ao usuário para inserir três números e
//calcule a média aritmética deles.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	cout << "Vamo calcular a média de 3 números \n";
	
	cout << "\nDigite o prieiro número: \n";
	cin >> x;
	
	cout << "\nDigite o segundo núemro: \n";
	cin  >> y;
	
	cout << "\nDigite o terceiro número: \n";
	cin >> z;
	
	double resultado = (x + y + z)/3.0;
	
	cout << "\nO resultado da media é: " << resultado;

}
	
