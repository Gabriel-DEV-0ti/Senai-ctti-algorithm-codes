//g) Escreva um programa que solicite ao usu�rio para digitar um n�mero inteiro
//e exiba se ele � �mpar.
//OBS.: Um n�mero � �mpar se ele n�o for divis�vel por 2, ou seja, se o resto da divis�o por 2 for
//diferente de zero.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	
	cout << "Vamos descobrir se o seu n�mero � Par ou �mpar";
	cout << "\n----------------------------------------------\n";
	cout <<"\n ";
	
	cout << "Digite um n�mero: ";
	cin >> num1;
	
	if (num1 % 2==0){
		
		cout << "O n�mero informado n�o � �mpar :(";
		
	} else{
		
		cout << "O n�mero informado � �mpar :)";
		
	}	
	
	return 0;
	
}
