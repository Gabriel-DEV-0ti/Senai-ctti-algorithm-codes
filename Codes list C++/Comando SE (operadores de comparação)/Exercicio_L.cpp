//l) Escreva um programa que solicite ao usu�rio para digitar dois n�meros
//inteiros e exiba se a diferen�a entre eles � menor ou igual a 10.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	cout << "Digite o primeiro n�mero: \n";
	cin >> num1;
	
	cout << "Digite o segundo n�mero: \n";
	cin >> num2;
	
	int diferenca = (num1 - num2);
	
	if (diferenca < 10){
		
		cout << "A diferen�a entre os n�meros � menor que 10";
		
	}else if(diferenca == 10) {
		
		cout << "A diferen�a entre os n�meros � 10";
		
	}else {
		
		cout << "A diferen�a entre os n�meros � maior que 10";
	
	}
	
}
