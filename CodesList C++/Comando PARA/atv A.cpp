//a) Crie um programa que exiba todos os números pares entre 0 e 100.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int i;
	
	for (int i = 0; i <= 100; i++){
		if (i % 2 == 0){
			cout << i << "  ";
		}
		
	}
	
}
