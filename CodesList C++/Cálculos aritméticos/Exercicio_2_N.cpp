//n) Escreva um programa que solicite ao usu�rio para digitar o pre�o de um
//produto e o seu desconto em porcentagem, e armazene-os em vari�veis. Em
//seguida, calcule o pre�o final com o desconto e exiba-o na tela.

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
		cout << "Desconto inv�lido. Deve ser entre 0 e 100." << endl;
        return 1;
	}
	
	precoFinal = precoOriginal - (precoOriginal * Desconto / 100);
	
	cout << fixed << setprecision(2);
    cout << "O pre�o final com o desconto �: R$ " << precoFinal << endl;

    return 0;
}
