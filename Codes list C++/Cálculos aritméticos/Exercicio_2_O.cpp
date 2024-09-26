//o) Escreva um programa que solicite ao usu�rio o raio de um c�rculo e calcule sua �rea


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
		cout << "O raio n�o pode ser negativo" << endl;
	}
	
	area = M_PI * pow(raio, 2);
	
	cout << fixed << setprecision(2);
    cout << "A �rea do c�rculo �: " << area << " unidades�" << endl;

    return 0;
}
