//c) Escreva um programa que solicite ao usu�rio para digitar verdadeiro 
//ou falso e armazene-o em uma vari�vel. Em seguida, exiba o valor da vari�vel
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
    	cout << "Voc� digitou verdadeiro." << std::endl;
    } else if (input == "falso") {
        cout << "Voc� digitou falso." << std::endl;
    } else {
        cout << "Entrada inv�lida. Por favor, digite 'verdadeiro' ou 'falso'." ;
    }

}

