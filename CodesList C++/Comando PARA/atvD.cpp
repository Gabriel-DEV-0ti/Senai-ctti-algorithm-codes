//d) Desenvolva um programa que solicite ao usu�rio para inserir um n�mero
//inteiro positivo e, em seguida, exiba a soma de todos os n�meros entre 1 e o n�mero inserido.

#include <iostream>

int main() {
	setlocale (LC_ALL, "");
	
    std::cout << "Digite um n�mero inteiro positivo: ";
    int numero;
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "Por favor, insira um n�mero inteiro positivo." << std::endl;
        return 1;  // Encerra o programa com um c�digo de erro
    }

    int soma = 0;
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }

    std::cout << "A soma de todos os n�meros entre 1 e " << numero << " �: " << soma << std::endl;

    return 0;
}

