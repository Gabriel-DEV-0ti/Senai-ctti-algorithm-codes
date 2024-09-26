//p) Escreva um programa que pergunte ao usuário se ele possui um diploma de
//ensino superior e se tem mais de 21 anos. Se o usuário possuir um diploma
//de ensino superior e tiver mais de 21 anos, o programa deve imprimir
//Parabéns, você está qualificado para a vaga!;.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string diploma;
	
	cout << "Você tem quantos anos ?\n";	
	cin >> idade;
	
	cout << "Você tem diploma ? (Sim \ Não)\n";
	cin >> diploma;
	
	
	if (idade >= 21 && (diploma == "Sim" || diploma == "sim")){
		
		cout <<  "Você está qualificado para a vaga!";
		
	}else {
		
		cout << "Você não está qualificado para a vaga!!";
		
	}
		
	return 0;
	
}


