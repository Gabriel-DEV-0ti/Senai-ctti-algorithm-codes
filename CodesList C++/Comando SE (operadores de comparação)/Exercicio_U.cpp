//u) Escreva um programa que pergunte ao usuário se ele deseja comprar um
//produto. Se o usuário responder sim OU s, o programa deve imprimir a
//mensagem, Obrigado pela compra!

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string produto;
	
	cout << "Você deseja comprar um produto? \n";
	cin >> produto;
	
	if (produto == "sim" || produto == "s"){
		
		cout << "Obrigado pela compra!";
		
	}else {
		
		cout << "Compre Por Favor :(";
		
	}
	
	return 0;
	
}
