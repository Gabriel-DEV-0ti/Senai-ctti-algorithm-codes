//z) Escreva um programa que pergunte ao usu�rio se ele n�o � um membro
//inativo de um clube. Se a resposta for negativa, o programa deve imprimir 
//Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do clube.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string membro;
	
	cout << "Voc� � um mebro inativo do clube ? \n";
	cin >> membro;
	
	if (membro == "Sim" || membro == "sim"){
		
		cout << "Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do clube";
		
	}else {
		
		cout << "Voc� j� � um mebro";
		
	}
	
	return 0;
	
}
