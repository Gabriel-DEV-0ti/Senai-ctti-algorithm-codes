//9. Fa�a um programa que apresente um menu com as op��es de meses do ano (janeiro a
//dezembro) e solicite ao usu�rio que escolha um m�s. Em seguida, exiba uma
//mensagem informando a quantidade de dias do m�s escolhido.

#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	cout << "Insira o m�s desejado: \n";
		cout << "1 - Janeiro \n";
		cout << "2 - Fevereiro \n";
		cout << "3 - Mar�o \n";
		cout << "4 - Abril \n";
		cout << "5 - Maio \n";
		cout << "6 - Junho \n ";
		cout << "7 - Julho \n ";
		cout << "8 - Agosto \n ";
		cout << "9 - Setembro \n ";
		cout << "10 - Outubro \n ";
		cout << "11 - Novembro \n";
		cout << "12 - Dezembro \n ";
		cout <<"\n";
		cin >> mes;
		cout << "\n";
		
		switch (mes){
			case 1: 
				cout << "Janeiro tem 31 dias";
				break;
			case 2: 
				cout << "Fevereiro tem 28 dias";
				break;
			case 3:
				cout << "Mar�o tem 31 dias";
				break;
			case 4: 
				cout << "Abril tem 30 dias";
				break;
			case 5: 
				cout << "Maio tem 31 dias";
				break;
			case 6: 
				cout << "Junho tem 30 dias";
				break;
			case 7:
				cout << "Julho tem 31 dias";
				break;
			case 8: 
				cout << "Agosto tem 31 dias";
				break;
			case 9: 
				cout << "Setembro tem 30 dias";
				break;
			case 10 :
				cout << "Outubro tem 31 dias";
				break;
			case 11:
				cout << "Novembro tem 30 dias";
				break;
			case 12: 
				cout << "Dezembro tem 31 dias";
				break;
			default :
				cout << "Inv�lido !! Tente novamente";
				break;	
		}
		return 0;
}
