#include <iostream>
#include <string>
using namespace std;

int main() {
    string musicas[11] = {
        "MEIO DIA", "ROCK NO SERTAO", "SAGA DE UM VAQUEIRO", 
        "BOTA PEGADO PAREA", "PONTO FINAL", "LUZ CAMERA ACAO", 
        "TOMA CONTA DE MIM", "OLHA PRO CEU", "OLHINHOS DE FOGUEIRA", 
        "RANCHEIRA", "AVOANTE"
    };

    int botao1, botao2;
    
    cout << "Digite o numero do primeiro botao (0 a 5): ";
    cin >> botao1;

    cout << "Digite o numero do segundo botao (0 a 5): ";
    cin >> botao2;

    int soma = botao1 + botao2;

    if (soma >= 0 && soma <= 10) {
        cout << "Tocando a musica: " << musicas[soma] << endl;
    } else {
        cout << "Sem musica!" << endl;
    }

    return 0;
}
