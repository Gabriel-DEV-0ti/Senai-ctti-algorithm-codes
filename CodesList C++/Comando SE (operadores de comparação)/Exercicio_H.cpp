//h) Escreva um programa que solicite ao usuário para digitar um ano. Verifique
//se um ano é bissexto.
//OBS.: Um ano é bissexto se for divisível por 4, mas não por 100, exceto se for divisível por 400.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int ano;
	
	cout << "Vamos descobrir se o ano é bissesto\n";
	cout << "-----------------------------------";
	cout << "\n";
	
	cout << "Digite o ano: ";
	cin >> ano;
	
	if ((ano % 400 == 0) || (ano % 4 == 0 && ano != 0)){
		
		cout << "O ano é bissesto";
		
	}else {
		
		cout << "O ano não é bissesto";
	}
	
	return 0;
	
}
