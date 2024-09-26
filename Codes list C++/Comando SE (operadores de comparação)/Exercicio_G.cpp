//g) Escreva um programa que solicite ao usuário para digitar um número inteiro
//e exiba se ele é ímpar.
//OBS.: Um número é ímpar se ele não for divisível por 2, ou seja, se o resto da divisão por 2 for
//diferente de zero.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	
	cout << "Vamos descobrir se o seu número é Par ou Ímpar";
	cout << "\n----------------------------------------------\n";
	cout <<"\n ";
	
	cout << "Digite um número: ";
	cin >> num1;
	
	if (num1 % 2==0){
		
		cout << "O número informado não é Ímpar :(";
		
	} else{
		
		cout << "O número informado é Ímpar :)";
		
	}	
	
	return 0;
	
}
