//q) Escreva um programa que solicite ao usuário três notas e seus respectivos
//pesos, e calcule a média ponderada.

#include <iostream>
#include <string>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaPonderada;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "Digite o peso da primeira nota: ";
    cin >> peso1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;
    
    cout << "Digite o peso da segunda nota: ";
    cin >> peso2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;
    
    cout << "Digite o peso da terceira nota: ";
    cin >> peso3;
    
     if (peso1 < 0 || peso2 < 0 || peso3 < 0) {
        cout << "Os pesos devem ser valores não negativos." << endl;
        return 1; // Sai do programa com código de erro
    }

	mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	cout << fixed << setprecision(2);
    cout << "A média ponderada é: " << mediaPonderada << endl;

    return 0;
	
}
