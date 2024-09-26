//y) Crie um programa que peça ao usuário para digitar um número e verifique se
//ele não é igual a zero. Se a condição for verdadeira, o programa deve
//imprimir O número é diferente de zero.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um número inteiro \n";
	cin >> num;
	
	if (num != 0){
		
		cout << "O número é diferente de zero";
		
	}else {
		
		cout << "O número é zero";
		
	}
	
	return 0;
	
}
