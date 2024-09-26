//d) Desenvolva um programa que solicite ao usuário para inserir um número
//inteiro positivo e, em seguida, exiba a soma de todos os números entre 1 e o número inserido.

#include <iostream>

int main() {
	setlocale (LC_ALL, "");
	
    std::cout << "Digite um número inteiro positivo: ";
    int numero;
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "Por favor, insira um número inteiro positivo." << std::endl;
        return 1;  // Encerra o programa com um código de erro
    }

    int soma = 0;
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }

    std::cout << "A soma de todos os números entre 1 e " << numero << " é: " << soma << std::endl;

    return 0;
}

