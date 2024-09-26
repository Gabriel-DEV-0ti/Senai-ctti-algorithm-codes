//g) Escreva um programa que solicite ao usuário para digitar um número e exiba
//o seu valor absoluto. OBS.: Utilize a função abs(expressao)

#include <iostream>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um número por favor: ";
	
	cin >> n;
	
	cout << abs(n);
	
	cout << "O resultado da raiz quadrada é " << abs(n);
	
}
