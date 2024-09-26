//h) Escreva um programa que solicite ao usu�rio para digitar um ano. Verifique
//se um ano � bissexto.
//OBS.: Um ano � bissexto se for divis�vel por 4, mas n�o por 100, exceto se for divis�vel por 400.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int ano;
	
	cout << "Vamos descobrir se o ano � bissesto\n";
	cout << "-----------------------------------";
	cout << "\n";
	
	cout << "Digite o ano: ";
	cin >> ano;
	
	if ((ano % 400 == 0) || (ano % 4 == 0 && ano != 0)){
		
		cout << "O ano � bissesto";
		
	}else {
		
		cout << "O ano n�o � bissesto";
	}
	
	return 0;
	
}
