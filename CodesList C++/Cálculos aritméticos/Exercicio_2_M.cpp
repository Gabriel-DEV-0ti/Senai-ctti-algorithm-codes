//m) Faça um programa que converta uma temperatura em Celsius para Fahrenheit.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	double celsius, fahrenheit;
	
	cout << "Vamos converter o valor de Celsius para Fahrenheit/n";
	
	cout << "\nDigite o valor de Celsius: \n";
	cin >> celsius;
	
	fahrenheit = celsius * 1.8 + 32;
	
	cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F" << endl;

    return 0;
}
