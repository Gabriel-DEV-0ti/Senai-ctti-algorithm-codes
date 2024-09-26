//p) Escreva um programa que solicite ao usuário o raio e a altura de um cilindro
//e calcule seu volume.

#include <iostream>
#include <string>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "Vamos calcular o volume de um cilindro";
	
	double raio, altura, volume;
	
	cout << "Digite o a base do cilindro \n";
	cin >> raio;
	
	cout << "Digite a altura do cilindro: \n";
	cin >> altura;
	
	if (raio < 0 || altura < 0){
		cout << "O raio e a altura devem ser valores não negativos." << endl;
		return 1;
	}
	
	volume = M_PI* pow(raio, 2) * altura;
	
	cout << fixed << setprecision(2);
    cout << "O volume do cilindro é: " << volume << " unidades³" << endl;

    return 0;
	
	
}
