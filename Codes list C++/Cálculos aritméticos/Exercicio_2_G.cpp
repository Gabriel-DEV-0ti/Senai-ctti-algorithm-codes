//g) Escreva um programa que solicite ao usu�rio para digitar um n�mero e exiba
//o seu valor absoluto. OBS.: Utilize a fun��o abs(expressao)

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
	
	cout << abs(n);
	
	cout << "O resultado da raiz quadrada � " << abs(n);
	
}
