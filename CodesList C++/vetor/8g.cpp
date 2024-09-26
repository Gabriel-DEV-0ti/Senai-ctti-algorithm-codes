//g) Criar um algoritmo que armazene 5 nomes em um vetor. Ordenar e imprimir uma listagem.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& nomes) {
    int n = nomes.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nomes[j] > nomes[j + 1]) {
                // Troca os nomes
                swap(nomes[j], nomes[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> nomes(6);

  
    cout << "Digite 5 nomes:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Nome " << (i + 1) << ": ";
        cin >> nomes[i];
    }

   
    bubbleSort(nomes);

    
    cout << "\nNomes em ordem alfabética:" << endl;
     for (int i = 0; i < nomes.size(); i++) { 
        cout << nomes[i] << endl; 
    }

    return 0;
}

