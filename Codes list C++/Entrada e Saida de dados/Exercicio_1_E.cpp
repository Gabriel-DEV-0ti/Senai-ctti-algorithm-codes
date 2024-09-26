//e) Escreva um programa que solicite ao usuário para digitar um número
//decimal e armazene-o em uma variável. Em seguida, exiba o valor da
//variável na tela.

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	double n;
	
	cout << "Digite um número decimal: \n";
	
	cin >> n;
	
	cout << "O Nº que digitol é: " << fixed << setprecision (2) << n ;
	
	
}

