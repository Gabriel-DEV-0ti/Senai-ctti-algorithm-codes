//n) Escreva um programa que pergunte ao usu�rio sua idade e se tem carteira de
//motorista. Se o usu�rio tiver mais de 18 anos e possuir carteira de motorista,
//o programa deve imprimir ;Voc� pode dirigir.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string carteira;
	
	cout << "Voc� tem quantos anos ?\n";	
	cin >> idade;
	
	cout << "Voc� tem carteira ? (Sim ou N�o)\n";
	cin >> carteira;
	
	
	if (idade >= 18 && (carteira == "Sim" || carteira == "sim")){
		
		cout <<  "Voc� pode dirigir!!";
		
	}else {
		
		cout << "Voc� n�o pode dirigir!!";
		
	}
		
	return 0;
	
}
