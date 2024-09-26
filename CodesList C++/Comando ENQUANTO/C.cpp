//c) Crie um programa que solicite ao usuário para inserir uma sequência de
//números inteiros e, em seguida, exiba a soma desses números.

#include <iostream>
#include <limits>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int numEntries = 10;
	int num;
	int soma;
	int i = 0;
	
	cout << "Insira " << numEntries << " números inteiros : " << endl;
	
	while (i < numEntries){
		cout << "Insira um número: ";
		cin >> num;
		soma = soma + num;
		i++;
	}
	cout << "O resultado da soma é: " << soma;
	return 0;
}
