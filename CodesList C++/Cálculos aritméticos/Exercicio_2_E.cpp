//e) Escreva um programa que peça ao usuário para digitar um número e exiba a
//sua raiz quadrada. OBS.: Utilize a função raizq(número)

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
	
	cout << sqrt(n);
	
	cout << "O resultado da raiz quadrada é " << sqrt(n);
	
}
