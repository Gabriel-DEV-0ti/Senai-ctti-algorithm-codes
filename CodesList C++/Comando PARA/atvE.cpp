//e) Crie um programa que solicite ao usu�rio para inserir um n�mero inteiro e,
//em seguida, exiba se esse n�mero � primo ou n�o.

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num <= 3) return true;  

    
    if (num % 2 == 0 || num % 3 == 0) return false;

    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
	setlocale (LC_ALL, "");
    int number;

    
    cout << "Digite um n�mero inteiro: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " � um n�mero primo." << endl;
    } else {
        cout << number << " n�o � um n�mero primo." << endl;
    }

    return 0;
}

