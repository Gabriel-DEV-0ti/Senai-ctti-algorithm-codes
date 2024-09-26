//v) Crie um programa que solicite ao usuário o seu nome e verifique se ele é
//igual a Wilson OU Gloria. Se o nome for igual a Wilson OU Gloria,
//o programa deve imprimir a mensagem. Olá, bem-vindo(a) de volta!..

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	
	cout << "Qual o seu nome? \n";
	cin >> nome;
	
	if (nome == "Wilson" || nome == "Gloria"){
		
		cout << "Olá, bem-vindo(a) de volta! " << nome;
		
	}else {
		
		cout << "Erro :(";
		
	}
	
	return 0;
	
}
