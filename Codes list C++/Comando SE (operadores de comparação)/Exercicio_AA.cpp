#include <iostream>
#include <string>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
    
    string palavra;

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    if (!palavra.empty()) {
        cout << "A palavra n�o � vazia.";
    } else {
        cout << "A palavra � vazia.";
    }

    return 0;
}

