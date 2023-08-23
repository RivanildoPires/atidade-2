#include <iostream>
using namespace std;

int main() {
    double salario, novoSalario, aumento, percentualAumento;

    cout << "Digite o seu salario: R$ ";
    cin >> salario;

    if (salario <= 280.0) {
        percentualAumento = 20.0;
    } else if (salario <= 700.0) {
        percentualAumento = 15.0;
    } else if (salario <= 1500.0) {
        percentualAumento = 10.0;
    } else {
        percentualAumento = 5.0;
    }

    aumento = salario * (percentualAumento / 100.0);
    novoSalario = salario + aumento;

    cout << "Salario antes do reajuste: R$ " << salario << endl;
    cout << "Percentual de aumento aplicado: " << percentualAumento << "%" << endl;
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salario apos o aumento: R$ " << novoSalario << endl;

    return 0;
}


