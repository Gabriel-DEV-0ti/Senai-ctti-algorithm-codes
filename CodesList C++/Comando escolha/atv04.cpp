//4. Escreva um programa que apresente um menu com as op��es de animais (cachorro,
//gato e p�ssaro) e exiba uma mensagem diferente dependendo da escolha.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char animais;
	
	cout << "Escolha uma das op��es de animais abaixo: " << "\n";
	cout << "1 - Cachorro" << "\n";
	cout << "2 - Gato" << "\n";
	cout << "3 - P�ssaro" << "\n";
	
	cin >> animais;
	
	switch (animais){
		case '1':
			cout << "Cachorro: au au";
		break;
		case '2':
			cout << "Gato : miau";
		break;
		case '3':
			cout << "P�ssaro : piu piu";
		break;
	}
	return 0;
	
}
