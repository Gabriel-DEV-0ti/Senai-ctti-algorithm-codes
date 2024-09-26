//l) Escreva um programa que solicite ao usu�rio seu peso (em kg) e altura (em
//metros) e calcule o �ndice de Massa Corporal (IMC).

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double peso, altura, imc;
	
	cout << "Vamos calcular o seu IMC\n";
	
	cout << "\nDigite o seu peso (em kg): \n";
	cin >> peso;
	
	cout << "\nDigite a sua altura (em metros): \n";
	cin >> altura;
	
	imc = peso / (altura * altura);
	
	cout << fixed << setprecision(2);
	cout << "O IMC �: " << imc << endl;
	
	if (imc < 18.5){
		cout << "Voc� est� abaixo do peso!" << endl;
	}
	else if (imc >= 18.5 && imc <= 24.9 ){
		cout << "Voc� est� no peso ideal!" << endl;
	}
	else if (imc >= 25 && imc < 29.5){
		cout << "Voc� est� com sobrepeso!" << endl;
	}else {
		cout << "Voc� est� obeso!" << endl;
	}
	
	return 0;


}
