//o) Escreva um programa que pergunte ao usuário se ele deseja comprar um
//carro novo e se tem dinheiro suficiente para isso. Se o usuário quiser
//comprar um carro novo e tiver dinheiro suficiente, o programa deve imprimir;Parabéns, você pode comprar um carro novo!;.

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    const double precoCarro = 30000.00; 

    string desejaComprar;
    cout << "Você deseja comprar um carro novo? (sim/não) ";
    cin >> desejaComprar;

    if (desejaComprar == "sim" || desejaComprar == "Sim") {
        double dinheiroDisponivel;
        cout << "Quanto dinheiro você tem disponível? R$ ";
        cin >> dinheiroDisponivel;

       if (dinheiroDisponivel >= precoCarro) {
            cout << "Parabéns, você pode comprar um carro novo!" << endl;
        } else {
            cout << "Que pena, você não tem dinheiro suficiente para comprar um carro novo." << endl;
        }
    } else {
        cout << "Tudo bem, você não deseja comprar um carro novo." << endl;
    }

    return 0;
}

