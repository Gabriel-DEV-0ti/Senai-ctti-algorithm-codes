//j) Fazer um algoritmo para ler um conjunto de 100 n�meros reais e informar:
//1. Quantos n�meros lidos s�o iguais a 30
//2. Quantos s�o maior que a media
//3. Quantos s�o iguais a media

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

    
    cout << "Digite " << NUM_COUNT << " n�meros reais:\n";
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
    cout << "N�meros iguais a 30: " << contagem30 << endl;
    cout << "N�meros maiores que a m�dia: " << contagemMaiorMedia << endl;
    cout << "N�meros iguais � m�dia: " << contagemIgualMedia << endl;

    return 0;
}

