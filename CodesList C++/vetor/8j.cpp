//j) Fazer um algoritmo para ler um conjunto de 100 números reais e informar:
//1. Quantos números lidos são iguais a 30
//2. Quantos são maior que a media
//3. Quantos são iguais a media

#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale (LC_ALL, "");
    const int NUM_COUNT = 100; 
    vector<double> numeros(NUM_COUNT); 
    double soma = 0.0; 
    int contagem30 = 0; 
    int contagemMaiorMedia = 0; 
    int contagemIgualMedia = 0;

    
    cout << "Digite " << NUM_COUNT << " números reais:\n";
    for (int i = 0; i < NUM_COUNT; i++) {
        cin >> numeros[i];
        soma += numeros[i]; 
    }

    
    double media = soma / NUM_COUNT;

    
    for (int i = 0; i < NUM_COUNT; i++) {
        if (numeros[i] == 30) {
            contagem30++;
        }
        if (numeros[i] > media) {
            contagemMaiorMedia++;
        }
        if (numeros[i] == media) {
            contagemIgualMedia++;
        }
    }

   
    cout << "\nResultados:\n";
    cout << "Números iguais a 30: " << contagem30 << endl;
    cout << "Números maiores que a média: " << contagemMaiorMedia << endl;
    cout << "Números iguais à média: " << contagemIgualMedia << endl;

    return 0;
}

