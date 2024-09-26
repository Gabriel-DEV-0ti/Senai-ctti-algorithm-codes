//cc) Escreva um programa que pergunte ao usu�rio os lados de um tri�ngulo.
//Determinar se um tri�ngulo
// Um tri�ngulo � equil�tero se todos os seus lados forem iguais.
// Um tri�ngulo � is�sceles se tiver dois lados iguais.
// Um tri�ngulo � escaleno se todos os seus lados forem diferentes. � equil�tero, is�sceles ou escaleno.

#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    double lado1, lado2, lado3;

    cout << "Digite o primeiro lado do tri�ngulo: ";
    cin >> lado1;
    cout << "Digite o segundo lado do tri�ngulo: ";
    cin >> lado2;
    cout << "Digite o terceiro lado do tri�ngulo: ";
    cin >> lado3;

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "O tri�ngulo � equil�tero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "O tri�ngulo � is�sceles." << endl;
        } else {
            cout << "O tri�ngulo � escaleno." << endl;
        }
    } else {
        cout << "Os valores fornecidos n�o formam um tri�ngulo v�lido." << endl;
    }

    return 0;
}

