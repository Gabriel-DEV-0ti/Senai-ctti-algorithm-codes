//w) Escreva um programa que solicite ao usuário um número inteiro e verifique
//se ele é maior do que 10 OU menor do que 0. Se o número for maior do que
//10 OU menor do que 0, o programa deve imprimir a mensagem Número inválido!.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um núemro inteiro \n";
	cin >> num;
	
	if (num > 10 || num < 0){
		
		cout << "Número inválido!";
		
	}else {
		
		cout << "o número digitado é: " << num;
		
	}
	
	return 0;
	
}
