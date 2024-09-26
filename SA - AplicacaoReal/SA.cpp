#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variáveis
    double valorHora, salarioBruto, irDesconto = 0, inssDesconto, fgts, salarioLiquido, totalDescontos;
    int horasTrabalhadas;

    // Entrada de dados
    cout << "Informe o valor da sua hora: R$ ";
    cin >> valorHora;
    cout << "Informe a quantidade de horas trabalhadas no mes: ";
    cin >> horasTrabalhadas;

    // Cálculo do salário bruto
    salarioBruto = valorHora * horasTrabalhadas;

    // Cálculo do Imposto de Renda (IR)
    if (salarioBruto <= 900) {
        irDesconto = 0;
    } else if (salarioBruto <= 1500) {
        irDesconto = salarioBruto * 0.05;
    } else if (salarioBruto <= 2500) {
        irDesconto = salarioBruto * 0.10;
    } else {
        irDesconto = salarioBruto * 0.20;
    }

    // Cálculo do INSS (10%)
    inssDesconto = salarioBruto * 0.10;

    // Cálculo do FGTS (11%) - não descontado, apenas informado
    fgts = salarioBruto * 0.11;

    // Total de descontos
    totalDescontos = irDesconto + inssDesconto;

    // Cálculo do salário líquido
    salarioLiquido = salarioBruto - totalDescontos;

    // Exibição dos resultados
    cout << fixed << setprecision(2);
    cout << "Salario Bruto: (" << valorHora << " * " << horasTrabalhadas << ") : R$ " << salarioBruto << endl;
    cout << "(-) IR (" << (irDesconto / salarioBruto) * 100 << "%) : R$ " << irDesconto << endl;
    cout << "(-) INSS (10%) : R$ " << inssDesconto << endl;
    cout << "FGTS (11%) : R$ " << fgts << endl;
    cout << "Total de descontos : R$ " << totalDescontos << endl;
    cout << "Salario Liquido : R$ " << salarioLiquido << endl;

    return 0;
}

