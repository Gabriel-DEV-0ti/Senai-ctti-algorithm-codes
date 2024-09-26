//i) Crie um programa que exiba todos os números primos entre 1 e 100.

#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	int primo, i, j ;
	
	for (int i = 2; i <= 100; i++){
		primo = 1;
		for (int j = 2; j <= (i/2) ; j++){
			if (i % j == 0){
				primo = 0;
			}
		}
		if (primo == 1){
			cout << i << "  ";
		}
	
	}
	return 0;
}
