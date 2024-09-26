//f) Escreva um programa que solicite ao usuário para digitar o seu nome e a sua
//idade, e armazene-os em variáveis, respectivamente. Em seguida, exiba essas
//informações na tela.

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
	
	cout << "\n Seu nome é " << name << "e sua idade é " << age;
	
}
