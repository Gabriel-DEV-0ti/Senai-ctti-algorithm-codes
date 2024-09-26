//m) Faça um programa que apresente um menu com as opções de meses do ano
//(janeiro a dezembro) e solicite ao usuário que escolha um mês. Em seguida,
//exiba uma mensagem informando a quantidade de dias do mês escolhido.

#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");

int mes;

cout << "Escolha o mês\n";
cout << "-------------\n";

cout << "01 - Janeiro | 02 - Fevreiro | 03 - Março\n";
cout << "04 - Abriu   | 05 - Maio     | 06 - Junho\n";
cout << "07 - Julho   | 08 - Agosto   | 09 - Setembro\n";
cout << "10 - Outubro | 11 - Novembro | 12 - Dezembro\n";

cin >> mes;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        cout << "O mês escolhido tem 31 dias.";
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        cout << "O mês escolhido tem 30 dias.";
    } else if (mes == 2) {
        cout << "O mês escolhido tem 28 dias.";
    } else {
        cout << "Escolha inválida. Por favor, digite um número de 1 a 12.";
    }

    return 0;
}


