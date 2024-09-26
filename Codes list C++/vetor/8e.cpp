//e) Crie um vetor de inteiros e ordene os valores do vetor em ordem decrescente.
                                //&&
//f) Crie um vetor de inteiros e ordene os valores do vetor em ordem crescente.

#include <iostream>
#include <vector>

using namespace std;

void ordenaDecrescente(vector<int>& vetor)
{
    int tamanho = vetor.size();
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                swap(vetor[i], vetor[j]);
            }
        }
    }
}

void mostrarVetor(const vector<int>& vetor)
{
    for (int i = 0; i < vetor.size(); i++)
    {
        cout << vetor[i] << " ";
    }
}

int main(){
	setlocale (LC_ALL, "");
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<int> vetor(tamanho);

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    cout << "Vetor antes da ordenação: ";
    mostrarVetor(vetor);
    cout << endl;

    ordenaDecrescente(vetor);

    cout << "Vetor depois da ordenação (decrescente): ";
    mostrarVetor(vetor);
    cout << endl;

    return 0;
}

