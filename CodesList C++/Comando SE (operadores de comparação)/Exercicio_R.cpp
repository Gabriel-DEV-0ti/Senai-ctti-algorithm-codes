//r) Escreva um programa que solicite ao usuário o seu nome e idade. O
//programa deve verificar se o nome possui mais de 3 caracteres e se a idade é
//maior ou igual a 18 anos. Se ambas as condições forem verdadeiras, o
//programa deve imprimir; Acesso permitido;. Caso contrário, deve imprimir;Acesso negado;.

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string nome;
    int idade;

    
    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    if (nome.length() > 3) {
        if (idade >= 18) {
        cout << "Acesso permitido";
        } else {
            cout << "Acesso negado";
        }
    } else {
        cout << "Acesso negado";
    }

    return 0;
}

