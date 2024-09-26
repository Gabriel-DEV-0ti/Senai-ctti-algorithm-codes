//c) Crie um vetor de inteiros e encontre o maior valor no vetor.

#include <iostream>
#include <vector>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	const int tamanho = 4;
	double  vetor [tamanho];
	vector <int> num(tamanho);
	
	cout << "Digite uma sequência de " << tamanho << " de números inteiros: " << endl;
	
	for (int i = 0; i < tamanho ; i++){
		cout << "Valor " << (i+ 1) << ": ";
		cin >> num [i]; 
	}
	
	int maior = num [0];
	for (int i = 1; i < tamanho; i++){
		if (num [i] > maior){
			maior = num [i];
		}
	}
	cout << "O maior valor no vetor é: " << maior << endl;
	return 0;
}
