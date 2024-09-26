//3. Faça um programa que apresente um menu com as opções de dias da semana
//(Domingo à Sábado) e exiba uma mensagem informando se é dia útil ou final de semana.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char dia;
	
	cout << "Escolha um dos dias da semana: " << "\n";
	cout << "1 - Domingo"<< "\n";
	cout << "2 - Segunda" << "\n";
	cout << "3 - Terça " << "\n";
	cout << "4 - Quarta " << "\n";
	cout << "5 - Quinta " << "\n";
	cout << "6 - Sexta " << "\n";
	cout << "7 - Sábado" << "\n";
	
	cout << "\n-----------------------------------------\n";
	
	cin >> dia;
	
	switch (dia){
		case '1':
			cout << "Domingo - Final de Semana";
		break;
		
		case '2':
			cout << "Segunda - Dia Útil";
		break;
		
		case '3':
			cout << "Terça - Dia Útil";
		break;
		
		case '4':
			cout << "Quarta - Dia Útil";
		break;
		
		case '5':
			cout << "Quinta - Dia Útil";
		break;
		
		case '6':
			cout << "Sexta - Dia Útil";
		break;
		
		case '7':
			cout << "Sábado - Fim de Semana";
		break;
		
	}
	return 0;
}
