//n) Escreva um programa que pergunte ao usuário sua idade e se tem carteira de
//motorista. Se o usuário tiver mais de 18 anos e possuir carteira de motorista,
//o programa deve imprimir ;Você pode dirigir.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string carteira;
	
	cout << "Você tem quantos anos ?\n";	
	cin >> idade;
	
	cout << "Você tem carteira ? (Sim ou Não)\n";
	cin >> carteira;
	
	
	if (idade >= 18 && (carteira == "Sim" || carteira == "sim")){
		
		cout <<  "Você pode dirigir!!";
		
	}else {
		
		cout << "Você não pode dirigir!!";
		
	}
		
	return 0;
	
}
