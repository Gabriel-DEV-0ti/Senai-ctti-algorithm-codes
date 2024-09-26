//c) Escreva um programa que solicite ao usuário para digitar verdadeiro 
//ou falso e armazene-o em uma variável. Em seguida, exiba o valor da variável
//na tela.

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() { 

	setlocale(LC_ALL, "portuguese");
	
    string input;

    cout << "Digite 'verdadeiro' ou 'falso': ";
    cin >> input;

    if (input == "verdadeiro") {
    	cout << "Você digitou verdadeiro." << std::endl;
    } else if (input == "falso") {
        cout << "Você digitou falso." << std::endl;
    } else {
        cout << "Entrada inválida. Por favor, digite 'verdadeiro' ou 'falso'." ;
    }

}

