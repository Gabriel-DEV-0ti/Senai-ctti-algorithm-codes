//j) Desenvolva um programa que exiba a soma dos números pares entre 1 e 100.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int i;
	int result = 0;
	
	for (i = 1; i <= 100 ; i++){
		if (i % 2 == 0){
			result += i ;
		cout << result << endl;	
		}
		
	}
	return 0;
}
