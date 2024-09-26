//1. Crie um programa que apresente um menu com três opções (1, 2 e 3) e, de acordo
//com a opção escolhida pelo usuário, exiba uma mensagem diferente para o horário do
//dia.

#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	char hora;
	
	cout << "Escolha uma das opções abaixo: " << "\n";
	cout << "1 - Manhã" << "\n";
	cout << "2 - Tarde"<< "\n";
	cout << "3 - Noite" << "\n";
	
	cin >> hora;
	
	switch (hora){
		case '1':
			cout << "Manhã";
		break ;
		case '2':
			cout << "Tarde";
		break;
		case '3':
			cout << "Noite";
		break;
	}
	return 0;
	
}
