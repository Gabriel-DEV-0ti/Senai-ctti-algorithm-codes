//y) Crie um programa que pe�a ao usu�rio para digitar um n�mero e verifique se
//ele n�o � igual a zero. Se a condi��o for verdadeira, o programa deve
//imprimir O n�mero � diferente de zero.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um n�mero inteiro \n";
	cin >> num;
	
	if (num != 0){
		
		cout << "O n�mero � diferente de zero";
		
	}else {
		
		cout << "O n�mero � zero";
		
	}
	
	return 0;
	
}
