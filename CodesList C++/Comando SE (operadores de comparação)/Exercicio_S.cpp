//s) Escreva um programa que pergunte ao usu�rio se ele deseja adicionar a��car
//ou leite ao seu caf�. Se o usu�rio responder que deseja adicionar a��car OU
//leite, o programa deve imprimir a mensagem ;Caf� com adicional
//preparado!;..

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string bebida;
	
	cout << "Deseja adicionar ao seu caf� Leite ou a�ucar ?\n";
	cin >> bebida;
	
	if (bebida == "Leite" || bebida == "acucar" || bebida == "leite" || bebida == "Acucar"){
		
		cout << "Caf� com adicional preparado!";
		
	} else {
		
		cout << "N�o foi possivel compreender";
	}
	
	return 0;
	
}
