//e) Escreva um programa que solicite ao usu�rio para digitar um n�mero
//decimal e armazene-o em uma vari�vel. Em seguida, exiba o valor da
//vari�vel na tela.

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	double n;
	
	cout << "Digite um n�mero decimal: \n";
	
	cin >> n;
	
	cout << "O N� que digitol �: " << fixed << setprecision (2) << n ;
	
	
}

