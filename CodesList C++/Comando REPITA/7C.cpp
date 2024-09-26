//c) Crie um programa que solicite ao usuário para inserir uma sequência de
//números inteiros e, em seguida, exiba a soma desses números.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int numEntries = 10;
	int num, soma;
	int i = 0;
	
	cout << "Insira " << numEntries << " números positivos" << endl;
	
	do {
		cout << "Insira um valor: " << endl;
		cin >> num;
		soma = soma + num;
		i++;
	}
	while (i < numEntries);
	cout << "O resultado da soma é: " << soma << endl;
	return 0;
}
