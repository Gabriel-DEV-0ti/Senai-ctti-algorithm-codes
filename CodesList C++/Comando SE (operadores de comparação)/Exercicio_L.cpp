//l) Escreva um programa que solicite ao usuário para digitar dois números
//inteiros e exiba se a diferença entre eles é menor ou igual a 10.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	
	cout << "Digite o segundo número: \n";
	cin >> num2;
	
	int diferenca = (num1 - num2);
	
	if (diferenca < 10){
		
		cout << "A diferença entre os números é menor que 10";
		
	}else if(diferenca == 10) {
		
		cout << "A diferença entre os números é 10";
		
	}else {
		
		cout << "A diferença entre os números é maior que 10";
	
	}
	
}
