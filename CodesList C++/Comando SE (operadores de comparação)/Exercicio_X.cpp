//x) Escreva um programa que pergunte ao usu�rio se ele n�o � um rob�. Se a
//resposta for negativa, o programa deve imprimir, Por favor, prove que voc� n�o � um rob�.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	
	cout << "Voc� � um rob� ? \n";
	cin >> nome;
	
	if (nome == "Nao" || nome == "nao"){
		
		cout << "Por favor, prove que voc� n�o � um rob�";
		
	}else {
		
		cout << "Voc� � um rob�";
		
	}
	
	return 0;
	
}
