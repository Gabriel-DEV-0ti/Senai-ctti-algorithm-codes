//b) Desenvolva um programa que solicite ao usu�rio para inserir um n�mero
//inteiro e, em seguida, exiba a tabuada desse n�mero at� o n�mero 10.

#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	int num, tabuada;
	int i = 0;
	
	cout << "Insira um n�mero: " << endl;
	cin >> num;
	
	while (i < 10){
		i++;
		tabuada = (num * i);
		
		cout << num << " X " << i << " = " << tabuada << endl;
	}
	return 0;
}
