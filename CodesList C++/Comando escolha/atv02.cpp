//2. Escreva um programa que apresente um menu com as quatro operações básicas
//(adição, subtração, multiplicação e divisão) e solicite ao usuário que escolha uma
//delas. Em seguida, peça dois números e realize a operação escolhida.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char operacao;
	int  num1 , num2, adicao, subtracao, multi, div;
	
	cout << "Escolha uma das operações básicas: " << "\n";
	cout << " + :  Adição" << "\n";
	cout << " - : Subtração" << "\n";
	cout << " * : Multiplicação" << "\n";
	cout << " / : Subtração" << "\n";
	
	cin >> operacao;
	
	cout << "Insira o primeiro número: ";
	cin >> num1;
	cout << "Insira o segundo número: ";
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
