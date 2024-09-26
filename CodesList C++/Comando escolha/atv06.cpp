//6. Desenvolva um programa que apresente um menu com as opções de tamanhos de
//camisetas (P, M e G) e solicite ao usuário que escolha uma delas. Em seguida, informe
//o preço da camiseta de acordo com o tamanho escolhido.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char camisas;
	
	cout << "Escolha um tamanho de camisa: " << "\n";
	cout << "P - Pequeno" << "\n";
	cout << "M - Médio" << "\n";
	cout << "G - Grande" << "\n";
	
	cin >> camisas;
	
	switch (camisas){
		case 'P':
			cout << "A camisa tamanho P custa 25.00 R$";
		break;
		case 'M':
			cout << "A camisa tamanho M custa 40.00 R$";
		break;
		case 'G':
			cout << "A camisa tamanho G custa 70.00 R$";
		break;
	}
	return 0;
}
