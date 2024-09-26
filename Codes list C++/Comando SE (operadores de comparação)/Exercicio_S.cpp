//s) Escreva um programa que pergunte ao usuário se ele deseja adicionar açúcar
//ou leite ao seu café. Se o usuário responder que deseja adicionar açúcar OU
//leite, o programa deve imprimir a mensagem ;Café com adicional
//preparado!;..

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string bebida;
	
	cout << "Deseja adicionar ao seu café Leite ou açucar ?\n";
	cin >> bebida;
	
	if (bebida == "Leite" || bebida == "acucar" || bebida == "leite" || bebida == "Acucar"){
		
		cout << "Café com adicional preparado!";
		
	} else {
		
		cout << "Não foi possivel compreender";
	}
	
	return 0;
	
}
