//t) Crie um programa que solicite ao usuário um número inteiro e verifique se
//ele é divisível por 3 OU por 5. Se o número for divisível por 3 OU por 5, o
//programa deve imprimir a mensagem ;O número é divisível por 3 ou por5!;..

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um núemro: \n";
	cin >> num;
	
	if (num % 3 == 0 && num % 5 == 0){
		
		cout <<	"O número é divisível por 3 ou por5!";
		
	}else {
		
		cout << "O número não é divisivel";
		
	}
	
	return 0;
	
}
