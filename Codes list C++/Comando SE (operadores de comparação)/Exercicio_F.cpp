//f) Escreva um programa que solicite ao usu�rio para digitar um n�mero inteiro
//e exiba se ele � par.
//OBS.: Um n�mero � par se ele for divis�vel por 2, ou seja, se o resto da divis�o por 2 for igual a zero.


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
		
		cout << "O n�mero informado � Par :)";
		
	} else{
		
		cout << "N�mero inv�lido :(";
		
	}	
	
	return 0;
	
}
