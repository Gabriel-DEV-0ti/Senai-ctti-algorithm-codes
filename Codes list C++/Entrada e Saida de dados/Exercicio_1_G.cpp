//g) Escreva um programa que solicite ao usu�rio para digitar o seu endere�o
//completo, incluindo o n�mero da casa, rua, bairro, cidade e estado.
//Armazene cada informa��o em uma vari�vel string e, em seguida, exiba
//todas as informa��es juntas em uma �nica linha.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	string NcasaRua, bairro, cidade, estado;
	
	cout << "Digite o seu endere�o completo: ";
	
	cout << "\n Digite o seu estado: ";
	getline (cin, estado);
	
	cout << "\n Digite a sua cidade: ";
	getline (cin, cidade);
	
	cout << "\n Digite o seu bairro: ";
	getline (cin, bairro);
	
	cout << "\n Digite o nome da sua rua e o n�mero: \n";
	getline (cin,NcasaRua );
	
	cout << "\n O seu endere�o completo �: Rua " << NcasaRua << ", " << bairro << "- " << cidade << "- " << estado; 
}
