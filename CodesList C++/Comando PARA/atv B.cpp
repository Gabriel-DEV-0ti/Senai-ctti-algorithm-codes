//b) Desenvolva um programa que solicite ao usuário para inserir um número
//inteiro positivo e, em seguida, exiba todos os números pares entre 0 e o número inserido.

#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	int par , i , num;
	
	cout << "Insira um número positivo: " << "\n";
	cin >> num;
	
	for (i = 0; i <= num; i++){
		if (i % 2 == 0){
			par = i;
			cout << par << " ";
		}
	}
	return 0;
}
