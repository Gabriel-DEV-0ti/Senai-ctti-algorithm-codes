//2. Escreva um programa que apresente um menu com as quatro opera��es b�sicas
//(adi��o, subtra��o, multiplica��o e divis�o) e solicite ao usu�rio que escolha uma
//delas. Em seguida, pe�a dois n�meros e realize a opera��o escolhida.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char operacao;
	int  num1 , num2, adicao, subtracao, multi, div;
	
	cout << "Escolha uma das opera��es b�sicas: " << "\n";
	cout << " + :  Adi��o" << "\n";
	cout << " - : Subtra��o" << "\n";
	cout << " * : Multiplica��o" << "\n";
	cout << " / : Subtra��o" << "\n";
	
	cin >> operacao;
	
	cout << "Insira o primeiro n�mero: ";
	cin >> num1;
	cout << "Insira o segundo n�mero: ";
	cin >> num2;
	
	switch (operacao){
		case '+' :
			adicao = (num1 + num2);
			cout << adicao << "\n";
		break;
		case '-':
			subtracao = (num1 - num2);
			cout << subtracao << "\n";
		break;
		case '*':
			multi = (num1 * num2) ;
			cout << multi << "\n";
		break;
		case '/':
			div = (num1 / num2);
			cout << div << "\n";
		break;
			
	}
	return 0;

}
