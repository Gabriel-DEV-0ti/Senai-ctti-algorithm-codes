//4. Escreva um programa que apresente um menu com as opções de animais (cachorro,
//gato e pássaro) e exiba uma mensagem diferente dependendo da escolha.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char animais;
	
	cout << "Escolha uma das opções de animais abaixo: " << "\n";
	cout << "1 - Cachorro" << "\n";
	cout << "2 - Gato" << "\n";
	cout << "3 - Pássaro" << "\n";
	
	cin >> animais;
	
	switch (animais){
		case '1':
			cout << "Cachorro: au au";
		break;
		case '2':
			cout << "Gato : miau";
		break;
		case '3':
			cout << "Pássaro : piu piu";
		break;
	}
	return 0;
	
}
