//k) Escreva um programa que solicite ao usu�rio para digitar um n�mero inteiro
//e exiba se ele � negativo.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	double num;
	
	cout << "Vamos descobrir se o n�mero informado � positivo\n";
	cout << "------------------------------------------------\n";
	cout << "\n";
	
	cout << "Informe um n�mero: ";
	cin >> num;
	
	if (num < 0){
		
		cout << "O n�mero � negativo";
		
	}else {
		
		cout << "O n�mero � positivo";
		
	}
	
	return 0;
	
}
