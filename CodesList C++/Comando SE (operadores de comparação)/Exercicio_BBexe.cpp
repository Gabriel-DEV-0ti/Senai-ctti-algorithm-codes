//bb) Escreva um programa que pergunte ao usu�rio se ele n�o deseja cancelar
//uma opera��o. Se a resposta for negativa, o programa deve imprimir Por
//favor, confirme o cancelamento da opera��o.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string op;
	
	cout << "Dseja n�o cancelar a opera��o ? \n";
	cin >> op;
	
	if (op == "Nao" || op == "nao"){
		
		cout << "Por favor, confirme o cancelamento da opera��o";
		
	}else {
		
		cout << "Voc� pode cancelar a opera��o";
		
	}
	
	return 0;
	
}
