//p) Escreva um programa que pergunte ao usu�rio se ele possui um diploma de
//ensino superior e se tem mais de 21 anos. Se o usu�rio possuir um diploma
//de ensino superior e tiver mais de 21 anos, o programa deve imprimir
//Parab�ns, voc� est� qualificado para a vaga!;.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string diploma;
	
	cout << "Voc� tem quantos anos ?\n";	
	cin >> idade;
	
	cout << "Voc� tem diploma ? (Sim \ N�o)\n";
	cin >> diploma;
	
	
	if (idade >= 21 && (diploma == "Sim" || diploma == "sim")){
		
		cout <<  "Voc� est� qualificado para a vaga!";
		
	}else {
		
		cout << "Voc� n�o est� qualificado para a vaga!!";
		
	}
		
	return 0;
	
}


