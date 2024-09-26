//n) Escreva um programa que solicite ao usuário para digitar o preço de um
//produto e o seu desconto em porcentagem, e armazene-os em variáveis. Em
//seguida, calcule o preço final com o desconto e exiba-o na tela.

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	double precoOriginal, Desconto, precoFinal;
	
	cout <<"\nDigite o valor do produto: \n";
	cin >> precoOriginal;
	
	cout << "Digite o valor do desconto: \n";
	cin >> Desconto;
	
	if (Desconto < 0 || Desconto > 100){
		cout << "Desconto inválido. Deve ser entre 0 e 100." << endl;
        return 1;
	}
	
	precoFinal = precoOriginal - (precoOriginal * Desconto / 100);
	
	cout << fixed << setprecision(2);
    cout << "O preço final com o desconto é: R$ " << precoFinal << endl;

    return 0;
}
