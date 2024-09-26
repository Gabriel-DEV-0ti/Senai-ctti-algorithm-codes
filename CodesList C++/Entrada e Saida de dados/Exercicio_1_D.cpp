//d) Escreva um programa que solicite ao usuário para digitar um nome e
//armazene-o em uma variável. Em seguida, exiba o valor da variável na tela.

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
	
	cout << "Seu nome é: " << n;
}


