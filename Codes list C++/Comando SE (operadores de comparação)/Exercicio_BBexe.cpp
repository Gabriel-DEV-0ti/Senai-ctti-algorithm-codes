//bb) Escreva um programa que pergunte ao usuário se ele não deseja cancelar
//uma operação. Se a resposta for negativa, o programa deve imprimir Por
//favor, confirme o cancelamento da operação.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string op;
	
	cout << "Dseja não cancelar a operação ? \n";
	cin >> op;
	
	if (op == "Nao" || op == "nao"){
		
		cout << "Por favor, confirme o cancelamento da operação";
		
	}else {
		
		cout << "Você pode cancelar a operação";
		
	}
	
	return 0;
	
}
