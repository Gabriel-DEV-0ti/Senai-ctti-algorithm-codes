//f) Desenvolva um programa que solicite ao usuário para inserir uma sequência
//de números inteiros e, em seguida, exiba o maior número inserido.

#include <iostream>
#include <limits>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	int numEntries = 10;
	int num;
	int maxnum = numeric_limits <int> :: min();
	cout << "Insira " << numEntries << " números inteiros" << "\n";
	
	for (int i = 0; i < numEntries; i++){
		cout << "Digite o número: ";
		cin >> num;
		
		if (num > maxnum){
			maxnum = num;
		
		}
		
	}
	cout << "O maior número inserido foi: " << maxnum << endl;
	return 0;
}
