//f) Desenvolva um programa que solicite ao usu�rio para inserir uma sequ�ncia
//de n�meros inteiros e, em seguida, exiba o maior n�mero inserido.

#include <iostream>
#include <limits>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	int numEntries = 10;
	int num;
	int maxnum = numeric_limits <int> :: min();
	cout << "Insira " << numEntries << " n�meros inteiros" << "\n";
	
	for (int i = 0; i < numEntries; i++){
		cout << "Digite o n�mero: ";
		cin >> num;
		
		if (num > maxnum){
			maxnum = num;
		
		}
		
	}
	cout << "O maior n�mero inserido foi: " << maxnum << endl;
	return 0;
}
