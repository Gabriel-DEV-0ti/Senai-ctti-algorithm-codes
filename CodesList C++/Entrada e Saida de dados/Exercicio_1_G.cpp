//g) Escreva um programa que solicite ao usuário para digitar o seu endereço
//completo, incluindo o número da casa, rua, bairro, cidade e estado.
//Armazene cada informação em uma variável string e, em seguida, exiba
//todas as informações juntas em uma única linha.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	string NcasaRua, bairro, cidade, estado;
	
	cout << "Digite o seu endereço completo: ";
	
	cout << "\n Digite o seu estado: ";
	getline (cin, estado);
	
	cout << "\n Digite a sua cidade: ";
	getline (cin, cidade);
	
	cout << "\n Digite o seu bairro: ";
	getline (cin, bairro);
	
	cout << "\n Digite o nome da sua rua e o número: \n";
	getline (cin,NcasaRua );
	
	cout << "\n O seu endereço completo é: Rua " << NcasaRua << ", " << bairro << "- " << cidade << "- " << estado; 
}
