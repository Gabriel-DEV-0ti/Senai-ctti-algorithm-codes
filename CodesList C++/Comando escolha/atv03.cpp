//3. Fa�a um programa que apresente um menu com as op��es de dias da semana
//(Domingo � S�bado) e exiba uma mensagem informando se � dia �til ou final de semana.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char dia;
	
	cout << "Escolha um dos dias da semana: " << "\n";
	cout << "1 - Domingo"<< "\n";
	cout << "2 - Segunda" << "\n";
	cout << "3 - Ter�a " << "\n";
	cout << "4 - Quarta " << "\n";
	cout << "5 - Quinta " << "\n";
	cout << "6 - Sexta " << "\n";
	cout << "7 - S�bado" << "\n";
	
	cout << "\n-----------------------------------------\n";
	
	cin >> dia;
	
	switch (dia){
		case '1':
			cout << "Domingo - Final de Semana";
		break;
		
		case '2':
			cout << "Segunda - Dia �til";
		break;
		
		case '3':
			cout << "Ter�a - Dia �til";
		break;
		
		case '4':
			cout << "Quarta - Dia �til";
		break;
		
		case '5':
			cout << "Quinta - Dia �til";
		break;
		
		case '6':
			cout << "Sexta - Dia �til";
		break;
		
		case '7':
			cout << "S�bado - Fim de Semana";
		break;
		
	}
	return 0;
}
