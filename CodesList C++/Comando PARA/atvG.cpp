//g) Crie um programa que exiba a tabuada do n�mero 5 at� o n�mero 10.

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
