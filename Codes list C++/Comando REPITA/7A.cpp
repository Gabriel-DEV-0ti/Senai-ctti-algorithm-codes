//a) Crie um programa que solicite ao usuário para inserir um número inteiro
//positivo e, em seguida, exiba todos os números pares entre 0 e o número inserido.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num;
	int i = 0;
	
	cout << "Insira um número positivo: " << endl;
	cin >> num;
	
	do{
		i += 2;
		cout << i << " ";
	}
	while (i < num);
	return 0;
}
