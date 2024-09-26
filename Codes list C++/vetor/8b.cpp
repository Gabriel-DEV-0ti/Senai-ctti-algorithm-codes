//b) Crie um vetor de números decimais e calcule a média dos valores do vetor.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	const int tam = 4;
	double vetor [tam];
	
	cout << "Digite " << tam << " valores decimais: " << endl;
	for (int i = 0; i < tam ; i ++){
		cout << "Valor " << (i + 1) << ": " << endl;
		cin >> vetor [i];
	
	}
	double soma = 0;
	for (int i = 0; i < tam ; i++){
		soma += vetor [i];
	
 	}
 	double media = soma / tam;
 	cout << "A média dos valores é: " << media << endl;
 	
 	return 0;
}

