//w) Escreva um programa que solicite ao usu�rio um n�mero inteiro e verifique
//se ele � maior do que 10 OU menor do que 0. Se o n�mero for maior do que
//10 OU menor do que 0, o programa deve imprimir a mensagem N�mero inv�lido!.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um n�emro inteiro \n";
	cin >> num;
	
	if (num > 10 || num < 0){
		
		cout << "N�mero inv�lido!";
		
	}else {
		
		cout << "o n�mero digitado �: " << num;
		
	}
	
	return 0;
	
}
