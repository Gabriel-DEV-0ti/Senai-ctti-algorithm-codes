//z) Escreva um programa que pergunte ao usuário se ele não é um membro
//inativo de um clube. Se a resposta for negativa, o programa deve imprimir 
//Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string membro;
	
	cout << "Você é um mebro inativo do clube ? \n";
	cin >> membro;
	
	if (membro == "Sim" || membro == "sim"){
		
		cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube";
		
	}else {
		
		cout << "Você já é um mebro";
		
	}
	
	return 0;
	
}
