//e) Escreva um programa que pe�a ao usu�rio para digitar um n�mero e exiba a
//sua raiz quadrada. OBS.: Utilize a fun��o raizq(n�mero)

#include <iostream>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um n�mero por favor: ";
	
	cin >> n;
	
	cout << sqrt(n);
	
	cout << "O resultado da raiz quadrada � " << sqrt(n);
	
}
