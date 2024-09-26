//h) Criar um algoritmo que leia o preço de compra e o preço de venda de 100
//mercadorias. O algoritmo devera imprimir quantas mercadorias
//proporcionam:
// lucro &lt; 10 %
// % &lt;= lucro &lt;= 20 %
// lucro &gt; 20 %

#include <iostream>
#include <vector>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	const int num_produtos = 5;
	vector <double> precoCompra (num_produtos);
	vector <double> precoVenda (num_produtos);
	
	for (int i = 0 ; i < 5; i ++){
		cout << "Mercadoria " << (i++) << " : ";
		cout << "Digite o preço da compra: ";
		cin >> precoCompra [i];
		cout << "Digite o preço da venda: ";
		cin >> precoVenda[i]; 	
	}
	int menor10 = 0;
	int entre10e20 = 0;
	int maior20 = 0;
	
	for (int i =0; i < num_produtos ; i++){
		double lucro (precoVenda[i] - precoCompra [i] / precoCompra[i] * 100);
		
		if (lucro < 10){
			menor10++;
		} else if (lucro > 10 && lucro < 20){
			entre10e20++;
		}else if (lucro > 20){
			maior20++;
		}
	}
	
	cout << "\n Resultados: " << endl ;
	cout << "Produtos com lucro menor que 10%: " << menor10 << endl;
	cout << "Produtos com lucro entre 10 % e 20% : " << entre10e20 << endl;
	cout << "Produtos com lucro maior que 20% : " << maior20 << endl;
	
	return 0;
}
