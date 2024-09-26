//cc) Escreva um programa que pergunte ao usuário os lados de um triângulo.
//Determinar se um triângulo
// Um triângulo é equilátero se todos os seus lados forem iguais.
// Um triângulo é isósceles se tiver dois lados iguais.
// Um triângulo é escaleno se todos os seus lados forem diferentes. é equilátero, isósceles ou escaleno.

#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    double lado1, lado2, lado3;

    cout << "Digite o primeiro lado do triângulo: ";
    cin >> lado1;
    cout << "Digite o segundo lado do triângulo: ";
    cin >> lado2;
    cout << "Digite o terceiro lado do triângulo: ";
    cin >> lado3;

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "O triângulo é equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "O triângulo é isósceles." << endl;
        } else {
            cout << "O triângulo é escaleno." << endl;
        }
    } else {
        cout << "Os valores fornecidos não formam um triângulo válido." << endl;
    }

    return 0;
}

