//o) Escreva um programa que pergunte ao usu�rio se ele deseja comprar um
//carro novo e se tem dinheiro suficiente para isso. Se o usu�rio quiser
//comprar um carro novo e tiver dinheiro suficiente, o programa deve imprimir;Parab�ns, voc� pode comprar um carro novo!;.

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    const double precoCarro = 30000.00; 

    string desejaComprar;
    cout << "Voc� deseja comprar um carro novo? (sim/n�o) ";
    cin >> desejaComprar;

    if (desejaComprar == "sim" || desejaComprar == "Sim") {
        double dinheiroDisponivel;
        cout << "Quanto dinheiro voc� tem dispon�vel? R$ ";
        cin >> dinheiroDisponivel;

       if (dinheiroDisponivel >= precoCarro) {
            cout << "Parab�ns, voc� pode comprar um carro novo!" << endl;
        } else {
            cout << "Que pena, voc� n�o tem dinheiro suficiente para comprar um carro novo." << endl;
        }
    } else {
        cout << "Tudo bem, voc� n�o deseja comprar um carro novo." << endl;
    }

    return 0;
}

