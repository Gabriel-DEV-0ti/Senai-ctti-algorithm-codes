//h) Desenvolva um programa que solicite ao usu�rio para inserir um n�mero
//inteiro positivo e, em seguida, exiba todos os divisores desse n�mero.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num, i;
	cout << "Insira um valor: " << endl;
		cin >> num;
	
	for (i = 1; i <= num; i++){
		
		if (num % i == 0){
			cout << i << endl;
		}
	}
	return 0;
}
