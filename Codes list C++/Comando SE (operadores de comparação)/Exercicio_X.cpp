//x) Escreva um programa que pergunte ao usuário se ele não é um robô. Se a
//resposta for negativa, o programa deve imprimir, Por favor, prove que você não é um robô.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	
	cout << "Você é um robô ? \n";
	cin >> nome;
	
	if (nome == "Nao" || nome == "nao"){
		
		cout << "Por favor, prove que você não é um robô";
		
	}else {
		
		cout << "Você é um robô";
		
	}
	
	return 0;
	
}
