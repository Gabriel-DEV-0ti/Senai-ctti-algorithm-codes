//e) Escreva um programa que solicite ao usu�rio para digitar dois n�meros reais
//e exiba se o primeiro n�mero � maior ou igual ao segundo n�mero.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");

	float num1, num2;
	
	cout << "Digite o primeiro n�mero: \n";
	cin >> num1;
	
	cout << "Digite o segundo n�mero: \n";
	cin >> num2;
	
	if (num1 > num2){
		
		cout << "O primeiro n�mero � maior que o segundo n�mero";
		
	}else if (num1 == num2){
		
		cout << "O primeiro n�mero � igual ao segundo";
		
	}else {
		
		cout << "O primeiro n�mero n�o � maior e nem igual ao segundo n�mero";
		
	}
	
	return 0;
	
}
