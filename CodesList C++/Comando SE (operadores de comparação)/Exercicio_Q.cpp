//q) Escreva um programa que pergunte ao usuário se ele é assinante de um
//serviço de streaming e se já assistiu a uma série específica. Se o usuário for
//assinante e já tiver assistido à série, o programa deve imprimir: Ótimo, agora
//você pode assistir à nova temporada!.


#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	string streaming;
	string assistiu;
	
	cout << "Você é assinate da plataforma de streaming ?\n";	
	cin >> streaming;
	
	cout << "Você já assistiu a uma série específica ? (Sim \ Não)\n";
	cin >> assistiu;
	
	
	if ((streaming == "Sim" || streaming == "sim") && (assistiu == "Sim" || assistiu == "sim")){
		
		cout <<  "Ótimo, agora você pode assistir à nova temporada!";
		
	}else {
		
		cout << "Você ainda não pode assistir a nova temporada ainda!!";
		
	}
		
	return 0;
	
}

