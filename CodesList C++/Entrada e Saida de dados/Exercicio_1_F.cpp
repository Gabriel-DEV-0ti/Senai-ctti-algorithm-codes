//f) Escreva um programa que solicite ao usu�rio para digitar o seu nome e a sua
//idade, e armazene-os em vari�veis, respectivamente. Em seguida, exiba essas
//informa��es na tela.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	string name;
	int age;
	
	cout << "Digite o seu nome completo: \n";
	
	cin >> name;
	
	cout << "\nDigite sua idade: \n";
	
	cin >> age;
	
	cout << "\n Seu nome � " << name << "e sua idade � " << age;
	
}
