//d) Escreva um programa que solicite ao usu�rio para digitar um nome e
//armazene-o em uma vari�vel. Em seguida, exiba o valor da vari�vel na tela.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	string n;

	cout << "Escreva o seu nome completo: \n";
	
	cin >> n;
	
	getline(cin,n) ;
	
	cout << "Seu nome �: " << n;
}


