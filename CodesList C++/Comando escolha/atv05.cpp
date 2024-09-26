//5. Faça um programa que permita ao usuário escolher entre três opções de velocidade
//(baixa, média e alta) e exiba uma mensagem informando o limite de velocidade
//permitido em uma determinada via.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char limite;
	
	cout << "Escolha uma das opções de velocidade abaixo: " << "\n";
	cout << "1 - Baixa" << "\n";
	cout << "2 - Média" << "\n";
	cout << "3 - Alta" << "\n";
	cin >> limite;
	
	switch (limite){
		case '1': 
			cout << "O limite de velocidade da via é baixo. Máx: 40 km";
		break;
		case'2':
			cout << "O limite de velocidade da via é médio. Máx : 85 km";
		break;
		case '3':
			cout << "O limite de velocidade da via é alto. Máx : 120 km";
		break;
		
	}
	return 0;
	}
