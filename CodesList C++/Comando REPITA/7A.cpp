//a) Crie um programa que solicite ao usu�rio para inserir um n�mero inteiro
//positivo e, em seguida, exiba todos os n�meros pares entre 0 e o n�mero inserido.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num;
	int i = 0;
	
	cout << "Insira um n�mero positivo: " << endl;
	cin >> num;
	
	do{
		i += 2;
		cout << i << " ";
	}
	while (i < num);
	return 0;
}
