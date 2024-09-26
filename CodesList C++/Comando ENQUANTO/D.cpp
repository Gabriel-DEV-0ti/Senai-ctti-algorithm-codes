//d) Desenvolva um programa que solicite ao usuário para inserir uma senha e,
//em seguida, permita que o usuário tente inserir a senha até três vezes. Caso o
//usuário acerte a senha, exiba uma mensagem de sucesso. Caso contrário,
//exiba uma mensagem informando que a senha está incorreta.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int i = 3;
	string senhacorreta = "Batata";
	string senha;
	
	while (i >= 0){
		cout << "Insira uma senha: " << endl;
		cin >> senha;
		
		if (senha == senhacorreta){
			cout << "Senha Correta!!";
		}else{
			cout << "Senha Incorreta !! Você tem " << i << " tentativas" << endl;
		}
		i--;
		
	}
	return 0;
}
