//q) Escreva um programa que pergunte ao usu�rio se ele � assinante de um
//servi�o de streaming e se j� assistiu a uma s�rie espec�fica. Se o usu�rio for
//assinante e j� tiver assistido � s�rie, o programa deve imprimir: �timo, agora
//voc� pode assistir � nova temporada!.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string streaming;
	string assistiu;
	
	cout << "Voc� � assinate da plataforma de streaming ?\n";	
	cin >> streaming;
	
	cout << "Voc� j� assistiu a uma s�rie espec�fica ? (Sim \ N�o)\n";
	cin >> assistiu;
	
	
	if ((streaming == "Sim" || streaming == "sim") && (assistiu == "Sim" || assistiu == "sim")){
		
		cout <<  "�timo, agora voc� pode assistir � nova temporada!";
		
	}else {
		
		cout << "Voc� ainda n�o pode assistir a nova temporada ainda!!";
		
	}
		
	return 0;
	
}

