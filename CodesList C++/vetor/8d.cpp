//d) Crie um vetor de inteiros e encontre o menor valor no vetor.

#include <iostream>
#include <vector>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	const int tamanho = 4;
	double  vetor [tamanho];
	vector <int> num(tamanho);
	
	cout << "Digite uma sequência de " << tamanho << " de números inteiros: " << endl;
	
	for (int i = 0; i < tamanho ; i++){
		cout << "Valor " << (i+ 1) << ": ";
		cin >> num [i]; 
	}
	
	int menor = num [0];
	for (int i = 1; i < tamanho; i++){
		if (num [i] < menor){
			menor = num [i];
		}
	}
	cout << "O menor valor no vetor é: " << menor << endl;
	return 0;
	
}
