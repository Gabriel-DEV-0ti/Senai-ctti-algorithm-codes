//b) Desenvolva um programa que solicite ao usu�rio para inserir um n�mero
//inteiro positivo e, em seguida, exiba todos os n�meros pares entre 0 e o n�mero inserido.

#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	int par , i , num;
	
	cout << "Insira um n�mero positivo: " << "\n";
	cin >> num;
	
	for (i = 0; i <= num; i++){
		if (i % 2 == 0){
			par = i;
			cout << par << " ";
		}
	}
	return 0;
}
