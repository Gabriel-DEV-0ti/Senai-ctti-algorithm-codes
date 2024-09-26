//a) Crie um vetor de inteiros e imprima na tela o valor de cada elemento do vetor.

#include <iostream>
#include <vector>

using namespace std;

int main (){
	const int tamanho = 5;
	int vetor [tamanho];
	
	
	cout <<"Digite " << tamanho << " valores inteiros: " << endl;
	
	for (int i = 0; i < tamanho; i++){
		cout << "Valor " << (i + 1) << " : ";
		cin >> vetor [i];
		
	cout << "\nElemntos do Vetor: " << endl;
		for (int i = 0; i < tamanho ; i++){
			cout << "Elemento " << i << ": " << vetor [i] << endl;
		}
	}
	return 0;
}
	
