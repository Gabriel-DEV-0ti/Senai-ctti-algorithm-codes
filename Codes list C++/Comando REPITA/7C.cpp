//c) Crie um programa que solicite ao usu�rio para inserir uma sequ�ncia de
//n�meros inteiros e, em seguida, exiba a soma desses n�meros.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int numEntries = 10;
	int num, soma;
	int i = 0;
	
	cout << "Insira " << numEntries << " n�meros positivos" << endl;
	
	do {
		cout << "Insira um valor: " << endl;
		cin >> num;
		soma = soma + num;
		i++;
	}
	while (i < numEntries);
	cout << "O resultado da soma �: " << soma << endl;
	return 0;
}
