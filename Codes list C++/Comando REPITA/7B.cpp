//b) Desenvolva um programa que solicite ao usuário para inserir um número
//inteiro e, em seguida, exiba a tabuada desse número até o número 10.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num , tabuada;
	int i = 0;
	
	cout <<"Insira um número: " << endl;
	cin >> num;
	
	do{
		i++;
		tabuada = (num * i);
		
		cout << num << " X " << i << " = " << tabuada << endl;
		
	}
	while (i < 10);
	return 0;
}
