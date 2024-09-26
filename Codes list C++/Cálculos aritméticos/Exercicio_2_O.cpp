//o) Escreva um programa que solicite ao usuário o raio de um círculo e calcule sua área


#include <iostream>
#include <string>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	double raio, area;
	
	cout << "Digite o raio do Circulo: \n";
	cin >> raio;
	
	if (raio <= 0){
		cout << "O raio não pode ser negativo" << endl;
	}
	
	area = M_PI * pow(raio, 2);
	
	cout << fixed << setprecision(2);
    cout << "A área do círculo é: " << area << " unidades²" << endl;

    return 0;
}
