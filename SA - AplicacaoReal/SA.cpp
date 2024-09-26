#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Vari�veis
    double valorHora, salarioBruto, irDesconto = 0, inssDesconto, fgts, salarioLiquido, totalDescontos;
    int horasTrabalhadas;

    // Entrada de dados
    cout << "Informe o valor da sua hora: R$ ";
    cin >> valorHora;
    cout << "Informe a quantidade de horas trabalhadas no mes: ";
    cin >> horasTrabalhadas;

    // C�lculo do sal�rio bruto
    salarioBruto = valorHora * horasTrabalhadas;

    // C�lculo do Imposto de Renda (IR)
    if (salarioBruto <= 900) {
        irDesconto = 0;
    } else if (salarioBruto <= 1500) {
        irDesconto = salarioBruto * 0.05;
    } else if (salarioBruto <= 2500) {
        irDesconto = salarioBruto * 0.10;
    } else {
        irDesconto = salarioBruto * 0.20;
    }

    // C�lculo do INSS (10%)
    inssDesconto = salarioBruto * 0.10;

    // C�lculo do FGTS (11%) - n�o descontado, apenas informado
    fgts = salarioBruto * 0.11;

    // Total de descontos
    totalDescontos = irDesconto + inssDesconto;

    // C�lculo do sal�rio l�quido
    salarioLiquido = salarioBruto - totalDescontos;

    // Exibi��o dos resultados
    cout << fixed << setprecision(2);
    cout << "Salario Bruto: (" << valorHora << " * " << horasTrabalhadas << ") : R$ " << salarioBruto << endl;
    cout << "(-) IR (" << (irDesconto / salarioBruto) * 100 << "%) : R$ " << irDesconto << endl;
    cout << "(-) INSS (10%) : R$ " << inssDesconto << endl;
    cout << "FGTS (11%) : R$ " << fgts << endl;
    cout << "Total de descontos : R$ " << totalDescontos << endl;
    cout << "Salario Liquido : R$ " << salarioLiquido << endl;

    return 0;
}

