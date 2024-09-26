//7. Escreva um programa que simule um caixa eletrônico, onde o usuário escolhe o tipo
//de operação que deseja realizar (saque, depósito ou consulta de saldo) e realize a
//operação correspondente.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
		char operacao;
		double saque, deposito, valor, saldoFinal;
		double saldo = 1300;
		
		cout << "Escolha uma das operações bancárias: " << "\n";
		cout << "1 - Saque" << "\n";
		cout << "2 - Depósito" << "\n";
		cout << "3 - Consulta de Saldo" << "\n";
		
		cin >> operacao;
		
		switch (operacao){
			case '1':
				cout << "Insira o valor que deseja sacar: " << "\n";
				cin >> valor;
				saque = (saldo - valor);
				saldoFinal = saque;
				cout << "Saldo : " << saldoFinal;
			break;
			
			case '2':
				cout << "Insira o valor do depósito: " << "\n";
				cin >> valor;
				deposito = (saldo + valor);
				saldoFinal = deposito;
				cout << "Saldo : " << saldoFinal;
			break;
			
			case '3':
				cout << "Saldo : " << saldo;
			break;
		}
		return 0;
}
