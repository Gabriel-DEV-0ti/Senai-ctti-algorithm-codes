//g) Crie um programa que exiba a tabuada do número 5 até o número 10.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	int num, i, tabuada;
	cout << "Insira um valor: " << "\n";
		cin >> num;
	
	for (i = 1; i <= 10 ; i++){
		
		tabuada = (num * i);
		cout << num << " * " << i << " = " << tabuada << endl;
	}
	return 0;
}
