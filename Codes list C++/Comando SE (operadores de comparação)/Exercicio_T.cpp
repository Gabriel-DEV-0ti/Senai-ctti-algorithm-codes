//t) Crie um programa que solicite ao usu�rio um n�mero inteiro e verifique se
//ele � divis�vel por 3 OU por 5. Se o n�mero for divis�vel por 3 OU por 5, o
//programa deve imprimir a mensagem ;O n�mero � divis�vel por 3 ou por5!;..

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout << "Digite um n�emro: \n";
	cin >> num;
	
	if (num % 3 == 0 && num % 5 == 0){
		
		cout <<	"O n�mero � divis�vel por 3 ou por5!";
		
	}else {
		
		cout << "O n�mero n�o � divisivel";
		
	}
	
	return 0;
	
}
