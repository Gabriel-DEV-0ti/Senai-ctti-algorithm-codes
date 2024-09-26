//i) Criar um algoritmo para gerenciar um sistema de reservas de mesas em uma
//casa de espet�culo. A casa possui 30 mesas de 5 lugares cada. O algoritmo
//dever� permitir que o usu�rio escolha c�digo de uma mesa (100 a 129) e
//forne�a a quantidade de lugares desejados. O algoritmo dever� informar se
//foi poss�vel realizara reserva e atualizar a reserva. Se n�o for poss�vel, o
//algoritmo dever� emitir uma mensagem. O algoritmo deve terminar quando
//o usu�rio digitar o c�digo O (zero) para uma mesa ou quando todos os 150
//lugares estiverem ocupados.

#include <iostream>
#include <vector>

using namespace std;

const int NUM_MESAS = 30; 
const int LUGARES_POR_MESA = 5; 

void exibirMesas(const vector<int>& mesas) {
    cout << "Status das Mesas:\n";
    for (int i = 0; i < mesas.size(); i++) {
        cout << "Mesa " << (100 + i) << ": " << mesas[i] << " lugares ocupados." << endl;
    }
    cout << endl;
}

bool reservarLugares(vector<int>& mesas, int codigoMesa, int quantidade) {
    int mesaIndex = codigoMesa - 100;
    if (mesaIndex < 0 || mesaIndex >= NUM_MESAS) {
        cout << "C�digo de mesa inv�lido." << endl;
        return false;
    }

    if (mesas[mesaIndex] + quantidade <= LUGARES_POR_MESA) {
        mesas[mesaIndex] += quantidade; 
        return true;
    } else {
        cout << "N�o h� lugares suficientes dispon�veis nesta mesa." << endl;
        return false;
    }
}

int main() {
    vector<int> mesas(NUM_MESAS, 0); 
    int totalLugaresOcupados = 0;

    while (totalLugaresOcupados < NUM_MESAS * LUGARES_POR_MESA) {
        int codigoMesa;
        cout << "Digite o c�digo da mesa (100 a " << 100 + NUM_MESAS - 1 << ") ou 0 para sair: ";
        cin >> codigoMesa;

        if (codigoMesa == 0) {
            cout << "Sistema encerrado." << endl;
            break;
        }

        int quantidade;
        cout << "Quantos lugares deseja reservar (1 a " << LUGARES_POR_MESA << ")? ";
        cin >> quantidade;

        if (quantidade < 1 || quantidade > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inv�lida." << endl;
            continue;
        }

        
        if (reservarLugares(mesas, codigoMesa, quantidade)) {
            totalLugaresOcupados += quantidade; 
            cout << "Reserva realizada com sucesso!" << endl;
        }

        exibirMesas(mesas); 
    }

    cout << "Total de lugares ocupados: " << totalLugaresOcupados << endl;
    return 0;
}

